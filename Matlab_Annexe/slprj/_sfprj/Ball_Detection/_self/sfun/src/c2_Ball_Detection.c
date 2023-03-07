/* Include files */

#include "Ball_Detection_sfun.h"
#include "c2_Ball_Detection.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 1,  /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 28,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 97,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 88,/* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 121,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 1,/* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 9,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 21,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 29,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 34,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 37,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 49,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 1,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#Ball_Detection:13"                 /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 1,/* lineNo */
  "BlobAnalysis",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 1,/* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 1,/* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 1,/* lineNo */
  "Nondirect",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Nondirect.p"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 1,/* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 51,/* lineNo */
  "rgb2hsv",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\images\\rgb2hsv.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 16,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 38,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 77,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 27,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 39,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 40,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 41,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 413,/* lineNo */
  9,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 489,/* lineNo */
  5,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "max",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 35,/* lineNo */
  17,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 36,/* lineNo */
  17,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 37,/* lineNo */
  20,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 47,/* lineNo */
  17,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 47,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 48,/* lineNo */
  17,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 48,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 49,/* lineNo */
  20,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 49,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  34,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_emlrtECI = { 1,  /* nDims */
  35,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  34,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_b_emlrtECI = { 1,/* nDims */
  36,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtECInfo c2_c_emlrtECI = { 1,/* nDims */
  37,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtECInfo c2_d_emlrtECI = { 2,/* nDims */
  37,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtBCInfo c2_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  34,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_e_emlrtECI = { 1,/* nDims */
  47,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtBCInfo c2_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  34,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_f_emlrtECI = { 1,/* nDims */
  48,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtECInfo c2_g_emlrtECI = { 1,/* nDims */
  49,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtECInfo c2_h_emlrtECI = { 2,/* nDims */
  49,                                  /* lineNo */
  9,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13"                 /* pName */
};

static emlrtBCInfo c2_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  27,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 35, /* lineNo */
  27,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  27,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 36,/* lineNo */
  27,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  26,                                  /* colNo */
  "areas",                             /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 37,/* lineNo */
  26,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  27,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 47,/* lineNo */
  27,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  27,                                  /* colNo */
  "centroids",                         /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 48,/* lineNo */
  27,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  26,                                  /* colNo */
  "areas",                             /* aName */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 49,/* lineNo */
  26,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#Ball_Detection:13",                /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void initialize_params_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance);
static void enable_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void disable_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void c2_update_jit_animation_state_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance);
static void c2_do_animation_call_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance);
static void ext_mode_exec_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance);
static void set_sim_state_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void sf_gateway_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void mdl_start_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void mdl_terminate_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance);
static void c2_chartstep_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void initSimStructsc2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void c2_matlabCodegenHandle_matlabCodegenDestructor
  (SFc2_Ball_DetectionInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_visioncodegen_BlobAnalysis *c2_obj);
static c2_visioncodegen_BlobAnalysis *c2_BlobAnalysis_BlobAnalysis
  (SFc2_Ball_DetectionInstanceStruct *chartInstance,
   c2_visioncodegen_BlobAnalysis *c2_obj);
static void c2_rgb2hsv(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  real32_T c2_X[691200], real32_T c2_b_hsv[691200]);
static void c2_SystemCore_step(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_visioncodegen_BlobAnalysis *c2_obj, boolean_T
  c2_b_varargin_1[230400], int32_T c2_varargout_1_data[], int32_T
  c2_varargout_1_size[2], real_T c2_varargout_2_data[], int32_T
  c2_varargout_2_size[2]);
static void c2_BlobAnalysis_outputImpl(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, c2_visioncodegen_BlobAnalysis *c2_obj, boolean_T
  c2_b_varargin_1[230400], int32_T c2_varargout_1_data[], int32_T
  c2_varargout_1_size[2], real_T c2_varargout_2_data[], int32_T
  c2_varargout_2_size[2]);
static void c2_indexShapeCheck(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_matrixSize[2], int32_T c2_indexSize[2]);
static const mxArray *c2_emlrt_marshallOut(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const int32_T c2_u_data[], const int32_T c2_u_size[1]);
static void c2_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  const mxArray *c2_ballArea, const char_T *c2_identifier, int32_T c2_y_data[],
  int32_T c2_y_size[1]);
static void c2_b_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  int32_T c2_y_data[], int32_T c2_y_size[1]);
static void c2_c_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_ballX, const char_T *c2_identifier, real_T
  c2_y_data[], int32_T c2_y_size[1]);
static void c2_d_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y_data[], int32_T c2_y_size[1]);
static boolean_T c2_e_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_b_isInitialized, const char_T *c2_identifier);
static boolean_T c2_f_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_g_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_Ball_Detection, const char_T *
  c2_identifier);
static uint8_T c2_h_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static const mxArray *c2_chart_data_browse_helper
  (SFc2_Ball_DetectionInstanceStruct *chartInstance, int32_T c2_ssIdNumber);
static int32_T c2__s32_s64_(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  int64_T c2_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc);
static void init_dsm_address_info(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_Ball_DetectionInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_Ball_Detection = 0U;
}

static void initialize_params_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(5, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", chartInstance->c2_ballArea_data, 6,
    0U, 1U, 0U, 1, *chartInstance->c2_ballArea_sizes), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", chartInstance->c2_ballX_data, 0, 0U,
    1U, 0U, 1, *chartInstance->c2_ballX_sizes), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", chartInstance->c2_ballY_data, 0, 0U,
    1U, 0U, 1, *chartInstance->c2_ballY_sizes), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &chartInstance->c2_isInitialized, 11,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_Ball_Detection, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 4, c2_f_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_tmp_data[2];
  int32_T c2_tmp_size[1];
  int32_T c2_loop_ub;
  int32_T c2_i;
  real_T c2_b_tmp_data[2];
  int32_T c2_b_tmp_size[1];
  int32_T c2_b_loop_ub;
  int32_T c2_i1;
  real_T c2_c_tmp_data[2];
  int32_T c2_c_tmp_size[1];
  int32_T c2_c_loop_ub;
  int32_T c2_i2;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)),
                      "ballArea", c2_tmp_data, c2_tmp_size);
  *chartInstance->c2_ballArea_sizes = c2_tmp_size[0];
  c2_loop_ub = c2_tmp_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    (*chartInstance->c2_ballArea_data)[c2_i] = c2_tmp_data[c2_i];
  }

  c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 1)),
                        "ballX", c2_b_tmp_data, c2_b_tmp_size);
  *chartInstance->c2_ballX_sizes = c2_b_tmp_size[0];
  c2_b_loop_ub = c2_b_tmp_size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    (*chartInstance->c2_ballX_data)[c2_i1] = c2_b_tmp_data[c2_i1];
  }

  c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 2)),
                        "ballY", c2_c_tmp_data, c2_c_tmp_size);
  *chartInstance->c2_ballY_sizes = c2_c_tmp_size[0];
  c2_c_loop_ub = c2_c_tmp_size[0] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_c_loop_ub; c2_i2++) {
    (*chartInstance->c2_ballY_data)[c2_i2] = c2_c_tmp_data[c2_i2];
  }

  chartInstance->c2_isInitialized = c2_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 3)), "isInitialized");
  chartInstance->c2_is_active_c2_Ball_Detection = c2_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 4)),
     "is_active_c2_Ball_Detection");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void sf_gateway_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c2_i;
  int32_T c2_loop_ub;
  int32_T c2_i1;
  int32_T c2_b_loop_ub;
  int32_T c2_i2;
  int32_T c2_c_loop_ub;
  int32_T c2_i3;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 691200; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_c_frame)[c2_i]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_chartstep_c2_Ball_Detection(chartInstance, &c2_st);
  c2_do_animation_call_c2_Ball_Detection(chartInstance);
  c2_loop_ub = *chartInstance->c2_ballX_sizes - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U,
                      (*chartInstance->c2_ballX_data)[c2_i1]);
  }

  c2_b_loop_ub = *chartInstance->c2_ballY_sizes - 1;
  for (c2_i2 = 0; c2_i2 <= c2_b_loop_ub; c2_i2++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U,
                      (*chartInstance->c2_ballY_data)[c2_i2]);
  }

  c2_c_loop_ub = *chartInstance->c2_ballArea_sizes - 1;
  for (c2_i3 = 0; c2_i3 <= c2_c_loop_ub; c2_i3++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, (real_T)
                      (*chartInstance->c2_ballArea_data)[c2_i3]);
  }
}

