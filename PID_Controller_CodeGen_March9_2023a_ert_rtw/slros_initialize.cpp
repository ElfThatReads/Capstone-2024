#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "PID_Controller_CodeGen_March9_2023a";

// For Block PID_Controller_CodeGen_March9_2023a/Subscribe1
SimulinkSubscriber<std_msgs::Float32, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32> Sub_PID_Controller_CodeGen_March9_2023a_14;

// For Block PID_Controller_CodeGen_March9_2023a/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64> Sub_PID_Controller_CodeGen_March9_2023a_15;

// For Block PID_Controller_CodeGen_March9_2023a/Publish
SimulinkPublisher<ackermann_msgs::AckermannDriveStamped, SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka> Pub_PID_Controller_CodeGen_March9_2023a_12;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

