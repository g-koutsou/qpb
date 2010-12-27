#ifndef _QPB_SPINOR_SIGMAS_H
#define _QPB_SPINOR_SIGMAS_H 1
#include <qpb_types.h>

/* BEGIN python generated segment */
#if NC == 1
__inline__ void
spinor_sigma_zt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->re;
  (q+ 0)->im =  (p+ 2)->im;
  (q+ 1)->re = -(p+ 3)->re;
  (q+ 1)->im = -(p+ 3)->im;
  (q+ 2)->re =  (p+ 0)->re;
  (q+ 2)->im =  (p+ 0)->im;
  (q+ 3)->re = -(p+ 1)->re;
  (q+ 3)->im = -(p+ 1)->im;

  return;
}

__inline__ void
spinor_sigma_yz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 1)->re;
  (q+ 0)->im = -(p+ 1)->im;
  (q+ 1)->re = -(p+ 0)->re;
  (q+ 1)->im = -(p+ 0)->im;
  (q+ 2)->re = -(p+ 3)->re;
  (q+ 2)->im = -(p+ 3)->im;
  (q+ 3)->re = -(p+ 2)->re;
  (q+ 3)->im = -(p+ 2)->im;

  return;
}

__inline__ void
spinor_sigma_xt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->re;
  (q+ 0)->im =  (p+ 3)->im;
  (q+ 1)->re =  (p+ 2)->re;
  (q+ 1)->im =  (p+ 2)->im;
  (q+ 2)->re =  (p+ 1)->re;
  (q+ 2)->im =  (p+ 1)->im;
  (q+ 3)->re =  (p+ 0)->re;
  (q+ 3)->im =  (p+ 0)->im;

  return;
}

__inline__ void
spinor_sigma_yt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->im;
  (q+ 0)->im = -(p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im;
  (q+ 1)->im =  (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im;
  (q+ 2)->im = -(p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im;
  (q+ 3)->im =  (p+ 0)->re;

  return;
}

__inline__ void
spinor_sigma_xy(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re;
  (q+ 0)->im = -(p+ 0)->im;
  (q+ 1)->re =  (p+ 1)->re;
  (q+ 1)->im =  (p+ 1)->im;
  (q+ 2)->re = -(p+ 2)->re;
  (q+ 2)->im = -(p+ 2)->im;
  (q+ 3)->re =  (p+ 3)->re;
  (q+ 3)->im =  (p+ 3)->im;

  return;
}

__inline__ void
spinor_sigma_xz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 1)->im;
  (q+ 0)->im = -(p+ 1)->re;
  (q+ 1)->re = -(p+ 0)->im;
  (q+ 1)->im =  (p+ 0)->re;
  (q+ 2)->re =  (p+ 3)->im;
  (q+ 2)->im = -(p+ 3)->re;
  (q+ 3)->re = -(p+ 2)->im;
  (q+ 3)->im =  (p+ 2)->re;

  return;
}

__inline__ void
spinor_sigma_peq_zt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->re;
  (q+ 0)->im +=  (p+ 2)->im;
  (q+ 1)->re += -(p+ 3)->re;
  (q+ 1)->im += -(p+ 3)->im;
  (q+ 2)->re +=  (p+ 0)->re;
  (q+ 2)->im +=  (p+ 0)->im;
  (q+ 3)->re += -(p+ 1)->re;
  (q+ 3)->im += -(p+ 1)->im;

  return;
}

__inline__ void
spinor_sigma_peq_yz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 1)->re;
  (q+ 0)->im += -(p+ 1)->im;
  (q+ 1)->re += -(p+ 0)->re;
  (q+ 1)->im += -(p+ 0)->im;
  (q+ 2)->re += -(p+ 3)->re;
  (q+ 2)->im += -(p+ 3)->im;
  (q+ 3)->re += -(p+ 2)->re;
  (q+ 3)->im += -(p+ 2)->im;

  return;
}

__inline__ void
spinor_sigma_peq_xt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->re;
  (q+ 0)->im +=  (p+ 3)->im;
  (q+ 1)->re +=  (p+ 2)->re;
  (q+ 1)->im +=  (p+ 2)->im;
  (q+ 2)->re +=  (p+ 1)->re;
  (q+ 2)->im +=  (p+ 1)->im;
  (q+ 3)->re +=  (p+ 0)->re;
  (q+ 3)->im +=  (p+ 0)->im;

  return;
}

