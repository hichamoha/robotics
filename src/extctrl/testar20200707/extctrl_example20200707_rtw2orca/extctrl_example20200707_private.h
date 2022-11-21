/*
 * extctrl_example20200707_private.h
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
#ifndef RTW_HEADER_extctrl_example20200707_private_h_
#define RTW_HEADER_extctrl_example20200707_private_h_
#include "rtwtypes.h"
#ifndef RTW_COMMON_DEFINES_
# define RTW_COMMON_DEFINES_
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 rtmSetErrorStatus(extctrl_example20200707_rtM, RT_MEMORY_ALLOCATION_ERROR);\
 }
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers delcare free without const! */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif                                 /* RTW_COMMON_DEFINES_ */

#ifdef rt_VALIDATE_MEMORY
#undef rt_VALIDATE_MEMORY
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 rtmSetErrorStatus(extctrl_example20200707_rtM, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */
#endif                                 /* RTW_HEADER_extctrl_example20200707_private_h_ */
