//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PID_Controller_CodeGen_March9_2023a.h
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
#ifndef RTW_HEADER_PID_Controller_CodeGen_March9_2023a_h_
#define RTW_HEADER_PID_Controller_CodeGen_March9_2023a_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "PID_Controller_CodeGen_March9_2023a_types.h"
#include <stddef.h>
#include "zero_crossing_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define PID_Controller_CodeGen_March9_2023a_M (PID_Controller_CodeGen_March_M)

// Block signals (default storage)
struct B_PID_Controller_CodeGen_Marc_T {
  SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka BusAssignment1;// '<Root>/Bus Assignment1' 
  char_T b_zeroDelimTopic[36];
  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 In1;// '<S7>/In1'
  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 In1_o;// '<S6>/In1' 
  real32_T Sum;                        // '<S50>/Sum'
};

// Block states (default storage) for system '<Root>'
struct DW_PID_Controller_CodeGen_Mar_T {
  ros_slroscpp_internal_block_P_T obj; // '<S2>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_c;// '<S4>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S3>/SourceBlock'
  real32_T Filter_DSTATE;              // '<S36>/Filter'
  real32_T Integrator_DSTATE;          // '<S41>/Integrator'
  real32_T Filter_PREV_U;              // '<S36>/Filter'
  uint32_T TriggeredSubsystem_PREV_T;  // '<Root>/Triggered Subsystem'
  uint8_T Filter_SYSTEM_ENABLE;        // '<S36>/Filter'
  boolean_T TriggeredSubsystem_RESET_ELAPS_;// '<Root>/Triggered Subsystem'
};

// Zero-crossing (trigger) state
struct PrevZCX_PID_Controller_CodeGe_T {
  ZCSigState TriggeredSubsystem_Trig_ZCE;// '<Root>/Triggered Subsystem'
};

// Parameters (default storage)
struct P_PID_Controller_CodeGen_Marc_T_ {
  real32_T DiscretePIDController_D;   // Mask Parameter: DiscretePIDController_D
                                         //  Referenced by: '<S35>/Derivative Gain'

  real32_T DiscretePIDController_I;   // Mask Parameter: DiscretePIDController_I
                                         //  Referenced by: '<S38>/Integral Gain'

  real32_T DiscretePIDController_InitialCo;
                              // Mask Parameter: DiscretePIDController_InitialCo
                                 //  Referenced by: '<S36>/Filter'

  real32_T DiscretePIDController_Initial_p;
                              // Mask Parameter: DiscretePIDController_Initial_p
                                 //  Referenced by: '<S41>/Integrator'

  real32_T DiscretePIDController_N;   // Mask Parameter: DiscretePIDController_N
                                         //  Referenced by: '<S44>/Filter Coefficient'

  real32_T DiscretePIDController_P;   // Mask Parameter: DiscretePIDController_P
                                         //  Referenced by: '<S46>/Proportional Gain'

  SL_Bus_PID_Controller_CodeGen_Ma_AckermannDriveStamped_ntfwka Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S1>/Constant'

  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 Out1_Y0;// Computed Parameter: Out1_Y0
                                                                      //  Referenced by: '<S6>/Out1'

  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                                      //  Referenced by: '<S3>/Constant'

  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                                      //  Referenced by: '<S7>/Out1'

  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                      //  Referenced by: '<S4>/Constant'

  real_T MAXSPEEDLIM_Value;            // Expression: 30
                                          //  Referenced by: '<S5>/MAXSPEEDLIM'

  real32_T OutputSpeed_Y0;             // Computed Parameter: OutputSpeed_Y0
                                          //  Referenced by: '<S5>/OutputSpeed'

  real32_T Filter_gainval;             // Computed Parameter: Filter_gainval
                                          //  Referenced by: '<S36>/Filter'

  real32_T Integrator_gainval;         // Computed Parameter: Integrator_gainval
                                          //  Referenced by: '<S41>/Integrator'

  real32_T Constant_Value_f;           // Computed Parameter: Constant_Value_f
                                          //  Referenced by: '<Root>/Constant'

