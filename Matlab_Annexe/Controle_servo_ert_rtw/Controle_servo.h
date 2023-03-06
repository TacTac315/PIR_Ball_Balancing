/*
 * Controle_servo.h
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

#ifndef RTW_HEADER_Controle_servo_h_
#define RTW_HEADER_Controle_servo_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Controle_servo_COMMON_INCLUDES_
# define Controle_servo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_ServoWriteRead.h"
#endif                                 /* Controle_servo_COMMON_INCLUDES_ */

#include "Controle_servo_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Constant;                     /* '<Root>/Constant' */
} B_Controle_servo_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Servo 1' */
  codertarget_arduinobase_inter_T obj_n;/* '<Root>/Servo 2' */
  codertarget_arduinobase_inter_T obj_i;/* '<Root>/Servo 3' */
  i_codertarget_arduinobase_int_T gobj_1;/* '<Root>/Servo 1' */
  i_codertarget_arduinobase_int_T gobj_2;/* '<Root>/Servo 1' */
  i_codertarget_arduinobase_int_T gobj_3;/* '<Root>/Servo 1' */
  i_codertarget_arduinobase_int_T gobj_4;/* '<Root>/Servo 1' */
  i_codertarget_arduinobase_int_T gobj_1_c;/* '<Root>/Servo 2' */
  i_codertarget_arduinobase_int_T gobj_2_c;/* '<Root>/Servo 2' */
  i_codertarget_arduinobase_int_T gobj_3_h;/* '<Root>/Servo 2' */
  i_codertarget_arduinobase_int_T gobj_4_n;/* '<Root>/Servo 2' */
  i_codertarget_arduinobase_int_T gobj_1_ci;/* '<Root>/Servo 3' */
  i_codertarget_arduinobase_int_T gobj_2_k;/* '<Root>/Servo 3' */
  i_codertarget_arduinobase_int_T gobj_3_f;/* '<Root>/Servo 3' */
  i_codertarget_arduinobase_int_T gobj_4_ni;/* '<Root>/Servo 3' */
} DW_Controle_servo_T;

/* Parameters (default storage) */
struct P_Controle_servo_T_ {
  real_T Constant_Value;               /* Expression: 53.78667493184408
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 75
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 80
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 75
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Controle_servo_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Controle_servo_T Controle_servo_P;

/* Block signals (default storage) */
extern B_Controle_servo_T Controle_servo_B;

/* Block states (default storage) */
extern DW_Controle_servo_T Controle_servo_DW;

/* Model entry point functions */
extern void Controle_servo_initialize(void);
extern void Controle_servo_step(void);
extern void Controle_servo_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Controle_servo_T *const Controle_servo_M;

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
 * '<Root>' : 'Controle_servo'
 */
#endif                                 /* RTW_HEADER_Controle_servo_h_ */
