from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    ld = LaunchDescription()

    planner_ask_node = Node(
        package="cbs_nodes",
        executable="fake_asker",
        name="fake_asker",
        parameters=[
            {"n": 2},
            {"x_start": [-0.13, -2.5]},
            {"y_start": [-1.91, 0.87]},
            {"z_start": [0.0, 0.0]},
            {"x_end": [-2.5, -0.13]},
            {"y_end": [0.87, -1.91]},
            {"z_end": [0.0, 0.0]}
        ]
    )

    ld.add_action(planner_ask_node)
    
    return ld