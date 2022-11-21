/*
 * extctrl_example20200707.c
 *
 * Code generation for model "extctrl_example20200707".
 *
 * Model version              : 1.513
 * Simulink Coder version : 8.2 (R2012a) 29-Dec-2011
 * C source code generated on : Thu Oct  8 16:02:38 2020
 *
 * Target selection: rtw2orca.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "extctrl_example20200707.h"
#include "extctrl_example20200707_private.h"

/* Block parameters (auto storage) */
Parameters_extctrl_example20200707 extctrl_example20200707_DefaultParameters = {
  2.0,                                 /* Variable: amplitude
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  10.0                                 /* Variable: frequency
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
};

/* Model output function */
static void extctrl_example20200707_output(rtModel_extctrl_example20200707 *
  const extctrl_example20200707_rtM, Parameters_extctrl_example20200707
  *extctrl_example20200707_P, BlockIO_extctrl_example20200707
  *extctrl_example20200707_B, D_Work_extctrl_example20200707
  *extctrl_example20200707_DWork, ExternalInputs_extctrl_example20200707
  *extctrl_example20200707_U, ExternalOutputs_extctrl_example20200707
  *extctrl_example20200707_Y)
{
  int32_T i;

  /* set solver stop time */
  if (!(extctrl_example20200707_rtM->Timing.clockTick0+1)) {
    rtsiSetSolverStopTime(extctrl_example20200707_rtM->solverInfo,
                          ((extctrl_example20200707_rtM->Timing.clockTickH0 + 1)
      * extctrl_example20200707_rtM->Timing.stepSize0 * 4294967296.0));
  } else {
    rtsiSetSolverStopTime(extctrl_example20200707_rtM->solverInfo,
                          ((extctrl_example20200707_rtM->Timing.clockTick0 + 1) *
      extctrl_example20200707_rtM->Timing.stepSize0 +
      extctrl_example20200707_rtM->Timing.clockTickH0 *
      extctrl_example20200707_rtM->Timing.stepSize0 * 4294967296.0));
  }

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKp' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKp'
   */
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[0] =
    extctrl_example20200707_U->irb2extrobot0jointiparKp[0];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[1] =
    extctrl_example20200707_U->irb2extrobot0jointiparKp[1];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[2] =
    extctrl_example20200707_U->irb2extrobot0jointiparKp[2];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[3] =
    extctrl_example20200707_U->irb2extrobot0jointiparKp[3];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[4] =
    extctrl_example20200707_U->irb2extrobot0jointiparKp[4];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[5] =
    extctrl_example20200707_U->irb2extrobot0jointiparKp[5];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKv' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKv'
   */
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[0] =
    extctrl_example20200707_U->irb2extrobot0jointiparKv[0];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[1] =
    extctrl_example20200707_U->irb2extrobot0jointiparKv[1];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[2] =
    extctrl_example20200707_U->irb2extrobot0jointiparKv[2];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[3] =
    extctrl_example20200707_U->irb2extrobot0jointiparKv[3];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[4] =
    extctrl_example20200707_U->irb2extrobot0jointiparKv[4];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[5] =
    extctrl_example20200707_U->irb2extrobot0jointiparKv[5];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].parKi' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].parKi'
   */
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[0] =
    extctrl_example20200707_U->irb2extrobot0jointiparKi[0];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[1] =
    extctrl_example20200707_U->irb2extrobot0jointiparKi[1];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[2] =
    extctrl_example20200707_U->irb2extrobot0jointiparKi[2];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[3] =
    extctrl_example20200707_U->irb2extrobot0jointiparKi[3];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[4] =
    extctrl_example20200707_U->irb2extrobot0jointiparKi[4];
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[5] =
    extctrl_example20200707_U->irb2extrobot0jointiparKi[5];

  /* CombinatorialLogic: '<S1>/Logic' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.instruction'
   *  Memory: '<S1>/Memory'
   *  RelationalOperator: '<Root>/Relational Operator'
   *  RelationalOperator: '<Root>/Relational Operator1'
   */
  i = (int32_T)(((uint32_T)(int32_T)(((uint32_T)(89300.0 ==
    extctrl_example20200707_U->irb2extrobot0mocgendatainstruction) << 1) +
    (uint32_T)(89302.0 ==
               extctrl_example20200707_U->irb2extrobot0mocgendatainstruction)) <<
                 1) + (uint32_T)
                extctrl_example20200707_DWork->Memory_PreviousInput);
  extctrl_example20200707_B->Logic[0] =
    extctrl_example20200707_ConstP.Logic_table[(uint32_T)i];
  extctrl_example20200707_B->Logic[1] =
    extctrl_example20200707_ConstP.Logic_table[(uint32_T)i + 8U];

  /* Sin: '<Root>/Sine Wave' */
  if (extctrl_example20200707_DWork->systemEnable != 0) {
    extctrl_example20200707_DWork->lastSin = sin
      (extctrl_example20200707_P->frequency *
       extctrl_example20200707_rtM->Timing.t[0]);
    extctrl_example20200707_DWork->lastCos = cos
      (extctrl_example20200707_P->frequency *
       extctrl_example20200707_rtM->Timing.t[0]);
    extctrl_example20200707_DWork->systemEnable = 0;
  }

  extctrl_example20200707_B->sine = ((extctrl_example20200707_DWork->lastSin *
    0.99918725891521154 + extctrl_example20200707_DWork->lastCos *
    -0.04030907616785482) * 0.99918725891521154 +
    (extctrl_example20200707_DWork->lastCos * 0.99918725891521154 -
     extctrl_example20200707_DWork->lastSin * -0.04030907616785482) *
    0.04030907616785482) * extctrl_example20200707_P->amplitude;

  /* End of Sin: '<Root>/Sine Wave' */

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].posRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].posRef'
   *  Product: '<Root>/Product'
   *  Sum: '<Root>/Add'
   */
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[0] =
    extctrl_example20200707_U->tp1i[0];
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[1] =
    extctrl_example20200707_U->tp1i[1];
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[2] =
    extctrl_example20200707_U->tp1i[2];
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[3] =
    extctrl_example20200707_U->tp1i[3];
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[4] =
    extctrl_example20200707_U->tp1i[4];
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[5] = (real_T)
    extctrl_example20200707_B->Logic[0] * extctrl_example20200707_B->sine +
    extctrl_example20200707_U->tp1i[5];

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.instruction' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.instruction'
   */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatainstruction =
    extctrl_example20200707_U->irb2extrobot0mocgendatainstruction;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value1' */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue1 =
    extctrl_example20200707_B->Logic[0];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].velRef' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].velRef'
   */
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[0] =
    extctrl_example20200707_U->irb2extrobot0jointivelRef[0];
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[1] =
    extctrl_example20200707_U->irb2extrobot0jointivelRef[1];
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[2] =
    extctrl_example20200707_U->irb2extrobot0jointivelRef[2];
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[3] =
    extctrl_example20200707_U->irb2extrobot0jointivelRef[3];
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[4] =
    extctrl_example20200707_U->irb2extrobot0jointivelRef[4];
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[5] =
    extctrl_example20200707_U->irb2extrobot0jointivelRef[5];

  /* Outport: '<Root>/ext2irb.robot[0].joint[i].trqFfw' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].joint[i].trqFfw'
   */
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[0] =
    extctrl_example20200707_U->irb2extrobot0jointitrqFfw[0];
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[1] =
    extctrl_example20200707_U->irb2extrobot0jointitrqFfw[1];
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[2] =
    extctrl_example20200707_U->irb2extrobot0jointitrqFfw[2];
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[3] =
    extctrl_example20200707_U->irb2extrobot0jointitrqFfw[3];
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[4] =
    extctrl_example20200707_U->irb2extrobot0jointitrqFfw[4];
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[5] =
    extctrl_example20200707_U->irb2extrobot0jointitrqFfw[5];
  for (i = 0; i < 20; i++) {
    /* Outport: '<Root>/ext2irb.robot[0].mocgendata.string1[i]' incorporates:
     *  Inport: '<Root>/irb2ext.robot[0].mocgendata.string1[i]'
     */
    extctrl_example20200707_Y->ext2irbrobot0mocgendatastring1i[i] =
      extctrl_example20200707_U->irb2extrobot0mocgendatastring1i[i];

    /* Outport: '<Root>/ext2irb.robot[0].mocgendata.string2[i]' incorporates:
     *  Inport: '<Root>/irb2ext.robot[0].mocgendata.string2[i]'
     */
    extctrl_example20200707_Y->ext2irbrobot0mocgendatastring2i[i] =
      extctrl_example20200707_U->irb2extrobot0mocgendatastring2i[i];
  }

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value2' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value2'
   */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue2 =
    extctrl_example20200707_U->irb2extrobot0mocgendatavalue2;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value3' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value3'
   */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue3 =
    extctrl_example20200707_U->irb2extrobot0mocgendatavalue3;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value4' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value4'
   */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue4 =
    extctrl_example20200707_U->irb2extrobot0mocgendatavalue4;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value5' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value5'
   */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue5 =
    extctrl_example20200707_U->irb2extrobot0mocgendatavalue5;

  /* Outport: '<Root>/ext2irb.robot[0].mocgendata.value6' incorporates:
   *  Inport: '<Root>/irb2ext.robot[0].mocgendata.value6'
   */
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue6 =
    extctrl_example20200707_U->irb2extrobot0mocgendatavalue6;
}

