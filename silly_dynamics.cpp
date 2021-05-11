//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: silly_dynamics.cpp
//
// Code generated for Simulink model 'silly_dynamics'.
//
// Model version                  : 1.14
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue May 11 14:17:03 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "silly_dynamics.h"
#include "silly_dynamics_private.h"

// Block signals (default storage)
B_silly_dynamics_T silly_dynamics_B;

// Continuous states
X_silly_dynamics_T silly_dynamics_X;

// Block states (default storage)
DW_silly_dynamics_T silly_dynamics_DW;

// Real-time model
RT_MODEL_silly_dynamics_T silly_dynamics_M_ = RT_MODEL_silly_dynamics_T();
RT_MODEL_silly_dynamics_T *const silly_dynamics_M = &silly_dynamics_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCod_h(ros_slros_internal_block_Subs_T *obj);

//
// This function updates continuous states using the ODE3 fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = static_cast<ODE3_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  silly_dynamics_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  silly_dynamics_step();
  silly_dynamics_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  silly_dynamics_step();
  silly_dynamics_derivatives();

  // tnew = t + hA(3);
  // ynew = y + f*hB(:,3);
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_h(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void silly_dynamics_step(void)
{
  boolean_T b_varargout_1;
  real_T rtb_Sum_f;
  real_T rtb_Sum;
  if (rtmIsMajorTimeStep(silly_dynamics_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&silly_dynamics_M->solverInfo,
                          ((silly_dynamics_M->Timing.clockTick0+1)*
      silly_dynamics_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(silly_dynamics_M)) {
    silly_dynamics_M->Timing.t[0] = rtsiGetT(&silly_dynamics_M->solverInfo);
  }

  // TransferFcn: '<Root>/Transfer Fcn'
  silly_dynamics_B.TransferFcn = 0.0;
  silly_dynamics_B.TransferFcn += silly_dynamics_P.TransferFcn_C[0] *
    silly_dynamics_X.TransferFcn_CSTATE[0];
  silly_dynamics_B.TransferFcn += silly_dynamics_P.TransferFcn_C[1] *
    silly_dynamics_X.TransferFcn_CSTATE[1];

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  silly_dynamics_B.BusAssignment = silly_dynamics_P.Constant_Value_o;
  silly_dynamics_B.BusAssignment.Linear.X = silly_dynamics_B.TransferFcn;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_silly_dynamics_57.publish(&silly_dynamics_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
  if (rtmIsMajorTimeStep(silly_dynamics_M)) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // MATLABSystem: '<S4>/SourceBlock' incorporates:
    //   Inport: '<S53>/In1'

    b_varargout_1 = Sub_silly_dynamics_58.getLatestMessage
      (&silly_dynamics_B.BusAssignment);

    // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S53>/Enable'

    if (b_varargout_1) {
      silly_dynamics_B.In1 = silly_dynamics_B.BusAssignment;
    }

    // End of MATLABSystem: '<S4>/SourceBlock'
    // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Sum: '<Root>/Sum' incorporates:
    //   Memory: '<Root>/Memory'

    rtb_Sum = silly_dynamics_B.In1.Linear.X -
      silly_dynamics_DW.Memory_PreviousInput;

    // Gain: '<S41>/Proportional Gain'
    silly_dynamics_B.ProportionalGain = silly_dynamics_P.PIDController_P *
      rtb_Sum;

    // Gain: '<S30>/Derivative Gain'
    silly_dynamics_B.DerivativeGain = silly_dynamics_P.PIDController_D * rtb_Sum;
  }

  // Gain: '<S39>/Filter Coefficient' incorporates:
  //   Integrator: '<S31>/Filter'
  //   Sum: '<S31>/SumD'

  silly_dynamics_B.FilterCoefficient = (silly_dynamics_B.DerivativeGain -
    silly_dynamics_X.Filter_CSTATE) * silly_dynamics_P.PIDController_N;

  // Sum: '<S45>/Sum' incorporates:
  //   Integrator: '<S36>/Integrator'

  rtb_Sum_f = (silly_dynamics_B.ProportionalGain +
               silly_dynamics_X.Integrator_CSTATE) +
    silly_dynamics_B.FilterCoefficient;

  // Saturate: '<S43>/Saturation'
  if (rtb_Sum_f > silly_dynamics_P.PIDController_UpperSaturationLi) {
    silly_dynamics_B.Saturation =
      silly_dynamics_P.PIDController_UpperSaturationLi;
  } else if (rtb_Sum_f < silly_dynamics_P.PIDController_LowerSaturationLi) {
    silly_dynamics_B.Saturation =
      silly_dynamics_P.PIDController_LowerSaturationLi;
  } else {
    silly_dynamics_B.Saturation = rtb_Sum_f;
  }

  // End of Saturate: '<S43>/Saturation'
  if (rtmIsMajorTimeStep(silly_dynamics_M)) {
    // Gain: '<S33>/Integral Gain'
    silly_dynamics_B.IntegralGain = silly_dynamics_P.PIDController_I * rtb_Sum;
  }

  // Sum: '<S29>/SumI4' incorporates:
  //   Gain: '<S29>/Kb'
  //   Sum: '<S29>/SumI2'

  silly_dynamics_B.SumI4 = (silly_dynamics_B.Saturation - rtb_Sum_f) *
    silly_dynamics_P.PIDController_Kb + silly_dynamics_B.IntegralGain;
  if (rtmIsMajorTimeStep(silly_dynamics_M)) {
    if (rtmIsMajorTimeStep(silly_dynamics_M)) {
      // Update for Memory: '<Root>/Memory'
      silly_dynamics_DW.Memory_PreviousInput = silly_dynamics_B.TransferFcn;
    }
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(silly_dynamics_M)) {
    rt_ertODEUpdateContinuousStates(&silly_dynamics_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++silly_dynamics_M->Timing.clockTick0;
    silly_dynamics_M->Timing.t[0] = rtsiGetSolverStopTime
      (&silly_dynamics_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.1s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.1, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      silly_dynamics_M->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void silly_dynamics_derivatives(void)
{
  XDot_silly_dynamics_T *_rtXdot;
  _rtXdot = ((XDot_silly_dynamics_T *) silly_dynamics_M->derivs);

  // Derivatives for TransferFcn: '<Root>/Transfer Fcn'
  _rtXdot->TransferFcn_CSTATE[0] = 0.0;
  _rtXdot->TransferFcn_CSTATE[0] += silly_dynamics_P.TransferFcn_A[0] *
    silly_dynamics_X.TransferFcn_CSTATE[0];
  _rtXdot->TransferFcn_CSTATE[1] = 0.0;
  _rtXdot->TransferFcn_CSTATE[0] += silly_dynamics_P.TransferFcn_A[1] *
    silly_dynamics_X.TransferFcn_CSTATE[1];
  _rtXdot->TransferFcn_CSTATE[1] += silly_dynamics_X.TransferFcn_CSTATE[0];
  _rtXdot->TransferFcn_CSTATE[0] += silly_dynamics_B.Saturation;

  // Derivatives for Integrator: '<S36>/Integrator'
  _rtXdot->Integrator_CSTATE = silly_dynamics_B.SumI4;

  // Derivatives for Integrator: '<S31>/Filter'
  _rtXdot->Filter_CSTATE = silly_dynamics_B.FilterCoefficient;
}

// Model initialize function
void silly_dynamics_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // non-finite (run-time) assignments
  silly_dynamics_P.PIDController_LowerSaturationLi = rtMinusInf;
  silly_dynamics_P.PIDController_UpperSaturationLi = rtInf;

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&silly_dynamics_M->solverInfo,
                          &silly_dynamics_M->Timing.simTimeStep);
    rtsiSetTPtr(&silly_dynamics_M->solverInfo, &rtmGetTPtr(silly_dynamics_M));
    rtsiSetStepSizePtr(&silly_dynamics_M->solverInfo,
                       &silly_dynamics_M->Timing.stepSize0);
    rtsiSetdXPtr(&silly_dynamics_M->solverInfo, &silly_dynamics_M->derivs);
    rtsiSetContStatesPtr(&silly_dynamics_M->solverInfo, (real_T **)
                         &silly_dynamics_M->contStates);
    rtsiSetNumContStatesPtr(&silly_dynamics_M->solverInfo,
      &silly_dynamics_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&silly_dynamics_M->solverInfo,
      &silly_dynamics_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&silly_dynamics_M->solverInfo,
      &silly_dynamics_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&silly_dynamics_M->solverInfo,
      &silly_dynamics_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&silly_dynamics_M->solverInfo, (&rtmGetErrorStatus
      (silly_dynamics_M)));
    rtsiSetRTModelPtr(&silly_dynamics_M->solverInfo, silly_dynamics_M);
  }

  rtsiSetSimTimeStep(&silly_dynamics_M->solverInfo, MAJOR_TIME_STEP);
  silly_dynamics_M->intgData.y = silly_dynamics_M->odeY;
  silly_dynamics_M->intgData.f[0] = silly_dynamics_M->odeF[0];
  silly_dynamics_M->intgData.f[1] = silly_dynamics_M->odeF[1];
  silly_dynamics_M->intgData.f[2] = silly_dynamics_M->odeF[2];
  silly_dynamics_M->contStates = ((X_silly_dynamics_T *) &silly_dynamics_X);
  rtsiSetSolverData(&silly_dynamics_M->solverInfo, static_cast<void *>
                    (&silly_dynamics_M->intgData));
  rtsiSetSolverName(&silly_dynamics_M->solverInfo,"ode3");
  rtmSetTPtr(silly_dynamics_M, &silly_dynamics_M->Timing.tArray[0]);
  silly_dynamics_M->Timing.stepSize0 = 0.1;

  {
    char_T tmp[4];
    char_T tmp_0[8];
    int32_T i;
    static const char_T tmp_1[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    // InitializeConditions for TransferFcn: '<Root>/Transfer Fcn'
    silly_dynamics_X.TransferFcn_CSTATE[0] = 0.0;
    silly_dynamics_X.TransferFcn_CSTATE[1] = 0.0;

    // InitializeConditions for Memory: '<Root>/Memory'
    silly_dynamics_DW.Memory_PreviousInput =
      silly_dynamics_P.Memory_InitialCondition;

    // InitializeConditions for Integrator: '<S36>/Integrator'
    silly_dynamics_X.Integrator_CSTATE =
      silly_dynamics_P.PIDController_InitialConditio_g;

    // InitializeConditions for Integrator: '<S31>/Filter'
    silly_dynamics_X.Filter_CSTATE =
      silly_dynamics_P.PIDController_InitialConditionF;

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    silly_dynamics_DW.obj.matlabCodegenIsDeleted = false;
    silly_dynamics_DW.obj.isInitialized = 1;
    tmp[0] = 'v';
    tmp[1] = 'e';
    tmp[2] = 'l';
    tmp[3] = '\x00';
    Pub_silly_dynamics_57.createPublisher(tmp, 1);
    silly_dynamics_DW.obj.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S53>/Out1'
    silly_dynamics_B.In1 = silly_dynamics_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    silly_dynamics_DW.obj_f.matlabCodegenIsDeleted = false;
    silly_dynamics_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      tmp_0[i] = tmp_1[i];
    }

    tmp_0[7] = '\x00';
    Sub_silly_dynamics_58.createSubscriber(tmp_0, 1);
    silly_dynamics_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void silly_dynamics_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&silly_dynamics_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  matlabCodegenHandle_matlabCod_h(&silly_dynamics_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subscribe'
}

//
// File trailer for generated code.
//
// [EOF]
//
