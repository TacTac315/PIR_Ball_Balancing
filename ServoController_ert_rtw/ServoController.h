/*
 * ServoController.h
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

#ifndef RTW_HEADER_ServoController_h_
#define RTW_HEADER_ServoController_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef ServoController_COMMON_INCLUDES_
# define ServoController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_ServoWriteRead.h"
#include "MW_SerialRead.h"
#endif                                 /* ServoController_COMMON_INCLUDES_ */

#include "ServoController_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Serial Receive' */
  codertarget_arduinobase_int_c_T obj_k;/* '<Root>/Standard Servo Write' */
  codertarget_arduinobase_int_c_T obj_g;/* '<Root>/Standard Servo Write1' */
  codertarget_arduinobase_int_c_T obj_p;/* '<Root>/Standard Servo Write2' */
  i_codertarget_arduinobase_int_T gobj_1;/* '<Root>/Standard Servo Write' */
  i_codertarget_arduinobase_int_T gobj_2;/* '<Root>/Standard Servo Write' */
  i_codertarget_arduinobase_int_T gobj_3;/* '<Root>/Standard Servo Write' */
  i_codertarget_arduinobase_int_T gobj_4;/* '<Root>/Standard Servo Write' */
  i_codertarget_arduinobase_int_T gobj_1_e;/* '<Root>/Standard Servo Write1' */
  i_codertarget_arduinobase_int_T gobj_2_j;/* '<Root>/Standard Servo Write1' */
  i_codertarget_arduinobase_int_T gobj_3_j;/* '<Root>/Standard Servo Write1' */
  i_codertarget_arduinobase_int_T gobj_4_b;/* '<Root>/Standard Servo Write1' */
  i_codertarget_arduinobase_int_T gobj_1_d;/* '<Root>/Standard Servo Write2' */
  i_codertarget_arduinobase_int_T gobj_2_f;/* '<Root>/Standard Servo Write2' */
  i_codertarget_arduinobase_int_T gobj_3_l;/* '<Root>/Standard Servo Write2' */
  i_codertarget_arduinobase_int_T gobj_4_e;/* '<Root>/Standard Servo Write2' */
} DW_ServoController_T;

/* Parameters (default storage) */
struct P_ServoController_T_ {
  real_T SerialReceive_Protocol;       /* Expression: 0
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 35
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 35
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 35
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ServoController_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
extern P_ServoController_T ServoController_P;

/* Block states (default storage) */
extern DW_ServoController_T ServoController_DW;

/* External function called from main */
extern void ServoController_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void ServoController_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void ServoController_initialize(void);
extern void ServoController_step0(void);
extern void ServoController_step1(void);
extern void ServoController_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ServoController_T *const ServoController_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ServoController'
 * '<S1>'   : 'ServoController/SerialToServoAngle'
 */
#endif                                 /* RTW_HEADER_ServoController_h_ */