static void mdl_start_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance)
{
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const int32_T c2_condTxtStartIdx[1] = { 1077 };

  static const int32_T c2_condTxtEndIdx[1] = { 1091 };

  static const int32_T c2_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c2_b_condTxtStartIdx[1] = { 1437 };

  static const int32_T c2_b_condTxtEndIdx[1] = { 1455 };

  static const int32_T c2_b_postfixPredicateTree[2] = { 0, -1 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    12U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 3U, 0U,
                  0U, 0U, 0U, 1U, 2U, 2U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1589);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 440, 457, 1073,
                    1368);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1073, 1091,
                    1236, 1368);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1433, 1455,
                    1586, 1589);
  covrtEmlWhileInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 385, 396,
                       1589);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1076, 1091,
                      1U, 0U, c2_condTxtStartIdx, c2_condTxtEndIdx, 2U,
                      c2_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1436, 1455,
                      1U, 1U, c2_b_condTxtStartIdx, c2_b_condTxtEndIdx, 2U,
                      c2_b_postfixPredicateTree);
}

static void mdl_cleanup_runtime_resources_c2_Ball_Detection
  (SFc2_Ball_DetectionInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void c2_chartstep_c2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  int32_T c2_i;
  int32_T c2_exitg1;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_areas_data[50];
  int32_T c2_areas_size[2];
  real_T c2_centroids_data[100];
  int32_T c2_centroids_size[2];
  boolean_T c2_b;
  boolean_T c2_b1;
  int32_T c2_ballX_size[1];
  real_T c2_b_ballX_data[2];
  int32_T c2_ballY_size[1];
  real_T c2_b_ballY_data[2];
  int32_T c2_ballArea_size[1];
  boolean_T c2_b2;
  int32_T c2_b_ballArea_data[2];
  boolean_T c2_b3;
  boolean_T c2_b4;
  const mxArray *c2_y = NULL;
  static char_T c2_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  int32_T c2_m;
  static char_T c2_cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  int32_T c2_n;
  const mxArray *c2_d_y = NULL;
  int32_T c2_loop_ub;
  int32_T c2_idx_size[2];
  int32_T c2_i25;
  int32_T c2_b_loop_ub;
  int32_T c2_i26;
  int32_T c2_c_loop_ub;
  int32_T c2_i27;
  int32_T c2_idx_data[1];
  int32_T c2_ex_data[1];
  int32_T c2_index_size[2];
  int32_T c2_b_i;
  int32_T c2_d_loop_ub;
  int32_T c2_i28;
  int32_T c2_e_loop_ub;
  int32_T c2_i29;
  int32_T c2_centroids;
  real_T c2_index_data[1];
  int32_T c2_index[1];
  int32_T c2_i30;
  int32_T c2_b_ballX_size[1];
  int32_T c2_f_loop_ub;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_b_centroids;
  int32_T c2_b_index[1];
  int32_T c2_i33;
  int32_T c2_g_loop_ub;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_b_areas_size[2];
  int32_T c2_b_index_size[2];
  int32_T c2_ex_size[2];
  int32_T c2_areas;
  int32_T c2_h_loop_ub;
  int32_T c2_i38;
  int32_T c2_i39;
  boolean_T c2_b5;
  boolean_T c2_b6;
  int32_T c2_c_centroids;
  int32_T c2_c_index[1];
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i_loop_ub;
  int32_T c2_i42;
  int32_T c2_i43;
  real_T c2_c_ballX_data[1];
  int32_T c2_j_loop_ub;
  int32_T c2_i44;
  int32_T c2_d_centroids;
  int32_T c2_d_index[1];
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_k_loop_ub;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_l_loop_ub;
  int32_T c2_i49;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_c_areas_size[2];
  int32_T c2_c_index_size[2];
  int32_T c2_b_areas;
  int32_T c2_m_loop_ub;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_n_loop_ub;
  int32_T c2_i54;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_i = 0; c2_i < 691200; c2_i++) {
    chartInstance->c2_frame[c2_i] = (*chartInstance->c2_c_frame)[c2_i];
  }

  emlrtHeapReferenceStackEnterFcnR2012b(c2_sp);
  emlrtPushHeapReferenceStackR2018aSL(c2_sp, chartInstance,
    &chartInstance->c2_blobAnalyzer,
    &c2_matlabCodegenHandle_matlabCodegenDestructor);
  chartInstance->c2_blobAnalyzer.matlabCodegenIsDeleted = true;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  c2_st.site = &c2_c_emlrtRSI;
  c2_BlobAnalysis_BlobAnalysis(chartInstance, &chartInstance->c2_blobAnalyzer);
  do {
    c2_exitg1 = 0;
    covrtEmlWhileEval(chartInstance->c2_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0, false);
    c2_st.site = &c2_d_emlrtRSI;
    for (c2_i1 = 0; c2_i1 < 691200; c2_i1++) {
      chartInstance->c2_b_frame[c2_i1] = chartInstance->c2_frame[c2_i1];
    }

    c2_rgb2hsv(chartInstance, chartInstance->c2_b_frame, chartInstance->c2_hsv);
    c2_i2 = 0;
    for (c2_i3 = 0; c2_i3 < 640; c2_i3++) {
      for (c2_i5 = 0; c2_i5 < 360; c2_i5++) {
        chartInstance->c2_mask[c2_i5 + c2_i2] = ((real_T)chartInstance->
          c2_hsv[c2_i5 + c2_i2] >= 0.05);
      }

      c2_i2 += 360;
    }

    c2_i4 = 0;
    for (c2_i6 = 0; c2_i6 < 640; c2_i6++) {
      for (c2_i8 = 0; c2_i8 < 360; c2_i8++) {
        chartInstance->c2_bv[c2_i8 + c2_i4] = ((real_T)chartInstance->
          c2_hsv[c2_i8 + c2_i4] <= 0.15);
      }

      c2_i4 += 360;
    }

    for (c2_i7 = 0; c2_i7 < 230400; c2_i7++) {
      chartInstance->c2_mask[c2_i7] = (chartInstance->c2_mask[c2_i7] &&
        chartInstance->c2_bv[c2_i7]);
    }

    c2_i9 = 0;
    for (c2_i10 = 0; c2_i10 < 640; c2_i10++) {
      for (c2_i12 = 0; c2_i12 < 360; c2_i12++) {
        chartInstance->c2_bv[c2_i12 + c2_i9] = ((real_T)chartInstance->c2_hsv
          [(c2_i12 + c2_i9) + 230400] >= 0.4);
      }

      c2_i9 += 360;
    }

    for (c2_i11 = 0; c2_i11 < 230400; c2_i11++) {
      chartInstance->c2_mask[c2_i11] = (chartInstance->c2_mask[c2_i11] &&
        chartInstance->c2_bv[c2_i11]);
    }

    c2_i13 = 0;
    for (c2_i14 = 0; c2_i14 < 640; c2_i14++) {
      for (c2_i16 = 0; c2_i16 < 360; c2_i16++) {
        chartInstance->c2_bv[c2_i16 + c2_i13] = (chartInstance->c2_hsv[(c2_i16 +
          c2_i13) + 230400] <= 1.0F);
      }

      c2_i13 += 360;
    }

    for (c2_i15 = 0; c2_i15 < 230400; c2_i15++) {
      chartInstance->c2_mask[c2_i15] = (chartInstance->c2_mask[c2_i15] &&
        chartInstance->c2_bv[c2_i15]);
    }

    c2_i17 = 0;
    for (c2_i18 = 0; c2_i18 < 640; c2_i18++) {
      for (c2_i20 = 0; c2_i20 < 360; c2_i20++) {
        chartInstance->c2_bv[c2_i20 + c2_i17] = (chartInstance->c2_hsv[(c2_i20 +
          c2_i17) + 460800] >= 0.5F);
      }

      c2_i17 += 360;
    }

    for (c2_i19 = 0; c2_i19 < 230400; c2_i19++) {
      chartInstance->c2_mask[c2_i19] = (chartInstance->c2_mask[c2_i19] &&
        chartInstance->c2_bv[c2_i19]);
    }

    c2_i21 = 0;
    for (c2_i22 = 0; c2_i22 < 640; c2_i22++) {
      for (c2_i24 = 0; c2_i24 < 360; c2_i24++) {
        chartInstance->c2_bv[c2_i24 + c2_i21] = (chartInstance->c2_hsv[(c2_i24 +
          c2_i21) + 460800] <= 1.0F);
      }

      c2_i21 += 360;
    }

    for (c2_i23 = 0; c2_i23 < 230400; c2_i23++) {
      chartInstance->c2_mask[c2_i23] = (chartInstance->c2_mask[c2_i23] &&
        chartInstance->c2_bv[c2_i23]);
    }

    c2_st.site = &c2_e_emlrtRSI;
    c2_SystemCore_step(chartInstance, &c2_st, &chartInstance->c2_blobAnalyzer,
                       chartInstance->c2_mask, c2_areas_data, c2_areas_size,
                       c2_centroids_data, c2_centroids_size);
    c2_b = (c2_areas_size[0] == 0);
    c2_b1 = (c2_areas_size[1] == 0);
    if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 1,
                       covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0,
          0, !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 0, c2_b ||
           c2_b1)))) {
      c2_st.site = &c2_f_emlrtRSI;
      c2_b_st.site = &c2_p_emlrtRSI;
      c2_c_st.site = &c2_q_emlrtRSI;
      c2_d_st.site = &c2_r_emlrtRSI;
      c2_b2 = (c2_areas_size[0] == 1);
      c2_b3 = (c2_areas_size[1] == 1);
      if ((c2_b2 && c2_b3) || ((real_T)c2_areas_size[0] != 1.0)) {
        c2_b4 = true;
      } else {
        c2_b4 = false;
      }

      if (!c2_b4) {
        c2_y = NULL;
        sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                      false);
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
          36), false);
        sf_mex_call(&c2_d_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                    sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
      }

      if (!((real_T)c2_areas_size[0] >= 1.0)) {
        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c2_d_y = NULL;
        sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c2_d_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                    sf_mex_call(&c2_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_d_st, NULL, "message", 1U, 1U, 14, c2_d_y)));
      }

      c2_m = c2_areas_size[0];
      c2_n = c2_areas_size[1];
      c2_idx_size[0] = 1;
      c2_idx_size[1] = c2_n;
      c2_b_loop_ub = c2_n - 1;
      for (c2_i26 = 0; c2_i26 <= c2_b_loop_ub; c2_i26++) {
        c2_idx_data[c2_i26] = 1;
      }

      if (c2_n >= 1) {
        c2_ex_data[0] = c2_areas_data[0];
        for (c2_b_i = 1; c2_b_i < c2_m; c2_b_i++) {
          if (c2_ex_data[0] < c2_areas_data[c2_b_i]) {
            c2_ex_data[0] = c2_areas_data[c2_b_i];
            c2_idx_data[0] = c2_b_i + 1;
          }
        }
      }

      c2_index_size[0] = 1;
      c2_index_size[1] = c2_idx_size[1];
      c2_e_loop_ub = c2_idx_size[0] * c2_idx_size[1] - 1;
      for (c2_i29 = 0; c2_i29 <= c2_e_loop_ub; c2_i29++) {
        c2_index_data[c2_i29] = (real_T)c2_idx_data[c2_i29];
      }

      c2_centroids = c2_centroids_size[0];
      c2_index[0] = c2_index_size[0] * c2_index_size[1];
      c2_i30 = 1;
      emlrtDynamicBoundsCheckR2012b(c2_i30, 1, c2_centroids_size[1],
        &c2_emlrtBCI, c2_sp);
      c2_b_ballX_size[0] = c2_index[0];
      c2_f_loop_ub = c2_index[0] - 1;
      for (c2_i31 = 0; c2_i31 <= c2_f_loop_ub; c2_i31++) {
        c2_i32 = (int32_T)emlrtIntegerCheckR2012b(c2_index_data[c2_i31],
          &c2_emlrtDCI, c2_sp);
        emlrtDynamicBoundsCheckR2012b(c2_i32, 1, c2_centroids, &c2_e_emlrtBCI,
          c2_sp);
      }

      emlrtDimSizeGeqCheckR2012b(2, c2_b_ballX_size[0], &c2_emlrtECI, c2_sp);
      c2_b_centroids = c2_centroids_size[0];
      c2_b_index[0] = c2_index_size[0] * c2_index_size[1];
      c2_i33 = 2;
      emlrtDynamicBoundsCheckR2012b(c2_i33, 1, c2_centroids_size[1],
        &c2_b_emlrtBCI, c2_sp);
      c2_b_ballX_size[0] = c2_b_index[0];
      c2_g_loop_ub = c2_b_index[0] - 1;
      for (c2_i34 = 0; c2_i34 <= c2_g_loop_ub; c2_i34++) {
        c2_i35 = (int32_T)emlrtIntegerCheckR2012b(c2_index_data[c2_i34],
          &c2_b_emlrtDCI, c2_sp);
        emlrtDynamicBoundsCheckR2012b(c2_i35, 1, c2_b_centroids, &c2_f_emlrtBCI,
          c2_sp);
      }

      emlrtDimSizeGeqCheckR2012b(2, c2_b_ballX_size[0], &c2_b_emlrtECI, c2_sp);
      c2_st.site = &c2_g_emlrtRSI;
      for (c2_i36 = 0; c2_i36 < 2; c2_i36++) {
        c2_b_areas_size[c2_i36] = c2_areas_size[c2_i36];
      }

      for (c2_i37 = 0; c2_i37 < 2; c2_i37++) {
        c2_b_index_size[c2_i37] = c2_index_size[c2_i37];
      }

      c2_indexShapeCheck(chartInstance, &c2_st, c2_b_areas_size, c2_b_index_size);
      c2_ex_size[0] = 1;
      c2_ex_size[1] = c2_index_size[1];
      c2_areas = c2__s32_s64_(chartInstance, (int64_T)c2_areas_size[0] *
        (int64_T)c2_areas_size[1], 0, 1U, 1218, 12);
      c2_h_loop_ub = c2_index_size[0] * c2_index_size[1] - 1;
      for (c2_i38 = 0; c2_i38 <= c2_h_loop_ub; c2_i38++) {
        c2_i39 = (int32_T)emlrtIntegerCheckR2012b(c2_index_data[c2_i38],
          &c2_c_emlrtDCI, c2_sp);
        emlrtDynamicBoundsCheckR2012b(c2_i39, 1, c2_areas, &c2_g_emlrtBCI, c2_sp);
      }

      emlrtDimSizeGeqCheckR2012b(2, c2_ex_size[0], &c2_c_emlrtECI, c2_sp);
      emlrtDimSizeEqCheckR2012b(1, c2_ex_size[1], &c2_d_emlrtECI, c2_sp);
      c2_b5 = (c2_centroids_size[0] == 0);
      c2_b6 = (c2_centroids_size[1] == 0);
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 2,
                         covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0,
            1, !covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 1,
             c2_b5 || c2_b6)))) {
        c2_c_centroids = c2_centroids_size[0];
        c2_c_index[0] = c2_index_size[0] * c2_index_size[1];
        c2_i40 = 1;
        c2_i41 = emlrtDynamicBoundsCheckR2012b(c2_i40, 1, c2_centroids_size[1],
          &c2_c_emlrtBCI, c2_sp) - 1;
        c2_b_ballX_size[0] = c2_c_index[0];
        c2_i_loop_ub = c2_c_index[0] - 1;
        for (c2_i42 = 0; c2_i42 <= c2_i_loop_ub; c2_i42++) {
          c2_i43 = (int32_T)emlrtIntegerCheckR2012b(c2_index_data[c2_i42],
            &c2_d_emlrtDCI, c2_sp);
          c2_c_ballX_data[c2_i42] = c2_centroids_data
            [(emlrtDynamicBoundsCheckR2012b(c2_i43, 1, c2_c_centroids,
               &c2_h_emlrtBCI, c2_sp) + c2_centroids_size[0] * c2_i41) - 1];
        }

        emlrtDimSizeGeqCheckR2012b(2, c2_b_ballX_size[0], &c2_e_emlrtECI, c2_sp);
        c2_ballX_size[0] = c2_b_ballX_size[0];
        c2_j_loop_ub = c2_b_ballX_size[0] - 1;
        for (c2_i44 = 0; c2_i44 <= c2_j_loop_ub; c2_i44++) {
          c2_b_ballX_data[c2_i44] = c2_c_ballX_data[c2_i44];
        }

        c2_d_centroids = c2_centroids_size[0];
        c2_d_index[0] = c2_index_size[0] * c2_index_size[1];
        c2_i45 = 2;
        c2_i46 = emlrtDynamicBoundsCheckR2012b(c2_i45, 1, c2_centroids_size[1],
          &c2_d_emlrtBCI, c2_sp) - 1;
        c2_b_ballX_size[0] = c2_d_index[0];
        c2_k_loop_ub = c2_d_index[0] - 1;
        for (c2_i47 = 0; c2_i47 <= c2_k_loop_ub; c2_i47++) {
          c2_i48 = (int32_T)emlrtIntegerCheckR2012b(c2_index_data[c2_i47],
            &c2_e_emlrtDCI, c2_sp);
          c2_c_ballX_data[c2_i47] = c2_centroids_data
            [(emlrtDynamicBoundsCheckR2012b(c2_i48, 1, c2_d_centroids,
               &c2_i_emlrtBCI, c2_sp) + c2_centroids_size[0] * c2_i46) - 1];
        }

        emlrtDimSizeGeqCheckR2012b(2, c2_b_ballX_size[0], &c2_f_emlrtECI, c2_sp);
        c2_ballY_size[0] = c2_b_ballX_size[0];
        c2_l_loop_ub = c2_b_ballX_size[0] - 1;
        for (c2_i49 = 0; c2_i49 <= c2_l_loop_ub; c2_i49++) {
          c2_b_ballY_data[c2_i49] = c2_c_ballX_data[c2_i49];
        }

        c2_st.site = &c2_h_emlrtRSI;
        for (c2_i50 = 0; c2_i50 < 2; c2_i50++) {
          c2_c_areas_size[c2_i50] = c2_areas_size[c2_i50];
        }

        for (c2_i51 = 0; c2_i51 < 2; c2_i51++) {
          c2_c_index_size[c2_i51] = c2_index_size[c2_i51];
        }

        c2_indexShapeCheck(chartInstance, &c2_st, c2_c_areas_size,
                           c2_c_index_size);
        c2_ex_size[0] = 1;
        c2_ex_size[1] = c2_index_size[1];
        c2_b_areas = c2__s32_s64_(chartInstance, (int64_T)c2_areas_size[0] *
          (int64_T)c2_areas_size[1], 0, 1U, 1549, 12);
        c2_m_loop_ub = c2_index_size[0] * c2_index_size[1] - 1;
        for (c2_i52 = 0; c2_i52 <= c2_m_loop_ub; c2_i52++) {
          c2_i53 = (int32_T)emlrtIntegerCheckR2012b(c2_index_data[c2_i52],
            &c2_f_emlrtDCI, c2_sp);
          c2_ex_data[c2_i52] = c2_areas_data[emlrtDynamicBoundsCheckR2012b
            (c2_i53, 1, c2_b_areas, &c2_j_emlrtBCI, c2_sp) - 1];
        }

        emlrtDimSizeGeqCheckR2012b(2, c2_ex_size[0], &c2_g_emlrtECI, c2_sp);
        emlrtDimSizeEqCheckR2012b(1, c2_ex_size[1], &c2_h_emlrtECI, c2_sp);
        c2_ballArea_size[0] = c2_ex_size[0];
        c2_n_loop_ub = c2_ex_size[0] - 1;
        for (c2_i54 = 0; c2_i54 <= c2_n_loop_ub; c2_i54++) {
          c2_b_ballArea_data[c2_i54] = c2_ex_data[c2_i54];
        }

        c2_exitg1 = 1;
      } else {
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }
    } else {
      c2_ballX_size[0] = 1;
      c2_b_ballX_data[0] = 297.4;
      c2_ballY_size[0] = 1;
      c2_b_ballY_data[0] = 198.5;
      c2_ballArea_size[0] = 1;
      c2_b_ballArea_data[0] = 0;
      sf_mex_printf("%s =\\n", "ballArea");
      sf_mex_call(c2_sp, NULL, "disp", 0U, 1U, 14, c2_emlrt_marshallOut
                  (chartInstance, c2_b_ballArea_data, c2_ballArea_size));
      c2_exitg1 = 1;
    }
  } while (c2_exitg1 == 0);

  c2_st.site = &c2_i_emlrtRSI;
  c2_matlabCodegenHandle_matlabCodegenDestructor(chartInstance, &c2_st,
    &chartInstance->c2_blobAnalyzer);
  emlrtHeapReferenceStackLeaveFcnR2012b(c2_sp);
  *chartInstance->c2_ballX_sizes = c2_ballX_size[0];
  c2_loop_ub = c2_ballX_size[0] - 1;
  for (c2_i25 = 0; c2_i25 <= c2_loop_ub; c2_i25++) {
    (*chartInstance->c2_ballX_data)[c2_i25] = c2_b_ballX_data[c2_i25];
  }

  *chartInstance->c2_ballY_sizes = c2_ballY_size[0];
  c2_c_loop_ub = c2_ballY_size[0] - 1;
  for (c2_i27 = 0; c2_i27 <= c2_c_loop_ub; c2_i27++) {
    (*chartInstance->c2_ballY_data)[c2_i27] = c2_b_ballY_data[c2_i27];
  }

  *chartInstance->c2_ballArea_sizes = c2_ballArea_size[0];
  c2_d_loop_ub = c2_ballArea_size[0] - 1;
  for (c2_i28 = 0; c2_i28 <= c2_d_loop_ub; c2_i28++) {
    (*chartInstance->c2_ballArea_data)[c2_i28] = c2_b_ballArea_data[c2_i28];
  }
}

