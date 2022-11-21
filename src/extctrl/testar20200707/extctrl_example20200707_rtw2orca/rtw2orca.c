#include "rtw2orca.h"
#include "rtmodel.h"
#include "rt_sim.h"
#include "extctrl_example20200707.h"

extern struct rtModel_extctrl_example20200707 *extctrl_example20200707(void);
#define INITIALIZE_SIZES(M) \
    rtmiInitializeSizes(rtmGetRTWRTModelMethodsInfo(M))
#define INITIALIZE_SAMPLE_TIMES(M) \
    rtmiInitializeSampleTimes(rtmGetRTWRTModelMethodsInfo(M))
#define START(M) rtmiStart(rtmGetRTWRTModelMethodsInfo(M))
#define OUTPUTS(M,tid) rtmiOutputs(rtmGetRTWRTModelMethodsInfo(M),tid)
#define UPDATE(M,tid) rtmiUpdate(rtmGetRTWRTModelMethodsInfo(M),tid)
#define TERMINATE(M) rtmiTerminate(rtmGetRTWRTModelMethodsInfo(M))
const char *RT_MEMORY_ALLOCATION_ERROR = "memory allocation error";

#if TID01EQ == 1
#define FIRST_TID 1
#else
#define FIRST_TID 0
#endif
#if NUMST != 1
# error NUMST has to be 1!!!
#endif

