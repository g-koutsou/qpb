#ifndef _QPB_SPINOR_GAMMAS_H
#define _QPB_SPINOR_GAMMAS_H 1
#include <qpb_types.h>

/* BEGIN python generated segment */
#if NC == 1
__inline__ void
spinor_gamma_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re = -(p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->re =  (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->im - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im = -(p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im + (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im = -(p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im + (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re =  (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->re = -(p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->im - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 3)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 3)->im;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im;
  (q+ 2)->re =  (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 3)->im;
  (q+ 0)->im =  (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im;
  (q+ 1)->im =  (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im;
  (q+ 2)->im = -(p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im;
  (q+ 3)->im = -(p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im = -(p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im = -(p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im =  (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im =  (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im =  (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im =  (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_pt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re;
  (q+ 0)->im = -(p+ 0)->im;
  (q+ 1)->re = -(p+ 1)->re;
  (q+ 1)->im = -(p+ 1)->im;
  (q+ 2)->re =  (p+ 2)->re;
  (q+ 2)->im =  (p+ 2)->im;
  (q+ 3)->re =  (p+ 3)->re;
  (q+ 3)->im =  (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im =  (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im - (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re = -(p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im;
  (q+ 3)->re =  (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->im + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->re;
  (q+ 0)->im =  (p+ 3)->im;
  (q+ 1)->re = -(p+ 2)->re;
  (q+ 1)->im = -(p+ 2)->im;
  (q+ 2)->re = -(p+ 1)->re;
  (q+ 2)->im = -(p+ 1)->im;
  (q+ 3)->re =  (p+ 0)->re;
  (q+ 3)->im =  (p+ 0)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re =  (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im;
  (q+ 3)->re = -(p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->im + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im =  (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im - (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 3)->re;
  (q+ 0)->im = -(p+ 3)->im;
  (q+ 1)->re =  (p+ 2)->re;
  (q+ 1)->im =  (p+ 2)->im;
  (q+ 2)->re =  (p+ 1)->re;
  (q+ 2)->im =  (p+ 1)->im;
  (q+ 3)->re = -(p+ 0)->re;
  (q+ 3)->im = -(p+ 0)->im;

  return;
}

__inline__ void
spinor_gamma_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 3)->im;
  (q+ 0)->im = -(p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im;
  (q+ 1)->im = -(p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im;
  (q+ 2)->im =  (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im;
  (q+ 3)->im =  (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 2)->im;
  (q+ 0)->im = -(p+ 2)->re;
  (q+ 1)->re = -(p+ 3)->im;
  (q+ 1)->im =  (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im;
  (q+ 2)->im =  (p+ 0)->re;
  (q+ 3)->re =  (p+ 1)->im;
  (q+ 3)->im = -(p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re;
  (q+ 0)->im =  (p+ 0)->im;
  (q+ 1)->re =  (p+ 1)->re;
  (q+ 1)->im =  (p+ 1)->im;
  (q+ 2)->re = -(p+ 2)->re;
  (q+ 2)->im = -(p+ 2)->im;
  (q+ 3)->re = -(p+ 3)->re;
  (q+ 3)->im = -(p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im;
  (q+ 0)->im =  (p+ 2)->re;
  (q+ 1)->re =  (p+ 3)->im;
  (q+ 1)->im = -(p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im;
  (q+ 2)->im = -(p+ 0)->re;
  (q+ 3)->re = -(p+ 1)->im;
  (q+ 3)->im =  (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_mt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 2)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 2)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 3)->im;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im;
  (q+ 2)->re = -(p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 3)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im = -(p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im = -(p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_pt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 3)->im;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im;
  (q+ 2)->re =  (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 3)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re - (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re + (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re = -(p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im = -(p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 2)->im;
  (q+ 3)->re = -(p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 3)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->re =  (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 3)->im;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im;
  (q+ 2)->re = -(p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re = -(p+ 0)->im + (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im =  (p+ 0)->re + (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re =  (p+ 0)->im + (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im = -(p+ 0)->re - (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re += -(p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->re +=  (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im += -(p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im += -(p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im + (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re +=  (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->re += -(p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->im - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 3)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 3)->im;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im;
  (q+ 2)->re +=  (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 3)->im;
  (q+ 0)->im +=  (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im;
  (q+ 1)->im +=  (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im;
  (q+ 2)->im += -(p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im;
  (q+ 3)->im += -(p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_peq_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im += -(p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im += -(p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im +=  (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im +=  (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im +=  (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im +=  (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re;
  (q+ 0)->im += -(p+ 0)->im;
  (q+ 1)->re += -(p+ 1)->re;
  (q+ 1)->im += -(p+ 1)->im;
  (q+ 2)->re +=  (p+ 2)->re;
  (q+ 2)->im +=  (p+ 2)->im;
  (q+ 3)->re +=  (p+ 3)->re;
  (q+ 3)->im +=  (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im +=  (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re += -(p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im;
  (q+ 3)->re +=  (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->re;
  (q+ 0)->im +=  (p+ 3)->im;
  (q+ 1)->re += -(p+ 2)->re;
  (q+ 1)->im += -(p+ 2)->im;
  (q+ 2)->re += -(p+ 1)->re;
  (q+ 2)->im += -(p+ 1)->im;
  (q+ 3)->re +=  (p+ 0)->re;
  (q+ 3)->im +=  (p+ 0)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re +=  (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im;
  (q+ 3)->re += -(p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->im + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im +=  (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im - (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 3)->re;
  (q+ 0)->im += -(p+ 3)->im;
  (q+ 1)->re +=  (p+ 2)->re;
  (q+ 1)->im +=  (p+ 2)->im;
  (q+ 2)->re +=  (p+ 1)->re;
  (q+ 2)->im +=  (p+ 1)->im;
  (q+ 3)->re += -(p+ 0)->re;
  (q+ 3)->im += -(p+ 0)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 3)->im;
  (q+ 0)->im += -(p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im;
  (q+ 1)->im += -(p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im;
  (q+ 2)->im +=  (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im;
  (q+ 3)->im +=  (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 2)->im;
  (q+ 0)->im += -(p+ 2)->re;
  (q+ 1)->re += -(p+ 3)->im;
  (q+ 1)->im +=  (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im;
  (q+ 2)->im +=  (p+ 0)->re;
  (q+ 3)->re +=  (p+ 1)->im;
  (q+ 3)->im += -(p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re;
  (q+ 0)->im +=  (p+ 0)->im;
  (q+ 1)->re +=  (p+ 1)->re;
  (q+ 1)->im +=  (p+ 1)->im;
  (q+ 2)->re += -(p+ 2)->re;
  (q+ 2)->im += -(p+ 2)->im;
  (q+ 3)->re += -(p+ 3)->re;
  (q+ 3)->im += -(p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im + (p+ 3)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->re + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->re - (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im;
  (q+ 0)->im +=  (p+ 2)->re;
  (q+ 1)->re +=  (p+ 3)->im;
  (q+ 1)->im += -(p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im;
  (q+ 2)->im += -(p+ 0)->re;
  (q+ 3)->re += -(p+ 1)->im;
  (q+ 3)->im +=  (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 2)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 2)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 3)->im;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im;
  (q+ 2)->re += -(p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 3)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im += -(p+ 2)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im += -(p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->re - (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 3)->im;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im;
  (q+ 2)->re +=  (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 3)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im - (p+ 3)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im + (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 2)->im + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im - (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re - (p+ 1)->im + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 2)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 2)->im - (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 1)->im + (p+ 1)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im + (p+ 1)->re;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im + (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im + (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re + (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 2)->im + (p+ 2)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 1)->im + (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 2)->im - (p+ 2)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im - (p+ 2)->re;
  (q+ 2)->re += -(p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->im + (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im += -(p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im - (p+ 1)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im - (p+ 1)->re;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 1)->im;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 1)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 2)->im;
  (q+ 3)->re += -(p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 1)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 3)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 2)->re;
  (q+ 2)->re +=  (p+ 1)->im - (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->re - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 3)->im;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im;
  (q+ 2)->re += -(p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 1)->im - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->re - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 2)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 2)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 2)->im + (p+ 2)->re - (p+ 3)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 2)->im + (p+ 2)->re + (p+ 3)->re;
  (q+ 2)->re += -(p+ 0)->im + (p+ 1)->im + (p+ 1)->re + (p+ 2)->re;
  (q+ 2)->im +=  (p+ 0)->re + (p+ 1)->im - (p+ 1)->re + (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 1)->im + (p+ 3)->re;
  (q+ 3)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 1)->re + (p+ 3)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 2)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 2)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 2)->im - (p+ 2)->re + (p+ 3)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 2)->im + (p+ 2)->re - (p+ 3)->re;
  (q+ 2)->re +=  (p+ 0)->im + (p+ 1)->im - (p+ 1)->re - (p+ 2)->re;
  (q+ 2)->im += -(p+ 0)->re - (p+ 1)->im - (p+ 1)->re - (p+ 2)->im;
  (q+ 3)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 1)->im - (p+ 3)->re;
  (q+ 3)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 1)->re - (p+ 3)->im;

  return;
}

#endif /* NC == 1 */
#if NC == 3
__inline__ void
spinor_gamma_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re =  (p+ 7)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 7)->re + (p+10)->im;
  (q+ 2)->re =  (p+ 8)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 8)->re + (p+11)->im;
  (q+ 3)->re = -(p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 7)->im + (p+10)->re;
  (q+ 5)->re = -(p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 8)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im;
  (q+ 9)->re =  (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->im - (p+ 3)->re;
  (q+10)->re =  (p+ 1)->re + (p+ 4)->im;
  (q+10)->im =  (p+ 1)->im - (p+ 4)->re;
  (q+11)->re =  (p+ 2)->re + (p+ 5)->im;
  (q+11)->im =  (p+ 2)->im - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im = -(p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re =  (p+ 7)->im - (p+10)->im;
  (q+ 1)->im = -(p+ 7)->re + (p+10)->re;
  (q+ 2)->re =  (p+ 8)->im - (p+11)->im;
  (q+ 2)->im = -(p+ 8)->re + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->im - (p+10)->im;
  (q+ 4)->im =  (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 8)->im - (p+11)->im;
  (q+ 5)->im =  (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->re;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->re;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im + (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->re - (p+ 3)->re;
  (q+10)->re =  (p+ 1)->im + (p+ 4)->im;
  (q+10)->im = -(p+ 1)->re - (p+ 4)->re;
  (q+11)->re =  (p+ 2)->im + (p+ 5)->im;
  (q+11)->im = -(p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im = -(p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re =  (p+ 7)->im + (p+10)->im;
  (q+ 1)->im = -(p+ 7)->re - (p+10)->re;
  (q+ 2)->re =  (p+ 8)->im + (p+11)->im;
  (q+ 2)->im = -(p+ 8)->re - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->im - (p+10)->im;
  (q+ 4)->im = -(p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 8)->im - (p+11)->im;
  (q+ 5)->im = -(p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->re;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->re;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im + (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->re - (p+ 3)->re;
  (q+10)->re = -(p+ 1)->im + (p+ 4)->im;
  (q+10)->im =  (p+ 1)->re - (p+ 4)->re;
  (q+11)->re = -(p+ 2)->im + (p+ 5)->im;
  (q+11)->im =  (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re =  (p+ 7)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 7)->re - (p+10)->im;
  (q+ 2)->re =  (p+ 8)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 8)->re - (p+11)->im;
  (q+ 3)->re =  (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 7)->im + (p+10)->re;
  (q+ 5)->re =  (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 8)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im;
  (q+ 9)->re = -(p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->im - (p+ 3)->re;
  (q+10)->re = -(p+ 1)->re + (p+ 4)->im;
  (q+10)->im = -(p+ 1)->im - (p+ 4)->re;
  (q+11)->re = -(p+ 2)->re + (p+ 5)->im;
  (q+11)->im = -(p+ 2)->im - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re + (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re + (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re - (p+10)->im;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re - (p+11)->im;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im + (p+10)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im + (p+11)->im;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im - (p+10)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im - (p+11)->im;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 9)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+10)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+11)->im;
  (q+ 2)->im = -(p+ 2)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re - (p+ 4)->im;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re + (p+ 4)->re;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re - (p+ 5)->im;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 9)->im;
  (q+ 1)->re = -(p+ 1)->re - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+10)->im;
  (q+ 2)->re = -(p+ 2)->re - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+11)->im;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->re;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->re;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->re;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im;
  (q+ 6)->re =  (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->re + (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+10)->im;
  (q+11)->re = -(p+ 2)->re + (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re + (p+ 4)->im;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re - (p+ 4)->re;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re + (p+ 5)->im;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 9)->im;
  (q+ 0)->im =  (p+ 9)->re;
  (q+ 1)->re = -(p+10)->im;
  (q+ 1)->im =  (p+10)->re;
  (q+ 2)->re = -(p+11)->im;
  (q+ 2)->im =  (p+11)->re;
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
  (q+ 9)->re =  (p+ 0)->im;
  (q+ 9)->im = -(p+ 0)->re;
  (q+10)->re =  (p+ 1)->im;
  (q+10)->im = -(p+ 1)->re;
  (q+11)->re =  (p+ 2)->im;
  (q+11)->im = -(p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im = -(p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re =  (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im = -(p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re =  (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im = -(p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im = -(p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re = -(p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im = -(p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re = -(p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im = -(p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re + (p+ 4)->im;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re - (p+ 4)->re;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re + (p+ 5)->im;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re - (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re - (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im + (p+10)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im + (p+11)->im;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re - (p+ 4)->im;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re + (p+ 4)->re;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re - (p+ 5)->im;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im =  (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re =  (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im =  (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re =  (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im =  (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im =  (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re = -(p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im =  (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re = -(p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im =  (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re + (p+ 4)->im;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re - (p+ 4)->re;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re + (p+ 5)->im;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re - (p+10)->im;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re - (p+11)->im;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im =  (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re = -(p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im =  (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re = -(p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im =  (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im =  (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re =  (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im =  (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re =  (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im =  (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_pt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+11)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re - (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re - (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re + (p+ 4)->im;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re - (p+ 4)->re;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re + (p+ 5)->im;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re;
  (q+ 0)->im = -(p+ 0)->im;
  (q+ 1)->re = -(p+ 1)->re;
  (q+ 1)->im = -(p+ 1)->im;
  (q+ 2)->re = -(p+ 2)->re;
  (q+ 2)->im = -(p+ 2)->im;
  (q+ 3)->re = -(p+ 3)->re;
  (q+ 3)->im = -(p+ 3)->im;
  (q+ 4)->re = -(p+ 4)->re;
  (q+ 4)->im = -(p+ 4)->im;
  (q+ 5)->re = -(p+ 5)->re;
  (q+ 5)->im = -(p+ 5)->im;
  (q+ 6)->re =  (p+ 6)->re;
  (q+ 6)->im =  (p+ 6)->im;
  (q+ 7)->re =  (p+ 7)->re;
  (q+ 7)->im =  (p+ 7)->im;
  (q+ 8)->re =  (p+ 8)->re;
  (q+ 8)->im =  (p+ 8)->im;
  (q+ 9)->re =  (p+ 9)->re;
  (q+ 9)->im =  (p+ 9)->im;
  (q+10)->re =  (p+10)->re;
  (q+10)->im =  (p+10)->im;
  (q+11)->re =  (p+11)->re;
  (q+11)->im =  (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im =  (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re = -(p+ 7)->im - (p+10)->im;
  (q+ 1)->im =  (p+ 7)->re + (p+10)->re;
  (q+ 2)->re = -(p+ 8)->im - (p+11)->im;
  (q+ 2)->im =  (p+ 8)->re + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->im + (p+10)->im;
  (q+ 4)->im =  (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 8)->im + (p+11)->im;
  (q+ 5)->im =  (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->re;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->re;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im - (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->re + (p+ 3)->re;
  (q+10)->re =  (p+ 1)->im - (p+ 4)->im;
  (q+10)->im = -(p+ 1)->re + (p+ 4)->re;
  (q+11)->re =  (p+ 2)->im - (p+ 5)->im;
  (q+11)->im = -(p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re = -(p+ 7)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 7)->re + (p+10)->im;
  (q+ 2)->re = -(p+ 8)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 8)->re + (p+11)->im;
  (q+ 3)->re = -(p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 7)->im - (p+10)->re;
  (q+ 5)->re = -(p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 8)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im;
  (q+ 9)->re =  (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->im + (p+ 3)->re;
  (q+10)->re =  (p+ 1)->re - (p+ 4)->im;
  (q+10)->im =  (p+ 1)->im + (p+ 4)->re;
  (q+11)->re =  (p+ 2)->re - (p+ 5)->im;
  (q+11)->im =  (p+ 2)->im + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 9)->re;
  (q+ 0)->im =  (p+ 9)->im;
  (q+ 1)->re =  (p+10)->re;
  (q+ 1)->im =  (p+10)->im;
  (q+ 2)->re =  (p+11)->re;
  (q+ 2)->im =  (p+11)->im;
  (q+ 3)->re = -(p+ 6)->re;
  (q+ 3)->im = -(p+ 6)->im;
  (q+ 4)->re = -(p+ 7)->re;
  (q+ 4)->im = -(p+ 7)->im;
  (q+ 5)->re = -(p+ 8)->re;
  (q+ 5)->im = -(p+ 8)->im;
  (q+ 6)->re = -(p+ 3)->re;
  (q+ 6)->im = -(p+ 3)->im;
  (q+ 7)->re = -(p+ 4)->re;
  (q+ 7)->im = -(p+ 4)->im;
  (q+ 8)->re = -(p+ 5)->re;
  (q+ 8)->im = -(p+ 5)->im;
  (q+ 9)->re =  (p+ 0)->re;
  (q+ 9)->im =  (p+ 0)->im;
  (q+10)->re =  (p+ 1)->re;
  (q+10)->im =  (p+ 1)->im;
  (q+11)->re =  (p+ 2)->re;
  (q+11)->im =  (p+ 2)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re = -(p+ 7)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 7)->re - (p+10)->im;
  (q+ 2)->re = -(p+ 8)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 8)->re - (p+11)->im;
  (q+ 3)->re =  (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 7)->im - (p+10)->re;
  (q+ 5)->re =  (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 8)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im;
  (q+ 9)->re = -(p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->im + (p+ 3)->re;
  (q+10)->re = -(p+ 1)->re - (p+ 4)->im;
  (q+10)->im = -(p+ 1)->im + (p+ 4)->re;
  (q+11)->re = -(p+ 2)->re - (p+ 5)->im;
  (q+11)->im = -(p+ 2)->im + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im =  (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re = -(p+ 7)->im + (p+10)->im;
  (q+ 1)->im =  (p+ 7)->re - (p+10)->re;
  (q+ 2)->re = -(p+ 8)->im + (p+11)->im;
  (q+ 2)->im =  (p+ 8)->re - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->im + (p+10)->im;
  (q+ 4)->im = -(p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 8)->im + (p+11)->im;
  (q+ 5)->im = -(p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->re;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->re;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im - (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->re + (p+ 3)->re;
  (q+10)->re = -(p+ 1)->im - (p+ 4)->im;
  (q+10)->im =  (p+ 1)->re + (p+ 4)->re;
  (q+11)->re = -(p+ 2)->im - (p+ 5)->im;
  (q+11)->im =  (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re + (p+10)->im;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re + (p+11)->im;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im - (p+10)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im - (p+11)->im;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 9)->re;
  (q+ 0)->im = -(p+ 9)->im;
  (q+ 1)->re = -(p+10)->re;
  (q+ 1)->im = -(p+10)->im;
  (q+ 2)->re = -(p+11)->re;
  (q+ 2)->im = -(p+11)->im;
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
  (q+ 9)->re = -(p+ 0)->re;
  (q+ 9)->im = -(p+ 0)->im;
  (q+10)->re = -(p+ 1)->re;
  (q+10)->im = -(p+ 1)->im;
  (q+11)->re = -(p+ 2)->re;
  (q+11)->im = -(p+ 2)->im;

  return;
}

__inline__ void
spinor_gamma_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 9)->im;
  (q+ 0)->im = -(p+ 9)->re;
  (q+ 1)->re =  (p+10)->im;
  (q+ 1)->im = -(p+10)->re;
  (q+ 2)->re =  (p+11)->im;
  (q+ 2)->im = -(p+11)->re;
  (q+ 3)->re =  (p+ 6)->im;
  (q+ 3)->im = -(p+ 6)->re;
  (q+ 4)->re =  (p+ 7)->im;
  (q+ 4)->im = -(p+ 7)->re;
  (q+ 5)->re =  (p+ 8)->im;
  (q+ 5)->im = -(p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im;
  (q+ 6)->im =  (p+ 3)->re;
  (q+ 7)->re = -(p+ 4)->im;
  (q+ 7)->im =  (p+ 4)->re;
  (q+ 8)->re = -(p+ 5)->im;
  (q+ 8)->im =  (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im;
  (q+ 9)->im =  (p+ 0)->re;
  (q+10)->re = -(p+ 1)->im;
  (q+10)->im =  (p+ 1)->re;
  (q+11)->re = -(p+ 2)->im;
  (q+11)->im =  (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 6)->im;
  (q+ 0)->im = -(p+ 6)->re;
  (q+ 1)->re =  (p+ 7)->im;
  (q+ 1)->im = -(p+ 7)->re;
  (q+ 2)->re =  (p+ 8)->im;
  (q+ 2)->im = -(p+ 8)->re;
  (q+ 3)->re = -(p+ 9)->im;
  (q+ 3)->im =  (p+ 9)->re;
  (q+ 4)->re = -(p+10)->im;
  (q+ 4)->im =  (p+10)->re;
  (q+ 5)->re = -(p+11)->im;
  (q+ 5)->im =  (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im;
  (q+ 6)->im =  (p+ 0)->re;
  (q+ 7)->re = -(p+ 1)->im;
  (q+ 7)->im =  (p+ 1)->re;
  (q+ 8)->re = -(p+ 2)->im;
  (q+ 8)->im =  (p+ 2)->re;
  (q+ 9)->re =  (p+ 3)->im;
  (q+ 9)->im = -(p+ 3)->re;
  (q+10)->re =  (p+ 4)->im;
  (q+10)->im = -(p+ 4)->re;
  (q+11)->re =  (p+ 5)->im;
  (q+11)->im = -(p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re + (p+10)->im;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re + (p+11)->im;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re - (p+10)->im;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re - (p+11)->im;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im + (p+10)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im + (p+11)->im;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re + (p+10)->im;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re + (p+11)->im;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+10)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+11)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+11)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re + (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re + (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re;
  (q+ 0)->im =  (p+ 0)->im;
  (q+ 1)->re =  (p+ 1)->re;
  (q+ 1)->im =  (p+ 1)->im;
  (q+ 2)->re =  (p+ 2)->re;
  (q+ 2)->im =  (p+ 2)->im;
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
  (q+ 9)->re = -(p+ 9)->re;
  (q+ 9)->im = -(p+ 9)->im;
  (q+10)->re = -(p+10)->re;
  (q+10)->im = -(p+10)->im;
  (q+11)->re = -(p+11)->re;
  (q+11)->im = -(p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re + (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re + (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im + (p+10)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im + (p+11)->im;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re - (p+10)->im;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re - (p+11)->im;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im;
  (q+ 0)->im =  (p+ 6)->re;
  (q+ 1)->re = -(p+ 7)->im;
  (q+ 1)->im =  (p+ 7)->re;
  (q+ 2)->re = -(p+ 8)->im;
  (q+ 2)->im =  (p+ 8)->re;
  (q+ 3)->re =  (p+ 9)->im;
  (q+ 3)->im = -(p+ 9)->re;
  (q+ 4)->re =  (p+10)->im;
  (q+ 4)->im = -(p+10)->re;
  (q+ 5)->re =  (p+11)->im;
  (q+ 5)->im = -(p+11)->re;
  (q+ 6)->re =  (p+ 0)->im;
  (q+ 6)->im = -(p+ 0)->re;
  (q+ 7)->re =  (p+ 1)->im;
  (q+ 7)->im = -(p+ 1)->re;
  (q+ 8)->re =  (p+ 2)->im;
  (q+ 8)->im = -(p+ 2)->re;
  (q+ 9)->re = -(p+ 3)->im;
  (q+ 9)->im =  (p+ 3)->re;
  (q+10)->re = -(p+ 4)->im;
  (q+10)->im =  (p+ 4)->re;
  (q+11)->re = -(p+ 5)->im;
  (q+11)->im =  (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_mt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 6)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 6)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+ 7)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+ 7)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+ 8)->im;
  (q+ 2)->im = -(p+ 2)->im + (p+ 8)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 3)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 4)->re + (p+10)->im;
  (q+11)->re = -(p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im + (p+ 9)->im;
  (q+ 1)->re = -(p+ 1)->re + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im + (p+10)->im;
  (q+ 2)->re = -(p+ 2)->re + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im + (p+11)->im;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->re;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->re;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->re;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im;
  (q+ 6)->re = -(p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->re + (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+10)->im;
  (q+11)->re =  (p+ 2)->re + (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re - (p+ 9)->im;
  (q+ 0)->im = -(p+ 0)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re - (p+10)->im;
  (q+ 1)->im = -(p+ 1)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re - (p+11)->im;
  (q+ 2)->im = -(p+ 2)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+11)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re - (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re - (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im = -(p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re = -(p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im = -(p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re = -(p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im = -(p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im = -(p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re =  (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im = -(p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re =  (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im = -(p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_pt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+ 7)->im - (p+10)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+ 7)->re + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+ 8)->im - (p+11)->im;
  (q+ 2)->im =  (p+ 2)->im - (p+ 8)->re + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im - (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im - (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im - (p+ 9)->im;
  (q+ 1)->re =  (p+ 1)->re - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im - (p+10)->im;
  (q+ 2)->re =  (p+ 2)->re - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im - (p+11)->im;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->re;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->re;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->re;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im;
  (q+ 6)->re =  (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->re - (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+10)->im;
  (q+11)->re = -(p+ 2)->re - (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 9)->im;
  (q+ 0)->im =  (p+ 0)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+10)->im;
  (q+ 1)->im =  (p+ 1)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+11)->im;
  (q+ 2)->im =  (p+ 2)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im - (p+10)->im;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im - (p+11)->im;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im + (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re + (p+10)->im;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im + (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re + (p+11)->im;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im - (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im - (p+ 7)->im + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im - (p+ 8)->im + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re - (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re - (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re - (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re =  (p+ 1)->im - (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re =  (p+ 2)->im - (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re - (p+ 4)->im;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re + (p+ 4)->re;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re - (p+ 5)->im;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re + (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re + (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+10)->im - (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+11)->im - (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re + (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re = -(p+ 4)->re + (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re = -(p+ 5)->re + (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im - (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im + (p+ 0)->re + (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im - (p+ 1)->re + (p+10)->re;
  (q+10)->im = -(p+ 1)->im + (p+ 1)->re + (p+10)->im;
  (q+11)->re = -(p+ 2)->im - (p+ 2)->re + (p+11)->re;
  (q+11)->im = -(p+ 2)->im + (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re + (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+10)->im - (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re + (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+11)->im - (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re = -(p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 0)->im + (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im + (p+ 0)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 1)->im + (p+ 1)->re - (p+10)->re;
  (q+10)->im =  (p+ 1)->im + (p+ 1)->re - (p+10)->im;
  (q+11)->re = -(p+ 2)->im + (p+ 2)->re - (p+11)->re;
  (q+11)->im =  (p+ 2)->im + (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im = -(p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re = -(p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im = -(p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re = -(p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im = -(p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re - (p+ 4)->im;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re + (p+ 4)->re;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re - (p+ 5)->im;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_pt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re;
  (q+ 3)->re =  (p+ 3)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 8)->im;
  (q+ 9)->re = -(p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 3)->re - (p+ 9)->im;
  (q+10)->re = -(p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 4)->re - (p+10)->im;
  (q+11)->re = -(p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 9)->im;
  (q+ 0)->im =  (p+ 0)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+10)->im;
  (q+ 1)->im =  (p+ 1)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+11)->im;
  (q+ 2)->im =  (p+ 2)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im;
  (q+ 3)->im =  (p+ 3)->im + (p+ 6)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im;
  (q+ 4)->im =  (p+ 4)->im + (p+ 7)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im;
  (q+ 5)->im =  (p+ 5)->im + (p+ 8)->re;
  (q+ 6)->re =  (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+10)->re;
  (q+10)->im = -(p+ 1)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+11)->re;
  (q+11)->im = -(p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 9)->im;
  (q+ 1)->re =  (p+ 1)->re + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+10)->im;
  (q+ 2)->re =  (p+ 2)->re + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+11)->im;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->re;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->re;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->re;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im;
  (q+ 6)->re = -(p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re = -(p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re = -(p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->re - (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+10)->im;
  (q+11)->re =  (p+ 2)->re - (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_mt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re = -(p+ 0)->re + (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im = -(p+ 0)->im - (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re = -(p+ 1)->re + (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im = -(p+ 1)->im - (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re = -(p+ 2)->re + (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im = -(p+ 2)->im - (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re = -(p+ 3)->re - (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im = -(p+ 3)->im + (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re = -(p+ 4)->re - (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im = -(p+ 4)->im + (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re = -(p+ 5)->re - (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im = -(p+ 5)->im + (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re = -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im =  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re = -(p+ 1)->im + (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im =  (p+ 1)->re + (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re = -(p+ 2)->im + (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im =  (p+ 2)->re + (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im = -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im - (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im = -(p+ 1)->im - (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re =  (p+ 2)->im - (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im = -(p+ 2)->im - (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_pt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re =  (p+ 0)->re - (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im =  (p+ 0)->im + (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re =  (p+ 1)->re - (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im =  (p+ 1)->im + (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re =  (p+ 2)->re - (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im =  (p+ 2)->im + (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re =  (p+ 3)->re - (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im =  (p+ 3)->im - (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re =  (p+ 4)->re - (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im =  (p+ 4)->im - (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re =  (p+ 5)->re - (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im =  (p+ 5)->im - (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re =  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im = -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re =  (p+ 1)->im + (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im = -(p+ 1)->re - (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re =  (p+ 2)->im + (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im = -(p+ 2)->re - (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re =  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im =  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re =  (p+ 1)->im + (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im =  (p+ 1)->im - (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re =  (p+ 2)->im + (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im =  (p+ 2)->im - (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re +=  (p+ 7)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 7)->re + (p+10)->im;
  (q+ 2)->re +=  (p+ 8)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 8)->re + (p+11)->im;
  (q+ 3)->re += -(p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 7)->im + (p+10)->re;
  (q+ 5)->re += -(p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 8)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im;
  (q+ 9)->re +=  (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->re + (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->im - (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->re + (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->im - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im += -(p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 7)->im - (p+10)->im;
  (q+ 1)->im += -(p+ 7)->re + (p+10)->re;
  (q+ 2)->re +=  (p+ 8)->im - (p+11)->im;
  (q+ 2)->im += -(p+ 8)->re + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->im - (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 8)->im - (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->re;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->re;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->re - (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->im + (p+ 4)->im;
  (q+10)->im += -(p+ 1)->re - (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->im + (p+ 5)->im;
  (q+11)->im += -(p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im += -(p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 7)->im + (p+10)->im;
  (q+ 1)->im += -(p+ 7)->re - (p+10)->re;
  (q+ 2)->re +=  (p+ 8)->im + (p+11)->im;
  (q+ 2)->im += -(p+ 8)->re - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->im - (p+10)->im;
  (q+ 4)->im += -(p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->im - (p+11)->im;
  (q+ 5)->im += -(p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->re;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->re;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im + (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->re - (p+ 3)->re;
  (q+10)->re += -(p+ 1)->im + (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->re - (p+ 4)->re;
  (q+11)->re += -(p+ 2)->im + (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re +=  (p+ 7)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 7)->re - (p+10)->im;
  (q+ 2)->re +=  (p+ 8)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 8)->re - (p+11)->im;
  (q+ 3)->re +=  (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->im + (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im;
  (q+ 9)->re += -(p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->im - (p+ 3)->re;
  (q+10)->re += -(p+ 1)->re + (p+ 4)->im;
  (q+10)->im += -(p+ 1)->im - (p+ 4)->re;
  (q+11)->re += -(p+ 2)->re + (p+ 5)->im;
  (q+11)->im += -(p+ 2)->im - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re - (p+10)->im;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re - (p+11)->im;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im + (p+10)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im + (p+11)->im;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im - (p+10)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im - (p+11)->im;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 9)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+10)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+11)->im;
  (q+ 2)->im += -(p+ 2)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re - (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re + (p+ 4)->re;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re - (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 9)->im;
  (q+ 1)->re += -(p+ 1)->re - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+10)->im;
  (q+ 2)->re += -(p+ 2)->re - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+11)->im;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->re;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->re;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->re;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im;
  (q+ 6)->re +=  (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->re + (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+10)->im;
  (q+11)->re += -(p+ 2)->re + (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re + (p+ 4)->im;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re - (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re + (p+ 5)->im;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 9)->im;
  (q+ 0)->im +=  (p+ 9)->re;
  (q+ 1)->re += -(p+10)->im;
  (q+ 1)->im +=  (p+10)->re;
  (q+ 2)->re += -(p+11)->im;
  (q+ 2)->im +=  (p+11)->re;
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
  (q+ 9)->re +=  (p+ 0)->im;
  (q+ 9)->im += -(p+ 0)->re;
  (q+10)->re +=  (p+ 1)->im;
  (q+10)->im += -(p+ 1)->re;
  (q+11)->re +=  (p+ 2)->im;
  (q+11)->im += -(p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_peq_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im += -(p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re +=  (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im += -(p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re +=  (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im += -(p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im += -(p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re += -(p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im += -(p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re += -(p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im += -(p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re + (p+ 4)->im;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re - (p+ 4)->re;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re + (p+ 5)->im;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re - (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re - (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im + (p+10)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im + (p+11)->im;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re - (p+ 4)->im;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re + (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re - (p+ 5)->im;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im +=  (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re +=  (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im +=  (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re +=  (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im +=  (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im +=  (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re += -(p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im +=  (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re += -(p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im +=  (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re + (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re - (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re + (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re - (p+10)->im;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re - (p+11)->im;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im +=  (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re += -(p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im +=  (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re += -(p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im +=  (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im +=  (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re +=  (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im +=  (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re +=  (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im +=  (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+11)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re - (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re - (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re + (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re - (p+ 4)->re;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re + (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re - (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re;
  (q+ 0)->im += -(p+ 0)->im;
  (q+ 1)->re += -(p+ 1)->re;
  (q+ 1)->im += -(p+ 1)->im;
  (q+ 2)->re += -(p+ 2)->re;
  (q+ 2)->im += -(p+ 2)->im;
  (q+ 3)->re += -(p+ 3)->re;
  (q+ 3)->im += -(p+ 3)->im;
  (q+ 4)->re += -(p+ 4)->re;
  (q+ 4)->im += -(p+ 4)->im;
  (q+ 5)->re += -(p+ 5)->re;
  (q+ 5)->im += -(p+ 5)->im;
  (q+ 6)->re +=  (p+ 6)->re;
  (q+ 6)->im +=  (p+ 6)->im;
  (q+ 7)->re +=  (p+ 7)->re;
  (q+ 7)->im +=  (p+ 7)->im;
  (q+ 8)->re +=  (p+ 8)->re;
  (q+ 8)->im +=  (p+ 8)->im;
  (q+ 9)->re +=  (p+ 9)->re;
  (q+ 9)->im +=  (p+ 9)->im;
  (q+10)->re +=  (p+10)->re;
  (q+10)->im +=  (p+10)->im;
  (q+11)->re +=  (p+11)->re;
  (q+11)->im +=  (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im +=  (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re += -(p+ 7)->im - (p+10)->im;
  (q+ 1)->im +=  (p+ 7)->re + (p+10)->re;
  (q+ 2)->re += -(p+ 8)->im - (p+11)->im;
  (q+ 2)->im +=  (p+ 8)->re + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->im + (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 8)->im + (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->re;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->re;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->re + (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->im - (p+ 4)->im;
  (q+10)->im += -(p+ 1)->re + (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->im - (p+ 5)->im;
  (q+11)->im += -(p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re += -(p+ 7)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 7)->re + (p+10)->im;
  (q+ 2)->re += -(p+ 8)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 8)->re + (p+11)->im;
  (q+ 3)->re += -(p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 7)->im - (p+10)->re;
  (q+ 5)->re += -(p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 8)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im;
  (q+ 9)->re +=  (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->re - (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->im + (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->re - (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->im + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 9)->re;
  (q+ 0)->im +=  (p+ 9)->im;
  (q+ 1)->re +=  (p+10)->re;
  (q+ 1)->im +=  (p+10)->im;
  (q+ 2)->re +=  (p+11)->re;
  (q+ 2)->im +=  (p+11)->im;
  (q+ 3)->re += -(p+ 6)->re;
  (q+ 3)->im += -(p+ 6)->im;
  (q+ 4)->re += -(p+ 7)->re;
  (q+ 4)->im += -(p+ 7)->im;
  (q+ 5)->re += -(p+ 8)->re;
  (q+ 5)->im += -(p+ 8)->im;
  (q+ 6)->re += -(p+ 3)->re;
  (q+ 6)->im += -(p+ 3)->im;
  (q+ 7)->re += -(p+ 4)->re;
  (q+ 7)->im += -(p+ 4)->im;
  (q+ 8)->re += -(p+ 5)->re;
  (q+ 8)->im += -(p+ 5)->im;
  (q+ 9)->re +=  (p+ 0)->re;
  (q+ 9)->im +=  (p+ 0)->im;
  (q+10)->re +=  (p+ 1)->re;
  (q+10)->im +=  (p+ 1)->im;
  (q+11)->re +=  (p+ 2)->re;
  (q+11)->im +=  (p+ 2)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re += -(p+ 7)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 7)->re - (p+10)->im;
  (q+ 2)->re += -(p+ 8)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 8)->re - (p+11)->im;
  (q+ 3)->re +=  (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->im - (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im;
  (q+ 9)->re += -(p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->im + (p+ 3)->re;
  (q+10)->re += -(p+ 1)->re - (p+ 4)->im;
  (q+10)->im += -(p+ 1)->im + (p+ 4)->re;
  (q+11)->re += -(p+ 2)->re - (p+ 5)->im;
  (q+11)->im += -(p+ 2)->im + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im +=  (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re += -(p+ 7)->im + (p+10)->im;
  (q+ 1)->im +=  (p+ 7)->re - (p+10)->re;
  (q+ 2)->re += -(p+ 8)->im + (p+11)->im;
  (q+ 2)->im +=  (p+ 8)->re - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->im + (p+10)->im;
  (q+ 4)->im += -(p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->im + (p+11)->im;
  (q+ 5)->im += -(p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->re;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->re;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im - (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->re + (p+ 3)->re;
  (q+10)->re += -(p+ 1)->im - (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->re + (p+ 4)->re;
  (q+11)->re += -(p+ 2)->im - (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re + (p+10)->im;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re + (p+11)->im;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im - (p+10)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im - (p+11)->im;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 9)->re;
  (q+ 0)->im += -(p+ 9)->im;
  (q+ 1)->re += -(p+10)->re;
  (q+ 1)->im += -(p+10)->im;
  (q+ 2)->re += -(p+11)->re;
  (q+ 2)->im += -(p+11)->im;
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
  (q+ 9)->re += -(p+ 0)->re;
  (q+ 9)->im += -(p+ 0)->im;
  (q+10)->re += -(p+ 1)->re;
  (q+10)->im += -(p+ 1)->im;
  (q+11)->re += -(p+ 2)->re;
  (q+11)->im += -(p+ 2)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 9)->im;
  (q+ 0)->im += -(p+ 9)->re;
  (q+ 1)->re +=  (p+10)->im;
  (q+ 1)->im += -(p+10)->re;
  (q+ 2)->re +=  (p+11)->im;
  (q+ 2)->im += -(p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im;
  (q+ 3)->im += -(p+ 6)->re;
  (q+ 4)->re +=  (p+ 7)->im;
  (q+ 4)->im += -(p+ 7)->re;
  (q+ 5)->re +=  (p+ 8)->im;
  (q+ 5)->im += -(p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im;
  (q+ 6)->im +=  (p+ 3)->re;
  (q+ 7)->re += -(p+ 4)->im;
  (q+ 7)->im +=  (p+ 4)->re;
  (q+ 8)->re += -(p+ 5)->im;
  (q+ 8)->im +=  (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im;
  (q+ 9)->im +=  (p+ 0)->re;
  (q+10)->re += -(p+ 1)->im;
  (q+10)->im +=  (p+ 1)->re;
  (q+11)->re += -(p+ 2)->im;
  (q+11)->im +=  (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 6)->im;
  (q+ 0)->im += -(p+ 6)->re;
  (q+ 1)->re +=  (p+ 7)->im;
  (q+ 1)->im += -(p+ 7)->re;
  (q+ 2)->re +=  (p+ 8)->im;
  (q+ 2)->im += -(p+ 8)->re;
  (q+ 3)->re += -(p+ 9)->im;
  (q+ 3)->im +=  (p+ 9)->re;
  (q+ 4)->re += -(p+10)->im;
  (q+ 4)->im +=  (p+10)->re;
  (q+ 5)->re += -(p+11)->im;
  (q+ 5)->im +=  (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im;
  (q+ 6)->im +=  (p+ 0)->re;
  (q+ 7)->re += -(p+ 1)->im;
  (q+ 7)->im +=  (p+ 1)->re;
  (q+ 8)->re += -(p+ 2)->im;
  (q+ 8)->im +=  (p+ 2)->re;
  (q+ 9)->re +=  (p+ 3)->im;
  (q+ 9)->im += -(p+ 3)->re;
  (q+10)->re +=  (p+ 4)->im;
  (q+10)->im += -(p+ 4)->re;
  (q+11)->re +=  (p+ 5)->im;
  (q+11)->im += -(p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re + (p+10)->im;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re + (p+11)->im;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re - (p+10)->im;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re - (p+11)->im;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im + (p+10)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im + (p+11)->im;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im + (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re + (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im + (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re + (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re + (p+10)->im;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re + (p+11)->im;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+10)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+11)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+11)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re;
  (q+ 0)->im +=  (p+ 0)->im;
  (q+ 1)->re +=  (p+ 1)->re;
  (q+ 1)->im +=  (p+ 1)->im;
  (q+ 2)->re +=  (p+ 2)->re;
  (q+ 2)->im +=  (p+ 2)->im;
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
  (q+ 9)->re += -(p+ 9)->re;
  (q+ 9)->im += -(p+ 9)->im;
  (q+10)->re += -(p+10)->re;
  (q+10)->im += -(p+10)->im;
  (q+11)->re += -(p+11)->re;
  (q+11)->im += -(p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re + (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re + (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re + (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re + (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im + (p+ 9)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im + (p+10)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im + (p+11)->im;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->re + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->re + (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->re + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re - (p+10)->im;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re - (p+11)->im;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->re - (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->re - (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->re - (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im - (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im - (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im;
  (q+ 0)->im +=  (p+ 6)->re;
  (q+ 1)->re += -(p+ 7)->im;
  (q+ 1)->im +=  (p+ 7)->re;
  (q+ 2)->re += -(p+ 8)->im;
  (q+ 2)->im +=  (p+ 8)->re;
  (q+ 3)->re +=  (p+ 9)->im;
  (q+ 3)->im += -(p+ 9)->re;
  (q+ 4)->re +=  (p+10)->im;
  (q+ 4)->im += -(p+10)->re;
  (q+ 5)->re +=  (p+11)->im;
  (q+ 5)->im += -(p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im;
  (q+ 6)->im += -(p+ 0)->re;
  (q+ 7)->re +=  (p+ 1)->im;
  (q+ 7)->im += -(p+ 1)->re;
  (q+ 8)->re +=  (p+ 2)->im;
  (q+ 8)->im += -(p+ 2)->re;
  (q+ 9)->re += -(p+ 3)->im;
  (q+ 9)->im +=  (p+ 3)->re;
  (q+10)->re += -(p+ 4)->im;
  (q+10)->im +=  (p+ 4)->re;
  (q+11)->re += -(p+ 5)->im;
  (q+11)->im +=  (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_mt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 6)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 6)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+ 7)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+ 7)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+ 8)->im;
  (q+ 2)->im += -(p+ 2)->im + (p+ 8)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 3)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 4)->re + (p+10)->im;
  (q+11)->re += -(p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im + (p+ 9)->im;
  (q+ 1)->re += -(p+ 1)->re + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im + (p+10)->im;
  (q+ 2)->re += -(p+ 2)->re + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im + (p+11)->im;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->re;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->re;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->re;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im;
  (q+ 6)->re += -(p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->re + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+10)->im;
  (q+11)->re +=  (p+ 2)->re + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re - (p+ 9)->im;
  (q+ 0)->im += -(p+ 0)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re - (p+10)->im;
  (q+ 1)->im += -(p+ 1)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re - (p+11)->im;
  (q+ 2)->im += -(p+ 2)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+11)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im += -(p+ 6)->im + (p+ 6)->re;
  (q+ 4)->re += -(p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im += -(p+ 7)->im + (p+ 7)->re;
  (q+ 5)->re += -(p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im += -(p+ 8)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im += -(p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re +=  (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im += -(p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re +=  (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im += -(p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+ 7)->im - (p+10)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+ 7)->re + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+ 8)->im - (p+11)->im;
  (q+ 2)->im +=  (p+ 2)->im - (p+ 8)->re + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im - (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im - (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->re - (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->re - (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->re - (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_my(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 9)->im;
  (q+ 1)->re +=  (p+ 1)->re - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im - (p+10)->im;
  (q+ 2)->re +=  (p+ 2)->re - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im - (p+11)->im;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->re;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->re;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->re;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im;
  (q+ 6)->re +=  (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->re - (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+10)->im;
  (q+11)->re += -(p+ 2)->re - (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 9)->im;
  (q+ 0)->im +=  (p+ 0)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+10)->im;
  (q+ 1)->im +=  (p+ 1)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+11)->im;
  (q+ 2)->im +=  (p+ 2)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im - (p+ 9)->im;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im - (p+10)->im;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im - (p+11)->im;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im + (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im + (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re + (p+10)->im;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im + (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re + (p+11)->im;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im - (p+ 6)->im + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im - (p+ 7)->im + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im - (p+ 8)->im + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im - (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re - (p+ 3)->im + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im - (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re - (p+ 4)->im + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im - (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re - (p+ 5)->im + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 6)->re - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 7)->im + (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 7)->re - (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 8)->im + (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 8)->re - (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 6)->im - (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 7)->im - (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 8)->im - (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 3)->im + (p+ 3)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im + (p+ 3)->re;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 4)->im + (p+ 4)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im + (p+ 4)->re;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 5)->im + (p+ 5)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im + (p+ 5)->re;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 3)->re;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re - (p+ 4)->im;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re + (p+ 4)->re;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re - (p+ 5)->im;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im + (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im + (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im + (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im + (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re + (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im + (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re + (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im + (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re + (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_my_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+10)->im - (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+11)->im - (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re + (p+ 6)->im + (p+ 6)->re;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re += -(p+ 4)->re + (p+ 7)->im + (p+ 7)->re;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re += -(p+ 5)->re + (p+ 8)->im + (p+ 8)->re;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 3)->im + (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 4)->im + (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 5)->im + (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im - (p+ 0)->re + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im + (p+ 0)->re + (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im - (p+ 1)->re + (p+10)->re;
  (q+10)->im += -(p+ 1)->im + (p+ 1)->re + (p+10)->im;
  (q+11)->re += -(p+ 2)->im - (p+ 2)->re + (p+11)->re;
  (q+11)->im += -(p+ 2)->im + (p+ 2)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_py_mx(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 9)->im - (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re + (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+10)->im - (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re + (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+11)->im - (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 6)->im - (p+ 6)->re;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im - (p+ 6)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+ 7)->im - (p+ 7)->re;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im - (p+ 7)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+ 8)->im - (p+ 8)->re;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im - (p+ 8)->re;
  (q+ 6)->re += -(p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->im + (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->im + (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->im + (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 0)->im + (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im + (p+ 0)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 1)->im + (p+ 1)->re - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im + (p+ 1)->re - (p+10)->im;
  (q+11)->re += -(p+ 2)->im + (p+ 2)->re - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im + (p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im += -(p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re += -(p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im += -(p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re += -(p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im += -(p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im - (p+ 4)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im - (p+ 4)->re;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im - (p+ 5)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im - (p+ 5)->re;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re - (p+ 4)->im;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re + (p+ 4)->re;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re - (p+ 5)->im;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re + (p+ 5)->re;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re;
  (q+ 3)->re +=  (p+ 3)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 8)->im;
  (q+ 9)->re += -(p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 3)->re - (p+ 9)->im;
  (q+10)->re += -(p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 4)->re - (p+10)->im;
  (q+11)->re += -(p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 5)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 9)->im;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+10)->im;
  (q+ 1)->im +=  (p+ 1)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+11)->im;
  (q+ 2)->im +=  (p+ 2)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im;
  (q+ 3)->im +=  (p+ 3)->im + (p+ 6)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im;
  (q+ 4)->im +=  (p+ 4)->im + (p+ 7)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im;
  (q+ 5)->im +=  (p+ 5)->im + (p+ 8)->re;
  (q+ 6)->re +=  (p+ 3)->im - (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 4)->im - (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 5)->im - (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+10)->re;
  (q+10)->im += -(p+ 1)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+11)->re;
  (q+11)->im += -(p+ 2)->re - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_py(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 9)->im;
  (q+ 1)->re +=  (p+ 1)->re + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+10)->im;
  (q+ 2)->re +=  (p+ 2)->re + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+11)->im;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->re;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->re;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->re;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im;
  (q+ 6)->re += -(p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 3)->im - (p+ 6)->im;
  (q+ 7)->re += -(p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 4)->im - (p+ 7)->im;
  (q+ 8)->re += -(p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 5)->im - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->re - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->re - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+10)->im;
  (q+11)->re +=  (p+ 2)->re - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_mt_mz_my_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re += -(p+ 0)->re + (p+ 6)->im - (p+ 9)->im - (p+ 9)->re;
  (q+ 0)->im += -(p+ 0)->im - (p+ 6)->re - (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re += -(p+ 1)->re + (p+ 7)->im - (p+10)->im - (p+10)->re;
  (q+ 1)->im += -(p+ 1)->im - (p+ 7)->re - (p+10)->im + (p+10)->re;
  (q+ 2)->re += -(p+ 2)->re + (p+ 8)->im - (p+11)->im - (p+11)->re;
  (q+ 2)->im += -(p+ 2)->im - (p+ 8)->re - (p+11)->im + (p+11)->re;
  (q+ 3)->re += -(p+ 3)->re - (p+ 6)->im + (p+ 6)->re - (p+ 9)->im;
  (q+ 3)->im += -(p+ 3)->im + (p+ 6)->im + (p+ 6)->re + (p+ 9)->re;
  (q+ 4)->re += -(p+ 4)->re - (p+ 7)->im + (p+ 7)->re - (p+10)->im;
  (q+ 4)->im += -(p+ 4)->im + (p+ 7)->im + (p+ 7)->re + (p+10)->re;
  (q+ 5)->re += -(p+ 5)->re - (p+ 8)->im + (p+ 8)->re - (p+11)->im;
  (q+ 5)->im += -(p+ 5)->im + (p+ 8)->im + (p+ 8)->re + (p+11)->re;
  (q+ 6)->re += -(p+ 0)->im + (p+ 3)->im + (p+ 3)->re + (p+ 6)->re;
  (q+ 6)->im +=  (p+ 0)->re + (p+ 3)->im - (p+ 3)->re + (p+ 6)->im;
  (q+ 7)->re += -(p+ 1)->im + (p+ 4)->im + (p+ 4)->re + (p+ 7)->re;
  (q+ 7)->im +=  (p+ 1)->re + (p+ 4)->im - (p+ 4)->re + (p+ 7)->im;
  (q+ 8)->re += -(p+ 2)->im + (p+ 5)->im + (p+ 5)->re + (p+ 8)->re;
  (q+ 8)->im +=  (p+ 2)->re + (p+ 5)->im - (p+ 5)->re + (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->im + (p+ 9)->re;
  (q+ 9)->im += -(p+ 0)->im - (p+ 0)->re - (p+ 3)->re + (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im - (p+ 1)->re + (p+ 4)->im + (p+10)->re;
  (q+10)->im += -(p+ 1)->im - (p+ 1)->re - (p+ 4)->re + (p+10)->im;
  (q+11)->re +=  (p+ 2)->im - (p+ 2)->re + (p+ 5)->im + (p+11)->re;
  (q+11)->im += -(p+ 2)->im - (p+ 2)->re - (p+ 5)->re + (p+11)->im;

  return;
}

__inline__ void
spinor_gamma_peq_pt_pz_py_px(qpb_complex *q, qpb_complex *p)
{
  (q+ 0)->re +=  (p+ 0)->re - (p+ 6)->im - (p+ 9)->im + (p+ 9)->re;
  (q+ 0)->im +=  (p+ 0)->im + (p+ 6)->re + (p+ 9)->im + (p+ 9)->re;
  (q+ 1)->re +=  (p+ 1)->re - (p+ 7)->im - (p+10)->im + (p+10)->re;
  (q+ 1)->im +=  (p+ 1)->im + (p+ 7)->re + (p+10)->im + (p+10)->re;
  (q+ 2)->re +=  (p+ 2)->re - (p+ 8)->im - (p+11)->im + (p+11)->re;
  (q+ 2)->im +=  (p+ 2)->im + (p+ 8)->re + (p+11)->im + (p+11)->re;
  (q+ 3)->re +=  (p+ 3)->re - (p+ 6)->im - (p+ 6)->re + (p+ 9)->im;
  (q+ 3)->im +=  (p+ 3)->im - (p+ 6)->im + (p+ 6)->re - (p+ 9)->re;
  (q+ 4)->re +=  (p+ 4)->re - (p+ 7)->im - (p+ 7)->re + (p+10)->im;
  (q+ 4)->im +=  (p+ 4)->im - (p+ 7)->im + (p+ 7)->re - (p+10)->re;
  (q+ 5)->re +=  (p+ 5)->re - (p+ 8)->im - (p+ 8)->re + (p+11)->im;
  (q+ 5)->im +=  (p+ 5)->im - (p+ 8)->im + (p+ 8)->re - (p+11)->re;
  (q+ 6)->re +=  (p+ 0)->im + (p+ 3)->im - (p+ 3)->re - (p+ 6)->re;
  (q+ 6)->im += -(p+ 0)->re - (p+ 3)->im - (p+ 3)->re - (p+ 6)->im;
  (q+ 7)->re +=  (p+ 1)->im + (p+ 4)->im - (p+ 4)->re - (p+ 7)->re;
  (q+ 7)->im += -(p+ 1)->re - (p+ 4)->im - (p+ 4)->re - (p+ 7)->im;
  (q+ 8)->re +=  (p+ 2)->im + (p+ 5)->im - (p+ 5)->re - (p+ 8)->re;
  (q+ 8)->im += -(p+ 2)->re - (p+ 5)->im - (p+ 5)->re - (p+ 8)->im;
  (q+ 9)->re +=  (p+ 0)->im + (p+ 0)->re - (p+ 3)->im - (p+ 9)->re;
  (q+ 9)->im +=  (p+ 0)->im - (p+ 0)->re + (p+ 3)->re - (p+ 9)->im;
  (q+10)->re +=  (p+ 1)->im + (p+ 1)->re - (p+ 4)->im - (p+10)->re;
  (q+10)->im +=  (p+ 1)->im - (p+ 1)->re + (p+ 4)->re - (p+10)->im;
  (q+11)->re +=  (p+ 2)->im + (p+ 2)->re - (p+ 5)->im - (p+11)->re;
  (q+11)->im +=  (p+ 2)->im - (p+ 2)->re + (p+ 5)->re - (p+11)->im;

  return;
}

#endif /* NC == 3 */
/* END python generated segment */


#endif /* _QPB_SPINOR_GAMMAS_H */