static void initSimStructsc2_Ball_Detection(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_matlabCodegenHandle_matlabCodegenDestructor
  (SFc2_Ball_DetectionInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_visioncodegen_BlobAnalysis *c2_obj)
{
  c2_visioncodegen_BlobAnalysis *c2_b_obj;
  c2_visioncodegen_BlobAnalysis *c2_c_obj;
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_b_obj = c2_obj;
    c2_c_obj = c2_b_obj;
    if (c2_c_obj->isInitialized == 1) {
      c2_c_obj->isInitialized = 2;
    }
  }
}

const mxArray *sf_c2_Ball_Detection_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static c2_visioncodegen_BlobAnalysis *c2_BlobAnalysis_BlobAnalysis
  (SFc2_Ball_DetectionInstanceStruct *chartInstance,
   c2_visioncodegen_BlobAnalysis *c2_obj)
{
  c2_visioncodegen_BlobAnalysis *c2_b_obj;
  c2_visioncodegen_BlobAnalysis *c2_c_obj;
  c2_visioncodegen_BlobAnalysis *c2_d_obj;
  c2_visioncodegen_BlobAnalysis *c2_this;
  c2_visioncodegen_BlobAnalysis *c2_e_obj;
  c2_visioncodegen_BlobAnalysis *c2_b_this;
  c2_visioncodegen_BlobAnalysis *c2_f_obj;
  int32_T c2_i;
  c2_visioncodegen_BlobAnalysis *c2_g_obj;
  c2_visioncodegen_BlobAnalysis *c2_c_this;
  c2_vision_BlobAnalysis_0 *c2_h_obj;
  c2_vision_BlobAnalysis_0 *c2_i_obj;
  int32_T c2_i1;
  c2_visioncodegen_BlobAnalysis *c2_j_obj;
  static int32_T c2_iv[8] = { -1, 361, 362, 363, 1, -361, -362, -363 };

  c2_visioncodegen_BlobAnalysis *c2_k_obj;
  c2_visioncodegen_BlobAnalysis *c2_l_obj;
  c2_visioncodegen_BlobAnalysis *c2_m_obj;
  c2_visioncodegen_BlobAnalysis *c2_n_obj;
  boolean_T c2_flag;
  c2_visioncodegen_BlobAnalysis *c2_o_obj;
  c2_vision_BlobAnalysis_0 *c2_p_obj;
  c2_visioncodegen_BlobAnalysis *c2_q_obj;
  c2_visioncodegen_BlobAnalysis *c2_r_obj;
  boolean_T c2_b_flag;
  c2_visioncodegen_BlobAnalysis *c2_s_obj;
  c2_vision_BlobAnalysis_0 *c2_t_obj;
  (void)chartInstance;
  c2_b_obj = c2_obj;
  c2_c_obj = c2_b_obj;
  c2_b_obj = c2_c_obj;
  c2_d_obj = c2_b_obj;
  c2_b_obj = c2_d_obj;
  c2_this = c2_b_obj;
  c2_b_obj = c2_this;
  c2_e_obj = c2_b_obj;
  c2_b_obj = c2_e_obj;
  c2_b_obj->isInitialized = 0;
  c2_b_this = c2_b_obj;
  c2_b_obj = c2_b_this;
  c2_f_obj = c2_b_obj;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_f_obj->tunablePropertyChanged[c2_i] = false;
  }

  c2_g_obj = c2_b_obj;
  c2_b_obj = c2_g_obj;
  c2_c_this = c2_b_obj;
  c2_b_obj = c2_c_this;
  c2_b_obj->NoTuningBeforeLockingCodeGenError = true;
  c2_h_obj = &c2_b_obj->cSFunObject;

  /* System object Constructor function: vision.BlobAnalysis */
  c2_i_obj = c2_h_obj;
  for (c2_i1 = 0; c2_i1 < 8; c2_i1++) {
    c2_i_obj->P0_WALKER_RTP[c2_i1] = c2_iv[c2_i1];
  }

  c2_j_obj = c2_b_obj;
  c2_k_obj = c2_j_obj;
  c2_l_obj = c2_k_obj;
  c2_m_obj = c2_l_obj;
  c2_n_obj = c2_m_obj;
  c2_flag = (c2_n_obj->isInitialized == 1);
  if (c2_flag) {
    c2_m_obj->TunablePropsChanged = true;
    c2_m_obj->tunablePropertyChanged[0] = true;
  }

  c2_o_obj = c2_l_obj;
  c2_p_obj = &c2_o_obj->cSFunObject;
  c2_p_obj->P1_MINAREA_RTP = 100U;
  c2_o_obj->MinimumBlobArea = 100.0;
  c2_q_obj = c2_l_obj;
  c2_r_obj = c2_q_obj;
  c2_b_flag = (c2_r_obj->isInitialized == 1);
  if (c2_b_flag) {
    c2_q_obj->TunablePropsChanged = true;
    c2_q_obj->tunablePropertyChanged[1] = true;
  }

  c2_s_obj = c2_l_obj;
  c2_t_obj = &c2_s_obj->cSFunObject;
  c2_t_obj->P2_MAXAREA_RTP = 10000U;
  c2_s_obj->MaximumBlobArea = 10000.0;
  c2_b_obj->NoTuningBeforeLockingCodeGenError = false;
  c2_b_obj->matlabCodegenIsDeleted = false;
  return c2_b_obj;
}

