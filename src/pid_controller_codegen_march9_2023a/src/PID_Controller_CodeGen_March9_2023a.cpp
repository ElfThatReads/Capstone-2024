//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PID_Controller_CodeGen_March9_2023a.cpp
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
#include "PID_Controller_CodeGen_March9_2023a.h"
#include "rtwtypes.h"
#include "PID_Controller_CodeGen_March9_2023a_types.h"
#include "zero_crossing_types.h"

// Block signals (default storage)
B_PID_Controller_CodeGen_Marc_T PID_Controller_CodeGen_March9_B;

// Block states (default storage)
DW_PID_Controller_CodeGen_Mar_T PID_Controller_CodeGen_March_DW;

// Previous zero-crossings (trigger) states
PrevZCX_PID_Controller_CodeGe_T PID_Controller_CodeGen__PrevZCX;

// Real-time model
RT_MODEL_PID_Controller_CodeG_T PID_Controller_CodeGen_March_M_ =
  RT_MODEL_PID_Controller_CodeG_T();
RT_MODEL_PID_Controller_CodeG_T *const PID_Controller_CodeGen_March_M =
  &PID_Controller_CodeGen_March_M_;

// Model step function
void PID_Controller_CodeGen_March9_2023a_step(void)
{
  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float32 b_varargout_2;
  SL_Bus_PID_Controller_CodeGen_March9_2023a_std_msgs_Float64 b_varargout_2_0;
  real_T tmp;
  real32_T rtb_Subtract;
  uint32_T TriggeredSubsystem_ELAPS_T;
  boolean_T b_varargout_1;
  boolean_T rtb_OR1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S3>/SourceBlock'
  rtb_OR1 = Sub_PID_Controller_CodeGen_March9_2023a_14.getLatestMessage
    (&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S6>/Enable'

  if (rtb_OR1) {
    // SignalConversion generated from: '<S6>/In1'
    PID_Controller_CodeGen_March9_B.In1_o = b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_PID_Controller_CodeGen_March9_2023a_15.getLatestMessage
    (&b_varargout_2_0);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  if (b_varargout_1) {
    // SignalConversion generated from: '<S7>/In1'
    PID_Controller_CodeGen_March9_B.In1 = b_varargout_2_0;
  }

  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // Logic: '<Root>/OR1' incorporates:
  //   MATLABSystem: '<S3>/SourceBlock'
  //   MATLABSystem: '<S4>/SourceBlock'

  rtb_OR1 = (rtb_OR1 || b_varargout_1);

  // End of Outputs for SubSystem: '<Root>/Subscribe1'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Triggered SubSystem: '<Root>/Triggered Subsystem' incorporates:
  //   TriggerPort: '<S5>/Trigger'

  if (rtb_OR1 && (PID_Controller_CodeGen__PrevZCX.TriggeredSubsystem_Trig_ZCE !=
                  POS_ZCSIG)) {
    if (PID_Controller_CodeGen_March_DW.TriggeredSubsystem_RESET_ELAPS_) {
      TriggeredSubsystem_ELAPS_T = 0U;
    } else {
      TriggeredSubsystem_ELAPS_T =
        PID_Controller_CodeGen_March_M->Timing.clockTick0 -
        PID_Controller_CodeGen_March_DW.TriggeredSubsystem_PREV_T;
    }

    PID_Controller_CodeGen_March_DW.TriggeredSubsystem_PREV_T =
      PID_Controller_CodeGen_March_M->Timing.clockTick0;
    PID_Controller_CodeGen_March_DW.TriggeredSubsystem_RESET_ELAPS_ = false;

    // MATLAB Function: '<S5>/Overspeed Protection' incorporates:
    //   Constant: '<S5>/MAXSPEEDLIM'

    if (PID_Controller_CodeGen_March9_B.In1_o.Data >=
        PID_Controller_CodeGen_March9_P.MAXSPEEDLIM_Value) {
      tmp = PID_Controller_CodeGen_March9_P.MAXSPEEDLIM_Value;
    } else if (PID_Controller_CodeGen_March9_B.In1_o.Data < 0.0F) {
      tmp = 0.0;
    } else {
      tmp = PID_Controller_CodeGen_March9_B.In1_o.Data;
    }

    // Sum: '<S5>/Subtract' incorporates:
    //   MATLAB Function: '<S5>/Overspeed Protection'

    rtb_Subtract = static_cast<real32_T>(tmp -
      PID_Controller_CodeGen_March9_B.In1.Data);

    // DiscreteIntegrator: '<S36>/Filter'
    if (PID_Controller_CodeGen_March_DW.Filter_SYSTEM_ENABLE == 0) {
      // DiscreteIntegrator: '<S36>/Filter'
      PID_Controller_CodeGen_March_DW.Filter_DSTATE +=
        PID_Controller_CodeGen_March9_P.Filter_gainval * static_cast<real32_T>
        (TriggeredSubsystem_ELAPS_T)
        * PID_Controller_CodeGen_March_DW.Filter_PREV_U;
    }

    // End of DiscreteIntegrator: '<S36>/Filter'

    // Gain: '<S44>/Filter Coefficient' incorporates:
    //   Gain: '<S35>/Derivative Gain'
    //   Sum: '<S36>/SumD'

    PID_Controller_CodeGen_March_DW.Filter_PREV_U =
      (PID_Controller_CodeGen_March9_P.DiscretePIDController_D * rtb_Subtract -
       PID_Controller_CodeGen_March_DW.Filter_DSTATE) *
      PID_Controller_CodeGen_March9_P.DiscretePIDController_N;

    // Sum: '<S50>/Sum' incorporates:
    //   DiscreteIntegrator: '<S41>/Integrator'
    //   Gain: '<S46>/Proportional Gain'

    PID_Controller_CodeGen_March9_B.Sum =
      (PID_Controller_CodeGen_March9_P.DiscretePIDController_P * rtb_Subtract +
       PID_Controller_CodeGen_March_DW.Integrator_DSTATE) +
      PID_Controller_CodeGen_March_DW.Filter_PREV_U;

    // Update for DiscreteIntegrator: '<S36>/Filter'
    PID_Controller_CodeGen_March_DW.Filter_SYSTEM_ENABLE = 0U;

    // Update for DiscreteIntegrator: '<S41>/Integrator' incorporates:
    //   Gain: '<S38>/Integral Gain'

    PID_Controller_CodeGen_March_DW.Integrator_DSTATE +=
      PID_Controller_CodeGen_March9_P.DiscretePIDController_I * rtb_Subtract *
      PID_Controller_CodeGen_March9_P.Integrator_gainval;
  }

  PID_Controller_CodeGen__PrevZCX.TriggeredSubsystem_Trig_ZCE = rtb_OR1;

  // End of Outputs for SubSystem: '<Root>/Triggered Subsystem'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<Root>/Constant1'
  //   Constant: '<Root>/Constant2'
  //   Constant: '<Root>/Constant3'
  //   Constant: '<S1>/Constant'

  PID_Controller_CodeGen_March9_B.BusAssignment1 =
    PID_Controller_CodeGen_March9_P.Constant_Value;
  PID_Controller_CodeGen_March9_B.BusAssignment1.Drive.SteeringAngle =
    PID_Controller_CodeGen_March9_P.Constant_Value_f;
  PID_Controller_CodeGen_March9_B.BusAssignment1.Drive.SteeringAngleVelocity =
    PID_Controller_CodeGen_March9_P.Constant1_Value;
  PID_Controller_CodeGen_March9_B.BusAssignment1.Drive.Speed =
    PID_Controller_CodeGen_March9_B.Sum;
  PID_Controller_CodeGen_March9_B.BusAssignment1.Drive.Acceleration =
    PID_Controller_CodeGen_March9_P.Constant2_Value;
  PID_Controller_CodeGen_March9_B.BusAssignment1.Drive.Jerk =
    PID_Controller_CodeGen_March9_P.Constant3_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_PID_Controller_CodeGen_March9_2023a_12.publish
    (&PID_Controller_CodeGen_March9_B.BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.05, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.

  PID_Controller_CodeGen_March_M->Timing.clockTick0++;
}

// Model initialize function
void PID_Controller_CodeGen_March9_2023a_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic_0[27];
    char_T b_zeroDelimTopic[10];
    static const char_T tmp[9] = { '/', 'S', 'F', '_', 'S', 'p', 'e', 'e', 'd' };

    static const char_T tmp_0[26] = { '/', 'v', 'e', 's', 'c', '/', 'c', 'o',
      'm', 'm', 'a', 'n', 'd', 's', '/', 'm', 'o', 't', 'o', 'r', '/', 's', 'p',
      'e', 'e', 'd' };

    static const char_T tmp_1[35] = { '/', 'a', 'c', 'k', 'e', 'r', 'm', 'a',
      'n', 'n', '_', 'c', 'm', 'd', '_', 'm', 'u', 'x', '/', 'i', 'n', 'p', 'u',
      't', '/', 'n', 'a', 'v', 'i', 'g', 'a', 't', 'i', 'o', 'n' };

    PID_Controller_CodeGen__PrevZCX.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S6>/In1' incorporates:
    //   Outport: '<S6>/Out1'

    PID_Controller_CodeGen_March9_B.In1_o =
      PID_Controller_CodeGen_March9_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // Start for MATLABSystem: '<S3>/SourceBlock'
    PID_Controller_CodeGen_March_DW.obj_p.matlabCodegenIsDeleted = false;
    PID_Controller_CodeGen_March_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[9] = '\x00';
    Sub_PID_Controller_CodeGen_March9_2023a_14.createSubscriber
      (&b_zeroDelimTopic[0], 1);
    PID_Controller_CodeGen_March_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S7>/In1' incorporates:
    //   Outport: '<S7>/Out1'

    PID_Controller_CodeGen_March9_B.In1 =
      PID_Controller_CodeGen_March9_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    PID_Controller_CodeGen_March_DW.obj_c.matlabCodegenIsDeleted = false;
    PID_Controller_CodeGen_March_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 26; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[26] = '\x00';
    Sub_PID_Controller_CodeGen_March9_2023a_15.createSubscriber
      (&b_zeroDelimTopic_0[0], 1);
    PID_Controller_CodeGen_March_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Triggered SubSystem: '<Root>/Triggered Subsystem'
    // InitializeConditions for DiscreteIntegrator: '<S36>/Filter'
    PID_Controller_CodeGen_March_DW.Filter_DSTATE =
      PID_Controller_CodeGen_March9_P.DiscretePIDController_InitialCo;

    // InitializeConditions for DiscreteIntegrator: '<S41>/Integrator'
    PID_Controller_CodeGen_March_DW.Integrator_DSTATE =
      PID_Controller_CodeGen_March9_P.DiscretePIDController_Initial_p;

    // SystemInitialize for Sum: '<S50>/Sum' incorporates:
    //   Outport: '<S5>/OutputSpeed'

    PID_Controller_CodeGen_March9_B.Sum =
      PID_Controller_CodeGen_March9_P.OutputSpeed_Y0;

    // End of SystemInitialize for SubSystem: '<Root>/Triggered Subsystem'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    PID_Controller_CodeGen_March_DW.obj.matlabCodegenIsDeleted = false;
    PID_Controller_CodeGen_March_DW.obj.isInitialized = 1;
    for (i = 0; i < 35; i++) {
      PID_Controller_CodeGen_March9_B.b_zeroDelimTopic[i] = tmp_1[i];
    }

    PID_Controller_CodeGen_March9_B.b_zeroDelimTopic[35] = '\x00';
    Pub_PID_Controller_CodeGen_March9_2023a_12.createPublisher
      (&PID_Controller_CodeGen_March9_B.b_zeroDelimTopic[0], 1);
    PID_Controller_CodeGen_March_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // Enable for Triggered SubSystem: '<Root>/Triggered Subsystem'
    PID_Controller_CodeGen_March_DW.TriggeredSubsystem_RESET_ELAPS_ = true;

    // Enable for DiscreteIntegrator: '<S36>/Filter'
    PID_Controller_CodeGen_March_DW.Filter_SYSTEM_ENABLE = 1U;

    // End of Enable for SubSystem: '<Root>/Triggered Subsystem'
  }
}

// Model terminate function
void PID_Controller_CodeGen_March9_2023a_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  if (!PID_Controller_CodeGen_March_DW.obj_p.matlabCodegenIsDeleted) {
    PID_Controller_CodeGen_March_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!PID_Controller_CodeGen_March_DW.obj_c.matlabCodegenIsDeleted) {
    PID_Controller_CodeGen_March_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  if (!PID_Controller_CodeGen_March_DW.obj.matlabCodegenIsDeleted) {
    PID_Controller_CodeGen_March_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
