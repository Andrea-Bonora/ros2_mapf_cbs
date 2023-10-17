#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial
from turtlesim.srv import Spawn
import random


class TurtleSpawnerNode(Node):
    def __init__(self):
        super().__init__("turtle_spawner_node")
        self.timer_ = self.create_timer(3, self.add_turtle)

    def add_turtle(self):
        client = self.create_client(Spawn, "spawn")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for server /spawn...")
        
        #x and y between 1 and 10
        request = Spawn.Request()
        request.x = random.random() * 9 + 1
        request.y = random.random() * 9 + 1
        request.theta = random.random() * 19 + 1

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_add_turtle))

    def callback_add_turtle(self, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

     
def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawnerNode() 
    rclpy.spin(node)
    rclpy.shutdown()