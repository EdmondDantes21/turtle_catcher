import turtle
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    turtle_spawner_node = Node(
        package="turtle_catcher",
        executable="turtle_spawner",
        name="turtle_spawner",
        parameters=[
            {"spawn_time": 2}
        ],
    )

    turtle_controller_node = Node(
        package="turtle_catcher",
        executable="turtle_controller",
        name="turtle_controller",
        parameters=[
            {"catch_closest_first": True},
            {"angular_velocity": 2.5},
            {"linear_velocity": 1.4},
        ],
    )

    ld.add_action(turtle_spawner_node)
    ld.add_action(turtle_controller_node)
    return ld
