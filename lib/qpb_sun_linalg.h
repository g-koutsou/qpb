#ifndef _QPB_SUN_MMUL_H
#define _QPB_SUN_MMUL_H 1
#include <qpb_types.h>

#if NC == 1
#	define U_TIMES_U_00(c, a, b)				\
  (c+0)->re = (a+0)->re*(b+0)->re - (a+0)->im*(b+0)->im;	\
  (c+0)->im = (a+0)->re*(b+0)->im + (a+0)->im*(b+0)->re;

#	define U_TIMES_U_01(c, a, b)				\
  (c+0)->re = (a+0)->re*(b+0)->re + (a+0)->im*(b+0)->im;	\
  (c+0)->im =-(a+0)->re*(b+0)->im + (a+0)->im*(b+0)->re;

#	define U_TIMES_U_10(c, a, b)				\
  (c+0)->re = (a+0)->re*(b+0)->re + (a+0)->im*(b+0)->im;	\
  (c+0)->im = (a+0)->re*(b+0)->im - (a+0)->im*(b+0)->re;

#	define U_TIMES_U_11(c, a, b)				\
  (c+0)->re = (a+0)->re*(b+0)->re - (a+0)->im*(b+0)->im;	\
  (c+0)->im =-(a+0)->re*(b+0)->im - (a+0)->im*(b+0)->re;

#	define U_TIMES_C(c, a, b)		\
  (c+0)->re = (a+0)->re*b.re - (a+0)->im*b.im;	\
  (c+0)->im = (a+0)->re*b.im + (a+0)->im*b.re;

#	define U_EQ_U_DAGGER(a, b)		\
  (a+0)->re =  (b+0)->re;			\
  (a+0)->im = -(b+0)->im;

#	define U_EQ_U(a, b)			\
  (a+0)->re = (b+0)->re;			\
  (a+0)->im = (b+0)->im;

#	define U_PEQ_U(a, b)			\
  (a+0)->re += (b+0)->re;			\
  (a+0)->im += (b+0)->im;

#	define U_MEQ_U(a, b)			\
  (a+0)->re -= (b+0)->re;			\
  (a+0)->im -= (b+0)->im;

#	define TRACE_U(a)			\
  ((a)->re)

