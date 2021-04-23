//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: pubgrippercmd.h
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
#ifndef RTW_HEADER_pubgrippercmd_h_
#define RTW_HEADER_pubgrippercmd_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "pubgrippercmd_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model pubgrippercmd
class pubgrippercmdModelClass {
  // public data and function members
 public:
  // Block signals (default storage)
  typedef struct {
    SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory msgOut;// '<Root>/MATLAB Function1' 
    SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint blankMsg;
  } B_pubgrippercmd_T;

  // Block states (default storage) for system '<Root>'
  typedef struct {
    ros_slros_internal_block_Curr_T obj;// '<Root>/Current Time'
    ros_slroscpp_internal_block_P_T obj_g;// '<S4>/SinkBlock'
  } DW_pubgrippercmd_T;

  // Parameters (default storage)
  struct P_pubgrippercmd_T {
    SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectory Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S2>/Constant'

    SL_Bus_pubgrippercmd_trajectory_msgs_JointTrajectoryPoint Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                      //  Referenced by: '<S1>/Constant'

    real_T Positions1_Value;           // Expression: [0.02]
                                          //  Referenced by: '<Root>/Positions1'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_pubgrippercmd_T {
    const char_T *errorStatus;
  };

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  pubgrippercmdModelClass();

  // Destructor
  ~pubgrippercmdModelClass();

  // Real-Time Model get method
  pubgrippercmdModelClass::RT_MODEL_pubgrippercmd_T * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  static P_pubgrippercmd_T pubgrippercmd_P;

  // Block signals
  B_pubgrippercmd_T pubgrippercmd_B;

  // Block states
  DW_pubgrippercmd_T pubgrippercmd_DW;

  // Real-Time Model
  RT_MODEL_pubgrippercmd_T pubgrippercmd_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Display1' : Unused code path elimination
//  Block '<Root>/Display2' : Unused code path elimination


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
//  '<Root>' : 'pubgrippercmd'
//  '<S1>'   : 'pubgrippercmd/Blank Point Message'
//  '<S2>'   : 'pubgrippercmd/Blank Trajectory Message'
//  '<S3>'   : 'pubgrippercmd/MATLAB Function1'
//  '<S4>'   : 'pubgrippercmd/Publish1'

#endif                                 // RTW_HEADER_pubgrippercmd_h_

//
// File trailer for generated code.
//
// [EOF]
//