void rtw2orca_main(rtw2orca_controller_t *controller) {
  int i, j; (void)i; (void)j;
  ExternalInputs_extctrl_example20200707 *U = controller->model->ModelData.inputs;
  ExternalOutputs_extctrl_example20200707 *Y = controller->model->ModelData.outputs;
  BlockIO_extctrl_example20200707 *B = controller->model->ModelData.blockIO;
  Parameters_extctrl_example20200707 *P = (void*)controller->model->ModelData.defaultParam;
  controller->lock.lock(&controller->lock);
    controller->v_amplitude = (*P).amplitude;
    controller->v_frequency = (*P).frequency;
  controller->lock.unlock(&controller->lock);
  while (controller->next(controller)) {
    controller->lock.lock(&controller->lock);
    controller->local_inputs(controller);
    (*U).irb2extrobot0jointiparKp[0] = controller->v_irb2ext.robot.a[0].joint.a[0].parKp;
    (*U).irb2extrobot0jointiparKp[1] = controller->v_irb2ext.robot.a[0].joint.a[1].parKp;
    (*U).irb2extrobot0jointiparKp[2] = controller->v_irb2ext.robot.a[0].joint.a[2].parKp;
    (*U).irb2extrobot0jointiparKp[3] = controller->v_irb2ext.robot.a[0].joint.a[3].parKp;
    (*U).irb2extrobot0jointiparKp[4] = controller->v_irb2ext.robot.a[0].joint.a[4].parKp;
    (*U).irb2extrobot0jointiparKp[5] = controller->v_irb2ext.robot.a[0].joint.a[5].parKp;
    (*U).irb2extrobot0jointiparKv[0] = controller->v_irb2ext.robot.a[0].joint.a[0].parKv;
    (*U).irb2extrobot0jointiparKv[1] = controller->v_irb2ext.robot.a[0].joint.a[1].parKv;
    (*U).irb2extrobot0jointiparKv[2] = controller->v_irb2ext.robot.a[0].joint.a[2].parKv;
    (*U).irb2extrobot0jointiparKv[3] = controller->v_irb2ext.robot.a[0].joint.a[3].parKv;
    (*U).irb2extrobot0jointiparKv[4] = controller->v_irb2ext.robot.a[0].joint.a[4].parKv;
    (*U).irb2extrobot0jointiparKv[5] = controller->v_irb2ext.robot.a[0].joint.a[5].parKv;
    (*U).irb2extrobot0jointiparKi[0] = controller->v_irb2ext.robot.a[0].joint.a[0].parKi;
    (*U).irb2extrobot0jointiparKi[1] = controller->v_irb2ext.robot.a[0].joint.a[1].parKi;
    (*U).irb2extrobot0jointiparKi[2] = controller->v_irb2ext.robot.a[0].joint.a[2].parKi;
    (*U).irb2extrobot0jointiparKi[3] = controller->v_irb2ext.robot.a[0].joint.a[3].parKi;
    (*U).irb2extrobot0jointiparKi[4] = controller->v_irb2ext.robot.a[0].joint.a[4].parKi;
    (*U).irb2extrobot0jointiparKi[5] = controller->v_irb2ext.robot.a[0].joint.a[5].parKi;
    (*U).irb2extrobot0jointiparTrqMin[0] = controller->v_irb2ext.robot.a[0].joint.a[0].parTrqMin;
    (*U).irb2extrobot0jointiparTrqMin[1] = controller->v_irb2ext.robot.a[0].joint.a[1].parTrqMin;
    (*U).irb2extrobot0jointiparTrqMin[2] = controller->v_irb2ext.robot.a[0].joint.a[2].parTrqMin;
    (*U).irb2extrobot0jointiparTrqMin[3] = controller->v_irb2ext.robot.a[0].joint.a[3].parTrqMin;
    (*U).irb2extrobot0jointiparTrqMin[4] = controller->v_irb2ext.robot.a[0].joint.a[4].parTrqMin;
    (*U).irb2extrobot0jointiparTrqMin[5] = controller->v_irb2ext.robot.a[0].joint.a[5].parTrqMin;
    (*U).irb2extrobot0jointiparTrqMax[0] = controller->v_irb2ext.robot.a[0].joint.a[0].parTrqMax;
    (*U).irb2extrobot0jointiparTrqMax[1] = controller->v_irb2ext.robot.a[0].joint.a[1].parTrqMax;
    (*U).irb2extrobot0jointiparTrqMax[2] = controller->v_irb2ext.robot.a[0].joint.a[2].parTrqMax;
    (*U).irb2extrobot0jointiparTrqMax[3] = controller->v_irb2ext.robot.a[0].joint.a[3].parTrqMax;
    (*U).irb2extrobot0jointiparTrqMax[4] = controller->v_irb2ext.robot.a[0].joint.a[4].parTrqMax;
    (*U).irb2extrobot0jointiparTrqMax[5] = controller->v_irb2ext.robot.a[0].joint.a[5].parTrqMax;
    (*U).irb2extrobot0jointiposRawAbs[0] = controller->v_irb2ext.robot.a[0].joint.a[0].posRawAbs;
    (*U).irb2extrobot0jointiposRawAbs[1] = controller->v_irb2ext.robot.a[0].joint.a[1].posRawAbs;
    (*U).irb2extrobot0jointiposRawAbs[2] = controller->v_irb2ext.robot.a[0].joint.a[2].posRawAbs;
    (*U).irb2extrobot0jointiposRawAbs[3] = controller->v_irb2ext.robot.a[0].joint.a[3].posRawAbs;
    (*U).irb2extrobot0jointiposRawAbs[4] = controller->v_irb2ext.robot.a[0].joint.a[4].posRawAbs;
    (*U).irb2extrobot0jointiposRawAbs[5] = controller->v_irb2ext.robot.a[0].joint.a[5].posRawAbs;
    (*U).irb2extrobot0jointiposRawFb[0] = controller->v_irb2ext.robot.a[0].joint.a[0].posRawFb;
    (*U).irb2extrobot0jointiposRawFb[1] = controller->v_irb2ext.robot.a[0].joint.a[1].posRawFb;
    (*U).irb2extrobot0jointiposRawFb[2] = controller->v_irb2ext.robot.a[0].joint.a[2].posRawFb;
    (*U).irb2extrobot0jointiposRawFb[3] = controller->v_irb2ext.robot.a[0].joint.a[3].posRawFb;
    (*U).irb2extrobot0jointiposRawFb[4] = controller->v_irb2ext.robot.a[0].joint.a[4].posRawFb;
    (*U).irb2extrobot0jointiposRawFb[5] = controller->v_irb2ext.robot.a[0].joint.a[5].posRawFb;
    (*U).irb2extrobot0jointiposFlt[0] = controller->v_irb2ext.robot.a[0].joint.a[0].posFlt;
    (*U).irb2extrobot0jointiposFlt[1] = controller->v_irb2ext.robot.a[0].joint.a[1].posFlt;
    (*U).irb2extrobot0jointiposFlt[2] = controller->v_irb2ext.robot.a[0].joint.a[2].posFlt;
    (*U).irb2extrobot0jointiposFlt[3] = controller->v_irb2ext.robot.a[0].joint.a[3].posFlt;
    (*U).irb2extrobot0jointiposFlt[4] = controller->v_irb2ext.robot.a[0].joint.a[4].posFlt;
    (*U).irb2extrobot0jointiposFlt[5] = controller->v_irb2ext.robot.a[0].joint.a[5].posFlt;
    (*U).irb2extrobot0jointivelRaw[0] = controller->v_irb2ext.robot.a[0].joint.a[0].velRaw;
    (*U).irb2extrobot0jointivelRaw[1] = controller->v_irb2ext.robot.a[0].joint.a[1].velRaw;
    (*U).irb2extrobot0jointivelRaw[2] = controller->v_irb2ext.robot.a[0].joint.a[2].velRaw;
    (*U).irb2extrobot0jointivelRaw[3] = controller->v_irb2ext.robot.a[0].joint.a[3].velRaw;
    (*U).irb2extrobot0jointivelRaw[4] = controller->v_irb2ext.robot.a[0].joint.a[4].velRaw;
    (*U).irb2extrobot0jointivelRaw[5] = controller->v_irb2ext.robot.a[0].joint.a[5].velRaw;
    (*U).irb2extrobot0jointivelFlt[0] = controller->v_irb2ext.robot.a[0].joint.a[0].velFlt;
    (*U).irb2extrobot0jointivelFlt[1] = controller->v_irb2ext.robot.a[0].joint.a[1].velFlt;
    (*U).irb2extrobot0jointivelFlt[2] = controller->v_irb2ext.robot.a[0].joint.a[2].velFlt;
    (*U).irb2extrobot0jointivelFlt[3] = controller->v_irb2ext.robot.a[0].joint.a[3].velFlt;
    (*U).irb2extrobot0jointivelFlt[4] = controller->v_irb2ext.robot.a[0].joint.a[4].velFlt;
    (*U).irb2extrobot0jointivelFlt[5] = controller->v_irb2ext.robot.a[0].joint.a[5].velFlt;
    (*U).irb2extrobot0jointivelOut[0] = controller->v_irb2ext.robot.a[0].joint.a[0].velOut;
    (*U).irb2extrobot0jointivelOut[1] = controller->v_irb2ext.robot.a[0].joint.a[1].velOut;
    (*U).irb2extrobot0jointivelOut[2] = controller->v_irb2ext.robot.a[0].joint.a[2].velOut;
    (*U).irb2extrobot0jointivelOut[3] = controller->v_irb2ext.robot.a[0].joint.a[3].velOut;
    (*U).irb2extrobot0jointivelOut[4] = controller->v_irb2ext.robot.a[0].joint.a[4].velOut;
    (*U).irb2extrobot0jointivelOut[5] = controller->v_irb2ext.robot.a[0].joint.a[5].velOut;
    (*U).irb2extrobot0jointitrqRaw[0] = controller->v_irb2ext.robot.a[0].joint.a[0].trqRaw;
    (*U).irb2extrobot0jointitrqRaw[1] = controller->v_irb2ext.robot.a[0].joint.a[1].trqRaw;
    (*U).irb2extrobot0jointitrqRaw[2] = controller->v_irb2ext.robot.a[0].joint.a[2].trqRaw;
    (*U).irb2extrobot0jointitrqRaw[3] = controller->v_irb2ext.robot.a[0].joint.a[3].trqRaw;
    (*U).irb2extrobot0jointitrqRaw[4] = controller->v_irb2ext.robot.a[0].joint.a[4].trqRaw;
    (*U).irb2extrobot0jointitrqRaw[5] = controller->v_irb2ext.robot.a[0].joint.a[5].trqRaw;
    (*U).irb2extrobot0jointitrqRefFlt[0] = controller->v_irb2ext.robot.a[0].joint.a[0].trqRefFlt;
    (*U).irb2extrobot0jointitrqRefFlt[1] = controller->v_irb2ext.robot.a[0].joint.a[1].trqRefFlt;
    (*U).irb2extrobot0jointitrqRefFlt[2] = controller->v_irb2ext.robot.a[0].joint.a[2].trqRefFlt;
    (*U).irb2extrobot0jointitrqRefFlt[3] = controller->v_irb2ext.robot.a[0].joint.a[3].trqRefFlt;
    (*U).irb2extrobot0jointitrqRefFlt[4] = controller->v_irb2ext.robot.a[0].joint.a[4].trqRefFlt;
    (*U).irb2extrobot0jointitrqRefFlt[5] = controller->v_irb2ext.robot.a[0].joint.a[5].trqRefFlt;
    (*U).tp1i[0] = controller->v_irb2ext.robot.a[0].joint.a[0].posRef;
    (*U).tp1i[1] = controller->v_irb2ext.robot.a[0].joint.a[1].posRef;
    (*U).tp1i[2] = controller->v_irb2ext.robot.a[0].joint.a[2].posRef;
    (*U).tp1i[3] = controller->v_irb2ext.robot.a[0].joint.a[3].posRef;
    (*U).tp1i[4] = controller->v_irb2ext.robot.a[0].joint.a[4].posRef;
    (*U).tp1i[5] = controller->v_irb2ext.robot.a[0].joint.a[5].posRef;
    (*U).irb2extrobot0jointivelRef[0] = controller->v_irb2ext.robot.a[0].joint.a[0].velRef;
    (*U).irb2extrobot0jointivelRef[1] = controller->v_irb2ext.robot.a[0].joint.a[1].velRef;
    (*U).irb2extrobot0jointivelRef[2] = controller->v_irb2ext.robot.a[0].joint.a[2].velRef;
    (*U).irb2extrobot0jointivelRef[3] = controller->v_irb2ext.robot.a[0].joint.a[3].velRef;
    (*U).irb2extrobot0jointivelRef[4] = controller->v_irb2ext.robot.a[0].joint.a[4].velRef;
    (*U).irb2extrobot0jointivelRef[5] = controller->v_irb2ext.robot.a[0].joint.a[5].velRef;
    (*U).irb2extrobot0jointitrqFfw[0] = controller->v_irb2ext.robot.a[0].joint.a[0].trqFfw;
    (*U).irb2extrobot0jointitrqFfw[1] = controller->v_irb2ext.robot.a[0].joint.a[1].trqFfw;
    (*U).irb2extrobot0jointitrqFfw[2] = controller->v_irb2ext.robot.a[0].joint.a[2].trqFfw;
    (*U).irb2extrobot0jointitrqFfw[3] = controller->v_irb2ext.robot.a[0].joint.a[3].trqFfw;
    (*U).irb2extrobot0jointitrqFfw[4] = controller->v_irb2ext.robot.a[0].joint.a[4].trqFfw;
    (*U).irb2extrobot0jointitrqFfw[5] = controller->v_irb2ext.robot.a[0].joint.a[5].trqFfw;
    (*U).irb2extrobot0jointitrqFfwGrav[0] = controller->v_irb2ext.robot.a[0].joint.a[0].trqFfwGrav;
    (*U).irb2extrobot0jointitrqFfwGrav[1] = controller->v_irb2ext.robot.a[0].joint.a[1].trqFfwGrav;
    (*U).irb2extrobot0jointitrqFfwGrav[2] = controller->v_irb2ext.robot.a[0].joint.a[2].trqFfwGrav;
    (*U).irb2extrobot0jointitrqFfwGrav[3] = controller->v_irb2ext.robot.a[0].joint.a[3].trqFfwGrav;
    (*U).irb2extrobot0jointitrqFfwGrav[4] = controller->v_irb2ext.robot.a[0].joint.a[4].trqFfwGrav;
    (*U).irb2extrobot0jointitrqFfwGrav[5] = controller->v_irb2ext.robot.a[0].joint.a[5].trqFfwGrav;
    (*U).irb2extobtaining = controller->v_irb2ext.obtaining;
    (*U).irb2extmanualMode = controller->v_irb2ext.manualMode;
    (*U).irb2extcontrolActive = controller->v_irb2ext.controlActive;
    (*U).irb2extrobot0mocgendatainstruction = controller->v_irb2ext.robot.a[0].mocgendata.instruction;
    (*U).irb2extrobot0mocgendatavalue1 = controller->v_irb2ext.robot.a[0].mocgendata.value1;
    (*U).irb2extrobot0mocgendatastring1i[0] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[0];
    (*U).irb2extrobot0mocgendatastring1i[1] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[1];
    (*U).irb2extrobot0mocgendatastring1i[2] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[2];
    (*U).irb2extrobot0mocgendatastring1i[3] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[3];
    (*U).irb2extrobot0mocgendatastring1i[4] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[4];
    (*U).irb2extrobot0mocgendatastring1i[5] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[5];
    (*U).irb2extrobot0mocgendatastring1i[6] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[6];
    (*U).irb2extrobot0mocgendatastring1i[7] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[7];
    (*U).irb2extrobot0mocgendatastring1i[8] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[8];
    (*U).irb2extrobot0mocgendatastring1i[9] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[9];
    (*U).irb2extrobot0mocgendatastring1i[10] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[10];
    (*U).irb2extrobot0mocgendatastring1i[11] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[11];
    (*U).irb2extrobot0mocgendatastring1i[12] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[12];
    (*U).irb2extrobot0mocgendatastring1i[13] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[13];
    (*U).irb2extrobot0mocgendatastring1i[14] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[14];
    (*U).irb2extrobot0mocgendatastring1i[15] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[15];
    (*U).irb2extrobot0mocgendatastring1i[16] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[16];
    (*U).irb2extrobot0mocgendatastring1i[17] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[17];
    (*U).irb2extrobot0mocgendatastring1i[18] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[18];
    (*U).irb2extrobot0mocgendatastring1i[19] = controller->v_irb2ext.robot.a[0].mocgendata.string1.a[19];
    (*U).irb2extrobot0mocgendatastring2i[0] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[0];
    (*U).irb2extrobot0mocgendatastring2i[1] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[1];
    (*U).irb2extrobot0mocgendatastring2i[2] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[2];
    (*U).irb2extrobot0mocgendatastring2i[3] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[3];
    (*U).irb2extrobot0mocgendatastring2i[4] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[4];
    (*U).irb2extrobot0mocgendatastring2i[5] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[5];
    (*U).irb2extrobot0mocgendatastring2i[6] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[6];
    (*U).irb2extrobot0mocgendatastring2i[7] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[7];
    (*U).irb2extrobot0mocgendatastring2i[8] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[8];
    (*U).irb2extrobot0mocgendatastring2i[9] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[9];
    (*U).irb2extrobot0mocgendatastring2i[10] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[10];
    (*U).irb2extrobot0mocgendatastring2i[11] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[11];
    (*U).irb2extrobot0mocgendatastring2i[12] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[12];
    (*U).irb2extrobot0mocgendatastring2i[13] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[13];
    (*U).irb2extrobot0mocgendatastring2i[14] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[14];
    (*U).irb2extrobot0mocgendatastring2i[15] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[15];
    (*U).irb2extrobot0mocgendatastring2i[16] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[16];
    (*U).irb2extrobot0mocgendatastring2i[17] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[17];
    (*U).irb2extrobot0mocgendatastring2i[18] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[18];
    (*U).irb2extrobot0mocgendatastring2i[19] = controller->v_irb2ext.robot.a[0].mocgendata.string2.a[19];
    (*U).irb2extrobot0mocgendatavalue2 = controller->v_irb2ext.robot.a[0].mocgendata.value2;
    (*U).irb2extrobot0mocgendatavalue3 = controller->v_irb2ext.robot.a[0].mocgendata.value3;
    (*U).irb2extrobot0mocgendatavalue4 = controller->v_irb2ext.robot.a[0].mocgendata.value4;
    (*U).irb2extrobot0mocgendatavalue5 = controller->v_irb2ext.robot.a[0].mocgendata.value5;
    (*U).irb2extrobot0mocgendatavalue6 = controller->v_irb2ext.robot.a[0].mocgendata.value6;
    (*P).amplitude = controller->v_amplitude;
    (*P).frequency = controller->v_frequency;
    OUTPUTS(controller->model, FIRST_TID);
    controller->v_ext2irb.robot.a[0].joint.a[0].parKp = (*Y).ext2irbrobot0jointiparKp[0];
    controller->v_ext2irb.robot.a[0].joint.a[1].parKp = (*Y).ext2irbrobot0jointiparKp[1];
    controller->v_ext2irb.robot.a[0].joint.a[2].parKp = (*Y).ext2irbrobot0jointiparKp[2];
    controller->v_ext2irb.robot.a[0].joint.a[3].parKp = (*Y).ext2irbrobot0jointiparKp[3];
    controller->v_ext2irb.robot.a[0].joint.a[4].parKp = (*Y).ext2irbrobot0jointiparKp[4];
    controller->v_ext2irb.robot.a[0].joint.a[5].parKp = (*Y).ext2irbrobot0jointiparKp[5];
    controller->v_ext2irb.robot.a[0].joint.a[0].parKv = (*Y).ext2irbrobot0jointiparKv[0];
    controller->v_ext2irb.robot.a[0].joint.a[1].parKv = (*Y).ext2irbrobot0jointiparKv[1];
    controller->v_ext2irb.robot.a[0].joint.a[2].parKv = (*Y).ext2irbrobot0jointiparKv[2];
    controller->v_ext2irb.robot.a[0].joint.a[3].parKv = (*Y).ext2irbrobot0jointiparKv[3];
    controller->v_ext2irb.robot.a[0].joint.a[4].parKv = (*Y).ext2irbrobot0jointiparKv[4];
    controller->v_ext2irb.robot.a[0].joint.a[5].parKv = (*Y).ext2irbrobot0jointiparKv[5];
    controller->v_ext2irb.robot.a[0].joint.a[0].parKi = (*Y).ext2irbrobot0jointiparKi[0];
    controller->v_ext2irb.robot.a[0].joint.a[1].parKi = (*Y).ext2irbrobot0jointiparKi[1];
    controller->v_ext2irb.robot.a[0].joint.a[2].parKi = (*Y).ext2irbrobot0jointiparKi[2];
    controller->v_ext2irb.robot.a[0].joint.a[3].parKi = (*Y).ext2irbrobot0jointiparKi[3];
    controller->v_ext2irb.robot.a[0].joint.a[4].parKi = (*Y).ext2irbrobot0jointiparKi[4];
    controller->v_ext2irb.robot.a[0].joint.a[5].parKi = (*Y).ext2irbrobot0jointiparKi[5];
    controller->v_ext2irb.robot.a[0].joint.a[0].posRef = (*Y).ext2irbrobot0jointiposRef[0];
    controller->v_ext2irb.robot.a[0].joint.a[1].posRef = (*Y).ext2irbrobot0jointiposRef[1];
    controller->v_ext2irb.robot.a[0].joint.a[2].posRef = (*Y).ext2irbrobot0jointiposRef[2];
    controller->v_ext2irb.robot.a[0].joint.a[3].posRef = (*Y).ext2irbrobot0jointiposRef[3];
    controller->v_ext2irb.robot.a[0].joint.a[4].posRef = (*Y).ext2irbrobot0jointiposRef[4];
    controller->v_ext2irb.robot.a[0].joint.a[5].posRef = (*Y).ext2irbrobot0jointiposRef[5];
    controller->v_ext2irb.robot.a[0].joint.a[0].velRef = (*Y).ext2irbrobot0jointivelRef[0];
    controller->v_ext2irb.robot.a[0].joint.a[1].velRef = (*Y).ext2irbrobot0jointivelRef[1];
    controller->v_ext2irb.robot.a[0].joint.a[2].velRef = (*Y).ext2irbrobot0jointivelRef[2];
    controller->v_ext2irb.robot.a[0].joint.a[3].velRef = (*Y).ext2irbrobot0jointivelRef[3];
    controller->v_ext2irb.robot.a[0].joint.a[4].velRef = (*Y).ext2irbrobot0jointivelRef[4];
    controller->v_ext2irb.robot.a[0].joint.a[5].velRef = (*Y).ext2irbrobot0jointivelRef[5];
    controller->v_ext2irb.robot.a[0].joint.a[0].trqFfw = (*Y).ext2irbrobot0jointitrqFfw[0];
    controller->v_ext2irb.robot.a[0].joint.a[1].trqFfw = (*Y).ext2irbrobot0jointitrqFfw[1];
    controller->v_ext2irb.robot.a[0].joint.a[2].trqFfw = (*Y).ext2irbrobot0jointitrqFfw[2];
    controller->v_ext2irb.robot.a[0].joint.a[3].trqFfw = (*Y).ext2irbrobot0jointitrqFfw[3];
    controller->v_ext2irb.robot.a[0].joint.a[4].trqFfw = (*Y).ext2irbrobot0jointitrqFfw[4];
    controller->v_ext2irb.robot.a[0].joint.a[5].trqFfw = (*Y).ext2irbrobot0jointitrqFfw[5];
    controller->v_ext2irb.robot.a[0].mocgendata.instruction = (*Y).ext2irbrobot0mocgendatainstruction;
    controller->v_ext2irb.robot.a[0].mocgendata.value1 = (*Y).ext2irbrobot0mocgendatavalue1;
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[0] = (*Y).ext2irbrobot0mocgendatastring1i[0];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[1] = (*Y).ext2irbrobot0mocgendatastring1i[1];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[2] = (*Y).ext2irbrobot0mocgendatastring1i[2];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[3] = (*Y).ext2irbrobot0mocgendatastring1i[3];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[4] = (*Y).ext2irbrobot0mocgendatastring1i[4];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[5] = (*Y).ext2irbrobot0mocgendatastring1i[5];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[6] = (*Y).ext2irbrobot0mocgendatastring1i[6];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[7] = (*Y).ext2irbrobot0mocgendatastring1i[7];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[8] = (*Y).ext2irbrobot0mocgendatastring1i[8];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[9] = (*Y).ext2irbrobot0mocgendatastring1i[9];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[10] = (*Y).ext2irbrobot0mocgendatastring1i[10];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[11] = (*Y).ext2irbrobot0mocgendatastring1i[11];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[12] = (*Y).ext2irbrobot0mocgendatastring1i[12];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[13] = (*Y).ext2irbrobot0mocgendatastring1i[13];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[14] = (*Y).ext2irbrobot0mocgendatastring1i[14];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[15] = (*Y).ext2irbrobot0mocgendatastring1i[15];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[16] = (*Y).ext2irbrobot0mocgendatastring1i[16];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[17] = (*Y).ext2irbrobot0mocgendatastring1i[17];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[18] = (*Y).ext2irbrobot0mocgendatastring1i[18];
    controller->v_ext2irb.robot.a[0].mocgendata.string1.a[19] = (*Y).ext2irbrobot0mocgendatastring1i[19];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[0] = (*Y).ext2irbrobot0mocgendatastring2i[0];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[1] = (*Y).ext2irbrobot0mocgendatastring2i[1];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[2] = (*Y).ext2irbrobot0mocgendatastring2i[2];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[3] = (*Y).ext2irbrobot0mocgendatastring2i[3];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[4] = (*Y).ext2irbrobot0mocgendatastring2i[4];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[5] = (*Y).ext2irbrobot0mocgendatastring2i[5];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[6] = (*Y).ext2irbrobot0mocgendatastring2i[6];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[7] = (*Y).ext2irbrobot0mocgendatastring2i[7];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[8] = (*Y).ext2irbrobot0mocgendatastring2i[8];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[9] = (*Y).ext2irbrobot0mocgendatastring2i[9];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[10] = (*Y).ext2irbrobot0mocgendatastring2i[10];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[11] = (*Y).ext2irbrobot0mocgendatastring2i[11];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[12] = (*Y).ext2irbrobot0mocgendatastring2i[12];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[13] = (*Y).ext2irbrobot0mocgendatastring2i[13];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[14] = (*Y).ext2irbrobot0mocgendatastring2i[14];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[15] = (*Y).ext2irbrobot0mocgendatastring2i[15];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[16] = (*Y).ext2irbrobot0mocgendatastring2i[16];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[17] = (*Y).ext2irbrobot0mocgendatastring2i[17];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[18] = (*Y).ext2irbrobot0mocgendatastring2i[18];
    controller->v_ext2irb.robot.a[0].mocgendata.string2.a[19] = (*Y).ext2irbrobot0mocgendatastring2i[19];
    controller->v_ext2irb.robot.a[0].mocgendata.value2 = (*Y).ext2irbrobot0mocgendatavalue2;
    controller->v_ext2irb.robot.a[0].mocgendata.value3 = (*Y).ext2irbrobot0mocgendatavalue3;
    controller->v_ext2irb.robot.a[0].mocgendata.value4 = (*Y).ext2irbrobot0mocgendatavalue4;
    controller->v_ext2irb.robot.a[0].mocgendata.value5 = (*Y).ext2irbrobot0mocgendatavalue5;
    controller->v_ext2irb.robot.a[0].mocgendata.value6 = (*Y).ext2irbrobot0mocgendatavalue6;
    controller->v_tp1.a[0] = (*U).tp1i[0];
    controller->v_tp1.a[1] = (*U).tp1i[1];
    controller->v_tp1.a[2] = (*U).tp1i[2];
    controller->v_tp1.a[3] = (*U).tp1i[3];
    controller->v_tp1.a[4] = (*U).tp1i[4];
    controller->v_tp1.a[5] = (*U).tp1i[5];
    controller->v_sine = (*B).sine;
    controller->local_outputs(controller);
    labcomm_encode_rtw2orca_irb2ext(controller->log->encoder, &controller->v_irb2ext);
    labcomm_encode_rtw2orca_ext2irb(controller->log->encoder, &controller->v_ext2irb);
    labcomm_encode_rtw2orca_amplitude(controller->log->encoder, &controller->v_amplitude);
    labcomm_encode_rtw2orca_frequency(controller->log->encoder, &controller->v_frequency);
    labcomm_encode_rtw2orca_tp1(controller->log->encoder, &controller->v_tp1);
    labcomm_encode_rtw2orca_sine(controller->log->encoder, &controller->v_sine);
    controller->lock.unlock(&controller->lock);
    UPDATE(controller->model, FIRST_TID);
  }
}

