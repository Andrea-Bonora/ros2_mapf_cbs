#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import SetLedStatus


class BatteryNode(Node):
    def __init__(self):
        super().__init__("battery")
        self.battery_level = "full"
        self.last_time_battery_state_changed_ = self.get_current_time_seconds()
        self.battery_timer_ = self.create_timer(0.1, self.check_battery_state)
        self.time_ = 0

    def get_current_time_seconds(self):
        secs, nsecs = self.get_clock().now().seconds_nanoseconds()
        return secs + nsecs / 1000000000.0

    def call_set_led_server(self, led_number, status):
        self.get_logger().info("Hello")
        client = self.create_client(SetLedStatus, "set_led")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for set_led server")

        request = SetLedStatus.Request()
        request.led_number = led_number
        request.status = status

        future = client.call_async(request)
        future.add_done_callback(
            partial(self.callback_call_set_led_server))

    def callback_call_set_led_server(self, future):
        #self.get_logger().info("Hello")
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def check_battery_state(self):
        time_now = self.get_current_time_seconds()
        if self.battery_level == "full":
            if time_now - self.last_time_battery_state_changed_ > 6.0:
                self.battery_level = "empty"
                self.get_logger().info("Battery is empty! Charging battery...")
                self.last_time_battery_state_changed_ = time_now
                self.call_set_led_server(3, "on")
        else:
            if time_now - self.last_time_battery_state_changed_ > 4.0:
                self.battery_level = "full"
                self.get_logger().info("Battery is full!")
                self.last_time_battery_state_changed_ = time_now
                self.call_set_led_server(3, "off")


def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