#elif NC == 3
#	define U_TIMES_U_00(c, a, b)					\
  (c+0)->re = (a+0)->re*(b+0)->re + (a+1)->re*(b+3)->re + (a+2)->re*(b+6)->re - (a+0)->im*(b+0)->im - (a+1)->im*(b+3)->im - (a+2)->im*(b+6)->im; \
  (c+0)->im = (a+0)->im*(b+0)->re + (a+0)->re*(b+0)->im + (a+1)->im*(b+3)->re + (a+1)->re*(b+3)->im + (a+2)->im*(b+6)->re + (a+2)->re*(b+6)->im; \
  (c+1)->re = (a+0)->re*(b+1)->re + (a+1)->re*(b+4)->re + (a+2)->re*(b+7)->re - (a+0)->im*(b+1)->im - (a+1)->im*(b+4)->im - (a+2)->im*(b+7)->im; \
  (c+1)->im = (a+0)->im*(b+1)->re + (a+0)->re*(b+1)->im + (a+1)->im*(b+4)->re + (a+1)->re*(b+4)->im + (a+2)->im*(b+7)->re + (a+2)->re*(b+7)->im; \
  (c+2)->re = (a+0)->re*(b+2)->re + (a+1)->re*(b+5)->re + (a+2)->re*(b+8)->re - (a+0)->im*(b+2)->im - (a+1)->im*(b+5)->im - (a+2)->im*(b+8)->im; \
  (c+2)->im = (a+0)->im*(b+2)->re + (a+0)->re*(b+2)->im + (a+1)->im*(b+5)->re + (a+1)->re*(b+5)->im + (a+2)->im*(b+8)->re + (a+2)->re*(b+8)->im; \
  									\
  (c+3)->re = (a+3)->re*(b+0)->re + (a+4)->re*(b+3)->re + (a+5)->re*(b+6)->re - (a+3)->im*(b+0)->im - (a+4)->im*(b+3)->im - (a+5)->im*(b+6)->im; \
  (c+3)->im = (a+3)->im*(b+0)->re + (a+3)->re*(b+0)->im + (a+4)->im*(b+3)->re + (a+4)->re*(b+3)->im + (a+5)->im*(b+6)->re + (a+5)->re*(b+6)->im; \
  (c+4)->re = (a+3)->re*(b+1)->re + (a+4)->re*(b+4)->re + (a+5)->re*(b+7)->re - (a+3)->im*(b+1)->im - (a+4)->im*(b+4)->im - (a+5)->im*(b+7)->im; \
  (c+4)->im = (a+3)->im*(b+1)->re + (a+3)->re*(b+1)->im + (a+4)->im*(b+4)->re + (a+4)->re*(b+4)->im + (a+5)->im*(b+7)->re + (a+5)->re*(b+7)->im; \
  (c+5)->re = (a+3)->re*(b+2)->re + (a+4)->re*(b+5)->re + (a+5)->re*(b+8)->re - (a+3)->im*(b+2)->im - (a+4)->im*(b+5)->im - (a+5)->im*(b+8)->im; \
  (c+5)->im = (a+3)->im*(b+2)->re + (a+3)->re*(b+2)->im + (a+4)->im*(b+5)->re + (a+4)->re*(b+5)->im + (a+5)->im*(b+8)->re + (a+5)->re*(b+8)->im; \
  									\
  (c+6)->re = (a+6)->re*(b+0)->re + (a+7)->re*(b+3)->re + (a+8)->re*(b+6)->re - (a+6)->im*(b+0)->im - (a+7)->im*(b+3)->im - (a+8)->im*(b+6)->im; \
  (c+6)->im = (a+6)->im*(b+0)->re + (a+6)->re*(b+0)->im + (a+7)->im*(b+3)->re + (a+7)->re*(b+3)->im + (a+8)->im*(b+6)->re + (a+8)->re*(b+6)->im; \
  (c+7)->re = (a+6)->re*(b+1)->re + (a+7)->re*(b+4)->re + (a+8)->re*(b+7)->re - (a+6)->im*(b+1)->im - (a+7)->im*(b+4)->im - (a+8)->im*(b+7)->im; \
  (c+7)->im = (a+6)->im*(b+1)->re + (a+6)->re*(b+1)->im + (a+7)->im*(b+4)->re + (a+7)->re*(b+4)->im + (a+8)->im*(b+7)->re + (a+8)->re*(b+7)->im; \
  (c+8)->re = (a+6)->re*(b+2)->re + (a+7)->re*(b+5)->re + (a+8)->re*(b+8)->re - (a+6)->im*(b+2)->im - (a+7)->im*(b+5)->im - (a+8)->im*(b+8)->im; \
  (c+8)->im = (a+6)->im*(b+2)->re + (a+6)->re*(b+2)->im + (a+7)->im*(b+5)->re + (a+7)->re*(b+5)->im + (a+8)->im*(b+8)->re + (a+8)->re*(b+8)->im;

