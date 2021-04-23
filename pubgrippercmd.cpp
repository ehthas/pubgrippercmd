//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: pubgrippercmd.cpp
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
#include "pubgrippercmd.h"
#include "pubgrippercmd_private.h"

// Model step function
void pubgrippercmdModelClass::step()
{
  static const char_T b[17] = { 'j', 'r', 'i', 'g', 'h', 't', '_', 'g', 'r', 'i',
    'p', '_', 'r', 'h', 'a', 'n', 'd' };

  real_T tmp;
  int32_T i;

  // MATLABSystem: '<Root>/Current Time'
  currentROSTimeDouble(&tmp);

  // MATLAB Function: '<Root>/MATLAB Function1' incorporates:
  //   Constant: '<Root>/Positions1'
  //   Constant: '<S1>/Constant'
  //   Constant: '<S2>/Constant'

  pubgrippercmd_B.blankMsg = pubgrippercmd_P.Constant_Value_a;
  pubgrippercmd_B.msgOut = pubgrippercmd_P.Constant_Value;
  pubgrippercmd_B.blankMsg.TimeFromStart.Sec = 1.0;
  pubgrippercmd_B.msgOut.JointNames_SL_Info.CurrentLength = 1U;
  for (i = 0; i < 17; i++) {
    pubgrippercmd_B.msgOut.JointNames[0].Data[i] = static_cast<uint8_T>(b[i]);
  }

  pubgrippercmd_B.msgOut.JointNames[0].Data_SL_Info.CurrentLength = 17U;
  pubgrippercmd_B.msgOut.Points[0] = pubgrippercmd_B.blankMsg;
  pubgrippercmd_B.msgOut.Points[0].Positions = pubgrippercmd_P.Positions1_Value;
  pubgrippercmd_B.msgOut.Points[0].Positions_SL_Info.CurrentLength = 1U;
  pubgrippercmd_B.msgOut.Points_SL_Info.CurrentLength = 1U;

  // End of MATLAB Function: '<Root>/MATLAB Function1'

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_pubgrippercmd_14.publish(&pubgrippercmd_B.msgOut);

  // End of Outputs for SubSystem: '<Root>/Publish1'
}

// Model initialize function
void pubgrippercmdModelClass::initialize()
{
  {
    static const char_T tmp[34] = { '/', 'm', 'h', 'u', 'm', 'a', 'n', '/', 'g',
      'r', 'i', 'p', 'p', 'e', 'r', '_', 'c', 'o', 'n', 't', 'r', 'o', 'l', 'l',
      'e', 'r', '/', 'c', 'o', 'm', 'm', 'a', 'n', 'd' };

    int32_T i;
    char_T b_zeroDelimTopic[35];

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    pubgrippercmd_DW.obj_g.matlabCodegenIsDeleted = false;
    pubgrippercmd_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 34; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[34] = '\x00';
    Pub_pubgrippercmd_14.createPublisher(&b_zeroDelimTopic[0], 1);
    pubgrippercmd_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // Start for MATLABSystem: '<Root>/Current Time'
    pubgrippercmd_DW.obj.matlabCodegenIsDeleted = false;
    pubgrippercmd_DW.obj.isInitialized = 1;
    pubgrippercmd_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void pubgrippercmdModelClass::terminate()
{
  // Terminate for MATLABSystem: '<Root>/Current Time'
  if (!pubgrippercmd_DW.obj.matlabCodegenIsDeleted) {
    pubgrippercmd_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Current Time'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!pubgrippercmd_DW.obj_g.matlabCodegenIsDeleted) {
    pubgrippercmd_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'
}

// Constructor
pubgrippercmdModelClass::pubgrippercmdModelClass() :
  pubgrippercmd_B(),
  pubgrippercmd_DW(),
  pubgrippercmd_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
pubgrippercmdModelClass::~pubgrippercmdModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
pubgrippercmdModelClass::RT_MODEL_pubgrippercmd_T * pubgrippercmdModelClass::
  getRTM()
{
  return (&pubgrippercmd_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
