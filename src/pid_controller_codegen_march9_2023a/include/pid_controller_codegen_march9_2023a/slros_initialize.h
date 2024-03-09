#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "PID_Controller_CodeGen_March9_2023a_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block PID_Controller_CodeGen_March9_2023a/Subscribe1
extern SimulinkSubscriber<std_msgs::Float32, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32> Sub_PID_Controller_CodeGen_March9_2023a_14;

// For Block PID_Controller_CodeGen_March9_2023a/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64> Sub_PID_Controller_CodeGen_March9_2023a_15;

// For Block PID_Controller_CodeGen_March9_2023a/Publish
extern SimulinkPublisher<ackermann_msgs::AckermannDriveStamped, SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka> Pub_PID_Controller_CodeGen_March9_2023a_12;

void slros_node_init(int argc, char** argv);

#endif