static void c2_rgb2hsv(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  real32_T c2_X[691200], real32_T c2_b_hsv[691200])
{
  (void)chartInstance;
  rgb2hsv_tbb_real32(c2_X, 230400.0, c2_b_hsv, true);
}

static void c2_SystemCore_step(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_visioncodegen_BlobAnalysis *c2_obj, boolean_T
  c2_b_varargin_1[230400], int32_T c2_varargout_1_data[], int32_T
  c2_varargout_1_size[2], real_T c2_varargout_2_data[], int32_T
  c2_varargout_2_size[2])
{
  emlrtStack c2_st;
  emlrtStack c2_b_st;
  const mxArray *c2_y = NULL;
  static char_T c2_cv[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *c2_b_y = NULL;
  c2_visioncodegen_BlobAnalysis *c2_b_obj;
  c2_visioncodegen_BlobAnalysis *c2_c_obj;
  const mxArray *c2_c_y = NULL;
  c2_visioncodegen_BlobAnalysis *c2_d_obj;
  static char_T c2_cv1[4] = { 's', 't', 'e', 'p' };

  int32_T c2_i;
  const mxArray *c2_d_y = NULL;
  static char_T c2_cv2[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  c2_visioncodegen_BlobAnalysis *c2_e_obj;
  const mxArray *c2_e_y = NULL;
  int32_T c2_i1;
  const mxArray *c2_f_y = NULL;
  c2_cell_wrap_3 c2_varSizes[1];
  static char_T c2_cv3[5] = { 's', 'e', 't', 'u', 'p' };

  c2_visioncodegen_BlobAnalysis *c2_f_obj;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  if (c2_obj->isInitialized == 2) {
    c2_y = NULL;
    sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c2_sp, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14, sf_mex_call
                (c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c2_sp, NULL,
      "message", 1U, 2U, 14, c2_b_y, 14, c2_c_y)));
  }

  if (c2_obj->isInitialized != 1) {
    c2_st.site = &c2_b_emlrtRSI;
    c2_b_obj = c2_obj;
    c2_b_st.site = &c2_b_emlrtRSI;
    c2_d_obj = c2_b_obj;
    c2_d_obj->isSetupComplete = false;
    if (c2_d_obj->isInitialized != 0) {
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c2_b_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 2U, 14, c2_e_y, 14, c2_f_y)));
    }

    c2_d_obj->isInitialized = 1;
    c2_e_obj = c2_d_obj;
    for (c2_i1 = 0; c2_i1 < 8; c2_i1++) {
      c2_varSizes[0].f1[c2_i1] = 1U;
    }

    c2_e_obj->inputVarSize[0] = c2_varSizes[0];
    c2_f_obj = c2_d_obj;
    c2_f_obj->NoTuningBeforeLockingCodeGenError = true;
    c2_d_obj->isSetupComplete = true;
  }

  c2_st.site = &c2_b_emlrtRSI;
  c2_c_obj = c2_obj;
  c2_b_st.site = &c2_b_emlrtRSI;
  for (c2_i = 0; c2_i < 230400; c2_i++) {
    chartInstance->c2_varargin_1[c2_i] = c2_b_varargin_1[c2_i];
  }

  c2_BlobAnalysis_outputImpl(chartInstance, c2_c_obj,
    chartInstance->c2_varargin_1, c2_varargout_1_data, c2_varargout_1_size,
    c2_varargout_2_data, c2_varargout_2_size);
}

