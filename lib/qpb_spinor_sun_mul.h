#ifndef _QPB_SPINOR_SUN_MUL_H
#define _QPB_SPINOR_SUN_MUL_H 1
#include <qpb_types.h>

/* BEGIN python generated segment */
#if NC == 1
__inline__ void
spinor_sun_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re = 
	(p+ 0)->re*(u+ 0)->re - (p+ 0)->im*(u+ 0)->im;
  (q+ 0)->im = 
	(p+ 0)->im*(u+ 0)->re + (p+ 0)->re*(u+ 0)->im;

  (q+ 1)->re = 
	(p+ 1)->re*(u+ 0)->re - (p+ 1)->im*(u+ 0)->im;
  (q+ 1)->im = 
	(p+ 1)->im*(u+ 0)->re + (p+ 1)->re*(u+ 0)->im;

  (q+ 2)->re = 
	(p+ 2)->re*(u+ 0)->re - (p+ 2)->im*(u+ 0)->im;
  (q+ 2)->im = 
	(p+ 2)->im*(u+ 0)->re + (p+ 2)->re*(u+ 0)->im;

  (q+ 3)->re = 
	(p+ 3)->re*(u+ 0)->re - (p+ 3)->im*(u+ 0)->im;
  (q+ 3)->im = 
	(p+ 3)->im*(u+ 0)->re + (p+ 3)->re*(u+ 0)->im;

  return;
}

__inline__ void
spinor_sun_peq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re += 
	(p+ 0)->re*(u+ 0)->re - (p+ 0)->im*(u+ 0)->im;
  (q+ 0)->im += 
	(p+ 0)->im*(u+ 0)->re + (p+ 0)->re*(u+ 0)->im;

  (q+ 1)->re += 
	(p+ 1)->re*(u+ 0)->re - (p+ 1)->im*(u+ 0)->im;
  (q+ 1)->im += 
	(p+ 1)->im*(u+ 0)->re + (p+ 1)->re*(u+ 0)->im;

  (q+ 2)->re += 
	(p+ 2)->re*(u+ 0)->re - (p+ 2)->im*(u+ 0)->im;
  (q+ 2)->im += 
	(p+ 2)->im*(u+ 0)->re + (p+ 2)->re*(u+ 0)->im;

  (q+ 3)->re += 
	(p+ 3)->re*(u+ 0)->re - (p+ 3)->im*(u+ 0)->im;
  (q+ 3)->im += 
	(p+ 3)->im*(u+ 0)->re + (p+ 3)->re*(u+ 0)->im;

  return;
}

__inline__ void
spinor_sun_meq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re -= 
	(p+ 0)->re*(u+ 0)->re - (p+ 0)->im*(u+ 0)->im;
  (q+ 0)->im -= 
	(p+ 0)->im*(u+ 0)->re + (p+ 0)->re*(u+ 0)->im;

  (q+ 1)->re -= 
	(p+ 1)->re*(u+ 0)->re - (p+ 1)->im*(u+ 0)->im;
  (q+ 1)->im -= 
	(p+ 1)->im*(u+ 0)->re + (p+ 1)->re*(u+ 0)->im;

  (q+ 2)->re -= 
	(p+ 2)->re*(u+ 0)->re - (p+ 2)->im*(u+ 0)->im;
  (q+ 2)->im -= 
	(p+ 2)->im*(u+ 0)->re + (p+ 2)->re*(u+ 0)->im;

  (q+ 3)->re -= 
	(p+ 3)->re*(u+ 0)->re - (p+ 3)->im*(u+ 0)->im;
  (q+ 3)->im -= 
	(p+ 3)->im*(u+ 0)->re + (p+ 3)->re*(u+ 0)->im;

  return;
}

__inline__ void
spinor_sun_dag_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re = 
	(p+ 0)->im*(u+ 0)->im + (p+ 0)->re*(u+ 0)->re;
  (q+ 0)->im = 
	(p+ 0)->im*(u+ 0)->re - (p+ 0)->re*(u+ 0)->im;

  (q+ 1)->re = 
	(p+ 1)->im*(u+ 0)->im + (p+ 1)->re*(u+ 0)->re;
  (q+ 1)->im = 
	(p+ 1)->im*(u+ 0)->re - (p+ 1)->re*(u+ 0)->im;

  (q+ 2)->re = 
	(p+ 2)->im*(u+ 0)->im + (p+ 2)->re*(u+ 0)->re;
  (q+ 2)->im = 
	(p+ 2)->im*(u+ 0)->re - (p+ 2)->re*(u+ 0)->im;

  (q+ 3)->re = 
	(p+ 3)->im*(u+ 0)->im + (p+ 3)->re*(u+ 0)->re;
  (q+ 3)->im = 
	(p+ 3)->im*(u+ 0)->re - (p+ 3)->re*(u+ 0)->im;

  return;
}

__inline__ void
spinor_sun_dag_peq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re += 
	(p+ 0)->im*(u+ 0)->im + (p+ 0)->re*(u+ 0)->re;
  (q+ 0)->im += 
	(p+ 0)->im*(u+ 0)->re - (p+ 0)->re*(u+ 0)->im;

  (q+ 1)->re += 
	(p+ 1)->im*(u+ 0)->im + (p+ 1)->re*(u+ 0)->re;
  (q+ 1)->im += 
	(p+ 1)->im*(u+ 0)->re - (p+ 1)->re*(u+ 0)->im;

  (q+ 2)->re += 
	(p+ 2)->im*(u+ 0)->im + (p+ 2)->re*(u+ 0)->re;
  (q+ 2)->im += 
	(p+ 2)->im*(u+ 0)->re - (p+ 2)->re*(u+ 0)->im;

  (q+ 3)->re += 
	(p+ 3)->im*(u+ 0)->im + (p+ 3)->re*(u+ 0)->re;
  (q+ 3)->im += 
	(p+ 3)->im*(u+ 0)->re - (p+ 3)->re*(u+ 0)->im;

  return;
}

__inline__ void
spinor_sun_dag_meq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re -= 
	(p+ 0)->im*(u+ 0)->im + (p+ 0)->re*(u+ 0)->re;
  (q+ 0)->im -= 
	(p+ 0)->im*(u+ 0)->re - (p+ 0)->re*(u+ 0)->im;

  (q+ 1)->re -= 
	(p+ 1)->im*(u+ 0)->im + (p+ 1)->re*(u+ 0)->re;
  (q+ 1)->im -= 
	(p+ 1)->im*(u+ 0)->re - (p+ 1)->re*(u+ 0)->im;

  (q+ 2)->re -= 
	(p+ 2)->im*(u+ 0)->im + (p+ 2)->re*(u+ 0)->re;
  (q+ 2)->im -= 
	(p+ 2)->im*(u+ 0)->re - (p+ 2)->re*(u+ 0)->im;

  (q+ 3)->re -= 
	(p+ 3)->im*(u+ 0)->im + (p+ 3)->re*(u+ 0)->re;
  (q+ 3)->im -= 
	(p+ 3)->im*(u+ 0)->re - (p+ 3)->re*(u+ 0)->im;

  return;
}