#	define U_TIMES_U_01(c, a, b)					\
  (c+0)->re = (a+0)->im*(b+0)->im + (a+0)->re*(b+0)->re + (a+1)->im*(b+1)->im + (a+1)->re*(b+1)->re + (a+2)->im*(b+2)->im + (a+2)->re*(b+2)->re; \
  (c+0)->im = (a+0)->im*(b+0)->re + (a+1)->im*(b+1)->re + (a+2)->im*(b+2)->re - (a+0)->re*(b+0)->im - (a+1)->re*(b+1)->im - (a+2)->re*(b+2)->im; \
  (c+1)->re = (a+0)->im*(b+3)->im + (a+0)->re*(b+3)->re + (a+1)->im*(b+4)->im + (a+1)->re*(b+4)->re + (a+2)->im*(b+5)->im + (a+2)->re*(b+5)->re; \
  (c+1)->im = (a+0)->im*(b+3)->re + (a+1)->im*(b+4)->re + (a+2)->im*(b+5)->re - (a+0)->re*(b+3)->im - (a+1)->re*(b+4)->im - (a+2)->re*(b+5)->im; \
  (c+2)->re = (a+0)->im*(b+6)->im + (a+0)->re*(b+6)->re + (a+1)->im*(b+7)->im + (a+1)->re*(b+7)->re + (a+2)->im*(b+8)->im + (a+2)->re*(b+8)->re; \
  (c+2)->im = (a+0)->im*(b+6)->re + (a+1)->im*(b+7)->re + (a+2)->im*(b+8)->re - (a+0)->re*(b+6)->im - (a+1)->re*(b+7)->im - (a+2)->re*(b+8)->im; \
									\
  (c+3)->re = (a+3)->im*(b+0)->im + (a+3)->re*(b+0)->re + (a+4)->im*(b+1)->im + (a+4)->re*(b+1)->re + (a+5)->im*(b+2)->im + (a+5)->re*(b+2)->re; \
  (c+3)->im = (a+3)->im*(b+0)->re + (a+4)->im*(b+1)->re + (a+5)->im*(b+2)->re - (a+3)->re*(b+0)->im - (a+4)->re*(b+1)->im - (a+5)->re*(b+2)->im; \
  (c+4)->re = (a+3)->im*(b+3)->im + (a+3)->re*(b+3)->re + (a+4)->im*(b+4)->im + (a+4)->re*(b+4)->re + (a+5)->im*(b+5)->im + (a+5)->re*(b+5)->re; \
  (c+4)->im = (a+3)->im*(b+3)->re + (a+4)->im*(b+4)->re + (a+5)->im*(b+5)->re - (a+3)->re*(b+3)->im - (a+4)->re*(b+4)->im - (a+5)->re*(b+5)->im; \
  (c+5)->re = (a+3)->im*(b+6)->im + (a+3)->re*(b+6)->re + (a+4)->im*(b+7)->im + (a+4)->re*(b+7)->re + (a+5)->im*(b+8)->im + (a+5)->re*(b+8)->re; \
  (c+5)->im = (a+3)->im*(b+6)->re + (a+4)->im*(b+7)->re + (a+5)->im*(b+8)->re - (a+3)->re*(b+6)->im - (a+4)->re*(b+7)->im - (a+5)->re*(b+8)->im; \
									\
  (c+6)->re = (a+6)->im*(b+0)->im + (a+6)->re*(b+0)->re + (a+7)->im*(b+1)->im + (a+7)->re*(b+1)->re + (a+8)->im*(b+2)->im + (a+8)->re*(b+2)->re; \
  (c+6)->im = (a+6)->im*(b+0)->re + (a+7)->im*(b+1)->re + (a+8)->im*(b+2)->re - (a+6)->re*(b+0)->im - (a+7)->re*(b+1)->im - (a+8)->re*(b+2)->im; \
  (c+7)->re = (a+6)->im*(b+3)->im + (a+6)->re*(b+3)->re + (a+7)->im*(b+4)->im + (a+7)->re*(b+4)->re + (a+8)->im*(b+5)->im + (a+8)->re*(b+5)->re; \
  (c+7)->im = (a+6)->im*(b+3)->re + (a+7)->im*(b+4)->re + (a+8)->im*(b+5)->re - (a+6)->re*(b+3)->im - (a+7)->re*(b+4)->im - (a+8)->re*(b+5)->im; \
  (c+8)->re = (a+6)->im*(b+6)->im + (a+6)->re*(b+6)->re + (a+7)->im*(b+7)->im + (a+7)->re*(b+7)->re + (a+8)->im*(b+8)->im + (a+8)->re*(b+8)->re; \
  (c+8)->im = (a+6)->im*(b+6)->re + (a+7)->im*(b+7)->re + (a+8)->im*(b+8)->re - (a+6)->re*(b+6)->im - (a+7)->re*(b+7)->im - (a+8)->re*(b+8)->im;