static void c2_BlobAnalysis_outputImpl(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, c2_visioncodegen_BlobAnalysis *c2_obj, boolean_T
  c2_b_varargin_1[230400], int32_T c2_varargout_1_data[], int32_T
  c2_varargout_1_size[2], real_T c2_varargout_2_data[], int32_T
  c2_varargout_2_size[2])
{
  c2_vision_BlobAnalysis_0 *c2_b_obj;
  c2_vision_BlobAnalysis_0 *c2_c_obj;
  boolean_T c2_maxNumBlobsReached;
  int32_T c2_loop;
  uint8_T c2_currentLabel;
  int32_T c2_i;
  int32_T c2_idx;
  int32_T c2_n;
  int32_T c2_b_loop;
  int32_T c2_m;
  int32_T c2_nn;
  uint32_T c2_stackIdx;
  uint32_T c2_pixIdx;
  int32_T c2_b_n;
  int32_T c2_mm;
  uint32_T c2_numBlobs;
  int32_T c2_nnPadRows;
  int32_T c2_b_m;
  int32_T c2_pixListMinc;
  int32_T c2_pixListNinc;
  int32_T c2_b_i;
  uint32_T c2_padIdx;
  uint32_T c2_start_pixIdx;
  int32_T c2_ns;
  int32_T c2_ms;
  int32_T c2_numLoops;
  int32_T c2_j;
  real_T c2_centroid[2];
  int32_T c2_p;
  uint32_T c2_colOffset;
  uint32_T c2_centerIdx;
  int32_T c2_c_i;
  int32_T c2_loopStart;
  int32_T c2_loopEnd;
  uint32_T c2_walkerIdx;
  (void)chartInstance;
  c2_b_obj = &c2_obj->cSFunObject;
  c2_c_obj = c2_b_obj;

  /* System object Outputs function: vision.BlobAnalysis */
  c2_maxNumBlobsReached = false;
  for (c2_loop = 0; c2_loop < 363; c2_loop++) {
    c2_c_obj->W3_PAD_DW[c2_loop] = 0U;
  }

  c2_currentLabel = 1U;
  c2_i = 0;
  c2_idx = 363;
  for (c2_n = 0; c2_n < 640; c2_n++) {
    for (c2_m = 0; c2_m < 360; c2_m++) {
      if (c2_b_varargin_1[c2_i]) {
        c2_c_obj->W3_PAD_DW[c2_idx] = MAX_uint8_T;
      } else {
        c2_c_obj->W3_PAD_DW[c2_idx] = 0U;
      }

      c2_i++;
      c2_idx++;
    }

    c2_c_obj->W3_PAD_DW[c2_idx] = 0U;
    c2_c_obj->W3_PAD_DW[c2_idx + 1] = 0U;
    c2_idx += 2;
  }

  for (c2_b_loop = 0; c2_b_loop < 361; c2_b_loop++) {
    c2_c_obj->W3_PAD_DW[c2_b_loop + c2_idx] = 0U;
  }

  c2_nn = 0;
  c2_stackIdx = 0U;
  c2_pixIdx = 0U;
  c2_b_n = 0;
  while (c2_b_n < 640) {
    c2_mm = 0;
    c2_nnPadRows = (c2_nn + 1) * 362;
    c2_b_m = 0;
    while (c2_b_m < 360) {
      c2_padIdx = (uint32_T)((c2_nnPadRows + c2_mm) + 1);
      c2_start_pixIdx = c2_pixIdx;
      if (c2_c_obj->W3_PAD_DW[c2_padIdx] == 255) {
        c2_c_obj->W3_PAD_DW[c2_padIdx] = c2_currentLabel;
        c2_c_obj->W0_N_PIXLIST_DW[c2_pixIdx] = (int16_T)c2_nn;
        c2_c_obj->W1_M_PIXLIST_DW[c2_pixIdx] = (int16_T)c2_mm;
        c2_pixIdx++;
        c2_c_obj->W2_NUM_PIX_DW[c2_currentLabel - 1] = 1U;
        c2_c_obj->W4_STACK_DW[c2_stackIdx] = c2_padIdx;
        c2_stackIdx++;
        while (c2_stackIdx != 0U) {
          c2_stackIdx--;
          c2_centerIdx = c2_c_obj->W4_STACK_DW[c2_stackIdx];
          for (c2_c_i = 0; c2_c_i < 8; c2_c_i++) {
            c2_walkerIdx = c2_centerIdx + (uint32_T)c2_c_obj->
              P0_WALKER_RTP[c2_c_i];
            if (c2_c_obj->W3_PAD_DW[c2_walkerIdx] == 255) {
              c2_c_obj->W3_PAD_DW[c2_walkerIdx] = c2_currentLabel;
              c2_c_obj->W0_N_PIXLIST_DW[c2_pixIdx] = (int16_T)((int16_T)
                (c2_walkerIdx / 362U) - 1);
              c2_c_obj->W1_M_PIXLIST_DW[c2_pixIdx] = (int16_T)(c2_walkerIdx %
                362U - 1U);
              c2_pixIdx++;
              c2_c_obj->W2_NUM_PIX_DW[c2_currentLabel - 1]++;
              c2_c_obj->W4_STACK_DW[c2_stackIdx] = c2_walkerIdx;
              c2_stackIdx++;
            }
          }
        }

        if ((c2_c_obj->W2_NUM_PIX_DW[c2_currentLabel - 1] <
             c2_c_obj->P1_MINAREA_RTP) || (c2_c_obj->
             W2_NUM_PIX_DW[c2_currentLabel - 1] > c2_c_obj->P2_MAXAREA_RTP)) {
          c2_currentLabel--;
          c2_pixIdx = c2_start_pixIdx;
        }

        if (c2_currentLabel == 50) {
          c2_maxNumBlobsReached = true;
          c2_b_n = 640;
          c2_b_m = 360;
        }

        if (c2_b_m < 360) {
          c2_currentLabel++;
        }
      }

      c2_mm++;
      c2_b_m++;
    }

    c2_nn++;
    c2_b_n++;
  }

  if (c2_maxNumBlobsReached) {
    c2_numBlobs = c2_currentLabel;
  } else {
    c2_numBlobs = (uint8_T)((uint32_T)c2_currentLabel - 1U);
  }

  c2_pixListMinc = 0;
  c2_pixListNinc = 0;
  for (c2_b_i = 0; c2_b_i < (int32_T)c2_numBlobs; c2_b_i++) {
    c2_varargout_1_data[c2_b_i] = (int32_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
    c2_ns = 0;
    c2_ms = 0;
    if (c2_c_obj->W2_NUM_PIX_DW[c2_b_i] <= 260000U) {
      for (c2_j = 0; c2_j < (int32_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i]; c2_j++) {
        c2_ns += c2_c_obj->W0_N_PIXLIST_DW[c2_j + c2_pixListNinc];
        c2_ms += c2_c_obj->W1_M_PIXLIST_DW[c2_j + c2_pixListMinc];
      }

      c2_centroid[0] = (real_T)c2_ms / (real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
      c2_centroid[1] = (real_T)c2_ns / (real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
    } else {
      c2_numLoops = (int32_T)((real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i] / 260000.0);
      c2_centroid[0] = 0.0;
      c2_centroid[1] = 0.0;
      for (c2_p = 0; c2_p < c2_numLoops; c2_p++) {
        c2_ns = 0;
        c2_ms = 0;
        for (c2_j = 0; c2_j < 260000; c2_j++) {
          c2_ns += c2_c_obj->W0_N_PIXLIST_DW[(c2_pixListNinc + c2_j) + c2_p *
            260000];
          c2_ms += c2_c_obj->W1_M_PIXLIST_DW[(c2_pixListMinc + c2_j) + c2_p *
            260000];
        }

        c2_centroid[0] += (real_T)c2_ms / (real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
        c2_centroid[1] += (real_T)c2_ns / (real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
      }

      c2_ns = 0;
      c2_ms = 0;
      c2_loopStart = c2_numLoops * 260000;
      c2_loopEnd = (int32_T)(c2_c_obj->W2_NUM_PIX_DW[c2_b_i] - (uint32_T)
        c2_loopStart);
      for (c2_j = 0; c2_j < c2_loopEnd; c2_j++) {
        c2_ns += c2_c_obj->W0_N_PIXLIST_DW[(c2_j + c2_pixListNinc) +
          c2_loopStart];
        c2_ms += c2_c_obj->W1_M_PIXLIST_DW[(c2_j + c2_pixListMinc) +
          c2_loopStart];
      }

      c2_centroid[0] += (real_T)c2_ms / (real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
      c2_centroid[1] += (real_T)c2_ns / (real_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
    }

    c2_colOffset = c2_numBlobs;
    c2_varargout_2_data[c2_b_i] = c2_centroid[1] + 1.0;
    c2_varargout_2_data[c2_colOffset + (uint32_T)c2_b_i] = c2_centroid[0] + 1.0;
    c2_pixListMinc += (int32_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
    c2_pixListNinc += (int32_T)c2_c_obj->W2_NUM_PIX_DW[c2_b_i];
  }

  c2_varargout_1_size[0] = (int32_T)c2_numBlobs;
  c2_varargout_1_size[1] = 1;
  c2_varargout_2_size[0] = (int32_T)c2_numBlobs;
  c2_varargout_2_size[1] = 2;
}

static void c2_indexShapeCheck(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, int32_T c2_matrixSize[2], int32_T c2_indexSize[2])
{
  emlrtStack c2_st;
  boolean_T c2_nonSingletonDimFound;
  boolean_T c2_b;
  boolean_T c2_b_nonSingletonDimFound;
  boolean_T c2_b_b;
  boolean_T c2_c;
  boolean_T c2_b_c;
  boolean_T c2_c_c;
  const mxArray *c2_y = NULL;
  static char_T c2_cv[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'M', 'a', 't', 'r', 'i', 'x', 'M',
    'a', 't', 'r', 'i', 'x', '_', 'M', 'M' };

  const mxArray *c2_b_y = NULL;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_nonSingletonDimFound = false;
  if (c2_matrixSize[0] != 1) {
    c2_nonSingletonDimFound = true;
  }

  if (c2_matrixSize[1] != 1) {
    if (c2_nonSingletonDimFound) {
      c2_b = false;
    } else {
      c2_nonSingletonDimFound = true;
      c2_b = c2_nonSingletonDimFound;
    }
  } else {
    c2_b = c2_nonSingletonDimFound;
  }

  if (c2_b) {
    c2_b_nonSingletonDimFound = false;
    if (c2_indexSize[0] != 1) {
      c2_b_nonSingletonDimFound = true;
    }

    if (c2_indexSize[1] != 1) {
      if (c2_b_nonSingletonDimFound) {
        c2_b_b = false;
      } else {
        c2_b_nonSingletonDimFound = true;
        c2_b_b = c2_b_nonSingletonDimFound;
      }
    } else {
      c2_b_b = c2_b_nonSingletonDimFound;
    }

    if (c2_b_b) {
      if (c2_matrixSize[0] != 1) {
        c2_c = true;
      } else {
        c2_c = false;
      }

      if (c2_c || ((c2_matrixSize[1] == 1) != (c2_indexSize[1] == 1))) {
        c2_c = true;
      } else {
        c2_c = false;
      }

      c2_b_c = c2_c;
      c2_st.site = &c2_s_emlrtRSI;
      c2_c_c = c2_b_c;
      if (c2_c_c) {
        c2_y = NULL;
        sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                      false);
        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        sf_mex_call(&c2_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_y, 14,
                    sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_st, NULL, "message", 1U, 1U, 14, c2_b_y)));
      }
    }
  }
}

static const mxArray *c2_emlrt_marshallOut(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const int32_T c2_u_data[], const int32_T c2_u_size[1])
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", (void *)c2_u_data, 6, 0U, 1U, 0U, 1,
    c2_u_size[0]), false);
  return c2_y;
}

static void c2_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  const mxArray *c2_ballArea, const char_T *c2_identifier, int32_T c2_y_data[],
  int32_T c2_y_size[1])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_ballArea), &c2_thisId,
                        c2_y_data, c2_y_size);
  sf_mex_destroy(&c2_ballArea);
}