__inline__ void
spinor_sigma_peq_yt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->im;
  (q+ 0)->im += -(p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im;
  (q+ 1)->im +=  (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im;
  (q+ 2)->im += -(p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im;
  (q+ 3)->im +=  (p+ 0)->re;

  return;
}

__inline__ void
spinor_sigma_peq_xy(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re;
  (q+ 0)->im += -(p+ 0)->im;
  (q+ 1)->re +=  (p+ 1)->re;
  (q+ 1)->im +=  (p+ 1)->im;
  (q+ 2)->re += -(p+ 2)->re;
  (q+ 2)->im += -(p+ 2)->im;
  (q+ 3)->re +=  (p+ 3)->re;
  (q+ 3)->im +=  (p+ 3)->im;

  return;
}

__inline__ void
spinor_sigma_peq_xz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 1)->im;
  (q+ 0)->im += -(p+ 1)->re;
  (q+ 1)->re += -(p+ 0)->im;
  (q+ 1)->im +=  (p+ 0)->re;
  (q+ 2)->re +=  (p+ 3)->im;
  (q+ 2)->im += -(p+ 3)->re;
  (q+ 3)->re += -(p+ 2)->im;
  (q+ 3)->im +=  (p+ 2)->re;

  return;
}

#endif /* NC == 1 */
#if NC == 3
__inline__ void
spinor_sigma_zt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->re;
  (q+ 0)->im =  (p+ 6)->im;
  (q+ 1)->re =  (p+ 7)->re;
  (q+ 1)->im =  (p+ 7)->im;
  (q+ 2)->re =  (p+ 8)->re;
  (q+ 2)->im =  (p+ 8)->im;
  (q+ 3)->re = -(p+ 9)->re;
  (q+ 3)->im = -(p+ 9)->im;
  (q+ 4)->re = -(p+10)->re;
  (q+ 4)->im = -(p+10)->im;
  (q+ 5)->re = -(p+11)->re;
  (q+ 5)->im = -(p+11)->im;
  (q+ 6)->re =  (p+ 0)->re;
  (q+ 6)->im =  (p+ 0)->im;
  (q+ 7)->re =  (p+ 1)->re;
  (q+ 7)->im =  (p+ 1)->im;
  (q+ 8)->re =  (p+ 2)->re;
  (q+ 8)->im =  (p+ 2)->im;
  (q+ 9)->re = -(p+ 3)->re;
  (q+ 9)->im = -(p+ 3)->im;
  (q+10)->re = -(p+ 4)->re;
  (q+10)->im = -(p+ 4)->im;
  (q+11)->re = -(p+ 5)->re;
  (q+11)->im = -(p+ 5)->im;

  return;
}

__inline__ void
spinor_sigma_yz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 3)->re;
  (q+ 0)->im = -(p+ 3)->im;
  (q+ 1)->re = -(p+ 4)->re;
  (q+ 1)->im = -(p+ 4)->im;
  (q+ 2)->re = -(p+ 5)->re;
  (q+ 2)->im = -(p+ 5)->im;
  (q+ 3)->re = -(p+ 0)->re;
  (q+ 3)->im = -(p+ 0)->im;
  (q+ 4)->re = -(p+ 1)->re;
  (q+ 4)->im = -(p+ 1)->im;
  (q+ 5)->re = -(p+ 2)->re;
  (q+ 5)->im = -(p+ 2)->im;
  (q+ 6)->re = -(p+ 9)->re;
  (q+ 6)->im = -(p+ 9)->im;
  (q+ 7)->re = -(p+10)->re;
  (q+ 7)->im = -(p+10)->im;
  (q+ 8)->re = -(p+11)->re;
  (q+ 8)->im = -(p+11)->im;
  (q+ 9)->re = -(p+ 6)->re;
  (q+ 9)->im = -(p+ 6)->im;
  (q+10)->re = -(p+ 7)->re;
  (q+10)->im = -(p+ 7)->im;
  (q+11)->re = -(p+ 8)->re;
  (q+11)->im = -(p+ 8)->im;

  return;
}

