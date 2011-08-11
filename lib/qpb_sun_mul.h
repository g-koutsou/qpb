#ifndef _QPB_SUN_MUL_H
#define _QPB_SUN_MUL_H 1
#include <qpb_types.h>

/* BEGIN python generated segment */
#if NC == 1
__inline__ void
sun_mul_uu(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	-(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re;
  (z+ 0)->im = 
	(x+ 0)->im*(y+ 0)->re + (x+ 0)->re*(y+ 0)->im;

  return;
}

__inline__ void
sun_mul_ud(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re;
  (z+ 0)->im = 
	(x+ 0)->im*(y+ 0)->re - (x+ 0)->re*(y+ 0)->im;

  return;
}

__inline__ void
sun_mul_du(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re;
  (z+ 0)->im = 
	-(x+ 0)->im*(y+ 0)->re + (x+ 0)->re*(y+ 0)->im;

  return;
}

__inline__ void
sun_mul_dd(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	-(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re;
  (z+ 0)->im = 
	-(x+ 0)->im*(y+ 0)->re - (x+ 0)->re*(y+ 0)->im;

  return;
}

__inline__ void
sun_mul_au(qpb_complex *z, qpb_complex a, qpb_complex *x)
{
  (z+ 0)->re = 
	-(x+ 0)->im*a.im + (x+ 0)->re*a.re;
  (z+ 0)->im = 
	(x+ 0)->im*a.re + (x+ 0)->re*a.im;

  return;
}

#endif /* NC == 1 */
#if NC == 3
__inline__ void
sun_mul_uu(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	-(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re - (x+ 1)->im*(y+ 3)->im +
	(x+ 1)->re*(y+ 3)->re - (x+ 2)->im*(y+ 6)->im + (x+ 2)->re*(y+ 6)->re;
  (z+ 0)->im = 
	(x+ 0)->im*(y+ 0)->re + (x+ 0)->re*(y+ 0)->im + (x+ 1)->im*(y+ 3)->re +
	(x+ 1)->re*(y+ 3)->im + (x+ 2)->im*(y+ 6)->re + (x+ 2)->re*(y+ 6)->im;
  (z+ 1)->re = 
	-(x+ 0)->im*(y+ 1)->im + (x+ 0)->re*(y+ 1)->re - (x+ 1)->im*(y+ 4)->im +
	(x+ 1)->re*(y+ 4)->re - (x+ 2)->im*(y+ 7)->im + (x+ 2)->re*(y+ 7)->re;
  (z+ 1)->im = 
	(x+ 0)->im*(y+ 1)->re + (x+ 0)->re*(y+ 1)->im + (x+ 1)->im*(y+ 4)->re +
	(x+ 1)->re*(y+ 4)->im + (x+ 2)->im*(y+ 7)->re + (x+ 2)->re*(y+ 7)->im;
  (z+ 2)->re = 
	-(x+ 0)->im*(y+ 2)->im + (x+ 0)->re*(y+ 2)->re - (x+ 1)->im*(y+ 5)->im +
	(x+ 1)->re*(y+ 5)->re - (x+ 2)->im*(y+ 8)->im + (x+ 2)->re*(y+ 8)->re;
  (z+ 2)->im = 
	(x+ 0)->im*(y+ 2)->re + (x+ 0)->re*(y+ 2)->im + (x+ 1)->im*(y+ 5)->re +
	(x+ 1)->re*(y+ 5)->im + (x+ 2)->im*(y+ 8)->re + (x+ 2)->re*(y+ 8)->im;

  (z+ 3)->re = 
	-(x+ 3)->im*(y+ 0)->im + (x+ 3)->re*(y+ 0)->re - (x+ 4)->im*(y+ 3)->im +
	(x+ 4)->re*(y+ 3)->re - (x+ 5)->im*(y+ 6)->im + (x+ 5)->re*(y+ 6)->re;
  (z+ 3)->im = 
	(x+ 3)->im*(y+ 0)->re + (x+ 3)->re*(y+ 0)->im + (x+ 4)->im*(y+ 3)->re +
	(x+ 4)->re*(y+ 3)->im + (x+ 5)->im*(y+ 6)->re + (x+ 5)->re*(y+ 6)->im;
  (z+ 4)->re = 
	-(x+ 3)->im*(y+ 1)->im + (x+ 3)->re*(y+ 1)->re - (x+ 4)->im*(y+ 4)->im +
	(x+ 4)->re*(y+ 4)->re - (x+ 5)->im*(y+ 7)->im + (x+ 5)->re*(y+ 7)->re;
  (z+ 4)->im = 
	(x+ 3)->im*(y+ 1)->re + (x+ 3)->re*(y+ 1)->im + (x+ 4)->im*(y+ 4)->re +
	(x+ 4)->re*(y+ 4)->im + (x+ 5)->im*(y+ 7)->re + (x+ 5)->re*(y+ 7)->im;
  (z+ 5)->re = 
	-(x+ 3)->im*(y+ 2)->im + (x+ 3)->re*(y+ 2)->re - (x+ 4)->im*(y+ 5)->im +
	(x+ 4)->re*(y+ 5)->re - (x+ 5)->im*(y+ 8)->im + (x+ 5)->re*(y+ 8)->re;
  (z+ 5)->im = 
	(x+ 3)->im*(y+ 2)->re + (x+ 3)->re*(y+ 2)->im + (x+ 4)->im*(y+ 5)->re +
	(x+ 4)->re*(y+ 5)->im + (x+ 5)->im*(y+ 8)->re + (x+ 5)->re*(y+ 8)->im;

  (z+ 6)->re = 
	-(x+ 6)->im*(y+ 0)->im + (x+ 6)->re*(y+ 0)->re - (x+ 7)->im*(y+ 3)->im +
	(x+ 7)->re*(y+ 3)->re - (x+ 8)->im*(y+ 6)->im + (x+ 8)->re*(y+ 6)->re;
  (z+ 6)->im = 
	(x+ 6)->im*(y+ 0)->re + (x+ 6)->re*(y+ 0)->im + (x+ 7)->im*(y+ 3)->re +
	(x+ 7)->re*(y+ 3)->im + (x+ 8)->im*(y+ 6)->re + (x+ 8)->re*(y+ 6)->im;
  (z+ 7)->re = 
	-(x+ 6)->im*(y+ 1)->im + (x+ 6)->re*(y+ 1)->re - (x+ 7)->im*(y+ 4)->im +
	(x+ 7)->re*(y+ 4)->re - (x+ 8)->im*(y+ 7)->im + (x+ 8)->re*(y+ 7)->re;
  (z+ 7)->im = 
	(x+ 6)->im*(y+ 1)->re + (x+ 6)->re*(y+ 1)->im + (x+ 7)->im*(y+ 4)->re +
	(x+ 7)->re*(y+ 4)->im + (x+ 8)->im*(y+ 7)->re + (x+ 8)->re*(y+ 7)->im;
  (z+ 8)->re = 
	-(x+ 6)->im*(y+ 2)->im + (x+ 6)->re*(y+ 2)->re - (x+ 7)->im*(y+ 5)->im +
	(x+ 7)->re*(y+ 5)->re - (x+ 8)->im*(y+ 8)->im + (x+ 8)->re*(y+ 8)->re;
  (z+ 8)->im = 
	(x+ 6)->im*(y+ 2)->re + (x+ 6)->re*(y+ 2)->im + (x+ 7)->im*(y+ 5)->re +
	(x+ 7)->re*(y+ 5)->im + (x+ 8)->im*(y+ 8)->re + (x+ 8)->re*(y+ 8)->im;

  return;
}

__inline__ void
sun_mul_ud(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re + (x+ 1)->im*(y+ 1)->im +
	(x+ 1)->re*(y+ 1)->re + (x+ 2)->im*(y+ 2)->im + (x+ 2)->re*(y+ 2)->re;
  (z+ 0)->im = 
	(x+ 0)->im*(y+ 0)->re - (x+ 0)->re*(y+ 0)->im + (x+ 1)->im*(y+ 1)->re -
	(x+ 1)->re*(y+ 1)->im + (x+ 2)->im*(y+ 2)->re - (x+ 2)->re*(y+ 2)->im;
  (z+ 1)->re = 
	(x+ 0)->im*(y+ 3)->im + (x+ 0)->re*(y+ 3)->re + (x+ 1)->im*(y+ 4)->im +
	(x+ 1)->re*(y+ 4)->re + (x+ 2)->im*(y+ 5)->im + (x+ 2)->re*(y+ 5)->re;
  (z+ 1)->im = 
	(x+ 0)->im*(y+ 3)->re - (x+ 0)->re*(y+ 3)->im + (x+ 1)->im*(y+ 4)->re -
	(x+ 1)->re*(y+ 4)->im + (x+ 2)->im*(y+ 5)->re - (x+ 2)->re*(y+ 5)->im;
  (z+ 2)->re = 
	(x+ 0)->im*(y+ 6)->im + (x+ 0)->re*(y+ 6)->re + (x+ 1)->im*(y+ 7)->im +
	(x+ 1)->re*(y+ 7)->re + (x+ 2)->im*(y+ 8)->im + (x+ 2)->re*(y+ 8)->re;
  (z+ 2)->im = 
	(x+ 0)->im*(y+ 6)->re - (x+ 0)->re*(y+ 6)->im + (x+ 1)->im*(y+ 7)->re -
	(x+ 1)->re*(y+ 7)->im + (x+ 2)->im*(y+ 8)->re - (x+ 2)->re*(y+ 8)->im;

  (z+ 3)->re = 
	(x+ 3)->im*(y+ 0)->im + (x+ 3)->re*(y+ 0)->re + (x+ 4)->im*(y+ 1)->im +
	(x+ 4)->re*(y+ 1)->re + (x+ 5)->im*(y+ 2)->im + (x+ 5)->re*(y+ 2)->re;
  (z+ 3)->im = 
	(x+ 3)->im*(y+ 0)->re - (x+ 3)->re*(y+ 0)->im + (x+ 4)->im*(y+ 1)->re -
	(x+ 4)->re*(y+ 1)->im + (x+ 5)->im*(y+ 2)->re - (x+ 5)->re*(y+ 2)->im;
  (z+ 4)->re = 
	(x+ 3)->im*(y+ 3)->im + (x+ 3)->re*(y+ 3)->re + (x+ 4)->im*(y+ 4)->im +
	(x+ 4)->re*(y+ 4)->re + (x+ 5)->im*(y+ 5)->im + (x+ 5)->re*(y+ 5)->re;
  (z+ 4)->im = 
	(x+ 3)->im*(y+ 3)->re - (x+ 3)->re*(y+ 3)->im + (x+ 4)->im*(y+ 4)->re -
	(x+ 4)->re*(y+ 4)->im + (x+ 5)->im*(y+ 5)->re - (x+ 5)->re*(y+ 5)->im;
  (z+ 5)->re = 
	(x+ 3)->im*(y+ 6)->im + (x+ 3)->re*(y+ 6)->re + (x+ 4)->im*(y+ 7)->im +
	(x+ 4)->re*(y+ 7)->re + (x+ 5)->im*(y+ 8)->im + (x+ 5)->re*(y+ 8)->re;
  (z+ 5)->im = 
	(x+ 3)->im*(y+ 6)->re - (x+ 3)->re*(y+ 6)->im + (x+ 4)->im*(y+ 7)->re -
	(x+ 4)->re*(y+ 7)->im + (x+ 5)->im*(y+ 8)->re - (x+ 5)->re*(y+ 8)->im;

  (z+ 6)->re = 
	(x+ 6)->im*(y+ 0)->im + (x+ 6)->re*(y+ 0)->re + (x+ 7)->im*(y+ 1)->im +
	(x+ 7)->re*(y+ 1)->re + (x+ 8)->im*(y+ 2)->im + (x+ 8)->re*(y+ 2)->re;
  (z+ 6)->im = 
	(x+ 6)->im*(y+ 0)->re - (x+ 6)->re*(y+ 0)->im + (x+ 7)->im*(y+ 1)->re -
	(x+ 7)->re*(y+ 1)->im + (x+ 8)->im*(y+ 2)->re - (x+ 8)->re*(y+ 2)->im;
  (z+ 7)->re = 
	(x+ 6)->im*(y+ 3)->im + (x+ 6)->re*(y+ 3)->re + (x+ 7)->im*(y+ 4)->im +
	(x+ 7)->re*(y+ 4)->re + (x+ 8)->im*(y+ 5)->im + (x+ 8)->re*(y+ 5)->re;
  (z+ 7)->im = 
	(x+ 6)->im*(y+ 3)->re - (x+ 6)->re*(y+ 3)->im + (x+ 7)->im*(y+ 4)->re -
	(x+ 7)->re*(y+ 4)->im + (x+ 8)->im*(y+ 5)->re - (x+ 8)->re*(y+ 5)->im;
  (z+ 8)->re = 
	(x+ 6)->im*(y+ 6)->im + (x+ 6)->re*(y+ 6)->re + (x+ 7)->im*(y+ 7)->im +
	(x+ 7)->re*(y+ 7)->re + (x+ 8)->im*(y+ 8)->im + (x+ 8)->re*(y+ 8)->re;
  (z+ 8)->im = 
	(x+ 6)->im*(y+ 6)->re - (x+ 6)->re*(y+ 6)->im + (x+ 7)->im*(y+ 7)->re -
	(x+ 7)->re*(y+ 7)->im + (x+ 8)->im*(y+ 8)->re - (x+ 8)->re*(y+ 8)->im;

  return;
}

__inline__ void
sun_mul_du(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re + (x+ 3)->im*(y+ 3)->im +
	(x+ 3)->re*(y+ 3)->re + (x+ 6)->im*(y+ 6)->im + (x+ 6)->re*(y+ 6)->re;
  (z+ 0)->im = 
	-(x+ 0)->im*(y+ 0)->re + (x+ 0)->re*(y+ 0)->im - (x+ 3)->im*(y+ 3)->re +
	(x+ 3)->re*(y+ 3)->im - (x+ 6)->im*(y+ 6)->re + (x+ 6)->re*(y+ 6)->im;
  (z+ 1)->re = 
	(x+ 0)->im*(y+ 1)->im + (x+ 0)->re*(y+ 1)->re + (x+ 3)->im*(y+ 4)->im +
	(x+ 3)->re*(y+ 4)->re + (x+ 6)->im*(y+ 7)->im + (x+ 6)->re*(y+ 7)->re;
  (z+ 1)->im = 
	-(x+ 0)->im*(y+ 1)->re + (x+ 0)->re*(y+ 1)->im - (x+ 3)->im*(y+ 4)->re +
	(x+ 3)->re*(y+ 4)->im - (x+ 6)->im*(y+ 7)->re + (x+ 6)->re*(y+ 7)->im;
  (z+ 2)->re = 
	(x+ 0)->im*(y+ 2)->im + (x+ 0)->re*(y+ 2)->re + (x+ 3)->im*(y+ 5)->im +
	(x+ 3)->re*(y+ 5)->re + (x+ 6)->im*(y+ 8)->im + (x+ 6)->re*(y+ 8)->re;
  (z+ 2)->im = 
	-(x+ 0)->im*(y+ 2)->re + (x+ 0)->re*(y+ 2)->im - (x+ 3)->im*(y+ 5)->re +
	(x+ 3)->re*(y+ 5)->im - (x+ 6)->im*(y+ 8)->re + (x+ 6)->re*(y+ 8)->im;

  (z+ 3)->re = 
	(x+ 1)->im*(y+ 0)->im + (x+ 1)->re*(y+ 0)->re + (x+ 4)->im*(y+ 3)->im +
	(x+ 4)->re*(y+ 3)->re + (x+ 7)->im*(y+ 6)->im + (x+ 7)->re*(y+ 6)->re;
  (z+ 3)->im = 
	-(x+ 1)->im*(y+ 0)->re + (x+ 1)->re*(y+ 0)->im - (x+ 4)->im*(y+ 3)->re +
	(x+ 4)->re*(y+ 3)->im - (x+ 7)->im*(y+ 6)->re + (x+ 7)->re*(y+ 6)->im;
  (z+ 4)->re = 
	(x+ 1)->im*(y+ 1)->im + (x+ 1)->re*(y+ 1)->re + (x+ 4)->im*(y+ 4)->im +
	(x+ 4)->re*(y+ 4)->re + (x+ 7)->im*(y+ 7)->im + (x+ 7)->re*(y+ 7)->re;
  (z+ 4)->im = 
	-(x+ 1)->im*(y+ 1)->re + (x+ 1)->re*(y+ 1)->im - (x+ 4)->im*(y+ 4)->re +
	(x+ 4)->re*(y+ 4)->im - (x+ 7)->im*(y+ 7)->re + (x+ 7)->re*(y+ 7)->im;
  (z+ 5)->re = 
	(x+ 1)->im*(y+ 2)->im + (x+ 1)->re*(y+ 2)->re + (x+ 4)->im*(y+ 5)->im +
	(x+ 4)->re*(y+ 5)->re + (x+ 7)->im*(y+ 8)->im + (x+ 7)->re*(y+ 8)->re;
  (z+ 5)->im = 
	-(x+ 1)->im*(y+ 2)->re + (x+ 1)->re*(y+ 2)->im - (x+ 4)->im*(y+ 5)->re +
	(x+ 4)->re*(y+ 5)->im - (x+ 7)->im*(y+ 8)->re + (x+ 7)->re*(y+ 8)->im;

  (z+ 6)->re = 
	(x+ 2)->im*(y+ 0)->im + (x+ 2)->re*(y+ 0)->re + (x+ 5)->im*(y+ 3)->im +
	(x+ 5)->re*(y+ 3)->re + (x+ 8)->im*(y+ 6)->im + (x+ 8)->re*(y+ 6)->re;
  (z+ 6)->im = 
	-(x+ 2)->im*(y+ 0)->re + (x+ 2)->re*(y+ 0)->im - (x+ 5)->im*(y+ 3)->re +
	(x+ 5)->re*(y+ 3)->im - (x+ 8)->im*(y+ 6)->re + (x+ 8)->re*(y+ 6)->im;
  (z+ 7)->re = 
	(x+ 2)->im*(y+ 1)->im + (x+ 2)->re*(y+ 1)->re + (x+ 5)->im*(y+ 4)->im +
	(x+ 5)->re*(y+ 4)->re + (x+ 8)->im*(y+ 7)->im + (x+ 8)->re*(y+ 7)->re;
  (z+ 7)->im = 
	-(x+ 2)->im*(y+ 1)->re + (x+ 2)->re*(y+ 1)->im - (x+ 5)->im*(y+ 4)->re +
	(x+ 5)->re*(y+ 4)->im - (x+ 8)->im*(y+ 7)->re + (x+ 8)->re*(y+ 7)->im;
  (z+ 8)->re = 
	(x+ 2)->im*(y+ 2)->im + (x+ 2)->re*(y+ 2)->re + (x+ 5)->im*(y+ 5)->im +
	(x+ 5)->re*(y+ 5)->re + (x+ 8)->im*(y+ 8)->im + (x+ 8)->re*(y+ 8)->re;
  (z+ 8)->im = 
	-(x+ 2)->im*(y+ 2)->re + (x+ 2)->re*(y+ 2)->im - (x+ 5)->im*(y+ 5)->re +
	(x+ 5)->re*(y+ 5)->im - (x+ 8)->im*(y+ 8)->re + (x+ 8)->re*(y+ 8)->im;

  return;
}

__inline__ void
sun_mul_dd(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = 
	-(x+ 0)->im*(y+ 0)->im + (x+ 0)->re*(y+ 0)->re - (x+ 3)->im*(y+ 1)->im +
	(x+ 3)->re*(y+ 1)->re - (x+ 6)->im*(y+ 2)->im + (x+ 6)->re*(y+ 2)->re;
  (z+ 0)->im = 
	-(x+ 0)->im*(y+ 0)->re - (x+ 0)->re*(y+ 0)->im - (x+ 3)->im*(y+ 1)->re -
	(x+ 3)->re*(y+ 1)->im - (x+ 6)->im*(y+ 2)->re - (x+ 6)->re*(y+ 2)->im;
  (z+ 1)->re = 
	-(x+ 0)->im*(y+ 3)->im + (x+ 0)->re*(y+ 3)->re - (x+ 3)->im*(y+ 4)->im +
	(x+ 3)->re*(y+ 4)->re - (x+ 6)->im*(y+ 5)->im + (x+ 6)->re*(y+ 5)->re;
  (z+ 1)->im = 
	-(x+ 0)->im*(y+ 3)->re - (x+ 0)->re*(y+ 3)->im - (x+ 3)->im*(y+ 4)->re -
	(x+ 3)->re*(y+ 4)->im - (x+ 6)->im*(y+ 5)->re - (x+ 6)->re*(y+ 5)->im;
  (z+ 2)->re = 
	-(x+ 0)->im*(y+ 6)->im + (x+ 0)->re*(y+ 6)->re - (x+ 3)->im*(y+ 7)->im +
	(x+ 3)->re*(y+ 7)->re - (x+ 6)->im*(y+ 8)->im + (x+ 6)->re*(y+ 8)->re;
  (z+ 2)->im = 
	-(x+ 0)->im*(y+ 6)->re - (x+ 0)->re*(y+ 6)->im - (x+ 3)->im*(y+ 7)->re -
	(x+ 3)->re*(y+ 7)->im - (x+ 6)->im*(y+ 8)->re - (x+ 6)->re*(y+ 8)->im;

  (z+ 3)->re = 
	-(x+ 1)->im*(y+ 0)->im + (x+ 1)->re*(y+ 0)->re - (x+ 4)->im*(y+ 1)->im +
	(x+ 4)->re*(y+ 1)->re - (x+ 7)->im*(y+ 2)->im + (x+ 7)->re*(y+ 2)->re;
  (z+ 3)->im = 
	-(x+ 1)->im*(y+ 0)->re - (x+ 1)->re*(y+ 0)->im - (x+ 4)->im*(y+ 1)->re -
	(x+ 4)->re*(y+ 1)->im - (x+ 7)->im*(y+ 2)->re - (x+ 7)->re*(y+ 2)->im;
  (z+ 4)->re = 
	-(x+ 1)->im*(y+ 3)->im + (x+ 1)->re*(y+ 3)->re - (x+ 4)->im*(y+ 4)->im +
	(x+ 4)->re*(y+ 4)->re - (x+ 7)->im*(y+ 5)->im + (x+ 7)->re*(y+ 5)->re;
  (z+ 4)->im = 
	-(x+ 1)->im*(y+ 3)->re - (x+ 1)->re*(y+ 3)->im - (x+ 4)->im*(y+ 4)->re -
	(x+ 4)->re*(y+ 4)->im - (x+ 7)->im*(y+ 5)->re - (x+ 7)->re*(y+ 5)->im;
  (z+ 5)->re = 
	-(x+ 1)->im*(y+ 6)->im + (x+ 1)->re*(y+ 6)->re - (x+ 4)->im*(y+ 7)->im +
	(x+ 4)->re*(y+ 7)->re - (x+ 7)->im*(y+ 8)->im + (x+ 7)->re*(y+ 8)->re;
  (z+ 5)->im = 
	-(x+ 1)->im*(y+ 6)->re - (x+ 1)->re*(y+ 6)->im - (x+ 4)->im*(y+ 7)->re -
	(x+ 4)->re*(y+ 7)->im - (x+ 7)->im*(y+ 8)->re - (x+ 7)->re*(y+ 8)->im;

  (z+ 6)->re = 
	-(x+ 2)->im*(y+ 0)->im + (x+ 2)->re*(y+ 0)->re - (x+ 5)->im*(y+ 1)->im +
	(x+ 5)->re*(y+ 1)->re - (x+ 8)->im*(y+ 2)->im + (x+ 8)->re*(y+ 2)->re;
  (z+ 6)->im = 
	-(x+ 2)->im*(y+ 0)->re - (x+ 2)->re*(y+ 0)->im - (x+ 5)->im*(y+ 1)->re -
	(x+ 5)->re*(y+ 1)->im - (x+ 8)->im*(y+ 2)->re - (x+ 8)->re*(y+ 2)->im;
  (z+ 7)->re = 
	-(x+ 2)->im*(y+ 3)->im + (x+ 2)->re*(y+ 3)->re - (x+ 5)->im*(y+ 4)->im +
	(x+ 5)->re*(y+ 4)->re - (x+ 8)->im*(y+ 5)->im + (x+ 8)->re*(y+ 5)->re;
  (z+ 7)->im = 
	-(x+ 2)->im*(y+ 3)->re - (x+ 2)->re*(y+ 3)->im - (x+ 5)->im*(y+ 4)->re -
	(x+ 5)->re*(y+ 4)->im - (x+ 8)->im*(y+ 5)->re - (x+ 8)->re*(y+ 5)->im;
  (z+ 8)->re = 
	-(x+ 2)->im*(y+ 6)->im + (x+ 2)->re*(y+ 6)->re - (x+ 5)->im*(y+ 7)->im +
	(x+ 5)->re*(y+ 7)->re - (x+ 8)->im*(y+ 8)->im + (x+ 8)->re*(y+ 8)->re;
  (z+ 8)->im = 
	-(x+ 2)->im*(y+ 6)->re - (x+ 2)->re*(y+ 6)->im - (x+ 5)->im*(y+ 7)->re -
	(x+ 5)->re*(y+ 7)->im - (x+ 8)->im*(y+ 8)->re - (x+ 8)->re*(y+ 8)->im;

  return;
}

__inline__ void
sun_mul_au(qpb_complex *z, qpb_complex a, qpb_complex *x)
{
  (z+ 0)->re = 
	-(x+ 0)->im*a.im + (x+ 0)->re*a.re;
  (z+ 0)->im = 
	(x+ 0)->im*a.re + (x+ 0)->re*a.im;
  (z+ 1)->re = 
	-(x+ 1)->im*a.im + (x+ 1)->re*a.re;
  (z+ 1)->im = 
	(x+ 1)->im*a.re + (x+ 1)->re*a.im;
  (z+ 2)->re = 
	-(x+ 2)->im*a.im + (x+ 2)->re*a.re;
  (z+ 2)->im = 
	(x+ 2)->im*a.re + (x+ 2)->re*a.im;

  (z+ 3)->re = 
	-(x+ 3)->im*a.im + (x+ 3)->re*a.re;
  (z+ 3)->im = 
	(x+ 3)->im*a.re + (x+ 3)->re*a.im;
  (z+ 4)->re = 
	-(x+ 4)->im*a.im + (x+ 4)->re*a.re;
  (z+ 4)->im = 
	(x+ 4)->im*a.re + (x+ 4)->re*a.im;
  (z+ 5)->re = 
	-(x+ 5)->im*a.im + (x+ 5)->re*a.re;
  (z+ 5)->im = 
	(x+ 5)->im*a.re + (x+ 5)->re*a.im;

  (z+ 6)->re = 
	-(x+ 6)->im*a.im + (x+ 6)->re*a.re;
  (z+ 6)->im = 
	(x+ 6)->im*a.re + (x+ 6)->re*a.im;
  (z+ 7)->re = 
	-(x+ 7)->im*a.im + (x+ 7)->re*a.re;
  (z+ 7)->im = 
	(x+ 7)->im*a.re + (x+ 7)->re*a.im;
  (z+ 8)->re = 
	-(x+ 8)->im*a.im + (x+ 8)->re*a.re;
  (z+ 8)->im = 
	(x+ 8)->im*a.re + (x+ 8)->re*a.im;

  return;
}

#endif /* NC == 3 */
/* END python generated segment */


#endif /* _QPB_SUN_MUL_H */