static void c2_b_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  int32_T c2_y_data[], int32_T c2_y_size[1])
{
  uint32_T c2_uv[1];
  int32_T c2_tmp_size[1];
  boolean_T c2_b_bv[1];
  int32_T c2_tmp_data[2];
  int32_T c2_loop_ub;
  int32_T c2_i;
  (void)chartInstance;
  c2_uv[0] = 2U;
  c2_tmp_size[0] = sf_mex_get_dimension(c2_u, 0);
  c2_b_bv[0] = true;
  sf_mex_import_vs(c2_parentId, sf_mex_dup(c2_u), &c2_tmp_data, 1, 6, 0U, 1, 0U,
                   1, c2_b_bv, c2_uv, c2_tmp_size);
  c2_y_size[0] = c2_tmp_size[0];
  c2_loop_ub = c2_tmp_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_y_data[c2_i] = c2_tmp_data[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_c_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_ballX, const char_T *c2_identifier, real_T
  c2_y_data[], int32_T c2_y_size[1])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_ballX), &c2_thisId,
                        c2_y_data, c2_y_size);
  sf_mex_destroy(&c2_ballX);
}

static void c2_d_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y_data[], int32_T c2_y_size[1])
{
  uint32_T c2_uv[1];
  int32_T c2_tmp_size[1];
  boolean_T c2_b_bv[1];
  real_T c2_tmp_data[2];
  int32_T c2_loop_ub;
  int32_T c2_i;
  (void)chartInstance;
  c2_uv[0] = 2U;
  c2_tmp_size[0] = sf_mex_get_dimension(c2_u, 0);
  c2_b_bv[0] = true;
  sf_mex_import_vs(c2_parentId, sf_mex_dup(c2_u), &c2_tmp_data, 1, 0, 0U, 1, 0U,
                   1, c2_b_bv, c2_uv, c2_tmp_size);
  c2_y_size[0] = c2_tmp_size[0];
  c2_loop_ub = c2_tmp_size[0] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_y_data[c2_i] = c2_tmp_data[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static boolean_T c2_e_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_b_isInitialized, const char_T *c2_identifier)
{
  boolean_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_isInitialized),
    &c2_thisId);
  sf_mex_destroy(&c2_b_isInitialized);
  return c2_y;
}