#	define U_TIMES_U_10(c, a, b)					\
  (c+0)->re = (a+0)->im*(b+0)->im + (a+0)->re*(b+0)->re + (a+3)->im*(b+3)->im + (a+3)->re*(b+3)->re + (a+6)->im*(b+6)->im + (a+6)->re*(b+6)->re; \
  (c+0)->im = (a+0)->re*(b+0)->im + (a+3)->re*(b+3)->im + (a+6)->re*(b+6)->im - (a+0)->im*(b+0)->re - (a+3)->im*(b+3)->re - (a+6)->im*(b+6)->re; \
  (c+1)->re = (a+0)->im*(b+1)->im + (a+0)->re*(b+1)->re + (a+3)->im*(b+4)->im + (a+3)->re*(b+4)->re + (a+6)->im*(b+7)->im + (a+6)->re*(b+7)->re; \
  (c+1)->im = (a+0)->re*(b+1)->im + (a+3)->re*(b+4)->im + (a+6)->re*(b+7)->im - (a+0)->im*(b+1)->re - (a+3)->im*(b+4)->re - (a+6)->im*(b+7)->re; \
  (c+2)->re = (a+0)->im*(b+2)->im + (a+0)->re*(b+2)->re + (a+3)->im*(b+5)->im + (a+3)->re*(b+5)->re + (a+6)->im*(b+8)->im + (a+6)->re*(b+8)->re; \
  (c+2)->im = (a+0)->re*(b+2)->im + (a+3)->re*(b+5)->im + (a+6)->re*(b+8)->im - (a+0)->im*(b+2)->re - (a+3)->im*(b+5)->re - (a+6)->im*(b+8)->re; \
									\
  (c+3)->re = (a+1)->im*(b+0)->im + (a+1)->re*(b+0)->re + (a+4)->im*(b+3)->im + (a+4)->re*(b+3)->re + (a+7)->im*(b+6)->im + (a+7)->re*(b+6)->re; \
  (c+3)->im = (a+1)->re*(b+0)->im + (a+4)->re*(b+3)->im + (a+7)->re*(b+6)->im - (a+1)->im*(b+0)->re - (a+4)->im*(b+3)->re - (a+7)->im*(b+6)->re; \
  (c+4)->re = (a+1)->im*(b+1)->im + (a+1)->re*(b+1)->re + (a+4)->im*(b+4)->im + (a+4)->re*(b+4)->re + (a+7)->im*(b+7)->im + (a+7)->re*(b+7)->re; \
  (c+4)->im = (a+1)->re*(b+1)->im + (a+4)->re*(b+4)->im + (a+7)->re*(b+7)->im - (a+1)->im*(b+1)->re - (a+4)->im*(b+4)->re - (a+7)->im*(b+7)->re; \
  (c+5)->re = (a+1)->im*(b+2)->im + (a+1)->re*(b+2)->re + (a+4)->im*(b+5)->im + (a+4)->re*(b+5)->re + (a+7)->im*(b+8)->im + (a+7)->re*(b+8)->re; \
  (c+5)->im = (a+1)->re*(b+2)->im + (a+4)->re*(b+5)->im + (a+7)->re*(b+8)->im - (a+1)->im*(b+2)->re - (a+4)->im*(b+5)->re - (a+7)->im*(b+8)->re; \
									\
  (c+6)->re = (a+2)->im*(b+0)->im + (a+2)->re*(b+0)->re + (a+5)->im*(b+3)->im + (a+5)->re*(b+3)->re + (a+8)->im*(b+6)->im + (a+8)->re*(b+6)->re; \
  (c+6)->im = (a+2)->re*(b+0)->im + (a+5)->re*(b+3)->im + (a+8)->re*(b+6)->im - (a+2)->im*(b+0)->re - (a+5)->im*(b+3)->re - (a+8)->im*(b+6)->re; \
  (c+7)->re = (a+2)->im*(b+1)->im + (a+2)->re*(b+1)->re + (a+5)->im*(b+4)->im + (a+5)->re*(b+4)->re + (a+8)->im*(b+7)->im + (a+8)->re*(b+7)->re; \
  (c+7)->im = (a+2)->re*(b+1)->im + (a+5)->re*(b+4)->im + (a+8)->re*(b+7)->im - (a+2)->im*(b+1)->re - (a+5)->im*(b+4)->re - (a+8)->im*(b+7)->re; \
  (c+8)->re = (a+2)->im*(b+2)->im + (a+2)->re*(b+2)->re + (a+5)->im*(b+5)->im + (a+5)->re*(b+5)->re + (a+8)->im*(b+8)->im + (a+8)->re*(b+8)->re; \
  (c+8)->im = (a+2)->re*(b+2)->im + (a+5)->re*(b+5)->im + (a+8)->re*(b+8)->im - (a+2)->im*(b+2)->re - (a+5)->im*(b+5)->re - (a+8)->im*(b+8)->re;

