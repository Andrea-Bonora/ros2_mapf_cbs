#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64


class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__("number_publisher")
        self.declare_parameter("number_to_publish", 2)
        self.declare_parameter("publish_frequency", 1.0)

        self.number_ = self.get_parameter("number_to_publish").value
        self.publish_frequency_ = self.get_parameter("publish_frequency").value
        
        self.publisher_ = self.create_publisher(Int64, "number", 10)
        self.timer_ = self.create_timer(1.0 /self.publish_frequency_, self.publish_number)
        self.get_logger().info("Number Publisher has been started")

    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()