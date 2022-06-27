#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "turtle_catcher_interfaces/msg/alive_turtles.hpp"
#include "turtle_catcher_interfaces/msg/turtle.hpp"
#include "turtle_catcher_interfaces/srv/catch_turtle.hpp"
#include <math.h>

#define PI 3.14159265
#define MAX_DIST 15.0

using std::placeholders::_1;
using std::placeholders::_2;

class TurtleControllerNode : public rclcpp::Node
{
public:
    TurtleControllerNode() : Node("turtle_controller_node")
    {
        this->declare_parameter("angular_velocity", 2.5);
        this->declare_parameter("linear_velocity", 1.4);
        this->declare_parameter("catch_closest_first", true);
        angular_velocity = this->get_parameter("angular_velocity").as_double();
        linear_velocity = this->get_parameter("linear_velocity").as_double();
        catch_closest_first = this->get_parameter("catch_closest_first").as_bool();


        subscriber_ = this->create_subscription<turtlesim::msg::Pose>(
            "turtle1/pose", 256,
            std::bind(&TurtleControllerNode::updatePosition, this, _1));

        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 256);

        alive_turtles_subscriber_ = this->create_subscription<turtle_catcher_interfaces::msg::AliveTurtles>(
            "alive_turtles", 64,
            std::bind(&TurtleControllerNode::updateAliveTurtlesList, this, _1));

        timer_ = this->create_wall_timer(std::chrono::milliseconds(1),
                                         std::bind(&TurtleControllerNode::move, this));

        client_ = this->create_client<turtle_catcher_interfaces::srv::CatchTurtle>("catch_turtle");

        RCLCPP_INFO(this->get_logger(), "turtle_controller_node has been started.");
    }

private:
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
    rclcpp::Subscription<turtle_catcher_interfaces::msg::AliveTurtles>::SharedPtr alive_turtles_subscriber_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Client<turtle_catcher_interfaces::srv::CatchTurtle>::SharedPtr client_;
    std::vector<turtle_catcher_interfaces::msg::Turtle> alive_turtles;
    std::vector<std::thread> threads_;

    float x, y, theta;
    int closest_target = 0;
    float angular_velocity, linear_velocity;
    bool catch_closest_first;

    void updatePosition(const turtlesim::msg::Pose::SharedPtr msg)
    {
        this->x = msg->x;
        this->y = msg->y;
        this->theta = msg->theta;
    }

    void move()
    {
        float min_dist = INT32_MAX;
        if (!alive_turtles.empty())
        {
            for (int i = 0; i < (int)alive_turtles.size(); i++)
            {
                float cur_dist = dist(this->x, this->y, alive_turtles[i].x, alive_turtles[i].y);
                if (min_dist > cur_dist)
                {
                    closest_target = i;
                    min_dist = cur_dist;
                }
            }
            reachTarget(alive_turtles[closest_target].x, alive_turtles[closest_target].y);
        }
    }

    // not the actual distance as the sqrt was left out to make the computation lighter
    float dist(int x, int y, int target_x, int target_y)
    {
        return pow(fabs(x - target_x), 2) + pow(fabs(y - target_y), 2);
    }

    void reachTarget(float x, float y)
    {
        if (fabs(this->x - x) < 0.4 && fabs(this->y - y) < 0.4) // close enough :D
        {
            threads_.push_back(std::thread(std::bind(&TurtleControllerNode::targetReachedCallBack, this, alive_turtles[closest_target].name)));
            alive_turtles.erase(alive_turtles.begin() + closest_target);
            return;
        }

        auto msg = geometry_msgs::msg::Twist();

        // angle at which the objective is at
        float target_theta;
        if (this->x < x)
            target_theta = (x != this->x) ? atan(fabs(y - this->y) / fabs(x - this->x)) : 0;
        else
            target_theta = (y != this->y) ? atan(fabs(x - this->x) / fabs(y - this->y)) + PI / 2 : 0;
        if (this->y > y)
            target_theta = -target_theta;

        float delta_theta = fabs(this->theta - target_theta);
        if (delta_theta > 0.01)
        {
            if ((this->theta >= 0.0 && target_theta >= 0.0) || (this->theta < 0.0 && target_theta < 0.0))
                msg.angular.z = this->theta - target_theta > 0 ? -angular_velocity : angular_velocity;
            else
                msg.angular.z = this->theta + target_theta < PI ? -angular_velocity : angular_velocity;
        }

        msg.linear.x = linear_velocity      ;
        publisher_->publish(msg);
    }

    void updateAliveTurtlesList(const turtle_catcher_interfaces::msg::AliveTurtles::SharedPtr msg)
    {
        this->alive_turtles.push_back(msg->alive_turtles[msg->alive_turtles.size() - 1]);
    }

    bool targetReachedCallBack(std::string name)
    {
        while (!client_->wait_for_service(std::chrono::seconds(2)))
            ;
        auto request = std::make_shared<turtle_catcher_interfaces::srv::CatchTurtle::Request>();
        request->t.name = name;

        auto future = client_->async_send_request(request);

        try
        {
            auto response = future.get();
        }
        catch (const std::exception &e)
        {
            return false;
        }
        return true;
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtleControllerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}