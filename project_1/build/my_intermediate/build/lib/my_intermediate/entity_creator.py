#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from ament_index_python.packages import get_package_share_directory
import os
import xml.etree.ElementTree as ET

from geometry_msgs.msg import Pose
from gazebo_msgs.srv import SpawnEntity


class EntityCreatorNode(Node):
    def __init__(self):
        super().__init__("entity_creator")
        self.declare_parameter("name", "robot")
        self.declare_parameter("x", 0.0)
        self.declare_parameter("y", 0.0)
        self.declare_parameter("z", 0.0)
        self.get_logger().info("Entity Creator has been started")

        name = self.get_parameter("name").value
        x = self.get_parameter("x").value
        y = self.get_parameter("y").value
        z = self.get_parameter("z").value

        self.create_entity(name, x, y, z)

    def create_entity(self, name, x, y, z):
        client = self.create_client(SpawnEntity, "spawn_entity")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for /spawn_entity...")

        sd_file_path = os.path.join(get_package_share_directory(
            'turtlebot3_gazebo'), 'models', 'turtlebot3_waffle', 'model.sdf')
        tree = ET.parse(sd_file_path)
        root = tree.getroot()

        for plugin in root.iter('plugin'):
            if 'ros_diff_drive' in plugin.get('filename'):
                # The only plugin we care for now is 'diff_drive' which is
                # broadcasting a transform between`odom` and `base_footprint`
                break


        ros_params = plugin.find('ros')
        ros_tf_remap = ET.SubElement(ros_params, 'remapping')
        ros_tf_remap.text = '/tf:=/robot_nspace/tf'

        request = SpawnEntity.Request()
        request.name = name
        request.xml = ET.tostring(root, encoding="unicode")
        request.robot_namespace = "robot_nspace"
        request.initial_pose.position.x = x
        request.initial_pose.position.y = y
        request.initial_pose.position.z = z
        request.initial_pose.orientation.x = 0.0
        request.initial_pose.orientation.y = 0.0
        request.initial_pose.orientation.z = 0.0
        request.initial_pose.orientation.w = 1.0
        request.reference_frame = ""

        future = client.call_async(request)
        future.add_done_callback(self.callback_create_entity)
        # rclpy.spin_until_future_complete(self, future)

    def callback_create_entity(self, future):
        try:
            response = future.result()
            self.get_logger().info(str(response.success) + " " + response.status_message)

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = EntityCreatorNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