static boolean_T c2_f_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  boolean_T c2_y;
  boolean_T c2_b;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b, 1, 11, 0U, 0, 0U, 0);
  c2_y = c2_b;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint8_T c2_g_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_Ball_Detection, const char_T *
  c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_Ball_Detection), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_Ball_Detection);
  return c2_y;
}

static uint8_T c2_h_emlrt_marshallIn(SFc2_Ball_DetectionInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_b_u;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static const mxArray *c2_chart_data_browse_helper
  (SFc2_Ball_DetectionInstanceStruct *chartInstance, int32_T c2_ssIdNumber)
{
  const mxArray *c2_mxData = NULL;
  c2_mxData = NULL;
  switch (c2_ssIdNumber) {
   case 5U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData",
      chartInstance->c2_ballX_data, 0, 0U, 1U, 0U, 1,
      *chartInstance->c2_ballX_sizes), false);
    break;

   case 9U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData",
      chartInstance->c2_ballY_data, 0, 0U, 1U, 0U, 1,
      *chartInstance->c2_ballY_sizes), false);
    break;

   case 6U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", *chartInstance->c2_c_frame,
      1, 0U, 1U, 0U, 3, 360, 640, 3), false);
    break;

   case 7U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData",
      chartInstance->c2_ballArea_data, 6, 0U, 1U, 0U, 1,
      *chartInstance->c2_ballArea_sizes), false);
    break;
  }

  return c2_mxData;
}

