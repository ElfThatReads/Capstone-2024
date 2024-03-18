#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <ackermann_msgs/AckermannDrive.h>
#include <ackermann_msgs/AckermannDriveStamped.h>
#include <ros/time.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Header.h>
#include "PID_Controller_CodeGen_March9_2023a_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ackermann_msgs::AckermannDrive* msgPtr, SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc const* busPtr);
void convertToBus(SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc* busPtr, ackermann_msgs::AckermannDrive const* msgPtr);

void convertFromBus(ackermann_msgs::AckermannDriveStamped* msgPtr, SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka const* busPtr);
void convertToBus(SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka* busPtr, ackermann_msgs::AckermannDriveStamped const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Float32* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 const* busPtr);
void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32* busPtr, std_msgs::Float32 const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