#	define U_TIMES_U_11(c, a, b)						\
  (c+0)->re =  (a+0)->re*(b+0)->re + (a+3)->re*(b+1)->re + (a+6)->re*(b+2)->re - (a+0)->im*(b+0)->im - (a+3)->im*(b+1)->im - (a+6)->im*(b+2)->im; \
  (c+0)->im = -(a+0)->im*(b+0)->re - (a+0)->re*(b+0)->im - (a+3)->im*(b+1)->re - (a+3)->re*(b+1)->im - (a+6)->im*(b+2)->re - (a+6)->re*(b+2)->im; \
  (c+1)->re =  (a+0)->re*(b+3)->re + (a+3)->re*(b+4)->re + (a+6)->re*(b+5)->re - (a+0)->im*(b+3)->im - (a+3)->im*(b+4)->im - (a+6)->im*(b+5)->im; \
  (c+1)->im = -(a+0)->im*(b+3)->re - (a+0)->re*(b+3)->im - (a+3)->im*(b+4)->re - (a+3)->re*(b+4)->im - (a+6)->im*(b+5)->re - (a+6)->re*(b+5)->im; \
  (c+2)->re =  (a+0)->re*(b+6)->re + (a+3)->re*(b+7)->re + (a+6)->re*(b+8)->re - (a+0)->im*(b+6)->im - (a+3)->im*(b+7)->im - (a+6)->im*(b+8)->im; \
  (c+2)->im = -(a+0)->im*(b+6)->re - (a+0)->re*(b+6)->im - (a+3)->im*(b+7)->re - (a+3)->re*(b+7)->im - (a+6)->im*(b+8)->re - (a+6)->re*(b+8)->im; \
									\
  (c+3)->re =  (a+1)->re*(b+0)->re + (a+4)->re*(b+1)->re + (a+7)->re*(b+2)->re - (a+1)->im*(b+0)->im - (a+4)->im*(b+1)->im - (a+7)->im*(b+2)->im; \
  (c+3)->im = -(a+1)->im*(b+0)->re - (a+1)->re*(b+0)->im - (a+4)->im*(b+1)->re - (a+4)->re*(b+1)->im - (a+7)->im*(b+2)->re - (a+7)->re*(b+2)->im; \
  (c+4)->re =  (a+1)->re*(b+3)->re + (a+4)->re*(b+4)->re + (a+7)->re*(b+5)->re - (a+1)->im*(b+3)->im - (a+4)->im*(b+4)->im - (a+7)->im*(b+5)->im; \
  (c+4)->im = -(a+1)->im*(b+3)->re - (a+1)->re*(b+3)->im - (a+4)->im*(b+4)->re - (a+4)->re*(b+4)->im - (a+7)->im*(b+5)->re - (a+7)->re*(b+5)->im; \
  (c+5)->re =  (a+1)->re*(b+6)->re + (a+4)->re*(b+7)->re + (a+7)->re*(b+8)->re - (a+1)->im*(b+6)->im - (a+4)->im*(b+7)->im - (a+7)->im*(b+8)->im; \
  (c+5)->im = -(a+1)->im*(b+6)->re - (a+1)->re*(b+6)->im - (a+4)->im*(b+7)->re - (a+4)->re*(b+7)->im - (a+7)->im*(b+8)->re - (a+7)->re*(b+8)->im; \
									\
  (c+6)->re =  (a+2)->re*(b+0)->re + (a+5)->re*(b+1)->re + (a+8)->re*(b+2)->re - (a+2)->im*(b+0)->im - (a+5)->im*(b+1)->im - (a+8)->im*(b+2)->im; \
  (c+6)->im = -(a+2)->im*(b+0)->re - (a+2)->re*(b+0)->im - (a+5)->im*(b+1)->re - (a+5)->re*(b+1)->im - (a+8)->im*(b+2)->re - (a+8)->re*(b+2)->im; \
  (c+7)->re =  (a+2)->re*(b+3)->re + (a+5)->re*(b+4)->re + (a+8)->re*(b+5)->re - (a+2)->im*(b+3)->im - (a+5)->im*(b+4)->im - (a+8)->im*(b+5)->im; \
  (c+7)->im = -(a+2)->im*(b+3)->re - (a+2)->re*(b+3)->im - (a+5)->im*(b+4)->re - (a+5)->re*(b+4)->im - (a+8)->im*(b+5)->re - (a+8)->re*(b+5)->im; \
  (c+8)->re =  (a+2)->re*(b+6)->re + (a+5)->re*(b+7)->re + (a+8)->re*(b+8)->re - (a+2)->im*(b+6)->im - (a+5)->im*(b+7)->im - (a+8)->im*(b+8)->im; \
  (c+8)->im = -(a+2)->im*(b+6)->re - (a+2)->re*(b+6)->im - (a+5)->im*(b+7)->re - (a+5)->re*(b+7)->im - (a+8)->im*(b+8)->re - (a+8)->re*(b+8)->im;

