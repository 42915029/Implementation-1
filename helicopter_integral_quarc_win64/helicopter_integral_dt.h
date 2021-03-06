/*
 * helicopter_integral_dt.h
 *
 * Code generation for model "helicopter_integral".
 *
 * Model version              : 1.32
 * Simulink Coder version : 8.2 (R2012a) 29-Dec-2011
 * C source code generated on : Fri Sep 18 14:59:51 2015
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_game_controller),
  sizeof(t_card),
  sizeof(t_task),
  sizeof(t_boolean)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_game_controller",
  "t_card",
  "t_task",
  "t_boolean"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&helicopter_integral_B.Program1Joystick2), 0, 0, 63 },

  { (char_T *)(&helicopter_integral_B.Constant_k), 3, 0, 1 },

  { (char_T *)(&helicopter_integral_B.GameController_o2[0]), 8, 0, 32 }
  ,

  { (char_T *)(&helicopter_integral_DWork.HILInitialize_AIMinimums[0]), 0, 0, 31
  },

  { (char_T *)(&helicopter_integral_DWork.GameController_Controller), 14, 0, 1 },

  { (char_T *)(&helicopter_integral_DWork.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&helicopter_integral_DWork.HILReadEncoderTimebase_Task), 16, 0, 1
  },

  { (char_T *)(&helicopter_integral_DWork.HILWriteAnalog_PWORK), 11, 0, 6 },

  { (char_T *)(&helicopter_integral_DWork.HILInitialize_DOStates[0]), 6, 0, 19 },

  { (char_T *)(&helicopter_integral_DWork.HILInitialize_DOBits[0]), 8, 0, 8 },

  { (char_T *)(&helicopter_integral_DWork.HILWriteDigital_Buffer[0]), 17, 0, 4 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  11U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&helicopter_integral_P.Gain1_Gain), 0, 0, 176 },

  { (char_T *)(&helicopter_integral_P.HILInitialize_CKChannels[0]), 6, 0, 8 },

  { (char_T *)(&helicopter_integral_P.HILInitialize_AIChannels[0]), 7, 0, 39 },

  { (char_T *)(&helicopter_integral_P.GameController_BufferSize), 5, 0, 1 },

  { (char_T *)(&helicopter_integral_P.SwitchControl_Threshold), 3, 0, 3 },

  { (char_T *)(&helicopter_integral_P.HILInitialize_Active), 8, 0, 40 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  6U,
  rtPTransitions
};

/* [EOF] helicopter_integral_dt.h */