#endif /* NC == 1 */
#if NC == 3
__inline__ void
spinor_sun_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re = 
	(p+ 0)->re*(u+ 0)->re + (p+ 1)->re*(u+ 1)->re + (p+ 2)->re*(u+ 2)->re -
	(p+ 0)->im*(u+ 0)->im - (p+ 1)->im*(u+ 1)->im - (p+ 2)->im*(u+ 2)->im;
  (q+ 0)->im = 
	(p+ 0)->im*(u+ 0)->re + (p+ 0)->re*(u+ 0)->im + (p+ 1)->im*(u+ 1)->re +
	(p+ 1)->re*(u+ 1)->im + (p+ 2)->im*(u+ 2)->re + (p+ 2)->re*(u+ 2)->im;
  (q+ 1)->re = 
	(p+ 0)->re*(u+ 3)->re + (p+ 1)->re*(u+ 4)->re + (p+ 2)->re*(u+ 5)->re -
	(p+ 0)->im*(u+ 3)->im - (p+ 1)->im*(u+ 4)->im - (p+ 2)->im*(u+ 5)->im;
  (q+ 1)->im = 
	(p+ 0)->im*(u+ 3)->re + (p+ 0)->re*(u+ 3)->im + (p+ 1)->im*(u+ 4)->re +
	(p+ 1)->re*(u+ 4)->im + (p+ 2)->im*(u+ 5)->re + (p+ 2)->re*(u+ 5)->im;
  (q+ 2)->re = 
	(p+ 0)->re*(u+ 6)->re + (p+ 1)->re*(u+ 7)->re + (p+ 2)->re*(u+ 8)->re -
	(p+ 0)->im*(u+ 6)->im - (p+ 1)->im*(u+ 7)->im - (p+ 2)->im*(u+ 8)->im;
  (q+ 2)->im = 
	(p+ 0)->im*(u+ 6)->re + (p+ 0)->re*(u+ 6)->im + (p+ 1)->im*(u+ 7)->re +
	(p+ 1)->re*(u+ 7)->im + (p+ 2)->im*(u+ 8)->re + (p+ 2)->re*(u+ 8)->im;

  (q+ 3)->re = 
	(p+ 3)->re*(u+ 0)->re + (p+ 4)->re*(u+ 1)->re + (p+ 5)->re*(u+ 2)->re -
	(p+ 3)->im*(u+ 0)->im - (p+ 4)->im*(u+ 1)->im - (p+ 5)->im*(u+ 2)->im;
  (q+ 3)->im = 
	(p+ 3)->im*(u+ 0)->re + (p+ 3)->re*(u+ 0)->im + (p+ 4)->im*(u+ 1)->re +
	(p+ 4)->re*(u+ 1)->im + (p+ 5)->im*(u+ 2)->re + (p+ 5)->re*(u+ 2)->im;
  (q+ 4)->re = 
	(p+ 3)->re*(u+ 3)->re + (p+ 4)->re*(u+ 4)->re + (p+ 5)->re*(u+ 5)->re -
	(p+ 3)->im*(u+ 3)->im - (p+ 4)->im*(u+ 4)->im - (p+ 5)->im*(u+ 5)->im;
  (q+ 4)->im = 
	(p+ 3)->im*(u+ 3)->re + (p+ 3)->re*(u+ 3)->im + (p+ 4)->im*(u+ 4)->re +
	(p+ 4)->re*(u+ 4)->im + (p+ 5)->im*(u+ 5)->re + (p+ 5)->re*(u+ 5)->im;
  (q+ 5)->re = 
	(p+ 3)->re*(u+ 6)->re + (p+ 4)->re*(u+ 7)->re + (p+ 5)->re*(u+ 8)->re -
	(p+ 3)->im*(u+ 6)->im - (p+ 4)->im*(u+ 7)->im - (p+ 5)->im*(u+ 8)->im;
  (q+ 5)->im = 
	(p+ 3)->im*(u+ 6)->re + (p+ 3)->re*(u+ 6)->im + (p+ 4)->im*(u+ 7)->re +
	(p+ 4)->re*(u+ 7)->im + (p+ 5)->im*(u+ 8)->re + (p+ 5)->re*(u+ 8)->im;

  (q+ 6)->re = 
	(p+ 6)->re*(u+ 0)->re + (p+ 7)->re*(u+ 1)->re + (p+ 8)->re*(u+ 2)->re -
	(p+ 6)->im*(u+ 0)->im - (p+ 7)->im*(u+ 1)->im - (p+ 8)->im*(u+ 2)->im;
  (q+ 6)->im = 
	(p+ 6)->im*(u+ 0)->re + (p+ 6)->re*(u+ 0)->im + (p+ 7)->im*(u+ 1)->re +
	(p+ 7)->re*(u+ 1)->im + (p+ 8)->im*(u+ 2)->re + (p+ 8)->re*(u+ 2)->im;
  (q+ 7)->re = 
	(p+ 6)->re*(u+ 3)->re + (p+ 7)->re*(u+ 4)->re + (p+ 8)->re*(u+ 5)->re -
	(p+ 6)->im*(u+ 3)->im - (p+ 7)->im*(u+ 4)->im - (p+ 8)->im*(u+ 5)->im;
  (q+ 7)->im = 
	(p+ 6)->im*(u+ 3)->re + (p+ 6)->re*(u+ 3)->im + (p+ 7)->im*(u+ 4)->re +
	(p+ 7)->re*(u+ 4)->im + (p+ 8)->im*(u+ 5)->re + (p+ 8)->re*(u+ 5)->im;
  (q+ 8)->re = 
	(p+ 6)->re*(u+ 6)->re + (p+ 7)->re*(u+ 7)->re + (p+ 8)->re*(u+ 8)->re -
	(p+ 6)->im*(u+ 6)->im - (p+ 7)->im*(u+ 7)->im - (p+ 8)->im*(u+ 8)->im;
  (q+ 8)->im = 
	(p+ 6)->im*(u+ 6)->re + (p+ 6)->re*(u+ 6)->im + (p+ 7)->im*(u+ 7)->re +
	(p+ 7)->re*(u+ 7)->im + (p+ 8)->im*(u+ 8)->re + (p+ 8)->re*(u+ 8)->im;

  (q+ 9)->re = 
	(p+ 9)->re*(u+ 0)->re + (p+10)->re*(u+ 1)->re + (p+11)->re*(u+ 2)->re -
	(p+ 9)->im*(u+ 0)->im - (p+10)->im*(u+ 1)->im - (p+11)->im*(u+ 2)->im;
  (q+ 9)->im = 
	(p+ 9)->im*(u+ 0)->re + (p+ 9)->re*(u+ 0)->im + (p+10)->im*(u+ 1)->re +
	(p+10)->re*(u+ 1)->im + (p+11)->im*(u+ 2)->re + (p+11)->re*(u+ 2)->im;
  (q+10)->re = 
	(p+ 9)->re*(u+ 3)->re + (p+10)->re*(u+ 4)->re + (p+11)->re*(u+ 5)->re -
	(p+ 9)->im*(u+ 3)->im - (p+10)->im*(u+ 4)->im - (p+11)->im*(u+ 5)->im;
  (q+10)->im = 
	(p+ 9)->im*(u+ 3)->re + (p+ 9)->re*(u+ 3)->im + (p+10)->im*(u+ 4)->re +
	(p+10)->re*(u+ 4)->im + (p+11)->im*(u+ 5)->re + (p+11)->re*(u+ 5)->im;
  (q+11)->re = 
	(p+ 9)->re*(u+ 6)->re + (p+10)->re*(u+ 7)->re + (p+11)->re*(u+ 8)->re -
	(p+ 9)->im*(u+ 6)->im - (p+10)->im*(u+ 7)->im - (p+11)->im*(u+ 8)->im;
  (q+11)->im = 
	(p+ 9)->im*(u+ 6)->re + (p+ 9)->re*(u+ 6)->im + (p+10)->im*(u+ 7)->re +
	(p+10)->re*(u+ 7)->im + (p+11)->im*(u+ 8)->re + (p+11)->re*(u+ 8)->im;

  return;
}

