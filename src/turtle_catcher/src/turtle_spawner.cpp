#include "rclcpp/rclcpp.hpp"
#include "turtlesim/srv/spawn.hpp"
#include "turtlesim/srv/kill.hpp"
#include "turtle_catcher_interfaces/msg/alive_turtles.hpp"
#include "turtle_catcher_interfaces/msg/turtle.hpp"
#include "turtle_catcher_interfaces/srv/catch_turtle.hpp"
#include <vector>

using std::placeholders::_1;
using std::placeholders::_2;

class TurtleSpawnerNode : public rclcpp::Node
{
public:
    TurtleSpawnerNode() : Node("turtle_spawner"), counter(2)
    {
        this->declare_parameter("spawn_time", 2);
        spawn_time = this->get_parameter("spawn_time").as_int();
        
        timer_ = this->create_wall_timer(std::chrono::seconds(spawn_time),
                                         std::bind(&TurtleSpawnerNode::call_spawn_function, this));

        publisher_ = this->create_publisher<turtle_catcher_interfaces::msg::AliveTurtles>("alive_turtles", 64);

        server_ = this->create_service<turtle_catcher_interfaces::srv::CatchTurtle>(
            "catch_turtle",
            std::bind(&TurtleSpawnerNode::catchTurtle, this, _1, _2));

        client_ = this->create_client<turtlesim::srv::Kill>("kill");
    }

private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<turtle_catcher_interfaces::msg::AliveTurtles>::SharedPtr publisher_;
    rclcpp::Service<turtle_catcher_interfaces::srv::CatchTurtle>::SharedPtr server_;
    rclcpp::Client<turtlesim::srv::Kill>::SharedPtr client_;

    std::vector<std::thread> threads_;
    std::vector<turtle_catcher_interfaces::msg::Turtle> alive_turtles;
    int counter, spawn_time;

    void call_spawn_function()
    {
        threads_.push_back(std::thread(std::bind(&TurtleSpawnerNode::spawn_turtle, this)));
    }

    void spawn_turtle()
    {
        auto client = this->create_client<turtlesim::srv::Spawn>("spawn");
        while (!client->wait_for_service(std::chrono::seconds(2)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the server to be up...");
        }

        srand(time(NULL));
        auto request = std::make_shared<turtlesim::srv::Spawn::Request>();
        request->x = static_cast<float>(rand()) / static_cast<float>(RAND_MAX / 11.0);
        request->y = static_cast<float>(rand()) / static_cast<float>(RAND_MAX / 11.0);
        request->theta = static_cast<float>(rand()) / static_cast<float>(RAND_MAX / 6.28);
        request->name = "turtle" + std::to_string(counter);
        counter++;

        auto t = turtle_catcher_interfaces::msg::Turtle();
        t.name = request->name;
        t.x = request->x;
        t.y = request->y;
        alive_turtles.push_back(t);

        auto msg = turtle_catcher_interfaces::msg::AliveTurtles();
        msg.alive_turtles = alive_turtles;
        publisher_->publish(msg);

        auto future = client->async_send_request(request);

        try
        {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "Spawned turtle [%s] at x=[%f], y=[%f], theta=[%f]", response->name.c_str(), request->x, request->y, request->theta);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Could not send spawn request.");
        }
    }

    void catchTurtle(const turtle_catcher_interfaces::srv::CatchTurtle::Request::SharedPtr request,
                     const turtle_catcher_interfaces::srv::CatchTurtle::Response::SharedPtr response)
    {
        auto t_to_remove = request->t;
        threads_.push_back(std::thread(std::bind(&TurtleSpawnerNode::killTurtle, this, t_to_remove.name)));

        response->success = false;
        for (int i = 0; i < (int) alive_turtles.size(); i++)
        {
            if (alive_turtles[i].name == t_to_remove.name)
            {
                alive_turtles.erase(alive_turtles.begin() + i);
                response->success = true;
                break;
            }
        }
    }

    bool killTurtle(std::string name)
    {
        while (!client_->wait_for_service(std::chrono::seconds(2)));
        auto request = std::make_shared<turtlesim::srv::Kill::Request>();
        request->name = name;

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
    auto node = std::make_shared<TurtleSpawnerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}