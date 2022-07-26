

import re
import rclpy
from rclpy.node import Node
from learn_interface.srv import AddTwoInts 

class addService(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.ser = self.create_service(AddTwoInts , "add_dervice",self.callback)
        self.get_logger().info("service start !!")

    def callback(self,request,response):
        response.sum = request.a +request.b
        self.get_logger().info("input %d + %d"%(request.a,request.b))
        return response


def main(arg=None):
    rclpy.init()
    node = addService("my_first_service")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