__inline__ void
spinor_sun_peq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re += 
	(p+ 0)->re*(u+ 0)->re + (p+ 1)->re*(u+ 1)->re + (p+ 2)->re*(u+ 2)->re -
	(p+ 0)->im*(u+ 0)->im - (p+ 1)->im*(u+ 1)->im - (p+ 2)->im*(u+ 2)->im;
  (q+ 0)->im += 
	(p+ 0)->im*(u+ 0)->re + (p+ 0)->re*(u+ 0)->im + (p+ 1)->im*(u+ 1)->re +
	(p+ 1)->re*(u+ 1)->im + (p+ 2)->im*(u+ 2)->re + (p+ 2)->re*(u+ 2)->im;
  (q+ 1)->re += 
	(p+ 0)->re*(u+ 3)->re + (p+ 1)->re*(u+ 4)->re + (p+ 2)->re*(u+ 5)->re -
	(p+ 0)->im*(u+ 3)->im - (p+ 1)->im*(u+ 4)->im - (p+ 2)->im*(u+ 5)->im;
  (q+ 1)->im += 
	(p+ 0)->im*(u+ 3)->re + (p+ 0)->re*(u+ 3)->im + (p+ 1)->im*(u+ 4)->re +
	(p+ 1)->re*(u+ 4)->im + (p+ 2)->im*(u+ 5)->re + (p+ 2)->re*(u+ 5)->im;
  (q+ 2)->re += 
	(p+ 0)->re*(u+ 6)->re + (p+ 1)->re*(u+ 7)->re + (p+ 2)->re*(u+ 8)->re -
	(p+ 0)->im*(u+ 6)->im - (p+ 1)->im*(u+ 7)->im - (p+ 2)->im*(u+ 8)->im;
  (q+ 2)->im += 
	(p+ 0)->im*(u+ 6)->re + (p+ 0)->re*(u+ 6)->im + (p+ 1)->im*(u+ 7)->re +
	(p+ 1)->re*(u+ 7)->im + (p+ 2)->im*(u+ 8)->re + (p+ 2)->re*(u+ 8)->im;

  (q+ 3)->re += 
	(p+ 3)->re*(u+ 0)->re + (p+ 4)->re*(u+ 1)->re + (p+ 5)->re*(u+ 2)->re -
	(p+ 3)->im*(u+ 0)->im - (p+ 4)->im*(u+ 1)->im - (p+ 5)->im*(u+ 2)->im;
  (q+ 3)->im += 
	(p+ 3)->im*(u+ 0)->re + (p+ 3)->re*(u+ 0)->im + (p+ 4)->im*(u+ 1)->re +
	(p+ 4)->re*(u+ 1)->im + (p+ 5)->im*(u+ 2)->re + (p+ 5)->re*(u+ 2)->im;
  (q+ 4)->re += 
	(p+ 3)->re*(u+ 3)->re + (p+ 4)->re*(u+ 4)->re + (p+ 5)->re*(u+ 5)->re -
	(p+ 3)->im*(u+ 3)->im - (p+ 4)->im*(u+ 4)->im - (p+ 5)->im*(u+ 5)->im;
  (q+ 4)->im += 
	(p+ 3)->im*(u+ 3)->re + (p+ 3)->re*(u+ 3)->im + (p+ 4)->im*(u+ 4)->re +
	(p+ 4)->re*(u+ 4)->im + (p+ 5)->im*(u+ 5)->re + (p+ 5)->re*(u+ 5)->im;
  (q+ 5)->re += 
	(p+ 3)->re*(u+ 6)->re + (p+ 4)->re*(u+ 7)->re + (p+ 5)->re*(u+ 8)->re -
	(p+ 3)->im*(u+ 6)->im - (p+ 4)->im*(u+ 7)->im - (p+ 5)->im*(u+ 8)->im;
  (q+ 5)->im += 
	(p+ 3)->im*(u+ 6)->re + (p+ 3)->re*(u+ 6)->im + (p+ 4)->im*(u+ 7)->re +
	(p+ 4)->re*(u+ 7)->im + (p+ 5)->im*(u+ 8)->re + (p+ 5)->re*(u+ 8)->im;

  (q+ 6)->re += 
	(p+ 6)->re*(u+ 0)->re + (p+ 7)->re*(u+ 1)->re + (p+ 8)->re*(u+ 2)->re -
	(p+ 6)->im*(u+ 0)->im - (p+ 7)->im*(u+ 1)->im - (p+ 8)->im*(u+ 2)->im;
  (q+ 6)->im += 
	(p+ 6)->im*(u+ 0)->re + (p+ 6)->re*(u+ 0)->im + (p+ 7)->im*(u+ 1)->re +
	(p+ 7)->re*(u+ 1)->im + (p+ 8)->im*(u+ 2)->re + (p+ 8)->re*(u+ 2)->im;
  (q+ 7)->re += 
	(p+ 6)->re*(u+ 3)->re + (p+ 7)->re*(u+ 4)->re + (p+ 8)->re*(u+ 5)->re -
	(p+ 6)->im*(u+ 3)->im - (p+ 7)->im*(u+ 4)->im - (p+ 8)->im*(u+ 5)->im;
  (q+ 7)->im += 
	(p+ 6)->im*(u+ 3)->re + (p+ 6)->re*(u+ 3)->im + (p+ 7)->im*(u+ 4)->re +
	(p+ 7)->re*(u+ 4)->im + (p+ 8)->im*(u+ 5)->re + (p+ 8)->re*(u+ 5)->im;
  (q+ 8)->re += 
	(p+ 6)->re*(u+ 6)->re + (p+ 7)->re*(u+ 7)->re + (p+ 8)->re*(u+ 8)->re -
	(p+ 6)->im*(u+ 6)->im - (p+ 7)->im*(u+ 7)->im - (p+ 8)->im*(u+ 8)->im;
  (q+ 8)->im += 
	(p+ 6)->im*(u+ 6)->re + (p+ 6)->re*(u+ 6)->im + (p+ 7)->im*(u+ 7)->re +
	(p+ 7)->re*(u+ 7)->im + (p+ 8)->im*(u+ 8)->re + (p+ 8)->re*(u+ 8)->im;

  (q+ 9)->re += 
	(p+ 9)->re*(u+ 0)->re + (p+10)->re*(u+ 1)->re + (p+11)->re*(u+ 2)->re -
	(p+ 9)->im*(u+ 0)->im - (p+10)->im*(u+ 1)->im - (p+11)->im*(u+ 2)->im;
  (q+ 9)->im += 
	(p+ 9)->im*(u+ 0)->re + (p+ 9)->re*(u+ 0)->im + (p+10)->im*(u+ 1)->re +
	(p+10)->re*(u+ 1)->im + (p+11)->im*(u+ 2)->re + (p+11)->re*(u+ 2)->im;
  (q+10)->re += 
	(p+ 9)->re*(u+ 3)->re + (p+10)->re*(u+ 4)->re + (p+11)->re*(u+ 5)->re -
	(p+ 9)->im*(u+ 3)->im - (p+10)->im*(u+ 4)->im - (p+11)->im*(u+ 5)->im;
  (q+10)->im += 
	(p+ 9)->im*(u+ 3)->re + (p+ 9)->re*(u+ 3)->im + (p+10)->im*(u+ 4)->re +
	(p+10)->re*(u+ 4)->im + (p+11)->im*(u+ 5)->re + (p+11)->re*(u+ 5)->im;
  (q+11)->re += 
	(p+ 9)->re*(u+ 6)->re + (p+10)->re*(u+ 7)->re + (p+11)->re*(u+ 8)->re -
	(p+ 9)->im*(u+ 6)->im - (p+10)->im*(u+ 7)->im - (p+11)->im*(u+ 8)->im;
  (q+11)->im += 
	(p+ 9)->im*(u+ 6)->re + (p+ 9)->re*(u+ 6)->im + (p+10)->im*(u+ 7)->re +
	(p+10)->re*(u+ 7)->im + (p+11)->im*(u+ 8)->re + (p+11)->re*(u+ 8)->im;

  return;
}