static int32_T c2__s32_s64_(SFc2_Ball_DetectionInstanceStruct *chartInstance,
  int64_T c2_b, int32_T c2_EMLOvCount_src_loc, uint32_T c2_ssid_src_loc, int32_T
  c2_offset_src_loc, int32_T c2_length_src_loc)
{
  int32_T c2_a;
  (void)c2_EMLOvCount_src_loc;
  c2_a = (int32_T)c2_b;
  if ((int64_T)c2_a != c2_b) {
    sf_data_overflow_error(chartInstance->S, c2_ssid_src_loc, c2_offset_src_loc,
      c2_length_src_loc);
  }

  return c2_a;
}

static void init_dsm_address_info(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_Ball_DetectionInstanceStruct
  *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_ballX_data = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_ballX_sizes = (int32_T *)
    ssGetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1);
  chartInstance->c2_ballY_data = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_ballY_sizes = (int32_T *)
    ssGetCurrentOutputPortDimensions_wrapper(chartInstance->S, 2);
  chartInstance->c2_c_frame = (real32_T (*)[691200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_ballArea_data = (int32_T (*)[2])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c2_ballArea_sizes = (int32_T *)
    ssGetCurrentOutputPortDimensions_wrapper(chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_Ball_Detection_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1887126942U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2129982736U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1919965553U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3649829962U);
}

mxArray *sf_c2_Ball_Detection_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2hsvBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_Ball_Detection_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2hsv_tbb_real32");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_Ball_Detection_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_Ball_Detection(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiBOYGFgYAPSHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/jAO6fhYs+jmQ9AtA+UmJOTmORamJfFDxgfWHCF"
    "H+YEXzByvUHxFQ9w+8P5Qo8kck1fwh4ECZfoj9DgT8wYvmDxA/s9gzL7MkMzEnsyo1hWr+UaCKf"
    "wII+EcazT/SYP/EJyaXZJalxicbxTsBIyneJbUkFSiSnwc3FwQA9b8trA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_Ball_Detection_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sfGoS2zrqvMS75qhfjNcQyF";
}

static void sf_opaque_initialize_c2_Ball_Detection(void *chartInstanceVar)
{
  initialize_params_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
  initialize_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_Ball_Detection(void *chartInstanceVar)
{
  enable_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_Ball_Detection(void *chartInstanceVar)
{
  disable_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_Ball_Detection(void *chartInstanceVar)
{
  sf_gateway_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_Ball_Detection(SimStruct* S)
{
  return get_sim_state_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_Ball_Detection(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_Ball_Detection(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_Ball_DetectionInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Ball_Detection_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_Ball_Detection
      ((SFc2_Ball_DetectionInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_Ball_Detection(void *chartInstanceVar)
{
  mdl_start_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_Ball_Detection(void *chartInstanceVar)
{
  mdl_terminate_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_Ball_Detection(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_Ball_Detection((SFc2_Ball_DetectionInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_Ball_Detection_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtV89v1EYU9qZZBBJBKxWJA6hFXOgRgapWHCDJ/igr7ZJQB0rVQzoZv10PO55x5oeTcOcP4MC",
    "J/4RL/41ee+0JcUfijdfZbL22N2FTiASWHGfs733zvvfevJn1at2+h9clvN9+63nn8Hke7yVvfN",
    "WzcW3qHr9f9m5m4/toJGy0SRSJtFd5CRLBr6Alt4ZJ0RUDWQhjYgAKBEVsLJUpY9MsspyJUccK6",
    "vj0byGjoR9Ky4N1tCXBhuAHyBZbs4k8LaaAmg5AYEIl7TDscDKceKzMXjMEOtI2qpKgwfg2dm7p",
    "vuWGxRza+0C7QhuCHusj33xDDDTNfqlMp1T7h0AZxZwRUag2JNqHGANs4HEc4N8Na1BUHkZDosw",
    "6hCQB3WOjlFMKyHMyjR92mCBGKkZ4O+JNZzjr2yZHf/oyAF4REPRtXQEZxZIJU55/v4NK24LscG",
    "jBjh2Ws/mwa13ynzDYA1Uat0FTJqDIEDZE6aRpQNr7abYmVTILMyyCJ0StUcyfhqC0erFytE8wT",
    "7CFFmUwSEV29ZZiCYa3lM1GXVeZ85aMjcbJ1vNgKVs7gaosTNg6VDQJ57oUtiXjHiTAU9YWMaQa",
    "NmYtxmnNgi2JAXblXb4arGCY+AzWlCJghelKcoC07zzExvJfJLXayKiJxdvq9WY/z8K6woAaEAp",
    "FXUARpgFjloa3nC1g2uUegeiVSd0rAo8rZB7K0wMrWntSjTAmFU3kSILLaCkw0kPMJa6ExxoXTR",
    "XM5XIejhIaQuAaDOPQx2WD2IKYaNfa1nDdJcwctEBTxeKirLr955Z3tP9cPMb+c2iXf/4wxVMr4",
    "PGmnvl5LyxVz7uE/9Uyu9Upu5XcPMs5O4dr4P3XH9+9f/HuzutX//x7996bdy8Xmb9RP9l+fSkb",
    "XztsjJNCT2bqy2EfTPm1XMB/ZYq/kY314Bfp336udpO+/9OPu+Hg2UP66KCT8v25XO1vPefv4fv",
    "rrkMfxGm/1Yp2g+wg4cbEjrdXx//zlL/n5sTjQvZ+fL29v5j9tdW8fVG8zufi5cY7uGLXcPecrt",
    "/Pp+PysXTUczrqmY6nuXX4+XTcWEjH76emo7G6mP1snynSsZLTsZKej7oCNxbC2fP0PHM6eq6fi",
    "p7NOXqu5vRcTfVsE7eLwDa9vb2OSdpugYH0PDfT/z+2n57Uzvtqdybsal+gvuOcjz7W7psFz2Of",
    "ym5RfSc9J541/K2KPurl8I0zrGPR8/v/jf/bO9k5+/tsfG/y07cZMh4U/ArKPveADIq+fgJ9HwB",
    "uqK7S",
    ""
  };

  static char newstr [1281] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_Ball_Detection(SimStruct *S)
{
  const char* newstr = sf_c2_Ball_Detection_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4246625215U));
  ssSetChecksum1(S,(2603872901U));
  ssSetChecksum2(S,(988471701U));
  ssSetChecksum3(S,(2448603710U));
}

static void mdlRTW_c2_Ball_Detection(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_Ball_Detection(SimStruct *S)
{
  SFc2_Ball_DetectionInstanceStruct *chartInstance;
  chartInstance = (SFc2_Ball_DetectionInstanceStruct *)utMalloc(sizeof
    (SFc2_Ball_DetectionInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_Ball_DetectionInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_Ball_Detection;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_Ball_Detection;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_Ball_Detection;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_Ball_Detection;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_Ball_Detection;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_Ball_Detection;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_Ball_Detection;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_Ball_Detection;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_Ball_Detection;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_Ball_Detection;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_Ball_Detection;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_Ball_Detection;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_Ball_Detection(chartInstance);
}

void c2_Ball_Detection_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_Ball_Detection(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_Ball_Detection(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_Ball_Detection(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_Ball_Detection_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
