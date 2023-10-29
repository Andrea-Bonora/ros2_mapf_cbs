#!/usr/bin/env python3
import rclpy
import numpy as np
from rclpy.node import Node
import sys


from my_intermediate.cbs.cbs_node import CBS
from my_intermediate.cbs.environment import Environment
import math

from nav_msgs.srv import GetMap
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
# import math


class MapDiscretizerNode(Node):
    def __init__(self):
        super().__init__("map_discretizer")

        client_cb_group_cl = MutuallyExclusiveCallbackGroup()
        self.client_ = self.create_client(
            GetMap, "map_server/map", callback_group=client_cb_group_cl)
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /map_server/map...")

        client_request = GetMap.Request()

        future = self.client_.call_async(client_request)
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

        # self.get_logger().info("Numero di zeri = " + str(np.count_nonzero(self.map_values==0)))

        # Imagine 20cm per cell means 5 * x = 20 => 20 / 5 = x => x = 4
        # For using a little matrix
        pixel_per_cell = 4

        n_rows = int(self.map_height / pixel_per_cell)
        n_cols = int(self.map_width / pixel_per_cell)

        discrete_whole_map = np.zeros((self.map_height, self.map_width))

        j = i = k = 0
        # k = 0
        while i < len(self.map_values):
            # self.get_logger().info("j: " + str(j) + " k: " + str(k) + " i:" + str(i))
            discrete_whole_map[k][j] = self.map_values[i]
            j += 1
            i += 1
            if j != 0 and j % self.map_width == 0:
                j = 0
                k += 1

        self.discrete_map = np.zeros((n_rows, n_cols))

        # self.get_logger().info("Valore del punto nella mappa intera discretizzata: " + str(discrete_whole_map[y_cord][x_cord]))
        k = z = 0
        # self.get_logger().info(str(self.map_values))

        obstacles = []

        for i in range(0, self.map_height, pixel_per_cell):
            for j in range(0, self.map_width, pixel_per_cell):
                tmp_values = discrete_whole_map[i:i +
                                                pixel_per_cell-1, j:j+pixel_per_cell-1]
                # self.get_logger().info(str(tmp_values))
                if -1 in tmp_values or 100 in tmp_values:
                    # if 0 in tmp_values:
                    self.discrete_map[k][z] = 1.0
                    obstacles.append((k, z))
                z += 1
            k += 1
            z = 0

        # self.get_logger().info("Valore del punto nella mappa ridotta discretizzata: " + str(self.discrete_map[math.floor(y_cord/4)][math.floor(x_cord/4)]))
        # for row in self.discrete_map:
        #    self.get_logger().info(str(row))
        # self.get_logger().info(str(np.count_nonzero(self.discrete_map == 0.0)))

        # CBS PROVA
        # Valori agente 1 -> -2.54, 0.012
        # Valori agente 2 -> 2.01, -0.045
        x1_start = math.floor(
            round((-1.5 - self.map_origin.x) / self.map_resolution) / pixel_per_cell)
        y1_start = math.floor(
            round((-0.5 - self.map_origin.y) / self.map_resolution) / pixel_per_cell)
        x1_end = math.floor(
            round((-2.54 - self.map_origin.x) / self.map_resolution) / pixel_per_cell)
        y1_end = math.floor(
            round((0.012 - self.map_origin.y) / self.map_resolution) / pixel_per_cell)

        x2_start = math.floor(
            round((-1.5 - self.map_origin.x) / self.map_resolution) / pixel_per_cell)
        y2_start = math.floor(
            round((0.5 - self.map_origin.y) / self.map_resolution) / pixel_per_cell)
        x2_end = math.floor(
            round((2.01 - self.map_origin.x) / self.map_resolution) / pixel_per_cell)
        y2_end = math.floor(
            round((-0.045 - self.map_origin.y) / self.map_resolution) / pixel_per_cell)

        # x_cord = round((x - self.map_origin.x) / self.map_resolution)
        # y_cord = round((y - self.map_origin.y) / self.map_resolution)

        dimension = [len(self.discrete_map), len(self.discrete_map[0])]
        agents = [{'name': "r1", 'goal': [x1_end, y1_end], 'start': [x1_start, y1_start]}, {
            'name': "r2", 'goal': [x2_end, y2_end], 'start': [x2_start, y2_start]}]
        env = Environment(dimension, agents, obstacles)
        cbs = CBS(env)
        self.get_logger().info("Start searching...")
        solution = cbs.search()
        if not solution:
            self.get_logger().info(" Solution not found")

        else:
            for a in solution:
                self.get_logger().info("Lunghezza piano per " +
                                       str(a) + ": " + str(len(solution[a])))


def main(args=None):
    rclpy.init(args=args)
    node = MapDiscretizerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
