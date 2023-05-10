/*
 * ServoController.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ServoController".
 *
 * Model version              : 1.135
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Wed May 10 13:42:40 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ServoController.h"
#include "ServoController_private.h"

/* Block states (default storage) */
DW_ServoController_T ServoController_DW;

/* Real-time model */
RT_MODEL_ServoController_T ServoController_M_;
RT_MODEL_ServoController_T *const ServoController_M = &ServoController_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj);
static void arduino_ServoWrite_set_pinNumbe(codertarget_arduinobase_int_c_T *obj,
  i_codertarget_arduinobase_int_T *iobj_0);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void ServoController_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(ServoController_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ServoController_M->Timing.TaskCounters.TID[1])++;
  if ((ServoController_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.2s, 0.0s] */
    ServoController_M->Timing.TaskCounters.TID[1] = 0;
  }
}

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

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void arduino_ServoWrite_set_pinNumbe(codertarget_arduinobase_int_c_T *obj,
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

/* Model step function for TID0 */
void ServoController_step0(void)       /* Sample time: [0.1s, 0.0s] */
{
  {                                    /* Sample time: [0.1s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void ServoController_step1(void)       /* Sample time: [0.2s, 0.0s] */
{
  real_T data[3];
  uint8_T sts;
  real_T rtb_S3;
  real_T rtb_S2;
  real_T rtb_S0;

  /* MATLABSystem: '<Root>/Serial Receive' */
  if (ServoController_DW.obj.Protocol !=
      ServoController_P.SerialReceive_Protocol) {
    ServoController_DW.obj.Protocol = ServoController_P.SerialReceive_Protocol;
  }

  MW_Serial_read(0, ServoController_DW.obj.DataSizeInBytes, data, &sts);

  /* MATLAB Function: '<Root>/SerialToServoAngle' incorporates:
   *  MATLABSystem: '<Root>/Serial Receive'
   */
  /* MATLAB Function 'SerialToServoAngle': '<S1>:1' */
  /* '<S1>:1:2' if(status==0) */
  if (sts == 0) {
    /* '<S1>:1:3' S0=0; */
    rtb_S0 = 0.0;

    /* '<S1>:1:4' S2=0; */
    rtb_S2 = 0.0;

    /* '<S1>:1:5' S3=0; */
    rtb_S3 = 0.0;
  } else {
    /* '<S1>:1:6' else */
    /* '<S1>:1:7' S0=data(1); */
    rtb_S0 = data[0];

    /* '<S1>:1:8' S2=data(2); */
    rtb_S2 = data[1];

    /* '<S1>:1:9' S3=data(3); */
    rtb_S3 = data[2];
  }

  /* End of MATLAB Function: '<Root>/SerialToServoAngle' */

  /* Saturate: '<Root>/Saturation' */
  if (rtb_S0 > ServoController_P.Saturation_UpperSat) {
    rtb_S0 = ServoController_P.Saturation_UpperSat;
  } else {
    if (rtb_S0 < ServoController_P.Saturation_LowerSat) {
      rtb_S0 = ServoController_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* MATLABSystem: '<Root>/Standard Servo Write' */
  if (rtb_S0 < 0.0) {
    sts = 0U;
  } else if (rtb_S0 > 180.0) {
    sts = 180U;
  } else {
    rtb_S0 = rt_roundd_snf(rtb_S0);
    if (rtb_S0 < 256.0) {
      sts = (uint8_T)rtb_S0;
    } else {
      sts = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, sts);

  /* End of MATLABSystem: '<Root>/Standard Servo Write' */

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_S2 > ServoController_P.Saturation1_UpperSat) {
    rtb_S2 = ServoController_P.Saturation1_UpperSat;
  } else {
    if (rtb_S2 < ServoController_P.Saturation1_LowerSat) {
      rtb_S2 = ServoController_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* MATLABSystem: '<Root>/Standard Servo Write1' */
  if (rtb_S2 < 0.0) {
    sts = 0U;
  } else if (rtb_S2 > 180.0) {
    sts = 180U;
  } else {
    rtb_S0 = rt_roundd_snf(rtb_S2);
    if (rtb_S0 < 256.0) {
      sts = (uint8_T)rtb_S0;
    } else {
      sts = MAX_uint8_T;
    }
  }

  MW_servoWrite(1, sts);

  /* End of MATLABSystem: '<Root>/Standard Servo Write1' */

  /* Saturate: '<Root>/Saturation2' */
  if (rtb_S3 > ServoController_P.Saturation2_UpperSat) {
    rtb_S3 = ServoController_P.Saturation2_UpperSat;
  } else {
    if (rtb_S3 < ServoController_P.Saturation2_LowerSat) {
      rtb_S3 = ServoController_P.Saturation2_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* MATLABSystem: '<Root>/Standard Servo Write2' */
  if (rtb_S3 < 0.0) {
    sts = 0U;
  } else if (rtb_S3 > 180.0) {
    sts = 180U;
  } else {
    rtb_S0 = rt_roundd_snf(rtb_S3);
    if (rtb_S0 < 256.0) {
      sts = (uint8_T)rtb_S0;
    } else {
      sts = MAX_uint8_T;
    }
  }

  MW_servoWrite(2, sts);

  /* End of MATLABSystem: '<Root>/Standard Servo Write2' */
}

/* Model initialize function */
void ServoController_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ServoController_M, 0,
                sizeof(RT_MODEL_ServoController_T));

  /* states (dwork) */
  (void) memset((void *)&ServoController_DW, 0,
                sizeof(DW_ServoController_T));

  {
    uint32_T tmp;

    /* Start for MATLABSystem: '<Root>/Serial Receive' */
    ServoController_DW.obj.matlabCodegenIsDeleted = false;
    ServoController_DW.obj.Protocol = ServoController_P.SerialReceive_Protocol;
    ServoController_DW.obj.isInitialized = 1L;
    ServoController_DW.obj.DataTypeWidth = 4U;
    tmp = 3UL * ServoController_DW.obj.DataTypeWidth;
    if ((int32_T)tmp > 65535L) {
      tmp = 65535UL;
    }

    ServoController_DW.obj.DataSizeInBytes = (uint16_T)tmp;
    ServoController_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Serial Receive' */

    /* Start for MATLABSystem: '<Root>/Standard Servo Write' */
    ServoController_DW.obj_k.isInitialized = 0L;
    arduino_ServoWrite_set_pinNumbe(&ServoController_DW.obj_k,
      &ServoController_DW.gobj_2);
    ServoController_DW.obj_k.isInitialized = 1L;
    MW_servoAttach(0, 3);

    /* Start for MATLABSystem: '<Root>/Standard Servo Write1' */
    ServoController_DW.obj_g.isInitialized = 0L;
    arduino_ServoWrite_set_pinNumbe(&ServoController_DW.obj_g,
      &ServoController_DW.gobj_2_j);
    ServoController_DW.obj_g.isInitialized = 1L;
    MW_servoAttach(1, 4);

    /* Start for MATLABSystem: '<Root>/Standard Servo Write2' */
    ServoController_DW.obj_p.isInitialized = 0L;
    arduino_ServoWrite_set_pinNumbe(&ServoController_DW.obj_p,
      &ServoController_DW.gobj_2_f);
    ServoController_DW.obj_p.isInitialized = 1L;
    MW_servoAttach(2, 5);
  }
}

/* Model terminate function */
void ServoController_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  matlabCodegenHandle_matlabCodeg(&ServoController_DW.obj);
}
