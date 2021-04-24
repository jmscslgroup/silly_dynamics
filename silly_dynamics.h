//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: silly_dynamics.h
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
#ifndef RTW_HEADER_silly_dynamics_h_
#define RTW_HEADER_silly_dynamics_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "silly_dynamics_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_silly_dynamics_geometry_msgs_Twist In1;// '<S53>/In1'
  SL_Bus_silly_dynamics_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  real_T TransferFcn;                  // '<Root>/Transfer Fcn'
  real_T ProportionalGain;             // '<S41>/Proportional Gain'
  real_T DerivativeGain;               // '<S30>/Derivative Gain'
  real_T FilterCoefficient;            // '<S39>/Filter Coefficient'
  real_T Saturation;                   // '<S43>/Saturation'
  real_T IntegralGain;                 // '<S33>/Integral Gain'
  real_T SumI4;                        // '<S29>/SumI4'
} B_silly_dynamics_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Publ_T obj; // '<S3>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_f;// '<S4>/SourceBlock'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
} DW_silly_dynamics_T;

// Continuous states (default storage)
typedef struct {
  real_T TransferFcn_CSTATE[2];        // '<Root>/Transfer Fcn'
  real_T Integrator_CSTATE;            // '<S36>/Integrator'
  real_T Filter_CSTATE;                // '<S31>/Filter'
} X_silly_dynamics_T;

// State derivatives (default storage)
typedef struct {
  real_T TransferFcn_CSTATE[2];        // '<Root>/Transfer Fcn'
  real_T Integrator_CSTATE;            // '<S36>/Integrator'
  real_T Filter_CSTATE;                // '<S31>/Filter'
} XDot_silly_dynamics_T;

// State disabled
typedef struct {
  boolean_T TransferFcn_CSTATE[2];     // '<Root>/Transfer Fcn'
  boolean_T Integrator_CSTATE;         // '<S36>/Integrator'
  boolean_T Filter_CSTATE;             // '<S31>/Filter'
} XDis_silly_dynamics_T;

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
} ODE3_IntgData;

#endif

// Parameters (default storage)
struct P_silly_dynamics_T_ {
  real_T PIDController_D;              // Mask Parameter: PIDController_D
                                          //  Referenced by: '<S30>/Derivative Gain'

  real_T PIDController_I;              // Mask Parameter: PIDController_I
                                          //  Referenced by: '<S33>/Integral Gain'

  real_T PIDController_InitialConditionF;
                              // Mask Parameter: PIDController_InitialConditionF
                                 //  Referenced by: '<S31>/Filter'

  real_T PIDController_InitialConditio_g;
                              // Mask Parameter: PIDController_InitialConditio_g
                                 //  Referenced by: '<S36>/Integrator'

  real_T PIDController_Kb;             // Mask Parameter: PIDController_Kb
                                          //  Referenced by: '<S29>/Kb'

  real_T PIDController_LowerSaturationLi;
                              // Mask Parameter: PIDController_LowerSaturationLi
                                 //  Referenced by: '<S43>/Saturation'

  real_T PIDController_N;              // Mask Parameter: PIDController_N
                                          //  Referenced by: '<S39>/Filter Coefficient'

  real_T PIDController_P;              // Mask Parameter: PIDController_P
                                          //  Referenced by: '<S41>/Proportional Gain'

  real_T PIDController_UpperSaturationLi;
                              // Mask Parameter: PIDController_UpperSaturationLi
                                 //  Referenced by: '<S43>/Saturation'

  SL_Bus_silly_dynamics_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                       //  Referenced by: '<S53>/Out1'

  SL_Bus_silly_dynamics_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                              //  Referenced by: '<S4>/Constant'

  SL_Bus_silly_dynamics_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                //  Referenced by: '<S1>/Constant'

  real_T TransferFcn_A[2];             // Computed Parameter: TransferFcn_A
                                          //  Referenced by: '<Root>/Transfer Fcn'

  real_T TransferFcn_C[2];             // Computed Parameter: TransferFcn_C
                                          //  Referenced by: '<Root>/Transfer Fcn'

  real_T Memory_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<Root>/Memory'

};

// Real-time Model Data Structure
struct tag_RTM_silly_dynamics_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_silly_dynamics_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[4];
  real_T odeF[3][4];
  ODE3_IntgData intgData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_silly_dynamics_T silly_dynamics_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_silly_dynamics_T silly_dynamics_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_silly_dynamics_T silly_dynamics_X;

// Block states (default storage)
extern DW_silly_dynamics_T silly_dynamics_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void silly_dynamics_initialize(void);
  extern void silly_dynamics_step(void);
  extern void silly_dynamics_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_silly_dynamics_T *const silly_dynamics_M;

