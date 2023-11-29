from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    ld = LaunchDescription()

    planner_ask_node = Node(
        package="cbs_nodes",
        executable="fake_asker",
        name="fake_asker",
        parameters=[
            {"n": 1},
            {"x_start": [0.0]},
            {"y_start": [0.0]},
            {"z_start": [0.0]},
            {"x_end": [2.0]},
            {"y_end": [4.2]},
            {"z_end": [0.0]}
        ]
    )

    ld.add_action(planner_ask_node)
    
    return ld