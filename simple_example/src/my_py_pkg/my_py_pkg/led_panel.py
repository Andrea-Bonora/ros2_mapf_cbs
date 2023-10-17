#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import LedStatus
from my_robot_interfaces.srv import SetLedStatus


class LedPanelNode(Node):
    def __init__(self):
        super().__init__("led_panel")
        self.declare_parameter("led_states", [0,0,0])


        self.leds = self.get_parameter("led_states").value
        self.server_ = self.create_service(SetLedStatus, "set_led", self.callback_set_led)
        self.publisher_ = self.create_publisher(LedStatus, "led_panel_state", 10)
        self.timer_ = self.create_timer(1, self.publish_led_panel_state)
        self.get_logger().info("Led Panel Node has been started")

    def callback_set_led(self, request, response):
        led_index = request.led_number - 1
        if led_index >= 0 and led_index < len(self.leds):
            if request.status == "on":
                self.leds[led_index] = 1
                response.success = True
            elif request.status == "off":
                self.leds[led_index] = 0
                response.success = True
            else:
                response.success = False
        else:
            response.success = False

        self.get_logger().info(str(request.led_number) + " " + request.status + " -> " + str(response.success))

        return response
    
    def publish_led_panel_state(self):
        msg = LedStatus()
        msg.led1 = str(self.leds[0])
        msg.led2 = str(self.leds[1])
        msg.led3 = str(self.leds[2])
        self.publisher_.publish(msg)
        

     
def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()