#ifdef __cplusplus

}
#endif

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
//  '<Root>' : 'silly_dynamics'
//  '<S1>'   : 'silly_dynamics/Blank Message'
//  '<S2>'   : 'silly_dynamics/PID Controller'
//  '<S3>'   : 'silly_dynamics/Publish'
//  '<S4>'   : 'silly_dynamics/Subscribe'
//  '<S5>'   : 'silly_dynamics/PID Controller/Anti-windup'
//  '<S6>'   : 'silly_dynamics/PID Controller/D Gain'
//  '<S7>'   : 'silly_dynamics/PID Controller/Filter'
//  '<S8>'   : 'silly_dynamics/PID Controller/Filter ICs'
//  '<S9>'   : 'silly_dynamics/PID Controller/I Gain'
//  '<S10>'  : 'silly_dynamics/PID Controller/Ideal P Gain'
//  '<S11>'  : 'silly_dynamics/PID Controller/Ideal P Gain Fdbk'
//  '<S12>'  : 'silly_dynamics/PID Controller/Integrator'
//  '<S13>'  : 'silly_dynamics/PID Controller/Integrator ICs'
//  '<S14>'  : 'silly_dynamics/PID Controller/N Copy'
//  '<S15>'  : 'silly_dynamics/PID Controller/N Gain'
//  '<S16>'  : 'silly_dynamics/PID Controller/P Copy'
//  '<S17>'  : 'silly_dynamics/PID Controller/Parallel P Gain'
//  '<S18>'  : 'silly_dynamics/PID Controller/Reset Signal'
//  '<S19>'  : 'silly_dynamics/PID Controller/Saturation'
//  '<S20>'  : 'silly_dynamics/PID Controller/Saturation Fdbk'
//  '<S21>'  : 'silly_dynamics/PID Controller/Sum'
//  '<S22>'  : 'silly_dynamics/PID Controller/Sum Fdbk'
//  '<S23>'  : 'silly_dynamics/PID Controller/Tracking Mode'
//  '<S24>'  : 'silly_dynamics/PID Controller/Tracking Mode Sum'
//  '<S25>'  : 'silly_dynamics/PID Controller/Tsamp - Integral'
//  '<S26>'  : 'silly_dynamics/PID Controller/Tsamp - Ngain'
//  '<S27>'  : 'silly_dynamics/PID Controller/postSat Signal'
//  '<S28>'  : 'silly_dynamics/PID Controller/preSat Signal'
//  '<S29>'  : 'silly_dynamics/PID Controller/Anti-windup/Back Calculation'
//  '<S30>'  : 'silly_dynamics/PID Controller/D Gain/Internal Parameters'
//  '<S31>'  : 'silly_dynamics/PID Controller/Filter/Cont. Filter'
//  '<S32>'  : 'silly_dynamics/PID Controller/Filter ICs/Internal IC - Filter'
//  '<S33>'  : 'silly_dynamics/PID Controller/I Gain/Internal Parameters'
//  '<S34>'  : 'silly_dynamics/PID Controller/Ideal P Gain/Passthrough'
//  '<S35>'  : 'silly_dynamics/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S36>'  : 'silly_dynamics/PID Controller/Integrator/Continuous'
//  '<S37>'  : 'silly_dynamics/PID Controller/Integrator ICs/Internal IC'
//  '<S38>'  : 'silly_dynamics/PID Controller/N Copy/Disabled'
//  '<S39>'  : 'silly_dynamics/PID Controller/N Gain/Internal Parameters'
//  '<S40>'  : 'silly_dynamics/PID Controller/P Copy/Disabled'
//  '<S41>'  : 'silly_dynamics/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S42>'  : 'silly_dynamics/PID Controller/Reset Signal/Disabled'
//  '<S43>'  : 'silly_dynamics/PID Controller/Saturation/Enabled'
//  '<S44>'  : 'silly_dynamics/PID Controller/Saturation Fdbk/Disabled'
//  '<S45>'  : 'silly_dynamics/PID Controller/Sum/Sum_PID'
//  '<S46>'  : 'silly_dynamics/PID Controller/Sum Fdbk/Disabled'
//  '<S47>'  : 'silly_dynamics/PID Controller/Tracking Mode/Disabled'
//  '<S48>'  : 'silly_dynamics/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S49>'  : 'silly_dynamics/PID Controller/Tsamp - Integral/Passthrough'
//  '<S50>'  : 'silly_dynamics/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S51>'  : 'silly_dynamics/PID Controller/postSat Signal/Forward_Path'
//  '<S52>'  : 'silly_dynamics/PID Controller/preSat Signal/Forward_Path'
//  '<S53>'  : 'silly_dynamics/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_silly_dynamics_h_

//
// File trailer for generated code.
//
// [EOF]
//