#	define U_TIMES_C(c, a, b)		\
  (c+0)->re = (a+0)->re*b.re - (a+0)->im*b.im;	\
  (c+0)->im = (a+0)->im*b.re + (a+0)->re*b.im;	\
  (c+1)->re = (a+1)->re*b.re - (a+1)->im*b.im;	\
  (c+1)->im = (a+1)->im*b.re + (a+1)->re*b.im;	\
  (c+2)->re = (a+2)->re*b.re - (a+2)->im*b.im;	\
  (c+2)->im = (a+2)->im*b.re + (a+2)->re*b.im;	\
  (c+3)->re = (a+3)->re*b.re - (a+3)->im*b.im;	\
  (c+3)->im = (a+3)->im*b.re + (a+3)->re*b.im;	\
  (c+4)->re = (a+4)->re*b.re - (a+4)->im*b.im;	\
  (c+4)->im = (a+4)->im*b.re + (a+4)->re*b.im;	\
  (c+5)->re = (a+5)->re*b.re - (a+5)->im*b.im;	\
  (c+5)->im = (a+5)->im*b.re + (a+5)->re*b.im;	\
  (c+6)->re = (a+6)->re*b.re - (a+6)->im*b.im;	\
  (c+6)->im = (a+6)->im*b.re + (a+6)->re*b.im;	\
  (c+7)->re = (a+7)->re*b.re - (a+7)->im*b.im;	\
  (c+7)->im = (a+7)->im*b.re + (a+7)->re*b.im;	\
  (c+8)->re = (a+8)->re*b.re - (a+8)->im*b.im;	\
  (c+8)->im = (a+8)->im*b.re + (a+8)->re*b.im;

