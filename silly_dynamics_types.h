//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: silly_dynamics_types.h
//
// Code generated for Simulink model 'silly_dynamics'.
//
// Model version                  : 1.11
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Apr 27 17:15:59 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_silly_dynamics_types_h_
#define RTW_HEADER_silly_dynamics_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_silly_dynamics_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_silly_dynamics_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_silly_dynamics_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_silly_dynamics_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_silly_dynamics_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_silly_dynamics_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_silly_dynamics_geometry_msgs_Vector3 Angular;
} SL_Bus_silly_dynamics_geometry_msgs_Twist;

#endif

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_rkSooZHJZnr3Dpfu1LNqfH

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_9SewJ4y3IXNs5GrZti8qkG

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

// Parameters (default storage)
typedef struct P_silly_dynamics_T_ P_silly_dynamics_T;

// Forward declaration for rtModel
typedef struct tag_RTM_silly_dynamics_T RT_MODEL_silly_dynamics_T;

#endif                                 // RTW_HEADER_silly_dynamics_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