__inline__ void
spinor_sun_meq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re -= 
	(p+ 0)->re*(u+ 0)->re + (p+ 1)->re*(u+ 1)->re + (p+ 2)->re*(u+ 2)->re -
	(p+ 0)->im*(u+ 0)->im - (p+ 1)->im*(u+ 1)->im - (p+ 2)->im*(u+ 2)->im;
  (q+ 0)->im -= 
	(p+ 0)->im*(u+ 0)->re + (p+ 0)->re*(u+ 0)->im + (p+ 1)->im*(u+ 1)->re +
	(p+ 1)->re*(u+ 1)->im + (p+ 2)->im*(u+ 2)->re + (p+ 2)->re*(u+ 2)->im;
  (q+ 1)->re -= 
	(p+ 0)->re*(u+ 3)->re + (p+ 1)->re*(u+ 4)->re + (p+ 2)->re*(u+ 5)->re -
	(p+ 0)->im*(u+ 3)->im - (p+ 1)->im*(u+ 4)->im - (p+ 2)->im*(u+ 5)->im;
  (q+ 1)->im -= 
	(p+ 0)->im*(u+ 3)->re + (p+ 0)->re*(u+ 3)->im + (p+ 1)->im*(u+ 4)->re +
	(p+ 1)->re*(u+ 4)->im + (p+ 2)->im*(u+ 5)->re + (p+ 2)->re*(u+ 5)->im;
  (q+ 2)->re -= 
	(p+ 0)->re*(u+ 6)->re + (p+ 1)->re*(u+ 7)->re + (p+ 2)->re*(u+ 8)->re -
	(p+ 0)->im*(u+ 6)->im - (p+ 1)->im*(u+ 7)->im - (p+ 2)->im*(u+ 8)->im;
  (q+ 2)->im -= 
	(p+ 0)->im*(u+ 6)->re + (p+ 0)->re*(u+ 6)->im + (p+ 1)->im*(u+ 7)->re +
	(p+ 1)->re*(u+ 7)->im + (p+ 2)->im*(u+ 8)->re + (p+ 2)->re*(u+ 8)->im;

  (q+ 3)->re -= 
	(p+ 3)->re*(u+ 0)->re + (p+ 4)->re*(u+ 1)->re + (p+ 5)->re*(u+ 2)->re -
	(p+ 3)->im*(u+ 0)->im - (p+ 4)->im*(u+ 1)->im - (p+ 5)->im*(u+ 2)->im;
  (q+ 3)->im -= 
	(p+ 3)->im*(u+ 0)->re + (p+ 3)->re*(u+ 0)->im + (p+ 4)->im*(u+ 1)->re +
	(p+ 4)->re*(u+ 1)->im + (p+ 5)->im*(u+ 2)->re + (p+ 5)->re*(u+ 2)->im;
  (q+ 4)->re -= 
	(p+ 3)->re*(u+ 3)->re + (p+ 4)->re*(u+ 4)->re + (p+ 5)->re*(u+ 5)->re -
	(p+ 3)->im*(u+ 3)->im - (p+ 4)->im*(u+ 4)->im - (p+ 5)->im*(u+ 5)->im;
  (q+ 4)->im -= 
	(p+ 3)->im*(u+ 3)->re + (p+ 3)->re*(u+ 3)->im + (p+ 4)->im*(u+ 4)->re +
	(p+ 4)->re*(u+ 4)->im + (p+ 5)->im*(u+ 5)->re + (p+ 5)->re*(u+ 5)->im;
  (q+ 5)->re -= 
	(p+ 3)->re*(u+ 6)->re + (p+ 4)->re*(u+ 7)->re + (p+ 5)->re*(u+ 8)->re -
	(p+ 3)->im*(u+ 6)->im - (p+ 4)->im*(u+ 7)->im - (p+ 5)->im*(u+ 8)->im;
  (q+ 5)->im -= 
	(p+ 3)->im*(u+ 6)->re + (p+ 3)->re*(u+ 6)->im + (p+ 4)->im*(u+ 7)->re +
	(p+ 4)->re*(u+ 7)->im + (p+ 5)->im*(u+ 8)->re + (p+ 5)->re*(u+ 8)->im;

  (q+ 6)->re -= 
	(p+ 6)->re*(u+ 0)->re + (p+ 7)->re*(u+ 1)->re + (p+ 8)->re*(u+ 2)->re -
	(p+ 6)->im*(u+ 0)->im - (p+ 7)->im*(u+ 1)->im - (p+ 8)->im*(u+ 2)->im;
  (q+ 6)->im -= 
	(p+ 6)->im*(u+ 0)->re + (p+ 6)->re*(u+ 0)->im + (p+ 7)->im*(u+ 1)->re +
	(p+ 7)->re*(u+ 1)->im + (p+ 8)->im*(u+ 2)->re + (p+ 8)->re*(u+ 2)->im;
  (q+ 7)->re -= 
	(p+ 6)->re*(u+ 3)->re + (p+ 7)->re*(u+ 4)->re + (p+ 8)->re*(u+ 5)->re -
	(p+ 6)->im*(u+ 3)->im - (p+ 7)->im*(u+ 4)->im - (p+ 8)->im*(u+ 5)->im;
  (q+ 7)->im -= 
	(p+ 6)->im*(u+ 3)->re + (p+ 6)->re*(u+ 3)->im + (p+ 7)->im*(u+ 4)->re +
	(p+ 7)->re*(u+ 4)->im + (p+ 8)->im*(u+ 5)->re + (p+ 8)->re*(u+ 5)->im;
  (q+ 8)->re -= 
	(p+ 6)->re*(u+ 6)->re + (p+ 7)->re*(u+ 7)->re + (p+ 8)->re*(u+ 8)->re -
	(p+ 6)->im*(u+ 6)->im - (p+ 7)->im*(u+ 7)->im - (p+ 8)->im*(u+ 8)->im;
  (q+ 8)->im -= 
	(p+ 6)->im*(u+ 6)->re + (p+ 6)->re*(u+ 6)->im + (p+ 7)->im*(u+ 7)->re +
	(p+ 7)->re*(u+ 7)->im + (p+ 8)->im*(u+ 8)->re + (p+ 8)->re*(u+ 8)->im;

  (q+ 9)->re -= 
	(p+ 9)->re*(u+ 0)->re + (p+10)->re*(u+ 1)->re + (p+11)->re*(u+ 2)->re -
	(p+ 9)->im*(u+ 0)->im - (p+10)->im*(u+ 1)->im - (p+11)->im*(u+ 2)->im;
  (q+ 9)->im -= 
	(p+ 9)->im*(u+ 0)->re + (p+ 9)->re*(u+ 0)->im + (p+10)->im*(u+ 1)->re +
	(p+10)->re*(u+ 1)->im + (p+11)->im*(u+ 2)->re + (p+11)->re*(u+ 2)->im;
  (q+10)->re -= 
	(p+ 9)->re*(u+ 3)->re + (p+10)->re*(u+ 4)->re + (p+11)->re*(u+ 5)->re -
	(p+ 9)->im*(u+ 3)->im - (p+10)->im*(u+ 4)->im - (p+11)->im*(u+ 5)->im;
  (q+10)->im -= 
	(p+ 9)->im*(u+ 3)->re + (p+ 9)->re*(u+ 3)->im + (p+10)->im*(u+ 4)->re +
	(p+10)->re*(u+ 4)->im + (p+11)->im*(u+ 5)->re + (p+11)->re*(u+ 5)->im;
  (q+11)->re -= 
	(p+ 9)->re*(u+ 6)->re + (p+10)->re*(u+ 7)->re + (p+11)->re*(u+ 8)->re -
	(p+ 9)->im*(u+ 6)->im - (p+10)->im*(u+ 7)->im - (p+11)->im*(u+ 8)->im;
  (q+11)->im -= 
	(p+ 9)->im*(u+ 6)->re + (p+ 9)->re*(u+ 6)->im + (p+10)->im*(u+ 7)->re +
	(p+10)->re*(u+ 7)->im + (p+11)->im*(u+ 8)->re + (p+11)->re*(u+ 8)->im;

  return;
}

