
from platform import node
import sys
from urllib import response

from matplotlib import rc
import rclpy
from rclpy.node import Node
from learn_interface.srv import AddTwoInts 



class addClient(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.client = self.create_client(AddTwoInts , "add_dervice")
        while not self.client.wait_for_service(timeout_sec=1):
            self.get_logger().info("service not available")
        self.request = AddTwoInts.Request()
        
    def sendRequest(self):
        self.request.a = int(sys.argv[1])
        self.request.b = int(sys.argv[2])
        self.future1 = self.client.call_async(self.request)

def main(args=None):
    rclpy.init(args=args)
    node = addClient("service_adder_client")
    node.sendRequest()

    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future1.done():
            try:
                response = node.future1.result()
            except Exception as e:
                node.ger_logger().info("service failed")
                
            else:
                node.get_logger().info("result %d +%d = %d "%(node.request.a,node.request.b,response.sum))
                break
    node.destroy_node()
    rclpy.shutdown()
    
