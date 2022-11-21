/*
 * extctrl_example.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "extctrl_example".
 *
 * Model version              : 1.514
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Thu Oct  8 16:55:50 2020
 *
 * Target selection: rtw2orca.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "extctrl_example.h"
#include "extctrl_example_private.h"

/* Block parameters (default storage) */
P_extctrl_example_T extctrl_example_P = {
  /* Variable: amplitude
   * Referenced by: '<Root>/Sine Wave'
   */
  2.0,

  /* Variable: frequency
   * Referenced by: '<Root>/Sine Wave'
   */
  10.0
};

/* Model output function */
static void extctrl_example_output(rtModel_extctrl_example_T *const
  extctrl_example_rtM)
{
  B_extctrl_example_T *extctrl_example_B = ((B_extctrl_example_T *)
    extctrl_example_rtM->blockIO);
  DW_extctrl_example_T *extctrl_example_DW = ((DW_extctrl_example_T *)
    extctrl_example_rtM->dwork);
  ExtU_extctrl_example_T *extctrl_example_U = (ExtU_extctrl_example_T *)
    extctrl_example_rtM->inputs;
  ExtY_extctrl_example_T *extctrl_example_Y = (ExtY_extctrl_example_T *)
    extctrl_example_rtM->outputs;
  int32_T rowIdx;
  real_T lastSin_tmp;

  /* set solver stop time */
  if (!(extctrl_example_rtM->Timing.clockTick0+1)) {
    rtsiSetSolverStopTime(extctrl_example_rtM->solverInfo,
                          ((extctrl_example_rtM->Timing.clockTickH0 + 1) *
      extctrl_example_rtM->Timing.stepSize0 * 4294967296.0));
  } else {
    rtsiSetSolverStopTime(extctrl_example_rtM->solverInfo,
                          ((extctrl_example_rtM->Timing.clockTick0 + 1) *
      extctrl_example_rtM->Timing.stepSize0 +
      extctrl_example_rtM->Timing.clockTickH0 *
      extctrl_example_rtM->Timing.stepSize0 * 4294967296.0));
  }

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKp[0] =
    extctrl_example_U->irb2extrobot0jointiparKp[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKv[0] =
    extctrl_example_U->irb2extrobot0jointiparKv[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKi[0] =
    extctrl_example_U->irb2extrobot0jointiparKi[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKp[1] =
    extctrl_example_U->irb2extrobot0jointiparKp[1];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKv[1] =
    extctrl_example_U->irb2extrobot0jointiparKv[1];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKi[1] =
    extctrl_example_U->irb2extrobot0jointiparKi[1];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKp[2] =
    extctrl_example_U->irb2extrobot0jointiparKp[2];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKv[2] =
    extctrl_example_U->irb2extrobot0jointiparKv[2];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKi[2] =
    extctrl_example_U->irb2extrobot0jointiparKi[2];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKp[3] =
    extctrl_example_U->irb2extrobot0jointiparKp[3];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKv[3] =
    extctrl_example_U->irb2extrobot0jointiparKv[3];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKi[3] =
    extctrl_example_U->irb2extrobot0jointiparKi[3];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKp[4] =
    extctrl_example_U->irb2extrobot0jointiparKp[4];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKv[4] =
    extctrl_example_U->irb2extrobot0jointiparKv[4];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKi[4] =
    extctrl_example_U->irb2extrobot0jointiparKi[4];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKp[5] =
    extctrl_example_U->irb2extrobot0jointiparKp[5];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKv[5] =
    extctrl_example_U->irb2extrobot0jointiparKv[5];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example_Y->ext2irbrobot0jointiparKi[5] =
    extctrl_example_U->irb2extrobot0jointiparKi[5];

  /* CombinatorialLogic: '<S1>/Logic' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.instruction'
   *  Memory: '<S1>/Memory'
   *  RelationalOperator: '<Root>/Relational Operator'
   *  RelationalOperator: '<Root>/Relational Operator1'
   */
  rowIdx = (int32_T)(((((uint32_T)(89300.0 ==
    extctrl_example_U->irb2extrobot0mocgendatainstruction) << 1) + (89302.0 ==
    extctrl_example_U->irb2extrobot0mocgendatainstruction)) << 1) +
                     extctrl_example_DW->Memory_PreviousInput);
  extctrl_example_B->Logic[0U] = extctrl_example_ConstP.Logic_table[(uint32_T)
    rowIdx];
  extctrl_example_B->Logic[1U] = extctrl_example_ConstP.Logic_table[rowIdx + 8U];

  /* Sin: '<Root>/Sine Wave' */
  if (extctrl_example_DW->systemEnable != 0) {
    lastSin_tmp = extctrl_example_P.frequency * extctrl_example_rtM->Timing.t[0];
    extctrl_example_DW->lastSin = sin(lastSin_tmp);
    extctrl_example_DW->lastCos = cos(lastSin_tmp);
    extctrl_example_DW->systemEnable = 0;
  }

  extctrl_example_B->sine = ((extctrl_example_DW->lastSin * 0.99918725891521154
    + extctrl_example_DW->lastCos * -0.04030907616785482) * 0.99918725891521154
    + (extctrl_example_DW->lastCos * 0.99918725891521154 -
       extctrl_example_DW->lastSin * -0.04030907616785482) * 0.04030907616785482)
    * extctrl_example_P.amplitude;

  /* End of Sin: '<Root>/Sine Wave' */

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].posRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].posRef'
   *  Product: '<Root>/Product'
   *  Sum: '<Root>/Add'
   */
  extctrl_example_Y->ext2irbrobot0jointiposRef[0] = extctrl_example_U->tp1i[0];
  extctrl_example_Y->ext2irbrobot0jointiposRef[1] = extctrl_example_U->tp1i[1];
  extctrl_example_Y->ext2irbrobot0jointiposRef[2] = extctrl_example_U->tp1i[2];
  extctrl_example_Y->ext2irbrobot0jointiposRef[3] = extctrl_example_U->tp1i[3];
  extctrl_example_Y->ext2irbrobot0jointiposRef[4] = extctrl_example_U->tp1i[4];
  extctrl_example_Y->ext2irbrobot0jointiposRef[5] = (real_T)
    extctrl_example_B->Logic[0] * extctrl_example_B->sine +
    extctrl_example_U->tp1i[5];

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.instruction' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.instruction'
   */
  extctrl_example_Y->ext2irbrobot0mocgendatainstruction =
    extctrl_example_U->irb2extrobot0mocgendatainstruction;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value1' */
  extctrl_example_Y->ext2irbrobot0mocgendatavalue1 = extctrl_example_B->Logic[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example_Y->ext2irbrobot0jointivelRef[0] =
    extctrl_example_U->irb2extrobot0jointivelRef[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example_Y->ext2irbrobot0jointitrqFfw[0] =
    extctrl_example_U->irb2extrobot0jointitrqFfw[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example_Y->ext2irbrobot0jointivelRef[1] =
    extctrl_example_U->irb2extrobot0jointivelRef[1];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example_Y->ext2irbrobot0jointitrqFfw[1] =
    extctrl_example_U->irb2extrobot0jointitrqFfw[1];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example_Y->ext2irbrobot0jointivelRef[2] =
    extctrl_example_U->irb2extrobot0jointivelRef[2];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example_Y->ext2irbrobot0jointitrqFfw[2] =
    extctrl_example_U->irb2extrobot0jointitrqFfw[2];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example_Y->ext2irbrobot0jointivelRef[3] =
    extctrl_example_U->irb2extrobot0jointivelRef[3];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example_Y->ext2irbrobot0jointitrqFfw[3] =
    extctrl_example_U->irb2extrobot0jointitrqFfw[3];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example_Y->ext2irbrobot0jointivelRef[4] =
    extctrl_example_U->irb2extrobot0jointivelRef[4];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example_Y->ext2irbrobot0jointitrqFfw[4] =
    extctrl_example_U->irb2extrobot0jointitrqFfw[4];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example_Y->ext2irbrobot0jointivelRef[5] =
    extctrl_example_U->irb2extrobot0jointivelRef[5];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example_Y->ext2irbrobot0jointitrqFfw[5] =
    extctrl_example_U->irb2extrobot0jointitrqFfw[5];

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.string1[i]' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.string1[i]'
   */
  memcpy(&extctrl_example_Y->ext2irbrobot0mocgendatastring1i[0],
         &extctrl_example_U->irb2extrobot0mocgendatastring1i[0], 20U * sizeof
         (real_T));

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.string2[i]' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.string2[i]'
   */
  memcpy(&extctrl_example_Y->ext2irbrobot0mocgendatastring2i[0],
         &extctrl_example_U->irb2extrobot0mocgendatastring2i[0], 20U * sizeof
         (real_T));

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value2' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value2'
   */
  extctrl_example_Y->ext2irbrobot0mocgendatavalue2 =
    extctrl_example_U->irb2extrobot0mocgendatavalue2;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value3' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value3'
   */
  extctrl_example_Y->ext2irbrobot0mocgendatavalue3 =
    extctrl_example_U->irb2extrobot0mocgendatavalue3;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value4' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value4'
   */
  extctrl_example_Y->ext2irbrobot0mocgendatavalue4 =
    extctrl_example_U->irb2extrobot0mocgendatavalue4;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value5' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value5'
   */
  extctrl_example_Y->ext2irbrobot0mocgendatavalue5 =
    extctrl_example_U->irb2extrobot0mocgendatavalue5;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value6' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value6'
   */
  extctrl_example_Y->ext2irbrobot0mocgendatavalue6 =
    extctrl_example_U->irb2extrobot0mocgendatavalue6;
}

/* Model update function */
static void extctrl_example_update(rtModel_extctrl_example_T *const
  extctrl_example_rtM)
{
  B_extctrl_example_T *extctrl_example_B = ((B_extctrl_example_T *)
    extctrl_example_rtM->blockIO);
  DW_extctrl_example_T *extctrl_example_DW = ((DW_extctrl_example_T *)
    extctrl_example_rtM->dwork);
  real_T HoldSine;

  /* Update for Memory: '<S1>/Memory' */
  extctrl_example_DW->Memory_PreviousInput = extctrl_example_B->Logic[0];

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = extctrl_example_DW->lastSin;
  extctrl_example_DW->lastSin = extctrl_example_DW->lastSin *
    0.99918725891521154 + extctrl_example_DW->lastCos * 0.04030907616785482;
  extctrl_example_DW->lastCos = extctrl_example_DW->lastCos *
    0.99918725891521154 - HoldSine * 0.04030907616785482;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++extctrl_example_rtM->Timing.clockTick0)) {
    ++extctrl_example_rtM->Timing.clockTickH0;
  }

  extctrl_example_rtM->Timing.t[0] = rtsiGetSolverStopTime
    (extctrl_example_rtM->solverInfo);
}

/* Model initialize function */
static void extctrl_example_initialize(rtModel_extctrl_example_T *const
  extctrl_example_rtM)
{
  DW_extctrl_example_T *extctrl_example_DW = ((DW_extctrl_example_T *)
    extctrl_example_rtM->dwork);

  /* InitializeConditions for Memory: '<S1>/Memory' */
  extctrl_example_DW->Memory_PreviousInput = true;

  /* Enable for Sin: '<Root>/Sine Wave' */
  extctrl_example_DW->systemEnable = 1;
}

/* Model terminate function */
static void extctrl_example_terminate(rtModel_extctrl_example_T
  * extctrl_example_rtM)
{
  rt_FREE(extctrl_example_rtM->solverInfo);

  /* model code */
  rt_FREE(extctrl_example_rtM->blockIO);
  rt_FREE(extctrl_example_rtM->inputs);
  rt_FREE(extctrl_example_rtM->outputs);
  rt_FREE(extctrl_example_rtM->dwork);

  {
    void *xptr = (void *) rtliGetLogXSignalPtrs(extctrl_example_rtM->rtwLogInfo);
    void *yptr = (void *) rtliGetLogYSignalPtrs(extctrl_example_rtM->rtwLogInfo);
    rt_FREE(xptr);
    rt_FREE(yptr);
  }

  rt_FREE(extctrl_example_rtM->rtwLogInfo);
  rt_FREE(extctrl_example_rtM);
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
static void MdlOutputs(rtModel_extctrl_example_T* extctrl_example_rtM, int_T tid)
{
  extctrl_example_output(extctrl_example_rtM);
  UNUSED_PARAMETER(tid);
}

static void MdlUpdate(rtModel_extctrl_example_T* extctrl_example_rtM, int_T tid)
{
  extctrl_example_update(extctrl_example_rtM);
  UNUSED_PARAMETER(tid);
}

static void MdlInitializeSizes(rtModel_extctrl_example_T* extctrl_example_rtM)
{
  /* extctrl_example_rtM is required for backward compatibility.
   * Argument extctrl_example_rtM is not used in the function. */
  UNUSED_PARAMETER(extctrl_example_rtM);
}

static void MdlInitializeSampleTimes(rtModel_extctrl_example_T
  * extctrl_example_rtM)
{
  /* extctrl_example_rtM is required for backward compatibility.
   * Argument extctrl_example_rtM is not used in the function. */
  UNUSED_PARAMETER(extctrl_example_rtM);
}

static void MdlStart(rtModel_extctrl_example_T* extctrl_example_rtM)
{
  extctrl_example_initialize(extctrl_example_rtM);
}

static void MdlTerminate(rtModel_extctrl_example_T* extctrl_example_rtM)
{
  extctrl_example_terminate(extctrl_example_rtM);
}

/* Registration function */
rtModel_extctrl_example_T *extctrl_example(void)
{
  rtModel_extctrl_example_T *extctrl_example_rtM;
  extctrl_example_rtM = (rtModel_extctrl_example_T *) malloc(sizeof
    (rtModel_extctrl_example_T));
  if (extctrl_example_rtM == NULL) {
    return NULL;
  }

  (void) memset((char *)extctrl_example_rtM, 0,
                sizeof(rtModel_extctrl_example_T));

  {
    /* Setup solver object */
    RTWSolverInfo *rt_SolverInfo = (RTWSolverInfo *) malloc(sizeof(RTWSolverInfo));
    rt_VALIDATE_MEMORY(extctrl_example_rtM,rt_SolverInfo);
    extctrl_example_rtM->solverInfo = (rt_SolverInfo);
    rtsiSetTPtr(extctrl_example_rtM->solverInfo, &rtmGetTPtr(extctrl_example_rtM));
    rtsiSetStepSizePtr(extctrl_example_rtM->solverInfo,
                       &extctrl_example_rtM->Timing.stepSize0);
    rtsiSetErrorStatusPtr(extctrl_example_rtM->solverInfo, (&rtmGetErrorStatus
      (extctrl_example_rtM)));
    rtsiSetModelMethodsPtr(extctrl_example_rtM->solverInfo,
      &extctrl_example_rtM->modelMethodsInfo);
    rtsiSetRTModelPtr(extctrl_example_rtM->solverInfo, extctrl_example_rtM);
  }

  rtsiSetSolverName(extctrl_example_rtM->solverInfo,"FixedStepDiscrete");

  /* Setup for data logging */
  {
    RTWLogInfo *rt_DataLoggingInfo = (RTWLogInfo *) malloc(sizeof(RTWLogInfo));
    rt_VALIDATE_MEMORY(extctrl_example_rtM,rt_DataLoggingInfo);
    rt_DataLoggingInfo->loggingInterval = NULL;
    extctrl_example_rtM->rtwLogInfo = rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(extctrl_example_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(extctrl_example_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalInfo(extctrl_example_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(extctrl_example_rtM->rtwLogInfo, (NULL));
  }

  /* block I/O */
  {
    void *b = malloc(sizeof(B_extctrl_example_T));
    rt_VALIDATE_MEMORY(extctrl_example_rtM,b);
    extctrl_example_rtM->blockIO = (b);
  }

  /* parameters */
  extctrl_example_rtM->defaultParam = ((real_T *)&extctrl_example_P);

  /* states (dwork) */
  {
    void *dwork = (void *) malloc(sizeof(DW_extctrl_example_T));
    DW_extctrl_example_T *extctrl_example_DW = (DW_extctrl_example_T *) dwork;
    rt_VALIDATE_MEMORY(extctrl_example_rtM,dwork);
    extctrl_example_rtM->dwork = (dwork);
  }

  /* external inputs */
  {
    ExtU_extctrl_example_T *extctrl_example_U = (ExtU_extctrl_example_T *)
      malloc(sizeof(ExtU_extctrl_example_T));
    rt_VALIDATE_MEMORY(extctrl_example_rtM,extctrl_example_U);
    extctrl_example_rtM->inputs = (((void*) extctrl_example_U));
  }

  /* external outputs */
  {
    ExtY_extctrl_example_T *extctrl_example_Y = (ExtY_extctrl_example_T *)
      malloc(sizeof(ExtY_extctrl_example_T));
    rt_VALIDATE_MEMORY(extctrl_example_rtM,extctrl_example_Y);
    extctrl_example_rtM->outputs = (extctrl_example_Y);
  }

  rtmiSetInitSizesFcn((extctrl_example_rtM->modelMethodsInfo),
                      MdlInitializeSizes);
  rtmiSetInitSampTimesFcn((extctrl_example_rtM->modelMethodsInfo),
    MdlInitializeSampleTimes);
  rtmiSetStartFcn((extctrl_example_rtM->modelMethodsInfo), MdlStart);
  rtmiSetOutputsFcn((extctrl_example_rtM->modelMethodsInfo), MdlOutputs);
  rtmiSetUpdateFcn((extctrl_example_rtM->modelMethodsInfo), MdlUpdate);
  rtmiSetDervisFcn((extctrl_example_rtM->modelMethodsInfo), NULL);
  rtmiSetProjectionFcn((extctrl_example_rtM->modelMethodsInfo), NULL);
  rtmiSetMassMatrixFcn((extctrl_example_rtM->modelMethodsInfo), NULL);
  rtmiSetForcingFunctionFcn((extctrl_example_rtM->modelMethodsInfo), NULL);
  rtmiSetTerminateFcn((extctrl_example_rtM->modelMethodsInfo), MdlTerminate);
  rtmiSetRTModelPtr((extctrl_example_rtM->modelMethodsInfo), extctrl_example_rtM);

  {
    B_extctrl_example_T *extctrl_example_B = ((B_extctrl_example_T *)
      extctrl_example_rtM->blockIO);
    DW_extctrl_example_T *extctrl_example_DW = ((DW_extctrl_example_T *)
      extctrl_example_rtM->dwork);
    ExtU_extctrl_example_T *extctrl_example_U = (ExtU_extctrl_example_T *)
      extctrl_example_rtM->inputs;
    ExtY_extctrl_example_T *extctrl_example_Y = (ExtY_extctrl_example_T *)
      extctrl_example_rtM->outputs;

    /* initialize non-finites */
    rt_InitInfAndNaN(sizeof(real_T));

    /* Initialize timing info */
    {
      int_T *mdlTsMap = extctrl_example_rtM->Timing.sampleTimeTaskIDArray;
      mdlTsMap[0] = 0;
      extctrl_example_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
      extctrl_example_rtM->Timing.sampleTimes =
        (&extctrl_example_rtM->Timing.sampleTimesArray[0]);
      extctrl_example_rtM->Timing.offsetTimes =
        (&extctrl_example_rtM->Timing.offsetTimesArray[0]);

      /* task periods */
      extctrl_example_rtM->Timing.sampleTimes[0] = (0.004032);

      /* task offsets */
      extctrl_example_rtM->Timing.offsetTimes[0] = (0.0);
    }

    rtmSetTPtr(extctrl_example_rtM, &extctrl_example_rtM->Timing.tArray[0]);

    {
      int_T *mdlSampleHits = extctrl_example_rtM->Timing.sampleHitArray;
      mdlSampleHits[0] = 1;
      extctrl_example_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
    }

    rtmSetTFinal(extctrl_example_rtM, 9.99936);
    extctrl_example_rtM->Timing.stepSize0 = 0.004032;

    /* Setup for data logging */
    {
      rtliSetLogT(extctrl_example_rtM->rtwLogInfo, "");
      rtliSetLogX(extctrl_example_rtM->rtwLogInfo, "");
      rtliSetLogXFinal(extctrl_example_rtM->rtwLogInfo, "");
      rtliSetLogVarNameModifier(extctrl_example_rtM->rtwLogInfo, "rt_");
      rtliSetLogFormat(extctrl_example_rtM->rtwLogInfo, 0);
      rtliSetLogMaxRows(extctrl_example_rtM->rtwLogInfo, 1000);
      rtliSetLogDecimation(extctrl_example_rtM->rtwLogInfo, 1);
      rtliSetLogY(extctrl_example_rtM->rtwLogInfo, "");
    }

    extctrl_example_rtM->solverInfoPtr = (extctrl_example_rtM->solverInfo);
    extctrl_example_rtM->Timing.stepSize = (0.004032);
    rtsiSetFixedStepSize(extctrl_example_rtM->solverInfo, 0.004032);
    rtsiSetSolverMode(extctrl_example_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

    /* block I/O */
    (void) memset(((void *) extctrl_example_B), 0,
                  sizeof(B_extctrl_example_T));

    {
      extctrl_example_B->sine = 0.0;
    }

    /* states (dwork) */
    (void) memset((void *)extctrl_example_DW, 0,
                  sizeof(DW_extctrl_example_T));
    extctrl_example_DW->lastSin = 0.0;
    extctrl_example_DW->lastCos = 0.0;

    /* external inputs */
    {
      int32_T i;
      extctrl_example_U->irb2extrobot0jointiparKp[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKp[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKp[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKp[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKp[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKp[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKv[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKv[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKv[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKv[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKv[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKv[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKi[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKi[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKi[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKi[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKi[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparKi[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMin[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMin[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMin[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMin[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMin[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMin[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMax[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMax[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMax[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMax[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMax[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiparTrqMax[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawAbs[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawAbs[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawAbs[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawAbs[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawAbs[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawAbs[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawFb[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawFb[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawFb[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawFb[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawFb[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposRawFb[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposFlt[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposFlt[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposFlt[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposFlt[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposFlt[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointiposFlt[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRaw[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRaw[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRaw[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRaw[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRaw[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRaw[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelFlt[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelFlt[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelFlt[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelFlt[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelFlt[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelFlt[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelOut[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelOut[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelOut[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelOut[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelOut[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelOut[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRaw[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRaw[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRaw[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRaw[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRaw[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRaw[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRefFlt[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRefFlt[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRefFlt[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRefFlt[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRefFlt[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqRefFlt[5] = 0.0;
      extctrl_example_U->tp1i[0] = 0.0;
      extctrl_example_U->tp1i[1] = 0.0;
      extctrl_example_U->tp1i[2] = 0.0;
      extctrl_example_U->tp1i[3] = 0.0;
      extctrl_example_U->tp1i[4] = 0.0;
      extctrl_example_U->tp1i[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRef[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRef[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRef[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRef[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRef[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointivelRef[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfw[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfw[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfw[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfw[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfw[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfw[5] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfwGrav[0] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfwGrav[1] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfwGrav[2] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfwGrav[3] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfwGrav[4] = 0.0;
      extctrl_example_U->irb2extrobot0jointitrqFfwGrav[5] = 0.0;
      extctrl_example_U->irb2extobtaining = 0.0;
      extctrl_example_U->irb2extmanualMode = 0.0;
      extctrl_example_U->irb2extcontrolActive = 0.0;
      extctrl_example_U->irb2extrobot0mocgendatainstruction = 0.0;
      extctrl_example_U->irb2extrobot0mocgendatavalue1 = 0.0;
      for (i = 0; i < 20; i++) {
        extctrl_example_U->irb2extrobot0mocgendatastring1i[i] = 0.0;
        extctrl_example_U->irb2extrobot0mocgendatastring2i[i] = 0.0;
      }

      extctrl_example_U->irb2extrobot0mocgendatavalue2 = 0.0;
      extctrl_example_U->irb2extrobot0mocgendatavalue3 = 0.0;
      extctrl_example_U->irb2extrobot0mocgendatavalue4 = 0.0;
      extctrl_example_U->irb2extrobot0mocgendatavalue5 = 0.0;
      extctrl_example_U->irb2extrobot0mocgendatavalue6 = 0.0;
    }

    /* external outputs */
    (void) memset((void *)extctrl_example_Y, 0,
                  sizeof(ExtY_extctrl_example_T));
    extctrl_example_Y->ext2irbrobot0jointiparKp[0] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKp[1] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKp[2] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKp[3] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKp[4] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKp[5] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKv[0] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKv[1] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKv[2] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKv[3] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKv[4] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKv[5] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKi[0] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKi[1] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKi[2] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKi[3] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKi[4] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiparKi[5] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiposRef[0] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiposRef[1] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiposRef[2] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiposRef[3] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiposRef[4] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointiposRef[5] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointivelRef[0] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointivelRef[1] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointivelRef[2] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointivelRef[3] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointivelRef[4] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointivelRef[5] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointitrqFfw[0] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointitrqFfw[1] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointitrqFfw[2] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointitrqFfw[3] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointitrqFfw[4] = 0.0;
    extctrl_example_Y->ext2irbrobot0jointitrqFfw[5] = 0.0;
    extctrl_example_Y->ext2irbrobot0mocgendatainstruction = 0.0;

    {
      int32_T i;
      for (i = 0; i < 20; i++) {
        extctrl_example_Y->ext2irbrobot0mocgendatastring1i[i] = 0.0;
      }
    }

    {
      int32_T i;
      for (i = 0; i < 20; i++) {
        extctrl_example_Y->ext2irbrobot0mocgendatastring2i[i] = 0.0;
      }
    }

    extctrl_example_Y->ext2irbrobot0mocgendatavalue2 = 0.0;
    extctrl_example_Y->ext2irbrobot0mocgendatavalue3 = 0.0;
    extctrl_example_Y->ext2irbrobot0mocgendatavalue4 = 0.0;
    extctrl_example_Y->ext2irbrobot0mocgendatavalue5 = 0.0;
    extctrl_example_Y->ext2irbrobot0mocgendatavalue6 = 0.0;

    /* Initialize Sizes */
    extctrl_example_rtM->Sizes.numContStates = (0);/* Number of continuous states */
    extctrl_example_rtM->Sizes.numY = (83);/* Number of model outputs */
    extctrl_example_rtM->Sizes.numU = (152);/* Number of model inputs */
    extctrl_example_rtM->Sizes.sysDirFeedThru = (1);/* The model is direct feedthrough */
    extctrl_example_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
    extctrl_example_rtM->Sizes.numBlocks = (24);/* Number of blocks */
    extctrl_example_rtM->Sizes.numBlockIO = (2);/* Number of block outputs */
    extctrl_example_rtM->Sizes.numBlockPrms = (2);/* Sum of parameter "widths" */
  }

  return extctrl_example_rtM;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
