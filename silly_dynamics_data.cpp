//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: silly_dynamics_data.cpp
//
// Code generated for Simulink model 'silly_dynamics'.
//
// Model version                  : 1.9
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Fri Apr 23 21:41:52 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "silly_dynamics.h"
#include "silly_dynamics_private.h"

// Block parameters (default storage)
P_silly_dynamics_T silly_dynamics_P = {
  // Mask Parameter: PIDController_D
  //  Referenced by: '<S30>/Derivative Gain'

  -0.35903427507748,

  // Mask Parameter: PIDController_I
  //  Referenced by: '<S33>/Integral Gain'

  7.94574396695634,

  // Mask Parameter: PIDController_InitialConditionF
  //  Referenced by: '<S31>/Filter'

  0.0,

  // Mask Parameter: PIDController_InitialConditio_g
  //  Referenced by: '<S36>/Integrator'

  0.0,

  // Mask Parameter: PIDController_Kb
  //  Referenced by: '<S29>/Kb'

  1.0,

  // Mask Parameter: PIDController_LowerSaturationLi
  //  Referenced by: '<S43>/Saturation'

  0.0,

  // Mask Parameter: PIDController_N
  //  Referenced by: '<S39>/Filter Coefficient'

  17.4511617325516,

  // Mask Parameter: PIDController_P
  //  Referenced by: '<S41>/Proportional Gain'

  6.26556520190651,

  // Mask Parameter: PIDController_UpperSaturationLi
  //  Referenced by: '<S43>/Saturation'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S53>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S4>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S1>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: TransferFcn_A
  //  Referenced by: '<Root>/Transfer Fcn'

  { -0.5, -0.25 },

  // Computed Parameter: TransferFcn_C
  //  Referenced by: '<Root>/Transfer Fcn'

  { 1.0, 0.5 },

  // Expression: 0
  //  Referenced by: '<Root>/Memory'

  0.0
};

//
// File trailer for generated code.
//
// [EOF]
//
