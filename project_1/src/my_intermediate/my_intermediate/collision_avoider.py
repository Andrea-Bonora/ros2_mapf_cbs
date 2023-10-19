#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

import numpy as np
from geometry_msgs.msg import Pose, PoseStamped, Point
from builtin_interfaces.msg import Time
from std_msgs.msg import Header
from my_intermediate_interfaces.srv import StartGoalPositions, StartGoalPoseStamped
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from nav_msgs.srv import GetMap
from my_intermediate.cbs.cbs_node import CBS
from my_intermediate.cbs.environment import Environment
from my_intermediate.cbs.state import State
from my_intermediate.cbs.location import Location
import math


class CollisionAvoiderNode(Node):
    def __init__(self):
        super().__init__("collision_avoider")
        self.get_logger().info("Collision Avoider has been started!")
        client_cb_group = MutuallyExclusiveCallbackGroup()
        client_cb_group_map = MutuallyExclusiveCallbackGroup()

        self.map_client = self.create_client(
            GetMap, "map_server/map", callback_group=client_cb_group_map)

        while not self.map_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /map_server/map...")

        self.pixel_per_cell = 4
        self.discrete_map = self.get_map()

        self.server_ = self.create_service(
            StartGoalPositions, "cbs_plans", self.callback_cbs_plan, callback_group=client_cb_group)

        client_cb_group_cl = MutuallyExclusiveCallbackGroup()
        self.client_ = self.create_client(
            StartGoalPoseStamped, "get_plans", callback_group=client_cb_group_cl)
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /get_plans...")

    def callback_cbs_plan(self, request, response):

        starting_positions = self.convert_to_pose_stamped(self.compose_objects(
            request.start_x, request.start_y, request.start_z))

        ending_positions = self.convert_to_pose_stamped(self.compose_objects(
            request.end_x, request.end_y, request.end_z))

        client_request = StartGoalPoseStamped.Request()
        client_request.starts = starting_positions
        client_request.goals = ending_positions

        future = self.client_.call_async(client_request)
        # future.add_done_callback(self.callback_call_get_plans)

        rclpy.spin_until_future_complete(self, future)

        service_response = future.result()
        response.plans = service_response.plans  # Piani dei vari agenti

        plans = self.discretize_plans(response.plans)
        #self.get_logger().info(str(len(plans)))
        #self.get_logger().info(str(plans[0]))
        # CBS MAIN PART

        self.get_logger().info(str(type(plans[0])))

        env = Environment([],[],[])#(dimension, agents, obstacles)
        cbs = CBS(env)
        self.get_logger().info("Start searching...")
        solution = cbs.search(plans)
        if not solution:
            self.get_logger().info(" Solution not found")

        else:
            for a in solution:
                self.get_logger().info("Lunghezza piano per " +
                                       str(a) + ": " + str(len(solution[a])))
                
        self.get_logger().info("Sending response")

        return response

    def callback_call_get_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response)))

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def compose_objects(self, x, y, z):
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

    def get_map(self):
        client_request = GetMap.Request()

        future = self.map_client.call_async(client_request)
        # future.add_done_callback(self.callback_call_get_plans)

        rclpy.spin_until_future_complete(self, future)

        result = future.result().map
        self.map_resolution = result.info.resolution
        self.map_width = result.info.width
        self.map_height = result.info.height
        self.map_origin = result.info.origin.position
        self.map_values = result.data

        self.get_logger().info("Resolution: " + str(self.map_resolution))
        self.get_logger().info("Height: " + str(self.map_width))
        self.get_logger().info("Width: " + str(self.map_height))
        self.get_logger().info("N_Values: " + str(len(self.map_values)))
        self.get_logger().info("Origin: (" + str(result.info.origin.position.x) +
                               ", " + str(result.info.origin.position.y) + ", " + str(result.info.origin.position.z) + " )")

        n_rows = int(self.map_height / self.pixel_per_cell)
        n_cols = int(self.map_width / self.pixel_per_cell)

        discrete_whole_map = np.zeros((self.map_height, self.map_width))

        j = i = k = 0
        while i < len(self.map_values):
            discrete_whole_map[k][j] = self.map_values[i]
            j += 1
            i += 1
            if j != 0 and j % self.map_width == 0:
                j = 0
                k += 1

        discrete_map = np.zeros((n_rows, n_cols))
        k = z = 0
        obstacles = []

        for i in range(0, self.map_height, self.pixel_per_cell):
            for j in range(0, self.map_width, self.pixel_per_cell):
                tmp_values = discrete_whole_map[i:i +
                                                self.pixel_per_cell-1, j:j+self.pixel_per_cell-1]
                # self.get_logger().info(str(tmp_values))
                if -1 in tmp_values or 100 in tmp_values:
                    # if 0 in tmp_values:
                    discrete_map[k][z] = 1.0
                    obstacles.append((k, z))
                z += 1
            k += 1
            z = 0

        return discrete_map

    def discretize_plans(self, plans):
        discrete_plans = []
        for p in plans:
            discrete_path = []
            # p is of type nav_msg/Path
            for i, pose in enumerate(p.poses):
                discrete_x = math.floor(
                    round((pose.pose.position.x - self.map_origin.x) / self.map_resolution) / self.pixel_per_cell)
                discrete_y = math.floor(
                    round((pose.pose.position.y - self.map_origin.y) / self.map_resolution) / self.pixel_per_cell)
                
                discrete_path.append(State(i , Location(discrete_x, discrete_y)))
            
            discrete_plans.append(discrete_path)

        return discrete_plans


def main(args=None):
    rclpy.init(args=args)
    node = CollisionAvoiderNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
