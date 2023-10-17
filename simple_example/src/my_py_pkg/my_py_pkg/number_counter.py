#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool


class NumberCounterNode(Node):
    def __init__(self):
        super().__init__("number_counter")
        self.counter_ = 0
        self.subscriber_ = self.create_subscription(
            Int64, "number", self.callback_number, 10)
        self.publisher_ = self.create_publisher(Int64, "number_count", 10)
        self.server_ = self.create_service(
            SetBool, "reset_counter", self.callback_reset_counter)
        self.timer_ = self.create_timer(0.5, self.publish_counter)
        self.get_logger().info("Number Counter has been started")

    def callback_number(self, msg):
        self.counter_ += msg.data

    def callback_reset_counter(self, request, response):
        try:
            if request.data:
                self.counter_ = 0
            response.success = True
            response.messagge = "Ok"
            return response
        except Exception as e:
            response.success = False
            response.message = str(e)
            return response

    def publish_counter(self):
        msg = Int64()
        msg.data = self.counter_
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