__inline__ void
spinor_sun_dag_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re = 
	(p+ 0)->im*(u+ 0)->im + (p+ 0)->re*(u+ 0)->re + (p+ 1)->im*(u+ 3)->im +
	(p+ 1)->re*(u+ 3)->re + (p+ 2)->im*(u+ 6)->im + (p+ 2)->re*(u+ 6)->re;
  (q+ 0)->im = 
	(p+ 0)->im*(u+ 0)->re + (p+ 1)->im*(u+ 3)->re + (p+ 2)->im*(u+ 6)->re -
	(p+ 0)->re*(u+ 0)->im - (p+ 1)->re*(u+ 3)->im - (p+ 2)->re*(u+ 6)->im;
  (q+ 1)->re = 
	(p+ 0)->im*(u+ 1)->im + (p+ 0)->re*(u+ 1)->re + (p+ 1)->im*(u+ 4)->im +
	(p+ 1)->re*(u+ 4)->re + (p+ 2)->im*(u+ 7)->im + (p+ 2)->re*(u+ 7)->re;
  (q+ 1)->im = 
	(p+ 0)->im*(u+ 1)->re + (p+ 1)->im*(u+ 4)->re + (p+ 2)->im*(u+ 7)->re -
	(p+ 0)->re*(u+ 1)->im - (p+ 1)->re*(u+ 4)->im - (p+ 2)->re*(u+ 7)->im;
  (q+ 2)->re = 
	(p+ 0)->im*(u+ 2)->im + (p+ 0)->re*(u+ 2)->re + (p+ 1)->im*(u+ 5)->im +
	(p+ 1)->re*(u+ 5)->re + (p+ 2)->im*(u+ 8)->im + (p+ 2)->re*(u+ 8)->re;
  (q+ 2)->im = 
	(p+ 0)->im*(u+ 2)->re + (p+ 1)->im*(u+ 5)->re + (p+ 2)->im*(u+ 8)->re -
	(p+ 0)->re*(u+ 2)->im - (p+ 1)->re*(u+ 5)->im - (p+ 2)->re*(u+ 8)->im;

  (q+ 3)->re = 
	(p+ 3)->im*(u+ 0)->im + (p+ 3)->re*(u+ 0)->re + (p+ 4)->im*(u+ 3)->im +
	(p+ 4)->re*(u+ 3)->re + (p+ 5)->im*(u+ 6)->im + (p+ 5)->re*(u+ 6)->re;
  (q+ 3)->im = 
	(p+ 3)->im*(u+ 0)->re + (p+ 4)->im*(u+ 3)->re + (p+ 5)->im*(u+ 6)->re -
	(p+ 3)->re*(u+ 0)->im - (p+ 4)->re*(u+ 3)->im - (p+ 5)->re*(u+ 6)->im;
  (q+ 4)->re = 
	(p+ 3)->im*(u+ 1)->im + (p+ 3)->re*(u+ 1)->re + (p+ 4)->im*(u+ 4)->im +
	(p+ 4)->re*(u+ 4)->re + (p+ 5)->im*(u+ 7)->im + (p+ 5)->re*(u+ 7)->re;
  (q+ 4)->im = 
	(p+ 3)->im*(u+ 1)->re + (p+ 4)->im*(u+ 4)->re + (p+ 5)->im*(u+ 7)->re -
	(p+ 3)->re*(u+ 1)->im - (p+ 4)->re*(u+ 4)->im - (p+ 5)->re*(u+ 7)->im;
  (q+ 5)->re = 
	(p+ 3)->im*(u+ 2)->im + (p+ 3)->re*(u+ 2)->re + (p+ 4)->im*(u+ 5)->im +
	(p+ 4)->re*(u+ 5)->re + (p+ 5)->im*(u+ 8)->im + (p+ 5)->re*(u+ 8)->re;
  (q+ 5)->im = 
	(p+ 3)->im*(u+ 2)->re + (p+ 4)->im*(u+ 5)->re + (p+ 5)->im*(u+ 8)->re -
	(p+ 3)->re*(u+ 2)->im - (p+ 4)->re*(u+ 5)->im - (p+ 5)->re*(u+ 8)->im;

  (q+ 6)->re = 
	(p+ 6)->im*(u+ 0)->im + (p+ 6)->re*(u+ 0)->re + (p+ 7)->im*(u+ 3)->im +
	(p+ 7)->re*(u+ 3)->re + (p+ 8)->im*(u+ 6)->im + (p+ 8)->re*(u+ 6)->re;
  (q+ 6)->im = 
	(p+ 6)->im*(u+ 0)->re + (p+ 7)->im*(u+ 3)->re + (p+ 8)->im*(u+ 6)->re -
	(p+ 6)->re*(u+ 0)->im - (p+ 7)->re*(u+ 3)->im - (p+ 8)->re*(u+ 6)->im;
  (q+ 7)->re = 
	(p+ 6)->im*(u+ 1)->im + (p+ 6)->re*(u+ 1)->re + (p+ 7)->im*(u+ 4)->im +
	(p+ 7)->re*(u+ 4)->re + (p+ 8)->im*(u+ 7)->im + (p+ 8)->re*(u+ 7)->re;
  (q+ 7)->im = 
	(p+ 6)->im*(u+ 1)->re + (p+ 7)->im*(u+ 4)->re + (p+ 8)->im*(u+ 7)->re -
	(p+ 6)->re*(u+ 1)->im - (p+ 7)->re*(u+ 4)->im - (p+ 8)->re*(u+ 7)->im;
  (q+ 8)->re = 
	(p+ 6)->im*(u+ 2)->im + (p+ 6)->re*(u+ 2)->re + (p+ 7)->im*(u+ 5)->im +
	(p+ 7)->re*(u+ 5)->re + (p+ 8)->im*(u+ 8)->im + (p+ 8)->re*(u+ 8)->re;
  (q+ 8)->im = 
	(p+ 6)->im*(u+ 2)->re + (p+ 7)->im*(u+ 5)->re + (p+ 8)->im*(u+ 8)->re -
	(p+ 6)->re*(u+ 2)->im - (p+ 7)->re*(u+ 5)->im - (p+ 8)->re*(u+ 8)->im;

  (q+ 9)->re = 
	(p+ 9)->im*(u+ 0)->im + (p+ 9)->re*(u+ 0)->re + (p+10)->im*(u+ 3)->im +
	(p+10)->re*(u+ 3)->re + (p+11)->im*(u+ 6)->im + (p+11)->re*(u+ 6)->re;
  (q+ 9)->im = 
	(p+ 9)->im*(u+ 0)->re + (p+10)->im*(u+ 3)->re + (p+11)->im*(u+ 6)->re -
	(p+ 9)->re*(u+ 0)->im - (p+10)->re*(u+ 3)->im - (p+11)->re*(u+ 6)->im;
  (q+10)->re = 
	(p+ 9)->im*(u+ 1)->im + (p+ 9)->re*(u+ 1)->re + (p+10)->im*(u+ 4)->im +
	(p+10)->re*(u+ 4)->re + (p+11)->im*(u+ 7)->im + (p+11)->re*(u+ 7)->re;
  (q+10)->im = 
	(p+ 9)->im*(u+ 1)->re + (p+10)->im*(u+ 4)->re + (p+11)->im*(u+ 7)->re -
	(p+ 9)->re*(u+ 1)->im - (p+10)->re*(u+ 4)->im - (p+11)->re*(u+ 7)->im;
  (q+11)->re = 
	(p+ 9)->im*(u+ 2)->im + (p+ 9)->re*(u+ 2)->re + (p+10)->im*(u+ 5)->im +
	(p+10)->re*(u+ 5)->re + (p+11)->im*(u+ 8)->im + (p+11)->re*(u+ 8)->re;
  (q+11)->im = 
	(p+ 9)->im*(u+ 2)->re + (p+10)->im*(u+ 5)->re + (p+11)->im*(u+ 8)->re -
	(p+ 9)->re*(u+ 2)->im - (p+10)->re*(u+ 5)->im - (p+11)->re*(u+ 8)->im;

  return;
}

