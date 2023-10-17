from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    ld = LaunchDescription()

    robot_news_station_1 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_1",
        parameters=[
            {"robot_name": "robot1"}
        ]
    )

    robot_news_station_2 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_2",
        parameters=[
            {"robot_name": "robot2"}
        ]
    )

    robot_news_station_3 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_3",
        parameters=[
            {"robot_name": "robot3"}
        ]
    )

    robot_news_station_4 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_4",
        parameters=[
            {"robot_name": "robot4"}
        ]
    )

    robot_news_station_5 = Node(
        package="my_py_pkg",
        executable="robot_news_station",
        name="robot_5",
        parameters=[
            {"robot_name": "robot5"}
        ]
    )

    smartphone = Node(
        package="my_py_pkg",
        executable="smartphone"
    )

    ld.add_action(robot_news_station_1)
    ld.add_action(robot_news_station_2)
    ld.add_action(robot_news_station_3)
    ld.add_action(robot_news_station_4)
    ld.add_action(robot_news_station_5)
    ld.add_action(smartphone)

    return ld