__inline__ void
spinor_sigma_xt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 9)->re;
  (q+ 0)->im =  (p+ 9)->im;
  (q+ 1)->re =  (p+10)->re;
  (q+ 1)->im =  (p+10)->im;
  (q+ 2)->re =  (p+11)->re;
  (q+ 2)->im =  (p+11)->im;
  (q+ 3)->re =  (p+ 6)->re;
  (q+ 3)->im =  (p+ 6)->im;
  (q+ 4)->re =  (p+ 7)->re;
  (q+ 4)->im =  (p+ 7)->im;
  (q+ 5)->re =  (p+ 8)->re;
  (q+ 5)->im =  (p+ 8)->im;
  (q+ 6)->re =  (p+ 3)->re;
  (q+ 6)->im =  (p+ 3)->im;
  (q+ 7)->re =  (p+ 4)->re;
  (q+ 7)->im =  (p+ 4)->im;
  (q+ 8)->re =  (p+ 5)->re;
  (q+ 8)->im =  (p+ 5)->im;
  (q+ 9)->re =  (p+ 0)->re;
  (q+ 9)->im =  (p+ 0)->im;
  (q+10)->re =  (p+ 1)->re;
  (q+10)->im =  (p+ 1)->im;
  (q+11)->re =  (p+ 2)->re;
  (q+11)->im =  (p+ 2)->im;

  return;
}

__inline__ void
spinor_sigma_yt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 9)->im;
  (q+ 0)->im = -(p+ 9)->re;
  (q+ 1)->re =  (p+10)->im;
  (q+ 1)->im = -(p+10)->re;
  (q+ 2)->re =  (p+11)->im;
  (q+ 2)->im = -(p+11)->re;
  (q+ 3)->re = -(p+ 6)->im;
  (q+ 3)->im =  (p+ 6)->re;
  (q+ 4)->re = -(p+ 7)->im;
  (q+ 4)->im =  (p+ 7)->re;
  (q+ 5)->re = -(p+ 8)->im;
  (q+ 5)->im =  (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im;
  (q+ 6)->im = -(p+ 3)->re;
  (q+ 7)->re =  (p+ 4)->im;
  (q+ 7)->im = -(p+ 4)->re;
  (q+ 8)->re =  (p+ 5)->im;
  (q+ 8)->im = -(p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im;
  (q+ 9)->im =  (p+ 0)->re;
  (q+10)->re = -(p+ 1)->im;
  (q+10)->im =  (p+ 1)->re;
  (q+11)->re = -(p+ 2)->im;
  (q+11)->im =  (p+ 2)->re;

  return;
}

__inline__ void
spinor_sigma_xy(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re;
  (q+ 0)->im = -(p+ 0)->im;
  (q+ 1)->re = -(p+ 1)->re;
  (q+ 1)->im = -(p+ 1)->im;
  (q+ 2)->re = -(p+ 2)->re;
  (q+ 2)->im = -(p+ 2)->im;
  (q+ 3)->re =  (p+ 3)->re;
  (q+ 3)->im =  (p+ 3)->im;
  (q+ 4)->re =  (p+ 4)->re;
  (q+ 4)->im =  (p+ 4)->im;
  (q+ 5)->re =  (p+ 5)->re;
  (q+ 5)->im =  (p+ 5)->im;
  (q+ 6)->re = -(p+ 6)->re;
  (q+ 6)->im = -(p+ 6)->im;
  (q+ 7)->re = -(p+ 7)->re;
  (q+ 7)->im = -(p+ 7)->im;
  (q+ 8)->re = -(p+ 8)->re;
  (q+ 8)->im = -(p+ 8)->im;
  (q+ 9)->re =  (p+ 9)->re;
  (q+ 9)->im =  (p+ 9)->im;
  (q+10)->re =  (p+10)->re;
  (q+10)->im =  (p+10)->im;
  (q+11)->re =  (p+11)->re;
  (q+11)->im =  (p+11)->im;

  return;
}

__inline__ void
spinor_sigma_xz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->im;
  (q+ 0)->im = -(p+ 3)->re;
  (q+ 1)->re =  (p+ 4)->im;
  (q+ 1)->im = -(p+ 4)->re;
  (q+ 2)->re =  (p+ 5)->im;
  (q+ 2)->im = -(p+ 5)->re;
  (q+ 3)->re = -(p+ 0)->im;
  (q+ 3)->im =  (p+ 0)->re;
  (q+ 4)->re = -(p+ 1)->im;
  (q+ 4)->im =  (p+ 1)->re;
  (q+ 5)->re = -(p+ 2)->im;
  (q+ 5)->im =  (p+ 2)->re;
  (q+ 6)->re =  (p+ 9)->im;
  (q+ 6)->im = -(p+ 9)->re;
  (q+ 7)->re =  (p+10)->im;
  (q+ 7)->im = -(p+10)->re;
  (q+ 8)->re =  (p+11)->im;
  (q+ 8)->im = -(p+11)->re;
  (q+ 9)->re = -(p+ 6)->im;
  (q+ 9)->im =  (p+ 6)->re;
  (q+10)->re = -(p+ 7)->im;
  (q+10)->im =  (p+ 7)->re;
  (q+11)->re = -(p+ 8)->im;
  (q+11)->im =  (p+ 8)->re;

  return;
}

