//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: pubgrippercmd_types.h
//
// Code generated for Simulink model 'pubgrippercmd'.
//
// Model version                  : 2.202
// Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
// C/C++ source code generated on : Thu Apr 22 22:23:04 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_pubgrippercmd_types_h_
#define RTW_HEADER_pubgrippercmd_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_ros_time_Duration_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_ros_time_Duration_

// MsgType=ros_time/Duration
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_pubgrippercmd_ros_time_Duration;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint_

// MsgType=trajectory_msgs/JointTrajectoryPoint
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Positions_SL_Info:TruncateAction=warn 
  real_T Positions;

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Positions
  SL_Bus_ROSVariableLengthArrayInfo Positions_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Velocities_SL_Info:TruncateAction=warn 
  real_T Velocities[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Velocities
  SL_Bus_ROSVariableLengthArrayInfo Velocities_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Accelerations_SL_Info:TruncateAction=warn 
  real_T Accelerations[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Accelerations
  SL_Bus_ROSVariableLengthArrayInfo Accelerations_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Effort_SL_Info:TruncateAction=warn 
  real_T Effort[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Effort
  SL_Bus_ROSVariableLengthArrayInfo Effort_SL_Info;

  // MsgType=ros_time/Duration
  SL_Bus_pubgrippercmd_ros_time_Duration TimeFromStart;
} SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_pubgrippercmd_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_pubgrippercmd_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
} SL_Bus_pubgrippercmd_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_std_msgs_String_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_std_msgs_String_

// MsgType=std_msgs/String
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn 
  uint8_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_pubgrippercmd_std_msgs_String;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory_

// MsgType=trajectory_msgs/JointTrajectory
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_pubgrippercmd_std_msgs_Header Header;

  // MsgType=std_msgs/String:PrimitiveROSType=string[]:IsVarLen=1:VarLenCategory=data:VarLenElem=JointNames_SL_Info:TruncateAction=warn 
  SL_Bus_pubgrippercmd_std_msgs_String JointNames[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=JointNames
  SL_Bus_ROSVariableLengthArrayInfo JointNames_SL_Info;

  // MsgType=trajectory_msgs/JointTrajectoryPoint:IsVarLen=1:VarLenCategory=data:VarLenElem=Points_SL_Info:TruncateAction=warn 
  SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint Points[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Points
  SL_Bus_ROSVariableLengthArrayInfo Points_SL_Info;
} SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory;

#endif

#ifndef struct_tag_KSdGoEc2IyOHz4CLi4rcCD
#define struct_tag_KSdGoEc2IyOHz4CLi4rcCD

struct tag_KSdGoEc2IyOHz4CLi4rcCD
{
  int32_T __dummy;
};

#endif                                 //struct_tag_KSdGoEc2IyOHz4CLi4rcCD

#ifndef typedef_f_robotics_slcore_internal_bl_T
#define typedef_f_robotics_slcore_internal_bl_T

typedef tag_KSdGoEc2IyOHz4CLi4rcCD f_robotics_slcore_internal_bl_T;

#endif                                 //typedef_f_robotics_slcore_internal_bl_T

#ifndef struct_tag_3Hmw7UcxkCbDeuTJoUkJ0G
#define struct_tag_3Hmw7UcxkCbDeuTJoUkJ0G

struct tag_3Hmw7UcxkCbDeuTJoUkJ0G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                 //struct_tag_3Hmw7UcxkCbDeuTJoUkJ0G

#ifndef typedef_ros_slros_internal_block_Curr_T
#define typedef_ros_slros_internal_block_Curr_T

typedef tag_3Hmw7UcxkCbDeuTJoUkJ0G ros_slros_internal_block_Curr_T;

#endif                                 //typedef_ros_slros_internal_block_Curr_T

#ifndef struct_tag_D6QYIVJDjoKN0blLVEpT8F
#define struct_tag_D6QYIVJDjoKN0blLVEpT8F

struct tag_D6QYIVJDjoKN0blLVEpT8F
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_D6QYIVJDjoKN0blLVEpT8F

#ifndef typedef_ros_slroscpp_internal_block_P_T
#define typedef_ros_slroscpp_internal_block_P_T

typedef tag_D6QYIVJDjoKN0blLVEpT8F ros_slroscpp_internal_block_P_T;

#endif                                 //typedef_ros_slroscpp_internal_block_P_T
#endif                                 // RTW_HEADER_pubgrippercmd_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
