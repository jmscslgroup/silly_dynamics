//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: silly_dynamics_data.cpp
//
// Code generated for Simulink model 'silly_dynamics'.
//
// Model version                  : 1.7
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Wed Apr 21 15:58:41 2021
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
  //  Referenced by: '<S32>/Derivative Gain'

  -0.0164755099565681,

  // Mask Parameter: PIDController_I
  //  Referenced by: '<S35>/Integral Gain'

  12.6793935773502,

  // Mask Parameter: PIDController_InitialConditionF
  //  Referenced by: '<S33>/Filter'

  0.0,

  // Mask Parameter: PIDController_InitialConditio_l
  //  Referenced by: '<S38>/Integrator'

  0.0,

  // Mask Parameter: PIDController_Kb
  //  Referenced by: '<S31>/Kb'

  1.0,

  // Mask Parameter: PIDController_LowerSaturationLi
  //  Referenced by: '<S45>/Saturation'

  0.0,

  // Mask Parameter: PIDController_N
  //  Referenced by: '<S41>/Filter Coefficient'

  487.100497475099,

  // Mask Parameter: PIDController_P
  //  Referenced by: '<S43>/Proportional Gain'

  8.02522909600026,

  // Mask Parameter: PIDController_UpperSaturationLi
  //  Referenced by: '<S45>/Saturation'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S5>/Out1'

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
  //  Referenced by: '<S3>/Constant'

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
  //  Referenced by: '<S4>/Transfer Fcn'

  -0.5,

  // Computed Parameter: TransferFcn_C
  //  Referenced by: '<S4>/Transfer Fcn'

  0.5
};

//
// File trailer for generated code.
//
// [EOF]
//