__inline__ void
spinor_sun_dag_peq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re += 
	(p+ 0)->im*(u+ 0)->im + (p+ 0)->re*(u+ 0)->re + (p+ 1)->im*(u+ 3)->im +
	(p+ 1)->re*(u+ 3)->re + (p+ 2)->im*(u+ 6)->im + (p+ 2)->re*(u+ 6)->re;
  (q+ 0)->im += 
	(p+ 0)->im*(u+ 0)->re + (p+ 1)->im*(u+ 3)->re + (p+ 2)->im*(u+ 6)->re -
	(p+ 0)->re*(u+ 0)->im - (p+ 1)->re*(u+ 3)->im - (p+ 2)->re*(u+ 6)->im;
  (q+ 1)->re += 
	(p+ 0)->im*(u+ 1)->im + (p+ 0)->re*(u+ 1)->re + (p+ 1)->im*(u+ 4)->im +
	(p+ 1)->re*(u+ 4)->re + (p+ 2)->im*(u+ 7)->im + (p+ 2)->re*(u+ 7)->re;
  (q+ 1)->im += 
	(p+ 0)->im*(u+ 1)->re + (p+ 1)->im*(u+ 4)->re + (p+ 2)->im*(u+ 7)->re -
	(p+ 0)->re*(u+ 1)->im - (p+ 1)->re*(u+ 4)->im - (p+ 2)->re*(u+ 7)->im;
  (q+ 2)->re += 
	(p+ 0)->im*(u+ 2)->im + (p+ 0)->re*(u+ 2)->re + (p+ 1)->im*(u+ 5)->im +
	(p+ 1)->re*(u+ 5)->re + (p+ 2)->im*(u+ 8)->im + (p+ 2)->re*(u+ 8)->re;
  (q+ 2)->im += 
	(p+ 0)->im*(u+ 2)->re + (p+ 1)->im*(u+ 5)->re + (p+ 2)->im*(u+ 8)->re -
	(p+ 0)->re*(u+ 2)->im - (p+ 1)->re*(u+ 5)->im - (p+ 2)->re*(u+ 8)->im;

  (q+ 3)->re += 
	(p+ 3)->im*(u+ 0)->im + (p+ 3)->re*(u+ 0)->re + (p+ 4)->im*(u+ 3)->im +
	(p+ 4)->re*(u+ 3)->re + (p+ 5)->im*(u+ 6)->im + (p+ 5)->re*(u+ 6)->re;
  (q+ 3)->im += 
	(p+ 3)->im*(u+ 0)->re + (p+ 4)->im*(u+ 3)->re + (p+ 5)->im*(u+ 6)->re -
	(p+ 3)->re*(u+ 0)->im - (p+ 4)->re*(u+ 3)->im - (p+ 5)->re*(u+ 6)->im;
  (q+ 4)->re += 
	(p+ 3)->im*(u+ 1)->im + (p+ 3)->re*(u+ 1)->re + (p+ 4)->im*(u+ 4)->im +
	(p+ 4)->re*(u+ 4)->re + (p+ 5)->im*(u+ 7)->im + (p+ 5)->re*(u+ 7)->re;
  (q+ 4)->im += 
	(p+ 3)->im*(u+ 1)->re + (p+ 4)->im*(u+ 4)->re + (p+ 5)->im*(u+ 7)->re -
	(p+ 3)->re*(u+ 1)->im - (p+ 4)->re*(u+ 4)->im - (p+ 5)->re*(u+ 7)->im;
  (q+ 5)->re += 
	(p+ 3)->im*(u+ 2)->im + (p+ 3)->re*(u+ 2)->re + (p+ 4)->im*(u+ 5)->im +
	(p+ 4)->re*(u+ 5)->re + (p+ 5)->im*(u+ 8)->im + (p+ 5)->re*(u+ 8)->re;
  (q+ 5)->im += 
	(p+ 3)->im*(u+ 2)->re + (p+ 4)->im*(u+ 5)->re + (p+ 5)->im*(u+ 8)->re -
	(p+ 3)->re*(u+ 2)->im - (p+ 4)->re*(u+ 5)->im - (p+ 5)->re*(u+ 8)->im;

  (q+ 6)->re += 
	(p+ 6)->im*(u+ 0)->im + (p+ 6)->re*(u+ 0)->re + (p+ 7)->im*(u+ 3)->im +
	(p+ 7)->re*(u+ 3)->re + (p+ 8)->im*(u+ 6)->im + (p+ 8)->re*(u+ 6)->re;
  (q+ 6)->im += 
	(p+ 6)->im*(u+ 0)->re + (p+ 7)->im*(u+ 3)->re + (p+ 8)->im*(u+ 6)->re -
	(p+ 6)->re*(u+ 0)->im - (p+ 7)->re*(u+ 3)->im - (p+ 8)->re*(u+ 6)->im;
  (q+ 7)->re += 
	(p+ 6)->im*(u+ 1)->im + (p+ 6)->re*(u+ 1)->re + (p+ 7)->im*(u+ 4)->im +
	(p+ 7)->re*(u+ 4)->re + (p+ 8)->im*(u+ 7)->im + (p+ 8)->re*(u+ 7)->re;
  (q+ 7)->im += 
	(p+ 6)->im*(u+ 1)->re + (p+ 7)->im*(u+ 4)->re + (p+ 8)->im*(u+ 7)->re -
	(p+ 6)->re*(u+ 1)->im - (p+ 7)->re*(u+ 4)->im - (p+ 8)->re*(u+ 7)->im;
  (q+ 8)->re += 
	(p+ 6)->im*(u+ 2)->im + (p+ 6)->re*(u+ 2)->re + (p+ 7)->im*(u+ 5)->im +
	(p+ 7)->re*(u+ 5)->re + (p+ 8)->im*(u+ 8)->im + (p+ 8)->re*(u+ 8)->re;
  (q+ 8)->im += 
	(p+ 6)->im*(u+ 2)->re + (p+ 7)->im*(u+ 5)->re + (p+ 8)->im*(u+ 8)->re -
	(p+ 6)->re*(u+ 2)->im - (p+ 7)->re*(u+ 5)->im - (p+ 8)->re*(u+ 8)->im;

  (q+ 9)->re += 
	(p+ 9)->im*(u+ 0)->im + (p+ 9)->re*(u+ 0)->re + (p+10)->im*(u+ 3)->im +
	(p+10)->re*(u+ 3)->re + (p+11)->im*(u+ 6)->im + (p+11)->re*(u+ 6)->re;
  (q+ 9)->im += 
	(p+ 9)->im*(u+ 0)->re + (p+10)->im*(u+ 3)->re + (p+11)->im*(u+ 6)->re -
	(p+ 9)->re*(u+ 0)->im - (p+10)->re*(u+ 3)->im - (p+11)->re*(u+ 6)->im;
  (q+10)->re += 
	(p+ 9)->im*(u+ 1)->im + (p+ 9)->re*(u+ 1)->re + (p+10)->im*(u+ 4)->im +
	(p+10)->re*(u+ 4)->re + (p+11)->im*(u+ 7)->im + (p+11)->re*(u+ 7)->re;
  (q+10)->im += 
	(p+ 9)->im*(u+ 1)->re + (p+10)->im*(u+ 4)->re + (p+11)->im*(u+ 7)->re -
	(p+ 9)->re*(u+ 1)->im - (p+10)->re*(u+ 4)->im - (p+11)->re*(u+ 7)->im;
  (q+11)->re += 
	(p+ 9)->im*(u+ 2)->im + (p+ 9)->re*(u+ 2)->re + (p+10)->im*(u+ 5)->im +
	(p+10)->re*(u+ 5)->re + (p+11)->im*(u+ 8)->im + (p+11)->re*(u+ 8)->re;
  (q+11)->im += 
	(p+ 9)->im*(u+ 2)->re + (p+10)->im*(u+ 5)->re + (p+11)->im*(u+ 8)->re -
	(p+ 9)->re*(u+ 2)->im - (p+10)->re*(u+ 5)->im - (p+11)->re*(u+ 8)->im;

  return;
}