/* Model update function */
static void extctrl_example20200707_update(rtModel_extctrl_example20200707 *
  const extctrl_example20200707_rtM, BlockIO_extctrl_example20200707
  *extctrl_example20200707_B, D_Work_extctrl_example20200707
  *extctrl_example20200707_DWork)
{
  real_T HoldSine;

  /* Update for Memory: '<S1>/Memory' */
  extctrl_example20200707_DWork->Memory_PreviousInput =
    extctrl_example20200707_B->Logic[0];

  /* Update for Sin: '<Root>/Sine Wave' */
  HoldSine = extctrl_example20200707_DWork->lastSin;
  extctrl_example20200707_DWork->lastSin =
    extctrl_example20200707_DWork->lastSin * 0.99918725891521154 +
    extctrl_example20200707_DWork->lastCos * 0.04030907616785482;
  extctrl_example20200707_DWork->lastCos =
    extctrl_example20200707_DWork->lastCos * 0.99918725891521154 - HoldSine *
    0.04030907616785482;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++extctrl_example20200707_rtM->Timing.clockTick0)) {
    ++extctrl_example20200707_rtM->Timing.clockTickH0;
  }

  extctrl_example20200707_rtM->Timing.t[0] = rtsiGetSolverStopTime
    (extctrl_example20200707_rtM->solverInfo);
}

