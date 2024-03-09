#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc and ackermann_msgs::AckermannDrive

void convertFromBus(ackermann_msgs::AckermannDrive* msgPtr, SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc const* busPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDrive");

  msgPtr->acceleration =  busPtr->Acceleration;
  msgPtr->jerk =  busPtr->Jerk;
  msgPtr->speed =  busPtr->Speed;
  msgPtr->steering_angle =  busPtr->SteeringAngle;
  msgPtr->steering_angle_velocity =  busPtr->SteeringAngleVelocity;
}

void convertToBus(SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc* busPtr, ackermann_msgs::AckermannDrive const* msgPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDrive");

  busPtr->Acceleration =  msgPtr->acceleration;
  busPtr->Jerk =  msgPtr->jerk;
  busPtr->Speed =  msgPtr->speed;
  busPtr->SteeringAngle =  msgPtr->steering_angle;
  busPtr->SteeringAngleVelocity =  msgPtr->steering_angle_velocity;
}


// Conversions between SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka and ackermann_msgs::AckermannDriveStamped

void convertFromBus(ackermann_msgs::AckermannDriveStamped* msgPtr, SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka const* busPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDriveStamped");

  convertFromBus(&msgPtr->drive, &busPtr->Drive);
  convertFromBus(&msgPtr->header, &busPtr->Header);
}

void convertToBus(SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka* busPtr, ackermann_msgs::AckermannDriveStamped const* msgPtr)
{
  const std::string rosMessageType("ackermann_msgs/AckermannDriveStamped");

  convertToBus(&busPtr->Drive, &msgPtr->drive);
  convertToBus(&busPtr->Header, &msgPtr->header);
}


// Conversions between SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->nsec =  busPtr->Nsec;
  msgPtr->sec =  busPtr->Sec;
}

void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Nsec =  msgPtr->nsec;
  busPtr->Sec =  msgPtr->sec;
}


// Conversions between SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 and std_msgs::Float32

void convertFromBus(std_msgs::Float32* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32* busPtr, std_msgs::Float32 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  busPtr->Data =  msgPtr->data;
}


// Conversions between SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 and std_msgs::Float64

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->Data =  msgPtr->data;
}


// Conversions between SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

