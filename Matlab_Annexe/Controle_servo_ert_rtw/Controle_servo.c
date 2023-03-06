/*
 * Controle_servo.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Controle_servo".
 *
 * Model version              : 1.100
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Mon Mar  6 13:16:35 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Controle_servo.h"
#include "Controle_servo_private.h"
#include "Controle_servo_dt.h"

/* Block signals (default storage) */
B_Controle_servo_T Controle_servo_B;

/* Block states (default storage) */
DW_Controle_servo_T Controle_servo_DW;

/* Real-time model */
RT_MODEL_Controle_servo_T Controle_servo_M_;
RT_MODEL_Controle_servo_T *const Controle_servo_M = &Controle_servo_M_;

/* Forward declaration for local functions */
static void arduino_ServoWrite_set_pinNumbe(codertarget_arduinobase_inter_T *obj,
  i_codertarget_arduinobase_int_T *iobj_0);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void arduino_ServoWrite_set_pinNumbe(codertarget_arduinobase_inter_T *obj,
  i_codertarget_arduinobase_int_T *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
}

/* Model step function */
void Controle_servo_step(void)
{
  real_T rtb_Saturation;
  uint8_T rtb_Saturation_0;

  /* Constant: '<Root>/Constant' */
  Controle_servo_B.Constant = Controle_servo_P.Constant_Value;

  /* Saturate: '<Root>/Saturation' */
  if (Controle_servo_B.Constant > Controle_servo_P.Saturation_UpperSat) {
    rtb_Saturation = Controle_servo_P.Saturation_UpperSat;
  } else if (Controle_servo_B.Constant < Controle_servo_P.Saturation_LowerSat) {
    rtb_Saturation = Controle_servo_P.Saturation_LowerSat;
  } else {
    rtb_Saturation = Controle_servo_B.Constant;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* MATLABSystem: '<Root>/Servo 1' */
  if (rtb_Saturation < 0.0) {
    rtb_Saturation_0 = 0U;
  } else if (rtb_Saturation > 180.0) {
    rtb_Saturation_0 = 180U;
  } else {
    rtb_Saturation = rt_roundd_snf(rtb_Saturation);
    if (rtb_Saturation < 256.0) {
      rtb_Saturation_0 = (uint8_T)rtb_Saturation;
    } else {
      rtb_Saturation_0 = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, rtb_Saturation_0);

  /* End of MATLABSystem: '<Root>/Servo 1' */

  /* Saturate: '<Root>/Saturation1' */
  if (Controle_servo_B.Constant > Controle_servo_P.Saturation1_UpperSat) {
    rtb_Saturation = Controle_servo_P.Saturation1_UpperSat;
  } else if (Controle_servo_B.Constant < Controle_servo_P.Saturation1_LowerSat)
  {
    rtb_Saturation = Controle_servo_P.Saturation1_LowerSat;
  } else {
    rtb_Saturation = Controle_servo_B.Constant;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* MATLABSystem: '<Root>/Servo 2' */
  if (rtb_Saturation < 0.0) {
    rtb_Saturation_0 = 0U;
  } else if (rtb_Saturation > 180.0) {
    rtb_Saturation_0 = 180U;
  } else {
    rtb_Saturation = rt_roundd_snf(rtb_Saturation);
    if (rtb_Saturation < 256.0) {
      rtb_Saturation_0 = (uint8_T)rtb_Saturation;
    } else {
      rtb_Saturation_0 = MAX_uint8_T;
    }
  }

  MW_servoWrite(1, rtb_Saturation_0);

  /* End of MATLABSystem: '<Root>/Servo 2' */

  /* Saturate: '<Root>/Saturation2' */
  if (Controle_servo_B.Constant > Controle_servo_P.Saturation2_UpperSat) {
    rtb_Saturation = Controle_servo_P.Saturation2_UpperSat;
  } else if (Controle_servo_B.Constant < Controle_servo_P.Saturation2_LowerSat)
  {
    rtb_Saturation = Controle_servo_P.Saturation2_LowerSat;
  } else {
    rtb_Saturation = Controle_servo_B.Constant;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* MATLABSystem: '<Root>/Servo 3' */
  if (rtb_Saturation < 0.0) {
    rtb_Saturation_0 = 0U;
  } else if (rtb_Saturation > 180.0) {
    rtb_Saturation_0 = 180U;
  } else {
    rtb_Saturation = rt_roundd_snf(rtb_Saturation);
    if (rtb_Saturation < 256.0) {
      rtb_Saturation_0 = (uint8_T)rtb_Saturation;
    } else {
      rtb_Saturation_0 = MAX_uint8_T;
    }
  }

  MW_servoWrite(2, rtb_Saturation_0);

  /* End of MATLABSystem: '<Root>/Servo 3' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.2s, 0.0s] */
    rtExtModeUpload(0, (real_T)Controle_servo_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(Controle_servo_M)!=-1) &&
        !((rtmGetTFinal(Controle_servo_M)-Controle_servo_M->Timing.taskTime0) >
          Controle_servo_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(Controle_servo_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Controle_servo_M)) {
      rtmSetErrorStatus(Controle_servo_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Controle_servo_M->Timing.clockTick0)) {
    ++Controle_servo_M->Timing.clockTickH0;
  }

  Controle_servo_M->Timing.taskTime0 = Controle_servo_M->Timing.clockTick0 *
    Controle_servo_M->Timing.stepSize0 + Controle_servo_M->Timing.clockTickH0 *
    Controle_servo_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Controle_servo_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Controle_servo_M, 0,
                sizeof(RT_MODEL_Controle_servo_T));
  rtmSetTFinal(Controle_servo_M, -1);
  Controle_servo_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  Controle_servo_M->Sizes.checksums[0] = (3067375848U);
  Controle_servo_M->Sizes.checksums[1] = (2162755511U);
  Controle_servo_M->Sizes.checksums[2] = (2264877600U);
  Controle_servo_M->Sizes.checksums[3] = (3485333034U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    Controle_servo_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Controle_servo_M->extModeInfo,
      &Controle_servo_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Controle_servo_M->extModeInfo,
                        Controle_servo_M->Sizes.checksums);
    rteiSetTPtr(Controle_servo_M->extModeInfo, rtmGetTPtr(Controle_servo_M));
  }

  /* block I/O */
  (void) memset(((void *) &Controle_servo_B), 0,
                sizeof(B_Controle_servo_T));

  /* states (dwork) */
  (void) memset((void *)&Controle_servo_DW, 0,
                sizeof(DW_Controle_servo_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Controle_servo_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for MATLABSystem: '<Root>/Servo 1' */
  Controle_servo_DW.obj.isInitialized = 0L;
  arduino_ServoWrite_set_pinNumbe(&Controle_servo_DW.obj,
    &Controle_servo_DW.gobj_2);
  Controle_servo_DW.obj.isInitialized = 1L;
  MW_servoAttach(0, 3);

  /* Start for MATLABSystem: '<Root>/Servo 2' */
  Controle_servo_DW.obj_n.isInitialized = 0L;
  arduino_ServoWrite_set_pinNumbe(&Controle_servo_DW.obj_n,
    &Controle_servo_DW.gobj_2_c);
  Controle_servo_DW.obj_n.isInitialized = 1L;
  MW_servoAttach(1, 5);

  /* Start for MATLABSystem: '<Root>/Servo 3' */
  Controle_servo_DW.obj_i.isInitialized = 0L;
  arduino_ServoWrite_set_pinNumbe(&Controle_servo_DW.obj_i,
    &Controle_servo_DW.gobj_2_k);
  Controle_servo_DW.obj_i.isInitialized = 1L;
  MW_servoAttach(2, 6);
}

/* Model terminate function */
void Controle_servo_terminate(void)
{
  /* (no terminate code required) */
}