static void ert_extctrl_example20200707_Enable(D_Work_extctrl_example20200707
  *extctrl_example20200707_DWork)
{
  /* Enable for Sin: '<Root>/Sine Wave' */
  extctrl_example20200707_DWork->systemEnable = 1;
}

static void ert_extctrl_example20200707_Initialize
  (rtModel_extctrl_example20200707 *const extctrl_example20200707_rtM,
   BlockIO_extctrl_example20200707 *extctrl_example20200707_B,
   D_Work_extctrl_example20200707 *extctrl_example20200707_DWork,
   ExternalInputs_extctrl_example20200707 *extctrl_example20200707_U,
   ExternalOutputs_extctrl_example20200707 *extctrl_example20200707_Y)
{
  /* InitializeConditions for Memory: '<S1>/Memory' */
  extctrl_example20200707_DWork->Memory_PreviousInput = TRUE;
}

/* Model initialize function */
void extctrl_example20200707_initialize(rtModel_extctrl_example20200707 *const
  extctrl_example20200707_rtM, BlockIO_extctrl_example20200707
  *extctrl_example20200707_B, D_Work_extctrl_example20200707
  *extctrl_example20200707_DWork, ExternalInputs_extctrl_example20200707
  *extctrl_example20200707_U, ExternalOutputs_extctrl_example20200707
  *extctrl_example20200707_Y)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = extctrl_example20200707_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    extctrl_example20200707_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    extctrl_example20200707_rtM->Timing.sampleTimes =
      (&extctrl_example20200707_rtM->Timing.sampleTimesArray[0]);
    extctrl_example20200707_rtM->Timing.offsetTimes =
      (&extctrl_example20200707_rtM->Timing.offsetTimesArray[0]);

    /* task periods */
    extctrl_example20200707_rtM->Timing.sampleTimes[0] = (0.004032);

    /* task offsets */
    extctrl_example20200707_rtM->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(extctrl_example20200707_rtM,
             &extctrl_example20200707_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = extctrl_example20200707_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    extctrl_example20200707_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(extctrl_example20200707_rtM, 9.99936);
  extctrl_example20200707_rtM->Timing.stepSize0 = 0.004032;

  /* Setup for data logging */
  {
    rtliSetLogT(extctrl_example20200707_rtM->rtwLogInfo, "");
    rtliSetLogX(extctrl_example20200707_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(extctrl_example20200707_rtM->rtwLogInfo, "");
    rtliSetSigLog(extctrl_example20200707_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(extctrl_example20200707_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(extctrl_example20200707_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(extctrl_example20200707_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(extctrl_example20200707_rtM->rtwLogInfo, 1);
    rtliSetLogY(extctrl_example20200707_rtM->rtwLogInfo, "");
  }

  extctrl_example20200707_rtM->solverInfoPtr =
    (extctrl_example20200707_rtM->solverInfo);
  extctrl_example20200707_rtM->Timing.stepSize = (0.004032);
  rtsiSetFixedStepSize(extctrl_example20200707_rtM->solverInfo, 0.004032);
  rtsiSetSolverMode(extctrl_example20200707_rtM->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) extctrl_example20200707_B), 0,
                sizeof(BlockIO_extctrl_example20200707));

  {
    extctrl_example20200707_B->sine = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)extctrl_example20200707_DWork, 0,
                sizeof(D_Work_extctrl_example20200707));
  extctrl_example20200707_DWork->lastSin = 0.0;
  extctrl_example20200707_DWork->lastCos = 0.0;

  /* external inputs */
  extctrl_example20200707_U->irb2extrobot0jointiparKp[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKp[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKp[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKp[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKp[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKp[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKv[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKv[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKv[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKv[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKv[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKv[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKi[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKi[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKi[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKi[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKi[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparKi[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMin[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMin[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMin[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMin[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMin[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMin[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMax[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMax[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMax[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMax[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMax[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiparTrqMax[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawAbs[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawAbs[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawAbs[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawAbs[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawAbs[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawAbs[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawFb[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawFb[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawFb[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawFb[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawFb[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposRawFb[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposFlt[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposFlt[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposFlt[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposFlt[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposFlt[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointiposFlt[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRaw[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRaw[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRaw[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRaw[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRaw[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRaw[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelFlt[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelFlt[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelFlt[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelFlt[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelFlt[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelFlt[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelOut[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelOut[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelOut[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelOut[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelOut[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelOut[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRaw[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRaw[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRaw[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRaw[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRaw[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRaw[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRefFlt[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRefFlt[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRefFlt[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRefFlt[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRefFlt[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqRefFlt[5] = 0.0;
  extctrl_example20200707_U->tp1i[0] = 0.0;
  extctrl_example20200707_U->tp1i[1] = 0.0;
  extctrl_example20200707_U->tp1i[2] = 0.0;
  extctrl_example20200707_U->tp1i[3] = 0.0;
  extctrl_example20200707_U->tp1i[4] = 0.0;
  extctrl_example20200707_U->tp1i[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRef[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRef[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRef[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRef[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRef[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointivelRef[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfw[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfw[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfw[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfw[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfw[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfw[5] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfwGrav[0] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfwGrav[1] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfwGrav[2] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfwGrav[3] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfwGrav[4] = 0.0;
  extctrl_example20200707_U->irb2extrobot0jointitrqFfwGrav[5] = 0.0;
  extctrl_example20200707_U->irb2extobtaining = 0.0;
  extctrl_example20200707_U->irb2extmanualMode = 0.0;
  extctrl_example20200707_U->irb2extcontrolActive = 0.0;
  extctrl_example20200707_U->irb2extrobot0mocgendatainstruction = 0.0;
  extctrl_example20200707_U->irb2extrobot0mocgendatavalue1 = 0.0;

  {
    int_T i;
    for (i = 0; i < 20; i++) {
      extctrl_example20200707_U->irb2extrobot0mocgendatastring1i[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 20; i++) {
      extctrl_example20200707_U->irb2extrobot0mocgendatastring2i[i] = 0.0;
    }
  }

  extctrl_example20200707_U->irb2extrobot0mocgendatavalue2 = 0.0;
  extctrl_example20200707_U->irb2extrobot0mocgendatavalue3 = 0.0;
  extctrl_example20200707_U->irb2extrobot0mocgendatavalue4 = 0.0;
  extctrl_example20200707_U->irb2extrobot0mocgendatavalue5 = 0.0;
  extctrl_example20200707_U->irb2extrobot0mocgendatavalue6 = 0.0;

  /* external outputs */
  (void) memset((void *)extctrl_example20200707_Y, 0,
                sizeof(ExternalOutputs_extctrl_example20200707));
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[0] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[1] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[2] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[3] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[4] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKp[5] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[0] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[1] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[2] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[3] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[4] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKv[5] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[0] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[1] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[2] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[3] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[4] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiparKi[5] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[0] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[1] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[2] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[3] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[4] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointiposRef[5] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[0] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[1] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[2] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[3] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[4] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointivelRef[5] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[0] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[1] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[2] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[3] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[4] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0jointitrqFfw[5] = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0mocgendatainstruction = 0.0;

  {
    int_T i;
    for (i = 0; i < 20; i++) {
      extctrl_example20200707_Y->ext2irbrobot0mocgendatastring1i[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 20; i++) {
      extctrl_example20200707_Y->ext2irbrobot0mocgendatastring2i[i] = 0.0;
    }
  }

  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue2 = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue3 = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue4 = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue5 = 0.0;
  extctrl_example20200707_Y->ext2irbrobot0mocgendatavalue6 = 0.0;

  /* Initialize Sizes */
  extctrl_example20200707_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  extctrl_example20200707_rtM->Sizes.numY = (83);/* Number of model outputs */
  extctrl_example20200707_rtM->Sizes.numU = (152);/* Number of model inputs */
  extctrl_example20200707_rtM->Sizes.sysDirFeedThru = (1);/* The model is direct feedthrough */
  extctrl_example20200707_rtM->Sizes.numSampTimes = (1);/* Number of sample times */
  extctrl_example20200707_rtM->Sizes.numBlocks = (24);/* Number of blocks */
  extctrl_example20200707_rtM->Sizes.numBlockIO = (2);/* Number of block outputs */
  extctrl_example20200707_rtM->Sizes.numBlockPrms = (2);/* Sum of parameter "widths" */
}

/* Model terminate function */
void extctrl_example20200707_terminate(void)
{
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
static void MdlOutputs(rtModel_extctrl_example20200707*
  extctrl_example20200707_rtM, int_T tid)
{
  extctrl_example20200707_output(extctrl_example20200707_rtM,
    ((Parameters_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.defaultParam),
    ((BlockIO_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.blockIO),
    ((D_Work_extctrl_example20200707 *) extctrl_example20200707_rtM->Work.dwork),
                                 ((ExternalInputs_extctrl_example20200707 *)
    extctrl_example20200707_rtM->ModelData.inputs),
    ((ExternalOutputs_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.outputs));

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

static void MdlUpdate(rtModel_extctrl_example20200707*
                      extctrl_example20200707_rtM, int_T tid)
{
  extctrl_example20200707_update(extctrl_example20200707_rtM,
    ((BlockIO_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.blockIO),
    ((D_Work_extctrl_example20200707 *) extctrl_example20200707_rtM->Work.dwork));

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

static void MdlInitializeSizes(rtModel_extctrl_example20200707*
  extctrl_example20200707_rtM)
{
}

static void MdlInitializeSampleTimes(rtModel_extctrl_example20200707*
  extctrl_example20200707_rtM)
{
}

static void MdlInitialize(rtModel_extctrl_example20200707*
  extctrl_example20200707_rtM)
{
}

static void MdlStart(rtModel_extctrl_example20200707*
                     extctrl_example20200707_rtM)
{
  ert_extctrl_example20200707_Initialize(extctrl_example20200707_rtM,
    ((BlockIO_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.blockIO),
    ((D_Work_extctrl_example20200707 *) extctrl_example20200707_rtM->Work.dwork),
    ((ExternalInputs_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.inputs),
    ((ExternalOutputs_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.outputs));
  ert_extctrl_example20200707_Enable(((D_Work_extctrl_example20200707 *)
    extctrl_example20200707_rtM->Work.dwork));
}

static void MdlTerminate(rtModel_extctrl_example20200707*
  extctrl_example20200707_rtM)
{
  extctrl_example20200707_terminate();
  rt_FREE(extctrl_example20200707_rtM->solverInfo);

  /* model code */
  {
    void *ptr = extctrl_example20200707_rtM->ModelData.blockIO;
    rt_FREE(ptr);
  }

  {
    real_T *ptr = (real_T *) extctrl_example20200707_rtM->ModelData.inputs;
    rt_FREE(ptr);
  }

  {
    real_T *ptr = (real_T *) extctrl_example20200707_rtM->ModelData.outputs;
    rt_FREE(ptr);
  }

  if (extctrl_example20200707_rtM->ModelData.paramIsMalloced) {
    rt_FREE(extctrl_example20200707_rtM->ModelData.defaultParam);
  }

  rt_FREE(extctrl_example20200707_rtM->Work.dwork);

  {
    void *xptr = (void *) rtliGetLogXSignalPtrs
      (extctrl_example20200707_rtM->rtwLogInfo);
    void *yptr = (void *) rtliGetLogYSignalPtrs
      (extctrl_example20200707_rtM->rtwLogInfo);
    rt_FREE(xptr);
    rt_FREE(yptr);
  }

  rt_FREE(extctrl_example20200707_rtM->rtwLogInfo);
  rt_FREE(extctrl_example20200707_rtM);
}

rtModel_extctrl_example20200707 *extctrl_example20200707(void)
{
  rtModel_extctrl_example20200707 *extctrl_example20200707_rtM;
  extctrl_example20200707_rtM = (rtModel_extctrl_example20200707 *) malloc
    (sizeof(rtModel_extctrl_example20200707));
  if (extctrl_example20200707_rtM == NULL) {
    return NULL;
  }

  (void) memset((char *)extctrl_example20200707_rtM, 0,
                sizeof(rtModel_extctrl_example20200707));

  {
    /* Setup solver object */
    RTWSolverInfo *rt_SolverInfo = (RTWSolverInfo *) malloc(sizeof(RTWSolverInfo));
    rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,rt_SolverInfo);
    extctrl_example20200707_rtM->solverInfo = (rt_SolverInfo);
    rtsiSetSimTimeStepPtr(extctrl_example20200707_rtM->solverInfo,
                          &extctrl_example20200707_rtM->Timing.simTimeStep);
    rtsiSetTPtr(extctrl_example20200707_rtM->solverInfo, &rtmGetTPtr
                (extctrl_example20200707_rtM));
    rtsiSetStepSizePtr(extctrl_example20200707_rtM->solverInfo,
                       &extctrl_example20200707_rtM->Timing.stepSize0);
    rtsiSetErrorStatusPtr(extctrl_example20200707_rtM->solverInfo,
                          (&rtmGetErrorStatus(extctrl_example20200707_rtM)));
    rtsiSetModelMethodsPtr(extctrl_example20200707_rtM->solverInfo,
      &extctrl_example20200707_rtM->modelMethodsInfo);
    rtsiSetRTModelPtr(extctrl_example20200707_rtM->solverInfo,
                      extctrl_example20200707_rtM);
  }

  rtsiSetSolverName(extctrl_example20200707_rtM->solverInfo,"FixedStepDiscrete");

  /* Setup for data logging */
  {
    RTWLogInfo *rt_DataLoggingInfo = (RTWLogInfo *) malloc(sizeof(RTWLogInfo));
    rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,rt_DataLoggingInfo);
    extctrl_example20200707_rtM->rtwLogInfo = rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(extctrl_example20200707_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(extctrl_example20200707_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalInfo(extctrl_example20200707_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(extctrl_example20200707_rtM->rtwLogInfo, (NULL));
  }

  /* block I/O */
  {
    void *b = malloc(sizeof(BlockIO_extctrl_example20200707));
    rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,b);
    extctrl_example20200707_rtM->ModelData.blockIO = (b);
  }

  /* parameters */
  {
    Parameters_extctrl_example20200707 *p;
    static int_T pSeen = FALSE;

    /* only malloc on multiple model instantiation */
    if (pSeen == TRUE ) {
      p = (Parameters_extctrl_example20200707 *) malloc(sizeof
        (Parameters_extctrl_example20200707));
      rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,p);
      (void) memcpy(p, &extctrl_example20200707_DefaultParameters,
                    sizeof(Parameters_extctrl_example20200707));
      extctrl_example20200707_rtM->ModelData.paramIsMalloced = (TRUE);
    } else {
      p = &extctrl_example20200707_DefaultParameters;
      extctrl_example20200707_rtM->ModelData.paramIsMalloced = (FALSE);
      pSeen = TRUE;
    }

    extctrl_example20200707_rtM->ModelData.defaultParam = ((real_T *) p);
  }

  /* states (dwork) */
  {
    void *dwork = (void *) malloc(sizeof(D_Work_extctrl_example20200707));
    D_Work_extctrl_example20200707 *extctrl_example20200707_DWork =
      (D_Work_extctrl_example20200707 *) dwork;
    rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,dwork);
    extctrl_example20200707_rtM->Work.dwork = (dwork);
  }

  /* external inputs */
  {
    ExternalInputs_extctrl_example20200707 *extctrl_example20200707_U =
      (ExternalInputs_extctrl_example20200707 *) malloc(sizeof
      (ExternalInputs_extctrl_example20200707));
    rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,extctrl_example20200707_U);
    extctrl_example20200707_rtM->ModelData.inputs = (((void*)
      extctrl_example20200707_U));
  }

  /* external outputs */
  {
    ExternalOutputs_extctrl_example20200707 *extctrl_example20200707_Y =
      (ExternalOutputs_extctrl_example20200707 *) malloc(sizeof
      (ExternalOutputs_extctrl_example20200707));
    rt_VALIDATE_MEMORY(extctrl_example20200707_rtM,extctrl_example20200707_Y);
    extctrl_example20200707_rtM->ModelData.outputs = (extctrl_example20200707_Y);
  }

  rtmiSetInitSizesFcn((extctrl_example20200707_rtM->modelMethodsInfo),
                      MdlInitializeSizes);
  rtmiSetInitSampTimesFcn((extctrl_example20200707_rtM->modelMethodsInfo),
    MdlInitializeSampleTimes);
  rtmiSetStartFcn((extctrl_example20200707_rtM->modelMethodsInfo), MdlStart);
  rtmiSetOutputsFcn((extctrl_example20200707_rtM->modelMethodsInfo), MdlOutputs);
  rtmiSetUpdateFcn((extctrl_example20200707_rtM->modelMethodsInfo), MdlUpdate);
  rtmiSetDervisFcn((extctrl_example20200707_rtM->modelMethodsInfo), NULL);
  rtmiSetProjectionFcn((extctrl_example20200707_rtM->modelMethodsInfo), NULL);
  rtmiSetMassMatrixFcn((extctrl_example20200707_rtM->modelMethodsInfo), NULL);
  rtmiSetForcingFunctionFcn((extctrl_example20200707_rtM->modelMethodsInfo),
    NULL);
  rtmiSetTerminateFcn((extctrl_example20200707_rtM->modelMethodsInfo),
                      MdlTerminate);
  rtmiSetRTModelPtr((extctrl_example20200707_rtM->modelMethodsInfo),
                    extctrl_example20200707_rtM);
  extctrl_example20200707_initialize(extctrl_example20200707_rtM,
    ((BlockIO_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.blockIO),
    ((D_Work_extctrl_example20200707 *) extctrl_example20200707_rtM->Work.dwork),
                                     ((ExternalInputs_extctrl_example20200707 *)
    extctrl_example20200707_rtM->ModelData.inputs),
    ((ExternalOutputs_extctrl_example20200707 *)
     extctrl_example20200707_rtM->ModelData.outputs));
  return extctrl_example20200707_rtM;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