__inline__ void
spinor_sun_dag_meq_mul(qpb_complex *q, qpb_complex *u, qpb_complex *p)
{
  (q+ 0)->re -= 
	(p+ 0)->im*(u+ 0)->im + (p+ 0)->re*(u+ 0)->re + (p+ 1)->im*(u+ 3)->im +
	(p+ 1)->re*(u+ 3)->re + (p+ 2)->im*(u+ 6)->im + (p+ 2)->re*(u+ 6)->re;
  (q+ 0)->im -= 
	(p+ 0)->im*(u+ 0)->re + (p+ 1)->im*(u+ 3)->re + (p+ 2)->im*(u+ 6)->re -
	(p+ 0)->re*(u+ 0)->im - (p+ 1)->re*(u+ 3)->im - (p+ 2)->re*(u+ 6)->im;
  (q+ 1)->re -= 
	(p+ 0)->im*(u+ 1)->im + (p+ 0)->re*(u+ 1)->re + (p+ 1)->im*(u+ 4)->im +
	(p+ 1)->re*(u+ 4)->re + (p+ 2)->im*(u+ 7)->im + (p+ 2)->re*(u+ 7)->re;
  (q+ 1)->im -= 
	(p+ 0)->im*(u+ 1)->re + (p+ 1)->im*(u+ 4)->re + (p+ 2)->im*(u+ 7)->re -
	(p+ 0)->re*(u+ 1)->im - (p+ 1)->re*(u+ 4)->im - (p+ 2)->re*(u+ 7)->im;
  (q+ 2)->re -= 
	(p+ 0)->im*(u+ 2)->im + (p+ 0)->re*(u+ 2)->re + (p+ 1)->im*(u+ 5)->im +
	(p+ 1)->re*(u+ 5)->re + (p+ 2)->im*(u+ 8)->im + (p+ 2)->re*(u+ 8)->re;
  (q+ 2)->im -= 
	(p+ 0)->im*(u+ 2)->re + (p+ 1)->im*(u+ 5)->re + (p+ 2)->im*(u+ 8)->re -
	(p+ 0)->re*(u+ 2)->im - (p+ 1)->re*(u+ 5)->im - (p+ 2)->re*(u+ 8)->im;

  (q+ 3)->re -= 
	(p+ 3)->im*(u+ 0)->im + (p+ 3)->re*(u+ 0)->re + (p+ 4)->im*(u+ 3)->im +
	(p+ 4)->re*(u+ 3)->re + (p+ 5)->im*(u+ 6)->im + (p+ 5)->re*(u+ 6)->re;
  (q+ 3)->im -= 
	(p+ 3)->im*(u+ 0)->re + (p+ 4)->im*(u+ 3)->re + (p+ 5)->im*(u+ 6)->re -
	(p+ 3)->re*(u+ 0)->im - (p+ 4)->re*(u+ 3)->im - (p+ 5)->re*(u+ 6)->im;
  (q+ 4)->re -= 
	(p+ 3)->im*(u+ 1)->im + (p+ 3)->re*(u+ 1)->re + (p+ 4)->im*(u+ 4)->im +
	(p+ 4)->re*(u+ 4)->re + (p+ 5)->im*(u+ 7)->im + (p+ 5)->re*(u+ 7)->re;
  (q+ 4)->im -= 
	(p+ 3)->im*(u+ 1)->re + (p+ 4)->im*(u+ 4)->re + (p+ 5)->im*(u+ 7)->re -
	(p+ 3)->re*(u+ 1)->im - (p+ 4)->re*(u+ 4)->im - (p+ 5)->re*(u+ 7)->im;
  (q+ 5)->re -= 
	(p+ 3)->im*(u+ 2)->im + (p+ 3)->re*(u+ 2)->re + (p+ 4)->im*(u+ 5)->im +
	(p+ 4)->re*(u+ 5)->re + (p+ 5)->im*(u+ 8)->im + (p+ 5)->re*(u+ 8)->re;
  (q+ 5)->im -= 
	(p+ 3)->im*(u+ 2)->re + (p+ 4)->im*(u+ 5)->re + (p+ 5)->im*(u+ 8)->re -
	(p+ 3)->re*(u+ 2)->im - (p+ 4)->re*(u+ 5)->im - (p+ 5)->re*(u+ 8)->im;

  (q+ 6)->re -= 
	(p+ 6)->im*(u+ 0)->im + (p+ 6)->re*(u+ 0)->re + (p+ 7)->im*(u+ 3)->im +
	(p+ 7)->re*(u+ 3)->re + (p+ 8)->im*(u+ 6)->im + (p+ 8)->re*(u+ 6)->re;
  (q+ 6)->im -= 
	(p+ 6)->im*(u+ 0)->re + (p+ 7)->im*(u+ 3)->re + (p+ 8)->im*(u+ 6)->re -
	(p+ 6)->re*(u+ 0)->im - (p+ 7)->re*(u+ 3)->im - (p+ 8)->re*(u+ 6)->im;
  (q+ 7)->re -= 
	(p+ 6)->im*(u+ 1)->im + (p+ 6)->re*(u+ 1)->re + (p+ 7)->im*(u+ 4)->im +
	(p+ 7)->re*(u+ 4)->re + (p+ 8)->im*(u+ 7)->im + (p+ 8)->re*(u+ 7)->re;
  (q+ 7)->im -= 
	(p+ 6)->im*(u+ 1)->re + (p+ 7)->im*(u+ 4)->re + (p+ 8)->im*(u+ 7)->re -
	(p+ 6)->re*(u+ 1)->im - (p+ 7)->re*(u+ 4)->im - (p+ 8)->re*(u+ 7)->im;
  (q+ 8)->re -= 
	(p+ 6)->im*(u+ 2)->im + (p+ 6)->re*(u+ 2)->re + (p+ 7)->im*(u+ 5)->im +
	(p+ 7)->re*(u+ 5)->re + (p+ 8)->im*(u+ 8)->im + (p+ 8)->re*(u+ 8)->re;
  (q+ 8)->im -= 
	(p+ 6)->im*(u+ 2)->re + (p+ 7)->im*(u+ 5)->re + (p+ 8)->im*(u+ 8)->re -
	(p+ 6)->re*(u+ 2)->im - (p+ 7)->re*(u+ 5)->im - (p+ 8)->re*(u+ 8)->im;

  (q+ 9)->re -= 
	(p+ 9)->im*(u+ 0)->im + (p+ 9)->re*(u+ 0)->re + (p+10)->im*(u+ 3)->im +
	(p+10)->re*(u+ 3)->re + (p+11)->im*(u+ 6)->im + (p+11)->re*(u+ 6)->re;
  (q+ 9)->im -= 
	(p+ 9)->im*(u+ 0)->re + (p+10)->im*(u+ 3)->re + (p+11)->im*(u+ 6)->re -
	(p+ 9)->re*(u+ 0)->im - (p+10)->re*(u+ 3)->im - (p+11)->re*(u+ 6)->im;
  (q+10)->re -= 
	(p+ 9)->im*(u+ 1)->im + (p+ 9)->re*(u+ 1)->re + (p+10)->im*(u+ 4)->im +
	(p+10)->re*(u+ 4)->re + (p+11)->im*(u+ 7)->im + (p+11)->re*(u+ 7)->re;
  (q+10)->im -= 
	(p+ 9)->im*(u+ 1)->re + (p+10)->im*(u+ 4)->re + (p+11)->im*(u+ 7)->re -
	(p+ 9)->re*(u+ 1)->im - (p+10)->re*(u+ 4)->im - (p+11)->re*(u+ 7)->im;
  (q+11)->re -= 
	(p+ 9)->im*(u+ 2)->im + (p+ 9)->re*(u+ 2)->re + (p+10)->im*(u+ 5)->im +
	(p+10)->re*(u+ 5)->re + (p+11)->im*(u+ 8)->im + (p+11)->re*(u+ 8)->re;
  (q+11)->im -= 
	(p+ 9)->im*(u+ 2)->re + (p+10)->im*(u+ 5)->re + (p+11)->im*(u+ 8)->re -
	(p+ 9)->re*(u+ 2)->im - (p+10)->re*(u+ 5)->im - (p+11)->re*(u+ 8)->im;

  return;
}

#endif /* NC == 3 */
/* END python generated segment */


#endif /* _QPB_SPINOR_SUN_MUL_H */