static void handle_amplitude(
  rtw2orca_amplitude *v,
  void *context)
{
  rtw2orca_controller_t *controller = context;
  
  if (v) {
    controller->v_amplitude = *v;
  }
  labcomm_encode_rtw2orca_amplitude(
    controller->parameter->encoder, &controller->v_amplitude);
}

static void handle_frequency(
  rtw2orca_frequency *v,
  void *context)
{
  rtw2orca_controller_t *controller = context;
  
  if (v) {
    controller->v_frequency = *v;
  }
  labcomm_encode_rtw2orca_frequency(
    controller->parameter->encoder, &controller->v_frequency);
}

static void rtw2orca_register(rtw2orca_controller_t *controller)
{
  labcomm_encoder_register_rtw2orca_amplitude(controller->parameter->encoder);
  labcomm_decoder_register_rtw2orca_amplitude(controller->parameter->decoder, handle_amplitude, controller);
  labcomm_encoder_register_rtw2orca_frequency(controller->parameter->encoder);
  labcomm_decoder_register_rtw2orca_frequency(controller->parameter->decoder, handle_frequency, controller);
  labcomm_encoder_register_rtw2orca_irb2ext(controller->log->encoder);
  labcomm_encoder_register_rtw2orca_ext2irb(controller->log->encoder);
  labcomm_encoder_register_rtw2orca_amplitude(controller->log->encoder);
  labcomm_encoder_register_rtw2orca_frequency(controller->log->encoder);
  labcomm_encoder_register_rtw2orca_tp1(controller->log->encoder);
  labcomm_encoder_register_rtw2orca_sine(controller->log->encoder);
}
void rtw2orca_init(rtw2orca_controller_t *controller) {
  const char *err;
  
  rt_InitInfAndNaN(sizeof(real_T));
  controller->model = extctrl_example20200707();
  if (rtmGetErrorStatus(controller->model)) {
    fprintf(stderr, "Error during model registration: %s\n",
            rtmGetErrorStatus(controller->model));
  }
  INITIALIZE_SAMPLE_TIMES(controller->model);
  INITIALIZE_SIZES(controller->model);
  err = rt_SimInitTimingEngine(
          rtmGetNumSampleTimes(controller->model),
          rtmGetStepSize(controller->model),
          rtmGetSampleTimePtr(controller->model),
          rtmGetOffsetTimePtr(controller->model),
          rtmGetSampleHitPtr(controller->model),
          rtmGetSampleTimeTaskIDPtr(controller->model),
          rtmGetTStart(controller->model),
          &rtmGetSimTimeStep(controller->model),
          &rtmGetTimingData(controller->model));
  if (err) {
    fprintf(stderr, "Failed to initialize sample time engine: %s\n",
            err);
  }
  rtw2orca_register(controller);
  START(controller->model);
}
