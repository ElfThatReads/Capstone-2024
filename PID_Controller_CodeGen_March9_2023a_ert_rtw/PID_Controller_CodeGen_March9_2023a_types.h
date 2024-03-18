//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PID_Controller_CodeGen_March9_2023a_types.h
//
// Code generated for Simulink model 'PID_Controller_CodeGen_March9_2023a'.
//
// Model version                  : 1.3
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Sat Mar  9 10:59:35 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_PID_Controller_CodeGen_March9_2023a_types_h_
#define RTW_HEADER_PID_Controller_CodeGen_March9_2023a_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header
{
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_PID_Controller_CodeGen_March9_2023a_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc_

// MsgType=ackermann_msgs/AckermannDrive
struct SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc
{
  real32_T SteeringAngle;
  real32_T SteeringAngleVelocity;
  real32_T Speed;
  real32_T Acceleration;
  real32_T Jerk;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka_

// MsgType=ackermann_msgs/AckermannDriveStamped
struct SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka
{
  // MsgType=std_msgs/Header
  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Header Header;

  // MsgType=ackermann_msgs/AckermannDrive
  SL_Bus_PID_Controller_CodeGen_Ma_AckermannDrive_ar35rc Drive;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32_

// MsgType=std_msgs/Float32
struct SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32
{
  real32_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64_

// MsgType=std_msgs/Float64
struct SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

// Parameters (default storage)
typedef struct P_PID_Controller_CodeGen_Marc_T_ P_PID_Controller_CodeGen_Marc_T;

// Forward declaration for rtModel
typedef struct tag_RTM_PID_Controller_CodeGe_T RT_MODEL_PID_Controller_CodeG_T;

#endif               // RTW_HEADER_PID_Controller_CodeGen_March9_2023a_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