__inline__ void
spinor_sigma_peq_zt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->re;
  (q+ 0)->im +=  (p+ 6)->im;
  (q+ 1)->re +=  (p+ 7)->re;
  (q+ 1)->im +=  (p+ 7)->im;
  (q+ 2)->re +=  (p+ 8)->re;
  (q+ 2)->im +=  (p+ 8)->im;
  (q+ 3)->re += -(p+ 9)->re;
  (q+ 3)->im += -(p+ 9)->im;
  (q+ 4)->re += -(p+10)->re;
  (q+ 4)->im += -(p+10)->im;
  (q+ 5)->re += -(p+11)->re;
  (q+ 5)->im += -(p+11)->im;
  (q+ 6)->re +=  (p+ 0)->re;
  (q+ 6)->im +=  (p+ 0)->im;
  (q+ 7)->re +=  (p+ 1)->re;
  (q+ 7)->im +=  (p+ 1)->im;
  (q+ 8)->re +=  (p+ 2)->re;
  (q+ 8)->im +=  (p+ 2)->im;
  (q+ 9)->re += -(p+ 3)->re;
  (q+ 9)->im += -(p+ 3)->im;
  (q+10)->re += -(p+ 4)->re;
  (q+10)->im += -(p+ 4)->im;
  (q+11)->re += -(p+ 5)->re;
  (q+11)->im += -(p+ 5)->im;

  return;
}

__inline__ void
spinor_sigma_peq_yz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 3)->re;
  (q+ 0)->im += -(p+ 3)->im;
  (q+ 1)->re += -(p+ 4)->re;
  (q+ 1)->im += -(p+ 4)->im;
  (q+ 2)->re += -(p+ 5)->re;
  (q+ 2)->im += -(p+ 5)->im;
  (q+ 3)->re += -(p+ 0)->re;
  (q+ 3)->im += -(p+ 0)->im;
  (q+ 4)->re += -(p+ 1)->re;
  (q+ 4)->im += -(p+ 1)->im;
  (q+ 5)->re += -(p+ 2)->re;
  (q+ 5)->im += -(p+ 2)->im;
  (q+ 6)->re += -(p+ 9)->re;
  (q+ 6)->im += -(p+ 9)->im;
  (q+ 7)->re += -(p+10)->re;
  (q+ 7)->im += -(p+10)->im;
  (q+ 8)->re += -(p+11)->re;
  (q+ 8)->im += -(p+11)->im;
  (q+ 9)->re += -(p+ 6)->re;
  (q+ 9)->im += -(p+ 6)->im;
  (q+10)->re += -(p+ 7)->re;
  (q+10)->im += -(p+ 7)->im;
  (q+11)->re += -(p+ 8)->re;
  (q+11)->im += -(p+ 8)->im;

  return;
}

__inline__ void
spinor_sigma_peq_xt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 9)->re;
  (q+ 0)->im +=  (p+ 9)->im;
  (q+ 1)->re +=  (p+10)->re;
  (q+ 1)->im +=  (p+10)->im;
  (q+ 2)->re +=  (p+11)->re;
  (q+ 2)->im +=  (p+11)->im;
  (q+ 3)->re +=  (p+ 6)->re;
  (q+ 3)->im +=  (p+ 6)->im;
  (q+ 4)->re +=  (p+ 7)->re;
  (q+ 4)->im +=  (p+ 7)->im;
  (q+ 5)->re +=  (p+ 8)->re;
  (q+ 5)->im +=  (p+ 8)->im;
  (q+ 6)->re +=  (p+ 3)->re;
  (q+ 6)->im +=  (p+ 3)->im;
  (q+ 7)->re +=  (p+ 4)->re;
  (q+ 7)->im +=  (p+ 4)->im;
  (q+ 8)->re +=  (p+ 5)->re;
  (q+ 8)->im +=  (p+ 5)->im;
  (q+ 9)->re +=  (p+ 0)->re;
  (q+ 9)->im +=  (p+ 0)->im;
  (q+10)->re +=  (p+ 1)->re;
  (q+10)->im +=  (p+ 1)->im;
  (q+11)->re +=  (p+ 2)->re;
  (q+11)->im +=  (p+ 2)->im;

  return;
}