#	define U_EQ_U_DAGGER(a, b)		\
  (a+0)->re = (b+0)->re;			\
  (a+0)->im =-(b+0)->im;			\
  (a+1)->re = (b+3)->re;			\
  (a+1)->im =-(b+3)->im;			\
  (a+2)->re = (b+6)->re;			\
  (a+2)->im =-(b+6)->im;			\
  (a+3)->re = (b+1)->re;			\
  (a+3)->im =-(b+1)->im;			\
  (a+4)->re = (b+4)->re;			\
  (a+4)->im =-(b+4)->im;			\
  (a+5)->re = (b+7)->re;			\
  (a+5)->im =-(b+7)->im;			\
  (a+6)->re = (b+2)->re;			\
  (a+6)->im =-(b+2)->im;			\
  (a+7)->re = (b+5)->re;			\
  (a+7)->im =-(b+5)->im;			\
  (a+8)->re = (b+8)->re;			\
  (a+8)->im =-(b+8)->im;

#	define U_EQ_U(a, b)			\
  (a+0)->re = (b+0)->re;			\
  (a+0)->im = (b+0)->im;			\
  (a+1)->re = (b+1)->re;			\
  (a+1)->im = (b+1)->im;			\
  (a+2)->re = (b+2)->re;			\
  (a+2)->im = (b+2)->im;			\
  (a+3)->re = (b+3)->re;			\
  (a+3)->im = (b+3)->im;			\
  (a+4)->re = (b+4)->re;			\
  (a+4)->im = (b+4)->im;			\
  (a+5)->re = (b+5)->re;			\
  (a+5)->im = (b+5)->im;			\
  (a+6)->re = (b+6)->re;			\
  (a+6)->im = (b+6)->im;			\
  (a+7)->re = (b+7)->re;			\
  (a+7)->im = (b+7)->im;			\
  (a+8)->re = (b+8)->re;			\
  (a+8)->im = (b+8)->im;

#	define U_PEQ_U(a, b)			\
  (a+0)->re += (b+0)->re;			\
  (a+0)->im += (b+0)->im;			\
  (a+1)->re += (b+1)->re;			\
  (a+1)->im += (b+1)->im;			\
  (a+2)->re += (b+2)->re;			\
  (a+2)->im += (b+2)->im;			\
  (a+3)->re += (b+3)->re;			\
  (a+3)->im += (b+3)->im;			\
  (a+4)->re += (b+4)->re;			\
  (a+4)->im += (b+4)->im;			\
  (a+5)->re += (b+5)->re;			\
  (a+5)->im += (b+5)->im;			\
  (a+6)->re += (b+6)->re;			\
  (a+6)->im += (b+6)->im;			\
  (a+7)->re += (b+7)->re;			\
  (a+7)->im += (b+7)->im;			\
  (a+8)->re += (b+8)->re;			\
  (a+8)->im += (b+8)->im;

#	define U_MEQ_U(a, b)			\
  (a+0)->re -= (b+0)->re;			\
  (a+0)->im -= (b+0)->im;			\
  (a+1)->re -= (b+1)->re;			\
  (a+1)->im -= (b+1)->im;			\
  (a+2)->re -= (b+2)->re;			\
  (a+2)->im -= (b+2)->im;			\
  (a+3)->re -= (b+3)->re;			\
  (a+3)->im -= (b+3)->im;			\
  (a+4)->re -= (b+4)->re;			\
  (a+4)->im -= (b+4)->im;			\
  (a+5)->re -= (b+5)->re;			\
  (a+5)->im -= (b+5)->im;			\
  (a+6)->re -= (b+6)->re;			\
  (a+6)->im -= (b+6)->im;			\
  (a+7)->re -= (b+7)->re;			\
  (a+7)->im -= (b+7)->im;			\
  (a+8)->re -= (b+8)->re;			\
  (a+8)->im -= (b+8)->im;

#	define TRACE_U(a)			\
  (((a+0)->re + (a+4)->re + (a+8)->re)/3.)

#endif /* NC */
#endif /* _QPB_SUN_MMUL_H */
