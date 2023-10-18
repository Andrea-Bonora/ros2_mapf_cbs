#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Pose, PoseStamped, Point
from builtin_interfaces.msg import Time
from std_msgs.msg import Header
from my_intermediate_interfaces.srv import StartGoalPositions, StartGoalPoseStamped
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup


class CollisionAvoiderNode(Node):
    def __init__(self):
        super().__init__("collision_avoider")
        self.get_logger().info("Collision Avoider has been started!")
        client_cb_group = MutuallyExclusiveCallbackGroup()
        self.server_ = self.create_service(
            StartGoalPositions, "cbs_plans", self.callback_cbs_plan, callback_group=client_cb_group)

    def callback_cbs_plan(self, request, response):

        starting_positions = self.convert_to_pose_stamped(self.compose_objects(
            request.start_x, request.start_y, request.start_z))

        ending_positions = self.convert_to_pose_stamped(self.compose_objects(
            request.end_x, request.end_y, request.end_z))

        client = self.create_client(StartGoalPoseStamped, "get_plans")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /get_plans...")

        client_request = StartGoalPoseStamped.Request()
        client_request.starts = starting_positions
        client_request.goals = ending_positions

        future = client.call_async(client_request)
        #future.add_done_callback(self.callback_call_get_plans)

        rclpy.spin_until_future_complete(self, future)

        service_response = future.result()
        response.plans = service_response.plans
        self.get_logger().info(str(len(response.plans)))
        
        #CBS MAIN PART

        self.get_logger().info("Sending response")

        return response

    def callback_call_get_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response)))

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def compose_objects(self, x, y, z):
        self.get_logger().info(str(len(x)) + " " + str(len(y)) + " " + str(len(z)))
        objs = []
        if len(x) == len(y) and len(x) == len(z):
            for i in range(len(x)):
                objs.append({'x': x[i], 'y': y[i], 'z': z[i]})
        return objs
    
    def convert_to_pose_stamped(self, objs):
        pose_stamped = []
        for ob in objs:
            pose_stamped.append(self.from_object_to_PoseStamped(ob))
        return pose_stamped

    def from_object_to_PoseStamped(self, obj):
        pose_stamped = PoseStamped()
        header = Header()

        header.stamp = Time()
        header.stamp.sec = 0
        header.stamp.nanosec = 0
        header.frame_id = 'map'

        pose = Pose()
        pose.position = Point()
        pose.position.x = obj['x']
        pose.position.y = obj['y']
        pose.position.z = obj['z']

        pose_stamped.header = header
        pose_stamped.pose = pose

        return pose_stamped


def main(args=None):
    rclpy.init(args=args)
    node = CollisionAvoiderNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