__inline__ void
spinor_sigma_peq_yt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 9)->im;
  (q+ 0)->im += -(p+ 9)->re;
  (q+ 1)->re +=  (p+10)->im;
  (q+ 1)->im += -(p+10)->re;
  (q+ 2)->re +=  (p+11)->im;
  (q+ 2)->im += -(p+11)->re;
  (q+ 3)->re += -(p+ 6)->im;
  (q+ 3)->im +=  (p+ 6)->re;
  (q+ 4)->re += -(p+ 7)->im;
  (q+ 4)->im +=  (p+ 7)->re;
  (q+ 5)->re += -(p+ 8)->im;
  (q+ 5)->im +=  (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im;
  (q+ 6)->im += -(p+ 3)->re;
  (q+ 7)->re +=  (p+ 4)->im;
  (q+ 7)->im += -(p+ 4)->re;
  (q+ 8)->re +=  (p+ 5)->im;
  (q+ 8)->im += -(p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im;
  (q+ 9)->im +=  (p+ 0)->re;
  (q+10)->re += -(p+ 1)->im;
  (q+10)->im +=  (p+ 1)->re;
  (q+11)->re += -(p+ 2)->im;
  (q+11)->im +=  (p+ 2)->re;

  return;
}

__inline__ void
spinor_sigma_peq_xy(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re;
  (q+ 0)->im += -(p+ 0)->im;
  (q+ 1)->re += -(p+ 1)->re;
  (q+ 1)->im += -(p+ 1)->im;
  (q+ 2)->re += -(p+ 2)->re;
  (q+ 2)->im += -(p+ 2)->im;
  (q+ 3)->re +=  (p+ 3)->re;
  (q+ 3)->im +=  (p+ 3)->im;
  (q+ 4)->re +=  (p+ 4)->re;
  (q+ 4)->im +=  (p+ 4)->im;
  (q+ 5)->re +=  (p+ 5)->re;
  (q+ 5)->im +=  (p+ 5)->im;
  (q+ 6)->re += -(p+ 6)->re;
  (q+ 6)->im += -(p+ 6)->im;
  (q+ 7)->re += -(p+ 7)->re;
  (q+ 7)->im += -(p+ 7)->im;
  (q+ 8)->re += -(p+ 8)->re;
  (q+ 8)->im += -(p+ 8)->im;
  (q+ 9)->re +=  (p+ 9)->re;
  (q+ 9)->im +=  (p+ 9)->im;
  (q+10)->re +=  (p+10)->re;
  (q+10)->im +=  (p+10)->im;
  (q+11)->re +=  (p+11)->re;
  (q+11)->im +=  (p+11)->im;

  return;
}

__inline__ void
spinor_sigma_peq_xz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->im;
  (q+ 0)->im += -(p+ 3)->re;
  (q+ 1)->re +=  (p+ 4)->im;
  (q+ 1)->im += -(p+ 4)->re;
  (q+ 2)->re +=  (p+ 5)->im;
  (q+ 2)->im += -(p+ 5)->re;
  (q+ 3)->re += -(p+ 0)->im;
  (q+ 3)->im +=  (p+ 0)->re;
  (q+ 4)->re += -(p+ 1)->im;
  (q+ 4)->im +=  (p+ 1)->re;
  (q+ 5)->re += -(p+ 2)->im;
  (q+ 5)->im +=  (p+ 2)->re;
  (q+ 6)->re +=  (p+ 9)->im;
  (q+ 6)->im += -(p+ 9)->re;
  (q+ 7)->re +=  (p+10)->im;
  (q+ 7)->im += -(p+10)->re;
  (q+ 8)->re +=  (p+11)->im;
  (q+ 8)->im += -(p+11)->re;
  (q+ 9)->re += -(p+ 6)->im;
  (q+ 9)->im +=  (p+ 6)->re;
  (q+10)->re += -(p+ 7)->im;
  (q+10)->im +=  (p+ 7)->re;
  (q+11)->re += -(p+ 8)->im;
  (q+11)->im +=  (p+ 8)->re;

  return;
}

#endif /* NC == 3 */
/* END python generated segment */


#endif /* _QPB_SPINOR_SIGMAS_H */