  real32_T Constant1_Value;            // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<Root>/Constant1'

  real32_T Constant2_Value;            // Computed Parameter: Constant2_Value
                                          //  Referenced by: '<Root>/Constant2'

  real32_T Constant3_Value;            // Computed Parameter: Constant3_Value
                                          //  Referenced by: '<Root>/Constant3'

};

// Real-time Model Data Structure
struct tag_RTM_PID_Controller_CodeGe_T {
  const char_T * volatile errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_PID_Controller_CodeGen_Marc_T PID_Controller_CodeGen_March9_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_PID_Controller_CodeGen_Marc_T PID_Controller_CodeGen_March9_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_PID_Controller_CodeGen_Mar_T PID_Controller_CodeGen_March_DW;

// Zero-crossing (trigger) state
extern PrevZCX_PID_Controller_CodeGe_T PID_Controller_CodeGen__PrevZCX;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void PID_Controller_CodeGen_March9_2023a_initialize(void);
  extern void PID_Controller_CodeGen_March9_2023a_step(void);
  extern void PID_Controller_CodeGen_March9_2023a_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_PID_Controller_CodeG_T *const PID_Controller_CodeGen_March_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'PID_Controller_CodeGen_March9_2023a'
//  '<S1>'   : 'PID_Controller_CodeGen_March9_2023a/Blank Message'
//  '<S2>'   : 'PID_Controller_CodeGen_March9_2023a/Publish'
//  '<S3>'   : 'PID_Controller_CodeGen_March9_2023a/Subscribe1'
//  '<S4>'   : 'PID_Controller_CodeGen_March9_2023a/Subscribe2'
//  '<S5>'   : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem'
//  '<S6>'   : 'PID_Controller_CodeGen_March9_2023a/Subscribe1/Enabled Subsystem'
//  '<S7>'   : 'PID_Controller_CodeGen_March9_2023a/Subscribe2/Enabled Subsystem'
//  '<S8>'   : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller'
//  '<S9>'   : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Overspeed Protection'
//  '<S10>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Anti-windup'
//  '<S11>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/D Gain'
//  '<S12>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Filter'
//  '<S13>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Filter ICs'
//  '<S14>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/I Gain'
//  '<S15>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Ideal P Gain'
//  '<S16>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
//  '<S17>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Integrator'
//  '<S18>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Integrator ICs'
//  '<S19>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/N Copy'
//  '<S20>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/N Gain'
//  '<S21>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/P Copy'
//  '<S22>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Parallel P Gain'
//  '<S23>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Reset Signal'
//  '<S24>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Saturation'
//  '<S25>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Saturation Fdbk'
//  '<S26>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Sum'
//  '<S27>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Sum Fdbk'
//  '<S28>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tracking Mode'
//  '<S29>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tracking Mode Sum'
//  '<S30>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tsamp - Integral'
//  '<S31>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tsamp - Ngain'
//  '<S32>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/postSat Signal'
//  '<S33>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/preSat Signal'
//  '<S34>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Anti-windup/Passthrough'
//  '<S35>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/D Gain/Internal Parameters'
//  '<S36>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
//  '<S37>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Filter ICs/Internal IC - Filter'
//  '<S38>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
//  '<S39>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
//  '<S40>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S41>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Integrator/Discrete'
//  '<S42>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
//  '<S43>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/N Copy/Disabled'
//  '<S44>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/N Gain/Internal Parameters'
//  '<S45>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/P Copy/Disabled'
//  '<S46>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
//  '<S47>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Reset Signal/Disabled'
//  '<S48>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Saturation/Passthrough'
//  '<S49>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
//  '<S50>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Sum/Sum_PID'
//  '<S51>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
//  '<S52>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
//  '<S53>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
//  '<S54>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S55>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
//  '<S56>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
//  '<S57>'  : 'PID_Controller_CodeGen_March9_2023a/Triggered Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'

#endif                     // RTW_HEADER_PID_Controller_CodeGen_March9_2023a_h_

//
// File trailer for generated code.
//
// [EOF]
//
