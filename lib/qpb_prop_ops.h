#ifndef _QPB_PROP_OPS_H
#define _QPB_PROP_OPS_H 1
#include <qpb_types.h>

/* BEGIN python generated segment */
#if NC == 1
/* multiply prop by \gamma_x from the left */
__inline__ void
prop_gamma_x_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 3][ 0].im;
  out[ 0][ 0].im =  in[ 3][ 0].re;
  out[ 0][ 1].re = -in[ 3][ 1].im;
  out[ 0][ 1].im =  in[ 3][ 1].re;
  out[ 0][ 2].re = -in[ 3][ 2].im;
  out[ 0][ 2].im =  in[ 3][ 2].re;
  out[ 0][ 3].re = -in[ 3][ 3].im;
  out[ 0][ 3].im =  in[ 3][ 3].re;
  out[ 1][ 0].re = -in[ 2][ 0].im;
  out[ 1][ 0].im =  in[ 2][ 0].re;
  out[ 1][ 1].re = -in[ 2][ 1].im;
  out[ 1][ 1].im =  in[ 2][ 1].re;
  out[ 1][ 2].re = -in[ 2][ 2].im;
  out[ 1][ 2].im =  in[ 2][ 2].re;
  out[ 1][ 3].re = -in[ 2][ 3].im;
  out[ 1][ 3].im =  in[ 2][ 3].re;
  out[ 2][ 0].re =  in[ 1][ 0].im;
  out[ 2][ 0].im = -in[ 1][ 0].re;
  out[ 2][ 1].re =  in[ 1][ 1].im;
  out[ 2][ 1].im = -in[ 1][ 1].re;
  out[ 2][ 2].re =  in[ 1][ 2].im;
  out[ 2][ 2].im = -in[ 1][ 2].re;
  out[ 2][ 3].re =  in[ 1][ 3].im;
  out[ 2][ 3].im = -in[ 1][ 3].re;
  out[ 3][ 0].re =  in[ 0][ 0].im;
  out[ 3][ 0].im = -in[ 0][ 0].re;
  out[ 3][ 1].re =  in[ 0][ 1].im;
  out[ 3][ 1].im = -in[ 0][ 1].re;
  out[ 3][ 2].re =  in[ 0][ 2].im;
  out[ 3][ 2].im = -in[ 0][ 2].re;
  out[ 3][ 3].re =  in[ 0][ 3].im;
  out[ 3][ 3].im = -in[ 0][ 3].re;


  return;
}

/* multiply prop by \gamma_y from the left */
__inline__ void
prop_gamma_y_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 3][ 0].re;
  out[ 0][ 0].im =  in[ 3][ 0].im;
  out[ 0][ 1].re =  in[ 3][ 1].re;
  out[ 0][ 1].im =  in[ 3][ 1].im;
  out[ 0][ 2].re =  in[ 3][ 2].re;
  out[ 0][ 2].im =  in[ 3][ 2].im;
  out[ 0][ 3].re =  in[ 3][ 3].re;
  out[ 0][ 3].im =  in[ 3][ 3].im;
  out[ 1][ 0].re = -in[ 2][ 0].re;
  out[ 1][ 0].im = -in[ 2][ 0].im;
  out[ 1][ 1].re = -in[ 2][ 1].re;
  out[ 1][ 1].im = -in[ 2][ 1].im;
  out[ 1][ 2].re = -in[ 2][ 2].re;
  out[ 1][ 2].im = -in[ 2][ 2].im;
  out[ 1][ 3].re = -in[ 2][ 3].re;
  out[ 1][ 3].im = -in[ 2][ 3].im;
  out[ 2][ 0].re = -in[ 1][ 0].re;
  out[ 2][ 0].im = -in[ 1][ 0].im;
  out[ 2][ 1].re = -in[ 1][ 1].re;
  out[ 2][ 1].im = -in[ 1][ 1].im;
  out[ 2][ 2].re = -in[ 1][ 2].re;
  out[ 2][ 2].im = -in[ 1][ 2].im;
  out[ 2][ 3].re = -in[ 1][ 3].re;
  out[ 2][ 3].im = -in[ 1][ 3].im;
  out[ 3][ 0].re =  in[ 0][ 0].re;
  out[ 3][ 0].im =  in[ 0][ 0].im;
  out[ 3][ 1].re =  in[ 0][ 1].re;
  out[ 3][ 1].im =  in[ 0][ 1].im;
  out[ 3][ 2].re =  in[ 0][ 2].re;
  out[ 3][ 2].im =  in[ 0][ 2].im;
  out[ 3][ 3].re =  in[ 0][ 3].re;
  out[ 3][ 3].im =  in[ 0][ 3].im;


  return;
}

/* multiply prop by \gamma_z from the left */
__inline__ void
prop_gamma_z_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 2][ 0].im;
  out[ 0][ 0].im =  in[ 2][ 0].re;
  out[ 0][ 1].re = -in[ 2][ 1].im;
  out[ 0][ 1].im =  in[ 2][ 1].re;
  out[ 0][ 2].re = -in[ 2][ 2].im;
  out[ 0][ 2].im =  in[ 2][ 2].re;
  out[ 0][ 3].re = -in[ 2][ 3].im;
  out[ 0][ 3].im =  in[ 2][ 3].re;
  out[ 1][ 0].re =  in[ 3][ 0].im;
  out[ 1][ 0].im = -in[ 3][ 0].re;
  out[ 1][ 1].re =  in[ 3][ 1].im;
  out[ 1][ 1].im = -in[ 3][ 1].re;
  out[ 1][ 2].re =  in[ 3][ 2].im;
  out[ 1][ 2].im = -in[ 3][ 2].re;
  out[ 1][ 3].re =  in[ 3][ 3].im;
  out[ 1][ 3].im = -in[ 3][ 3].re;
  out[ 2][ 0].re =  in[ 0][ 0].im;
  out[ 2][ 0].im = -in[ 0][ 0].re;
  out[ 2][ 1].re =  in[ 0][ 1].im;
  out[ 2][ 1].im = -in[ 0][ 1].re;
  out[ 2][ 2].re =  in[ 0][ 2].im;
  out[ 2][ 2].im = -in[ 0][ 2].re;
  out[ 2][ 3].re =  in[ 0][ 3].im;
  out[ 2][ 3].im = -in[ 0][ 3].re;
  out[ 3][ 0].re = -in[ 1][ 0].im;
  out[ 3][ 0].im =  in[ 1][ 0].re;
  out[ 3][ 1].re = -in[ 1][ 1].im;
  out[ 3][ 1].im =  in[ 1][ 1].re;
  out[ 3][ 2].re = -in[ 1][ 2].im;
  out[ 3][ 2].im =  in[ 1][ 2].re;
  out[ 3][ 3].re = -in[ 1][ 3].im;
  out[ 3][ 3].im =  in[ 1][ 3].re;


  return;
}

/* multiply prop by \gamma_t from the left */
__inline__ void
prop_gamma_t_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 2].re =  in[ 0][ 2].re;
  out[ 0][ 2].im =  in[ 0][ 2].im;
  out[ 0][ 3].re =  in[ 0][ 3].re;
  out[ 0][ 3].im =  in[ 0][ 3].im;
  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 2].re =  in[ 1][ 2].re;
  out[ 1][ 2].im =  in[ 1][ 2].im;
  out[ 1][ 3].re =  in[ 1][ 3].re;
  out[ 1][ 3].im =  in[ 1][ 3].im;
  out[ 2][ 0].re = -in[ 2][ 0].re;
  out[ 2][ 0].im = -in[ 2][ 0].im;
  out[ 2][ 1].re = -in[ 2][ 1].re;
  out[ 2][ 1].im = -in[ 2][ 1].im;
  out[ 2][ 2].re = -in[ 2][ 2].re;
  out[ 2][ 2].im = -in[ 2][ 2].im;
  out[ 2][ 3].re = -in[ 2][ 3].re;
  out[ 2][ 3].im = -in[ 2][ 3].im;
  out[ 3][ 0].re = -in[ 3][ 0].re;
  out[ 3][ 0].im = -in[ 3][ 0].im;
  out[ 3][ 1].re = -in[ 3][ 1].re;
  out[ 3][ 1].im = -in[ 3][ 1].im;
  out[ 3][ 2].re = -in[ 3][ 2].re;
  out[ 3][ 2].im = -in[ 3][ 2].im;
  out[ 3][ 3].re = -in[ 3][ 3].re;
  out[ 3][ 3].im = -in[ 3][ 3].im;


  return;
}

/* multiply prop by \gamma_5 from the left */
__inline__ void
prop_gamma_5_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 2][ 0].re;
  out[ 0][ 0].im =  in[ 2][ 0].im;
  out[ 0][ 1].re =  in[ 2][ 1].re;
  out[ 0][ 1].im =  in[ 2][ 1].im;
  out[ 0][ 2].re =  in[ 2][ 2].re;
  out[ 0][ 2].im =  in[ 2][ 2].im;
  out[ 0][ 3].re =  in[ 2][ 3].re;
  out[ 0][ 3].im =  in[ 2][ 3].im;
  out[ 1][ 0].re =  in[ 3][ 0].re;
  out[ 1][ 0].im =  in[ 3][ 0].im;
  out[ 1][ 1].re =  in[ 3][ 1].re;
  out[ 1][ 1].im =  in[ 3][ 1].im;
  out[ 1][ 2].re =  in[ 3][ 2].re;
  out[ 1][ 2].im =  in[ 3][ 2].im;
  out[ 1][ 3].re =  in[ 3][ 3].re;
  out[ 1][ 3].im =  in[ 3][ 3].im;
  out[ 2][ 0].re =  in[ 0][ 0].re;
  out[ 2][ 0].im =  in[ 0][ 0].im;
  out[ 2][ 1].re =  in[ 0][ 1].re;
  out[ 2][ 1].im =  in[ 0][ 1].im;
  out[ 2][ 2].re =  in[ 0][ 2].re;
  out[ 2][ 2].im =  in[ 0][ 2].im;
  out[ 2][ 3].re =  in[ 0][ 3].re;
  out[ 2][ 3].im =  in[ 0][ 3].im;
  out[ 3][ 0].re =  in[ 1][ 0].re;
  out[ 3][ 0].im =  in[ 1][ 0].im;
  out[ 3][ 1].re =  in[ 1][ 1].re;
  out[ 3][ 1].im =  in[ 1][ 1].im;
  out[ 3][ 2].re =  in[ 1][ 2].re;
  out[ 3][ 2].im =  in[ 1][ 2].im;
  out[ 3][ 3].re =  in[ 1][ 3].re;
  out[ 3][ 3].im =  in[ 1][ 3].im;


  return;
}

/* multiply prop by C from the left */
__inline__ void
prop_C_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 3][ 0].re;
  out[ 0][ 0].im =  in[ 3][ 0].im;
  out[ 0][ 1].re =  in[ 3][ 1].re;
  out[ 0][ 1].im =  in[ 3][ 1].im;
  out[ 0][ 2].re =  in[ 3][ 2].re;
  out[ 0][ 2].im =  in[ 3][ 2].im;
  out[ 0][ 3].re =  in[ 3][ 3].re;
  out[ 0][ 3].im =  in[ 3][ 3].im;
  out[ 1][ 0].re = -in[ 2][ 0].re;
  out[ 1][ 0].im = -in[ 2][ 0].im;
  out[ 1][ 1].re = -in[ 2][ 1].re;
  out[ 1][ 1].im = -in[ 2][ 1].im;
  out[ 1][ 2].re = -in[ 2][ 2].re;
  out[ 1][ 2].im = -in[ 2][ 2].im;
  out[ 1][ 3].re = -in[ 2][ 3].re;
  out[ 1][ 3].im = -in[ 2][ 3].im;
  out[ 2][ 0].re =  in[ 1][ 0].re;
  out[ 2][ 0].im =  in[ 1][ 0].im;
  out[ 2][ 1].re =  in[ 1][ 1].re;
  out[ 2][ 1].im =  in[ 1][ 1].im;
  out[ 2][ 2].re =  in[ 1][ 2].re;
  out[ 2][ 2].im =  in[ 1][ 2].im;
  out[ 2][ 3].re =  in[ 1][ 3].re;
  out[ 2][ 3].im =  in[ 1][ 3].im;
  out[ 3][ 0].re = -in[ 0][ 0].re;
  out[ 3][ 0].im = -in[ 0][ 0].im;
  out[ 3][ 1].re = -in[ 0][ 1].re;
  out[ 3][ 1].im = -in[ 0][ 1].im;
  out[ 3][ 2].re = -in[ 0][ 2].re;
  out[ 3][ 2].im = -in[ 0][ 2].im;
  out[ 3][ 3].re = -in[ 0][ 3].re;
  out[ 3][ 3].im = -in[ 0][ 3].im;


  return;
}

/* multiply prop by C\gamma_5 from the left */
__inline__ void
prop_Cg5_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 1][ 0].re;
  out[ 0][ 0].im =  in[ 1][ 0].im;
  out[ 0][ 1].re =  in[ 1][ 1].re;
  out[ 0][ 1].im =  in[ 1][ 1].im;
  out[ 0][ 2].re =  in[ 1][ 2].re;
  out[ 0][ 2].im =  in[ 1][ 2].im;
  out[ 0][ 3].re =  in[ 1][ 3].re;
  out[ 0][ 3].im =  in[ 1][ 3].im;
  out[ 1][ 0].re = -in[ 0][ 0].re;
  out[ 1][ 0].im = -in[ 0][ 0].im;
  out[ 1][ 1].re = -in[ 0][ 1].re;
  out[ 1][ 1].im = -in[ 0][ 1].im;
  out[ 1][ 2].re = -in[ 0][ 2].re;
  out[ 1][ 2].im = -in[ 0][ 2].im;
  out[ 1][ 3].re = -in[ 0][ 3].re;
  out[ 1][ 3].im = -in[ 0][ 3].im;
  out[ 2][ 0].re =  in[ 3][ 0].re;
  out[ 2][ 0].im =  in[ 3][ 0].im;
  out[ 2][ 1].re =  in[ 3][ 1].re;
  out[ 2][ 1].im =  in[ 3][ 1].im;
  out[ 2][ 2].re =  in[ 3][ 2].re;
  out[ 2][ 2].im =  in[ 3][ 2].im;
  out[ 2][ 3].re =  in[ 3][ 3].re;
  out[ 2][ 3].im =  in[ 3][ 3].im;
  out[ 3][ 0].re = -in[ 2][ 0].re;
  out[ 3][ 0].im = -in[ 2][ 0].im;
  out[ 3][ 1].re = -in[ 2][ 1].re;
  out[ 3][ 1].im = -in[ 2][ 1].im;
  out[ 3][ 2].re = -in[ 2][ 2].re;
  out[ 3][ 2].im = -in[ 2][ 2].im;
  out[ 3][ 3].re = -in[ 2][ 3].re;
  out[ 3][ 3].im = -in[ 2][ 3].im;


  return;
}

/* multiply prop by C\gamma_x from the left */
__inline__ void
prop_Cgx_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].im;
  out[ 0][ 0].im = -in[ 0][ 0].re;
  out[ 0][ 1].re =  in[ 0][ 1].im;
  out[ 0][ 1].im = -in[ 0][ 1].re;
  out[ 0][ 2].re =  in[ 0][ 2].im;
  out[ 0][ 2].im = -in[ 0][ 2].re;
  out[ 0][ 3].re =  in[ 0][ 3].im;
  out[ 0][ 3].im = -in[ 0][ 3].re;
  out[ 1][ 0].re = -in[ 1][ 0].im;
  out[ 1][ 0].im =  in[ 1][ 0].re;
  out[ 1][ 1].re = -in[ 1][ 1].im;
  out[ 1][ 1].im =  in[ 1][ 1].re;
  out[ 1][ 2].re = -in[ 1][ 2].im;
  out[ 1][ 2].im =  in[ 1][ 2].re;
  out[ 1][ 3].re = -in[ 1][ 3].im;
  out[ 1][ 3].im =  in[ 1][ 3].re;
  out[ 2][ 0].re = -in[ 2][ 0].im;
  out[ 2][ 0].im =  in[ 2][ 0].re;
  out[ 2][ 1].re = -in[ 2][ 1].im;
  out[ 2][ 1].im =  in[ 2][ 1].re;
  out[ 2][ 2].re = -in[ 2][ 2].im;
  out[ 2][ 2].im =  in[ 2][ 2].re;
  out[ 2][ 3].re = -in[ 2][ 3].im;
  out[ 2][ 3].im =  in[ 2][ 3].re;
  out[ 3][ 0].re =  in[ 3][ 0].im;
  out[ 3][ 0].im = -in[ 3][ 0].re;
  out[ 3][ 1].re =  in[ 3][ 1].im;
  out[ 3][ 1].im = -in[ 3][ 1].re;
  out[ 3][ 2].re =  in[ 3][ 2].im;
  out[ 3][ 2].im = -in[ 3][ 2].re;
  out[ 3][ 3].re =  in[ 3][ 3].im;
  out[ 3][ 3].im = -in[ 3][ 3].re;


  return;
}

/* multiply prop by C\gamma_y from the left */
__inline__ void
prop_Cgy_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 2].re =  in[ 0][ 2].re;
  out[ 0][ 2].im =  in[ 0][ 2].im;
  out[ 0][ 3].re =  in[ 0][ 3].re;
  out[ 0][ 3].im =  in[ 0][ 3].im;
  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 2].re =  in[ 1][ 2].re;
  out[ 1][ 2].im =  in[ 1][ 2].im;
  out[ 1][ 3].re =  in[ 1][ 3].re;
  out[ 1][ 3].im =  in[ 1][ 3].im;
  out[ 2][ 0].re = -in[ 2][ 0].re;
  out[ 2][ 0].im = -in[ 2][ 0].im;
  out[ 2][ 1].re = -in[ 2][ 1].re;
  out[ 2][ 1].im = -in[ 2][ 1].im;
  out[ 2][ 2].re = -in[ 2][ 2].re;
  out[ 2][ 2].im = -in[ 2][ 2].im;
  out[ 2][ 3].re = -in[ 2][ 3].re;
  out[ 2][ 3].im = -in[ 2][ 3].im;
  out[ 3][ 0].re = -in[ 3][ 0].re;
  out[ 3][ 0].im = -in[ 3][ 0].im;
  out[ 3][ 1].re = -in[ 3][ 1].re;
  out[ 3][ 1].im = -in[ 3][ 1].im;
  out[ 3][ 2].re = -in[ 3][ 2].re;
  out[ 3][ 2].im = -in[ 3][ 2].im;
  out[ 3][ 3].re = -in[ 3][ 3].re;
  out[ 3][ 3].im = -in[ 3][ 3].im;


  return;
}

/* multiply prop by C\gamma_z from the left */
__inline__ void
prop_Cgz_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 1][ 0].im;
  out[ 0][ 0].im =  in[ 1][ 0].re;
  out[ 0][ 1].re = -in[ 1][ 1].im;
  out[ 0][ 1].im =  in[ 1][ 1].re;
  out[ 0][ 2].re = -in[ 1][ 2].im;
  out[ 0][ 2].im =  in[ 1][ 2].re;
  out[ 0][ 3].re = -in[ 1][ 3].im;
  out[ 0][ 3].im =  in[ 1][ 3].re;
  out[ 1][ 0].re = -in[ 0][ 0].im;
  out[ 1][ 0].im =  in[ 0][ 0].re;
  out[ 1][ 1].re = -in[ 0][ 1].im;
  out[ 1][ 1].im =  in[ 0][ 1].re;
  out[ 1][ 2].re = -in[ 0][ 2].im;
  out[ 1][ 2].im =  in[ 0][ 2].re;
  out[ 1][ 3].re = -in[ 0][ 3].im;
  out[ 1][ 3].im =  in[ 0][ 3].re;
  out[ 2][ 0].re =  in[ 3][ 0].im;
  out[ 2][ 0].im = -in[ 3][ 0].re;
  out[ 2][ 1].re =  in[ 3][ 1].im;
  out[ 2][ 1].im = -in[ 3][ 1].re;
  out[ 2][ 2].re =  in[ 3][ 2].im;
  out[ 2][ 2].im = -in[ 3][ 2].re;
  out[ 2][ 3].re =  in[ 3][ 3].im;
  out[ 2][ 3].im = -in[ 3][ 3].re;
  out[ 3][ 0].re =  in[ 2][ 0].im;
  out[ 3][ 0].im = -in[ 2][ 0].re;
  out[ 3][ 1].re =  in[ 2][ 1].im;
  out[ 3][ 1].im = -in[ 2][ 1].re;
  out[ 3][ 2].re =  in[ 2][ 2].im;
  out[ 3][ 2].im = -in[ 2][ 2].re;
  out[ 3][ 3].re =  in[ 2][ 3].im;
  out[ 3][ 3].im = -in[ 2][ 3].re;


  return;
}

/* multiply prop by C\gamma_t from the left */
__inline__ void
prop_Cgt_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 3][ 0].re;
  out[ 0][ 0].im = -in[ 3][ 0].im;
  out[ 0][ 1].re = -in[ 3][ 1].re;
  out[ 0][ 1].im = -in[ 3][ 1].im;
  out[ 0][ 2].re = -in[ 3][ 2].re;
  out[ 0][ 2].im = -in[ 3][ 2].im;
  out[ 0][ 3].re = -in[ 3][ 3].re;
  out[ 0][ 3].im = -in[ 3][ 3].im;
  out[ 1][ 0].re =  in[ 2][ 0].re;
  out[ 1][ 0].im =  in[ 2][ 0].im;
  out[ 1][ 1].re =  in[ 2][ 1].re;
  out[ 1][ 1].im =  in[ 2][ 1].im;
  out[ 1][ 2].re =  in[ 2][ 2].re;
  out[ 1][ 2].im =  in[ 2][ 2].im;
  out[ 1][ 3].re =  in[ 2][ 3].re;
  out[ 1][ 3].im =  in[ 2][ 3].im;
  out[ 2][ 0].re =  in[ 1][ 0].re;
  out[ 2][ 0].im =  in[ 1][ 0].im;
  out[ 2][ 1].re =  in[ 1][ 1].re;
  out[ 2][ 1].im =  in[ 1][ 1].im;
  out[ 2][ 2].re =  in[ 1][ 2].re;
  out[ 2][ 2].im =  in[ 1][ 2].im;
  out[ 2][ 3].re =  in[ 1][ 3].re;
  out[ 2][ 3].im =  in[ 1][ 3].im;
  out[ 3][ 0].re = -in[ 0][ 0].re;
  out[ 3][ 0].im = -in[ 0][ 0].im;
  out[ 3][ 1].re = -in[ 0][ 1].re;
  out[ 3][ 1].im = -in[ 0][ 1].im;
  out[ 3][ 2].re = -in[ 0][ 2].re;
  out[ 3][ 2].im = -in[ 0][ 2].im;
  out[ 3][ 3].re = -in[ 0][ 3].re;
  out[ 3][ 3].im = -in[ 0][ 3].im;


  return;
}

/* multiply prop by ar{\gamma_x} from the right */
__inline__ void
prop_G_gamma_x(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 3].im;
  out[ 0][ 0].im =  in[ 0][ 3].re;
  out[ 0][ 1].re = -in[ 0][ 2].im;
  out[ 0][ 1].im =  in[ 0][ 2].re;
  out[ 0][ 2].re =  in[ 0][ 1].im;
  out[ 0][ 2].im = -in[ 0][ 1].re;
  out[ 0][ 3].re =  in[ 0][ 0].im;
  out[ 0][ 3].im = -in[ 0][ 0].re;
  out[ 1][ 0].re = -in[ 1][ 3].im;
  out[ 1][ 0].im =  in[ 1][ 3].re;
  out[ 1][ 1].re = -in[ 1][ 2].im;
  out[ 1][ 1].im =  in[ 1][ 2].re;
  out[ 1][ 2].re =  in[ 1][ 1].im;
  out[ 1][ 2].im = -in[ 1][ 1].re;
  out[ 1][ 3].re =  in[ 1][ 0].im;
  out[ 1][ 3].im = -in[ 1][ 0].re;
  out[ 2][ 0].re = -in[ 2][ 3].im;
  out[ 2][ 0].im =  in[ 2][ 3].re;
  out[ 2][ 1].re = -in[ 2][ 2].im;
  out[ 2][ 1].im =  in[ 2][ 2].re;
  out[ 2][ 2].re =  in[ 2][ 1].im;
  out[ 2][ 2].im = -in[ 2][ 1].re;
  out[ 2][ 3].re =  in[ 2][ 0].im;
  out[ 2][ 3].im = -in[ 2][ 0].re;
  out[ 3][ 0].re = -in[ 3][ 3].im;
  out[ 3][ 0].im =  in[ 3][ 3].re;
  out[ 3][ 1].re = -in[ 3][ 2].im;
  out[ 3][ 1].im =  in[ 3][ 2].re;
  out[ 3][ 2].re =  in[ 3][ 1].im;
  out[ 3][ 2].im = -in[ 3][ 1].re;
  out[ 3][ 3].re =  in[ 3][ 0].im;
  out[ 3][ 3].im = -in[ 3][ 0].re;


  return;
}

/* multiply prop by ar{\gamma_y} from the right */
__inline__ void
prop_G_gamma_y(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 3].re;
  out[ 0][ 0].im = -in[ 0][ 3].im;
  out[ 0][ 1].re =  in[ 0][ 2].re;
  out[ 0][ 1].im =  in[ 0][ 2].im;
  out[ 0][ 2].re =  in[ 0][ 1].re;
  out[ 0][ 2].im =  in[ 0][ 1].im;
  out[ 0][ 3].re = -in[ 0][ 0].re;
  out[ 0][ 3].im = -in[ 0][ 0].im;
  out[ 1][ 0].re = -in[ 1][ 3].re;
  out[ 1][ 0].im = -in[ 1][ 3].im;
  out[ 1][ 1].re =  in[ 1][ 2].re;
  out[ 1][ 1].im =  in[ 1][ 2].im;
  out[ 1][ 2].re =  in[ 1][ 1].re;
  out[ 1][ 2].im =  in[ 1][ 1].im;
  out[ 1][ 3].re = -in[ 1][ 0].re;
  out[ 1][ 3].im = -in[ 1][ 0].im;
  out[ 2][ 0].re = -in[ 2][ 3].re;
  out[ 2][ 0].im = -in[ 2][ 3].im;
  out[ 2][ 1].re =  in[ 2][ 2].re;
  out[ 2][ 1].im =  in[ 2][ 2].im;
  out[ 2][ 2].re =  in[ 2][ 1].re;
  out[ 2][ 2].im =  in[ 2][ 1].im;
  out[ 2][ 3].re = -in[ 2][ 0].re;
  out[ 2][ 3].im = -in[ 2][ 0].im;
  out[ 3][ 0].re = -in[ 3][ 3].re;
  out[ 3][ 0].im = -in[ 3][ 3].im;
  out[ 3][ 1].re =  in[ 3][ 2].re;
  out[ 3][ 1].im =  in[ 3][ 2].im;
  out[ 3][ 2].re =  in[ 3][ 1].re;
  out[ 3][ 2].im =  in[ 3][ 1].im;
  out[ 3][ 3].re = -in[ 3][ 0].re;
  out[ 3][ 3].im = -in[ 3][ 0].im;


  return;
}

/* multiply prop by ar{\gamma_z} from the right */
__inline__ void
prop_G_gamma_z(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 2].im;
  out[ 0][ 0].im =  in[ 0][ 2].re;
  out[ 0][ 1].re =  in[ 0][ 3].im;
  out[ 0][ 1].im = -in[ 0][ 3].re;
  out[ 0][ 2].re =  in[ 0][ 0].im;
  out[ 0][ 2].im = -in[ 0][ 0].re;
  out[ 0][ 3].re = -in[ 0][ 1].im;
  out[ 0][ 3].im =  in[ 0][ 1].re;
  out[ 1][ 0].re = -in[ 1][ 2].im;
  out[ 1][ 0].im =  in[ 1][ 2].re;
  out[ 1][ 1].re =  in[ 1][ 3].im;
  out[ 1][ 1].im = -in[ 1][ 3].re;
  out[ 1][ 2].re =  in[ 1][ 0].im;
  out[ 1][ 2].im = -in[ 1][ 0].re;
  out[ 1][ 3].re = -in[ 1][ 1].im;
  out[ 1][ 3].im =  in[ 1][ 1].re;
  out[ 2][ 0].re = -in[ 2][ 2].im;
  out[ 2][ 0].im =  in[ 2][ 2].re;
  out[ 2][ 1].re =  in[ 2][ 3].im;
  out[ 2][ 1].im = -in[ 2][ 3].re;
  out[ 2][ 2].re =  in[ 2][ 0].im;
  out[ 2][ 2].im = -in[ 2][ 0].re;
  out[ 2][ 3].re = -in[ 2][ 1].im;
  out[ 2][ 3].im =  in[ 2][ 1].re;
  out[ 3][ 0].re = -in[ 3][ 2].im;
  out[ 3][ 0].im =  in[ 3][ 2].re;
  out[ 3][ 1].re =  in[ 3][ 3].im;
  out[ 3][ 1].im = -in[ 3][ 3].re;
  out[ 3][ 2].re =  in[ 3][ 0].im;
  out[ 3][ 2].im = -in[ 3][ 0].re;
  out[ 3][ 3].re = -in[ 3][ 1].im;
  out[ 3][ 3].im =  in[ 3][ 1].re;


  return;
}

/* multiply prop by ar{\gamma_t} from the right */
__inline__ void
prop_G_gamma_t(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 2].re = -in[ 0][ 2].re;
  out[ 0][ 2].im = -in[ 0][ 2].im;
  out[ 0][ 3].re = -in[ 0][ 3].re;
  out[ 0][ 3].im = -in[ 0][ 3].im;
  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 2].re = -in[ 1][ 2].re;
  out[ 1][ 2].im = -in[ 1][ 2].im;
  out[ 1][ 3].re = -in[ 1][ 3].re;
  out[ 1][ 3].im = -in[ 1][ 3].im;
  out[ 2][ 0].re =  in[ 2][ 0].re;
  out[ 2][ 0].im =  in[ 2][ 0].im;
  out[ 2][ 1].re =  in[ 2][ 1].re;
  out[ 2][ 1].im =  in[ 2][ 1].im;
  out[ 2][ 2].re = -in[ 2][ 2].re;
  out[ 2][ 2].im = -in[ 2][ 2].im;
  out[ 2][ 3].re = -in[ 2][ 3].re;
  out[ 2][ 3].im = -in[ 2][ 3].im;
  out[ 3][ 0].re =  in[ 3][ 0].re;
  out[ 3][ 0].im =  in[ 3][ 0].im;
  out[ 3][ 1].re =  in[ 3][ 1].re;
  out[ 3][ 1].im =  in[ 3][ 1].im;
  out[ 3][ 2].re = -in[ 3][ 2].re;
  out[ 3][ 2].im = -in[ 3][ 2].im;
  out[ 3][ 3].re = -in[ 3][ 3].re;
  out[ 3][ 3].im = -in[ 3][ 3].im;


  return;
}

/* multiply prop by ar{\gamma_5} from the right */
__inline__ void
prop_G_gamma_5(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 2].re;
  out[ 0][ 0].im = -in[ 0][ 2].im;
  out[ 0][ 1].re = -in[ 0][ 3].re;
  out[ 0][ 1].im = -in[ 0][ 3].im;
  out[ 0][ 2].re = -in[ 0][ 0].re;
  out[ 0][ 2].im = -in[ 0][ 0].im;
  out[ 0][ 3].re = -in[ 0][ 1].re;
  out[ 0][ 3].im = -in[ 0][ 1].im;
  out[ 1][ 0].re = -in[ 1][ 2].re;
  out[ 1][ 0].im = -in[ 1][ 2].im;
  out[ 1][ 1].re = -in[ 1][ 3].re;
  out[ 1][ 1].im = -in[ 1][ 3].im;
  out[ 1][ 2].re = -in[ 1][ 0].re;
  out[ 1][ 2].im = -in[ 1][ 0].im;
  out[ 1][ 3].re = -in[ 1][ 1].re;
  out[ 1][ 3].im = -in[ 1][ 1].im;
  out[ 2][ 0].re = -in[ 2][ 2].re;
  out[ 2][ 0].im = -in[ 2][ 2].im;
  out[ 2][ 1].re = -in[ 2][ 3].re;
  out[ 2][ 1].im = -in[ 2][ 3].im;
  out[ 2][ 2].re = -in[ 2][ 0].re;
  out[ 2][ 2].im = -in[ 2][ 0].im;
  out[ 2][ 3].re = -in[ 2][ 1].re;
  out[ 2][ 3].im = -in[ 2][ 1].im;
  out[ 3][ 0].re = -in[ 3][ 2].re;
  out[ 3][ 0].im = -in[ 3][ 2].im;
  out[ 3][ 1].re = -in[ 3][ 3].re;
  out[ 3][ 1].im = -in[ 3][ 3].im;
  out[ 3][ 2].re = -in[ 3][ 0].re;
  out[ 3][ 2].im = -in[ 3][ 0].im;
  out[ 3][ 3].re = -in[ 3][ 1].re;
  out[ 3][ 3].im = -in[ 3][ 1].im;


  return;
}

/* multiply prop by ar{C} from the right */
__inline__ void
prop_G_C(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 3].re;
  out[ 0][ 0].im = -in[ 0][ 3].im;
  out[ 0][ 1].re =  in[ 0][ 2].re;
  out[ 0][ 1].im =  in[ 0][ 2].im;
  out[ 0][ 2].re = -in[ 0][ 1].re;
  out[ 0][ 2].im = -in[ 0][ 1].im;
  out[ 0][ 3].re =  in[ 0][ 0].re;
  out[ 0][ 3].im =  in[ 0][ 0].im;
  out[ 1][ 0].re = -in[ 1][ 3].re;
  out[ 1][ 0].im = -in[ 1][ 3].im;
  out[ 1][ 1].re =  in[ 1][ 2].re;
  out[ 1][ 1].im =  in[ 1][ 2].im;
  out[ 1][ 2].re = -in[ 1][ 1].re;
  out[ 1][ 2].im = -in[ 1][ 1].im;
  out[ 1][ 3].re =  in[ 1][ 0].re;
  out[ 1][ 3].im =  in[ 1][ 0].im;
  out[ 2][ 0].re = -in[ 2][ 3].re;
  out[ 2][ 0].im = -in[ 2][ 3].im;
  out[ 2][ 1].re =  in[ 2][ 2].re;
  out[ 2][ 1].im =  in[ 2][ 2].im;
  out[ 2][ 2].re = -in[ 2][ 1].re;
  out[ 2][ 2].im = -in[ 2][ 1].im;
  out[ 2][ 3].re =  in[ 2][ 0].re;
  out[ 2][ 3].im =  in[ 2][ 0].im;
  out[ 3][ 0].re = -in[ 3][ 3].re;
  out[ 3][ 0].im = -in[ 3][ 3].im;
  out[ 3][ 1].re =  in[ 3][ 2].re;
  out[ 3][ 1].im =  in[ 3][ 2].im;
  out[ 3][ 2].re = -in[ 3][ 1].re;
  out[ 3][ 2].im = -in[ 3][ 1].im;
  out[ 3][ 3].re =  in[ 3][ 0].re;
  out[ 3][ 3].im =  in[ 3][ 0].im;


  return;
}

/* multiply prop by ar{C\gamma_5} from the right */
__inline__ void
prop_G_Cg5(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 1].re;
  out[ 0][ 0].im =  in[ 0][ 1].im;
  out[ 0][ 1].re = -in[ 0][ 0].re;
  out[ 0][ 1].im = -in[ 0][ 0].im;
  out[ 0][ 2].re =  in[ 0][ 3].re;
  out[ 0][ 2].im =  in[ 0][ 3].im;
  out[ 0][ 3].re = -in[ 0][ 2].re;
  out[ 0][ 3].im = -in[ 0][ 2].im;
  out[ 1][ 0].re =  in[ 1][ 1].re;
  out[ 1][ 0].im =  in[ 1][ 1].im;
  out[ 1][ 1].re = -in[ 1][ 0].re;
  out[ 1][ 1].im = -in[ 1][ 0].im;
  out[ 1][ 2].re =  in[ 1][ 3].re;
  out[ 1][ 2].im =  in[ 1][ 3].im;
  out[ 1][ 3].re = -in[ 1][ 2].re;
  out[ 1][ 3].im = -in[ 1][ 2].im;
  out[ 2][ 0].re =  in[ 2][ 1].re;
  out[ 2][ 0].im =  in[ 2][ 1].im;
  out[ 2][ 1].re = -in[ 2][ 0].re;
  out[ 2][ 1].im = -in[ 2][ 0].im;
  out[ 2][ 2].re =  in[ 2][ 3].re;
  out[ 2][ 2].im =  in[ 2][ 3].im;
  out[ 2][ 3].re = -in[ 2][ 2].re;
  out[ 2][ 3].im = -in[ 2][ 2].im;
  out[ 3][ 0].re =  in[ 3][ 1].re;
  out[ 3][ 0].im =  in[ 3][ 1].im;
  out[ 3][ 1].re = -in[ 3][ 0].re;
  out[ 3][ 1].im = -in[ 3][ 0].im;
  out[ 3][ 2].re =  in[ 3][ 3].re;
  out[ 3][ 2].im =  in[ 3][ 3].im;
  out[ 3][ 3].re = -in[ 3][ 2].re;
  out[ 3][ 3].im = -in[ 3][ 2].im;


  return;
}

/* multiply prop by ar{C\gamma_x} from the right */
__inline__ void
prop_G_Cgx(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 0].im;
  out[ 0][ 0].im =  in[ 0][ 0].re;
  out[ 0][ 1].re =  in[ 0][ 1].im;
  out[ 0][ 1].im = -in[ 0][ 1].re;
  out[ 0][ 2].re =  in[ 0][ 2].im;
  out[ 0][ 2].im = -in[ 0][ 2].re;
  out[ 0][ 3].re = -in[ 0][ 3].im;
  out[ 0][ 3].im =  in[ 0][ 3].re;
  out[ 1][ 0].re = -in[ 1][ 0].im;
  out[ 1][ 0].im =  in[ 1][ 0].re;
  out[ 1][ 1].re =  in[ 1][ 1].im;
  out[ 1][ 1].im = -in[ 1][ 1].re;
  out[ 1][ 2].re =  in[ 1][ 2].im;
  out[ 1][ 2].im = -in[ 1][ 2].re;
  out[ 1][ 3].re = -in[ 1][ 3].im;
  out[ 1][ 3].im =  in[ 1][ 3].re;
  out[ 2][ 0].re = -in[ 2][ 0].im;
  out[ 2][ 0].im =  in[ 2][ 0].re;
  out[ 2][ 1].re =  in[ 2][ 1].im;
  out[ 2][ 1].im = -in[ 2][ 1].re;
  out[ 2][ 2].re =  in[ 2][ 2].im;
  out[ 2][ 2].im = -in[ 2][ 2].re;
  out[ 2][ 3].re = -in[ 2][ 3].im;
  out[ 2][ 3].im =  in[ 2][ 3].re;
  out[ 3][ 0].re = -in[ 3][ 0].im;
  out[ 3][ 0].im =  in[ 3][ 0].re;
  out[ 3][ 1].re =  in[ 3][ 1].im;
  out[ 3][ 1].im = -in[ 3][ 1].re;
  out[ 3][ 2].re =  in[ 3][ 2].im;
  out[ 3][ 2].im = -in[ 3][ 2].re;
  out[ 3][ 3].re = -in[ 3][ 3].im;
  out[ 3][ 3].im =  in[ 3][ 3].re;


  return;
}

/* multiply prop by ar{C\gamma_y} from the right */
__inline__ void
prop_G_Cgy(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 2].re = -in[ 0][ 2].re;
  out[ 0][ 2].im = -in[ 0][ 2].im;
  out[ 0][ 3].re = -in[ 0][ 3].re;
  out[ 0][ 3].im = -in[ 0][ 3].im;
  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 2].re = -in[ 1][ 2].re;
  out[ 1][ 2].im = -in[ 1][ 2].im;
  out[ 1][ 3].re = -in[ 1][ 3].re;
  out[ 1][ 3].im = -in[ 1][ 3].im;
  out[ 2][ 0].re =  in[ 2][ 0].re;
  out[ 2][ 0].im =  in[ 2][ 0].im;
  out[ 2][ 1].re =  in[ 2][ 1].re;
  out[ 2][ 1].im =  in[ 2][ 1].im;
  out[ 2][ 2].re = -in[ 2][ 2].re;
  out[ 2][ 2].im = -in[ 2][ 2].im;
  out[ 2][ 3].re = -in[ 2][ 3].re;
  out[ 2][ 3].im = -in[ 2][ 3].im;
  out[ 3][ 0].re =  in[ 3][ 0].re;
  out[ 3][ 0].im =  in[ 3][ 0].im;
  out[ 3][ 1].re =  in[ 3][ 1].re;
  out[ 3][ 1].im =  in[ 3][ 1].im;
  out[ 3][ 2].re = -in[ 3][ 2].re;
  out[ 3][ 2].im = -in[ 3][ 2].im;
  out[ 3][ 3].re = -in[ 3][ 3].re;
  out[ 3][ 3].im = -in[ 3][ 3].im;


  return;
}

/* multiply prop by ar{C\gamma_z} from the right */
__inline__ void
prop_G_Cgz(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 1].im;
  out[ 0][ 0].im = -in[ 0][ 1].re;
  out[ 0][ 1].re =  in[ 0][ 0].im;
  out[ 0][ 1].im = -in[ 0][ 0].re;
  out[ 0][ 2].re = -in[ 0][ 3].im;
  out[ 0][ 2].im =  in[ 0][ 3].re;
  out[ 0][ 3].re = -in[ 0][ 2].im;
  out[ 0][ 3].im =  in[ 0][ 2].re;
  out[ 1][ 0].re =  in[ 1][ 1].im;
  out[ 1][ 0].im = -in[ 1][ 1].re;
  out[ 1][ 1].re =  in[ 1][ 0].im;
  out[ 1][ 1].im = -in[ 1][ 0].re;
  out[ 1][ 2].re = -in[ 1][ 3].im;
  out[ 1][ 2].im =  in[ 1][ 3].re;
  out[ 1][ 3].re = -in[ 1][ 2].im;
  out[ 1][ 3].im =  in[ 1][ 2].re;
  out[ 2][ 0].re =  in[ 2][ 1].im;
  out[ 2][ 0].im = -in[ 2][ 1].re;
  out[ 2][ 1].re =  in[ 2][ 0].im;
  out[ 2][ 1].im = -in[ 2][ 0].re;
  out[ 2][ 2].re = -in[ 2][ 3].im;
  out[ 2][ 2].im =  in[ 2][ 3].re;
  out[ 2][ 3].re = -in[ 2][ 2].im;
  out[ 2][ 3].im =  in[ 2][ 2].re;
  out[ 3][ 0].re =  in[ 3][ 1].im;
  out[ 3][ 0].im = -in[ 3][ 1].re;
  out[ 3][ 1].re =  in[ 3][ 0].im;
  out[ 3][ 1].im = -in[ 3][ 0].re;
  out[ 3][ 2].re = -in[ 3][ 3].im;
  out[ 3][ 2].im =  in[ 3][ 3].re;
  out[ 3][ 3].re = -in[ 3][ 2].im;
  out[ 3][ 3].im =  in[ 3][ 2].re;


  return;
}

/* multiply prop by ar{C\gamma_t} from the right */
__inline__ void
prop_G_Cgt(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 3].re;
  out[ 0][ 0].im =  in[ 0][ 3].im;
  out[ 0][ 1].re = -in[ 0][ 2].re;
  out[ 0][ 1].im = -in[ 0][ 2].im;
  out[ 0][ 2].re = -in[ 0][ 1].re;
  out[ 0][ 2].im = -in[ 0][ 1].im;
  out[ 0][ 3].re =  in[ 0][ 0].re;
  out[ 0][ 3].im =  in[ 0][ 0].im;
  out[ 1][ 0].re =  in[ 1][ 3].re;
  out[ 1][ 0].im =  in[ 1][ 3].im;
  out[ 1][ 1].re = -in[ 1][ 2].re;
  out[ 1][ 1].im = -in[ 1][ 2].im;
  out[ 1][ 2].re = -in[ 1][ 1].re;
  out[ 1][ 2].im = -in[ 1][ 1].im;
  out[ 1][ 3].re =  in[ 1][ 0].re;
  out[ 1][ 3].im =  in[ 1][ 0].im;
  out[ 2][ 0].re =  in[ 2][ 3].re;
  out[ 2][ 0].im =  in[ 2][ 3].im;
  out[ 2][ 1].re = -in[ 2][ 2].re;
  out[ 2][ 1].im = -in[ 2][ 2].im;
  out[ 2][ 2].re = -in[ 2][ 1].re;
  out[ 2][ 2].im = -in[ 2][ 1].im;
  out[ 2][ 3].re =  in[ 2][ 0].re;
  out[ 2][ 3].im =  in[ 2][ 0].im;
  out[ 3][ 0].re =  in[ 3][ 3].re;
  out[ 3][ 0].im =  in[ 3][ 3].im;
  out[ 3][ 1].re = -in[ 3][ 2].re;
  out[ 3][ 1].im = -in[ 3][ 2].im;
  out[ 3][ 2].re = -in[ 3][ 1].re;
  out[ 3][ 2].im = -in[ 3][ 1].im;
  out[ 3][ 3].re =  in[ 3][ 0].re;
  out[ 3][ 3].im =  in[ 3][ 0].im;


  return;
}

/* multiply prop by \Gamma^+ = (1+\gamma_t)/4 from the left */
__inline__ void
prop_ProjTp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by \Gamma^- = (1-\gamma_t)/4 from the left */
__inline__ void
prop_ProjTm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 3].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_x from the left */
__inline__ void
prop_ProjXp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 0][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 0][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 0][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 1][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 1][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 1][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 1][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_x from the left */
__inline__ void
prop_ProjXm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re = -0.5*in[ 3][ 0].re;
  out[ 2][ 0].im = -0.5*in[ 3][ 0].im;
  out[ 2][ 1].re = -0.5*in[ 3][ 1].re;
  out[ 2][ 1].im = -0.5*in[ 3][ 1].im;
  out[ 2][ 2].re = -0.5*in[ 3][ 2].re;
  out[ 2][ 2].im = -0.5*in[ 3][ 2].im;
  out[ 2][ 3].re = -0.5*in[ 3][ 3].re;
  out[ 2][ 3].im = -0.5*in[ 3][ 3].im;
  out[ 3][ 0].re = -0.5*in[ 2][ 0].re;
  out[ 3][ 0].im = -0.5*in[ 2][ 0].im;
  out[ 3][ 1].re = -0.5*in[ 2][ 1].re;
  out[ 3][ 1].im = -0.5*in[ 2][ 1].im;
  out[ 3][ 2].re = -0.5*in[ 2][ 2].re;
  out[ 3][ 2].im = -0.5*in[ 2][ 2].im;
  out[ 3][ 3].re = -0.5*in[ 2][ 3].re;
  out[ 3][ 3].im = -0.5*in[ 2][ 3].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_y from the left */
__inline__ void
prop_ProjYp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 1][ 0].im;
  out[ 0][ 0].im = -0.5*in[ 1][ 0].re;
  out[ 0][ 1].re =  0.5*in[ 1][ 1].im;
  out[ 0][ 1].im = -0.5*in[ 1][ 1].re;
  out[ 0][ 2].re =  0.5*in[ 1][ 2].im;
  out[ 0][ 2].im = -0.5*in[ 1][ 2].re;
  out[ 0][ 3].re =  0.5*in[ 1][ 3].im;
  out[ 0][ 3].im = -0.5*in[ 1][ 3].re;
  out[ 1][ 0].re = -0.5*in[ 0][ 0].im;
  out[ 1][ 0].im =  0.5*in[ 0][ 0].re;
  out[ 1][ 1].re = -0.5*in[ 0][ 1].im;
  out[ 1][ 1].im =  0.5*in[ 0][ 1].re;
  out[ 1][ 2].re = -0.5*in[ 0][ 2].im;
  out[ 1][ 2].im =  0.5*in[ 0][ 2].re;
  out[ 1][ 3].re = -0.5*in[ 0][ 3].im;
  out[ 1][ 3].im =  0.5*in[ 0][ 3].re;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_y from the left */
__inline__ void
prop_ProjYm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re = -0.5*in[ 3][ 0].im;
  out[ 2][ 0].im =  0.5*in[ 3][ 0].re;
  out[ 2][ 1].re = -0.5*in[ 3][ 1].im;
  out[ 2][ 1].im =  0.5*in[ 3][ 1].re;
  out[ 2][ 2].re = -0.5*in[ 3][ 2].im;
  out[ 2][ 2].im =  0.5*in[ 3][ 2].re;
  out[ 2][ 3].re = -0.5*in[ 3][ 3].im;
  out[ 2][ 3].im =  0.5*in[ 3][ 3].re;
  out[ 3][ 0].re =  0.5*in[ 2][ 0].im;
  out[ 3][ 0].im = -0.5*in[ 2][ 0].re;
  out[ 3][ 1].re =  0.5*in[ 2][ 1].im;
  out[ 3][ 1].im = -0.5*in[ 2][ 1].re;
  out[ 3][ 2].re =  0.5*in[ 2][ 2].im;
  out[ 3][ 2].im = -0.5*in[ 2][ 2].re;
  out[ 3][ 3].re =  0.5*in[ 2][ 3].im;
  out[ 3][ 3].im = -0.5*in[ 2][ 3].re;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_z from the left */
__inline__ void
prop_ProjZp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 1][ 0].re = -0.5*in[ 1][ 0].re;
  out[ 1][ 0].im = -0.5*in[ 1][ 0].im;
  out[ 1][ 1].re = -0.5*in[ 1][ 1].re;
  out[ 1][ 1].im = -0.5*in[ 1][ 1].im;
  out[ 1][ 2].re = -0.5*in[ 1][ 2].re;
  out[ 1][ 2].im = -0.5*in[ 1][ 2].im;
  out[ 1][ 3].re = -0.5*in[ 1][ 3].re;
  out[ 1][ 3].im = -0.5*in[ 1][ 3].im;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_z from the left */
__inline__ void
prop_ProjZm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re = -0.5*in[ 2][ 0].re;
  out[ 2][ 0].im = -0.5*in[ 2][ 0].im;
  out[ 2][ 1].re = -0.5*in[ 2][ 1].re;
  out[ 2][ 1].im = -0.5*in[ 2][ 1].im;
  out[ 2][ 2].re = -0.5*in[ 2][ 2].re;
  out[ 2][ 2].im = -0.5*in[ 2][ 2].im;
  out[ 2][ 3].re = -0.5*in[ 2][ 3].re;
  out[ 2][ 3].im = -0.5*in[ 2][ 3].im;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 3].im;


  return;
}

/* multiply prop by \Gamma^+ = (1+\gamma_t)/4 from the right */
__inline__ void
prop_G_ProjTp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by \Gamma^- = (1-\gamma_t)/4 from the right */
__inline__ void
prop_G_ProjTm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 3].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_x from the right */
__inline__ void
prop_G_ProjXp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 1].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 1].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 1].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 1].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_x from the right */
__inline__ void
prop_G_ProjXm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re = -0.5*in[ 0][ 3].re;
  out[ 0][ 2].im = -0.5*in[ 0][ 3].im;
  out[ 0][ 3].re = -0.5*in[ 0][ 2].re;
  out[ 0][ 3].im = -0.5*in[ 0][ 2].im;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re = -0.5*in[ 1][ 3].re;
  out[ 1][ 2].im = -0.5*in[ 1][ 3].im;
  out[ 1][ 3].re = -0.5*in[ 1][ 2].re;
  out[ 1][ 3].im = -0.5*in[ 1][ 2].im;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re = -0.5*in[ 2][ 3].re;
  out[ 2][ 2].im = -0.5*in[ 2][ 3].im;
  out[ 2][ 3].re = -0.5*in[ 2][ 2].re;
  out[ 2][ 3].im = -0.5*in[ 2][ 2].im;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re = -0.5*in[ 3][ 3].re;
  out[ 3][ 2].im = -0.5*in[ 3][ 3].im;
  out[ 3][ 3].re = -0.5*in[ 3][ 2].re;
  out[ 3][ 3].im = -0.5*in[ 3][ 2].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_y from the right */
__inline__ void
prop_G_ProjYp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -0.5*in[ 0][ 1].im;
  out[ 0][ 0].im =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].re =  0.5*in[ 0][ 0].im;
  out[ 0][ 1].im = -0.5*in[ 0][ 0].re;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re = -0.5*in[ 1][ 1].im;
  out[ 1][ 0].im =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].re =  0.5*in[ 1][ 0].im;
  out[ 1][ 1].im = -0.5*in[ 1][ 0].re;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re = -0.5*in[ 2][ 1].im;
  out[ 2][ 0].im =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].re =  0.5*in[ 2][ 0].im;
  out[ 2][ 1].im = -0.5*in[ 2][ 0].re;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re = -0.5*in[ 3][ 1].im;
  out[ 3][ 0].im =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].re =  0.5*in[ 3][ 0].im;
  out[ 3][ 1].im = -0.5*in[ 3][ 0].re;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_y from the right */
__inline__ void
prop_G_ProjYm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re =  0.5*in[ 0][ 3].im;
  out[ 0][ 2].im = -0.5*in[ 0][ 3].re;
  out[ 0][ 3].re = -0.5*in[ 0][ 2].im;
  out[ 0][ 3].im =  0.5*in[ 0][ 2].re;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re =  0.5*in[ 1][ 3].im;
  out[ 1][ 2].im = -0.5*in[ 1][ 3].re;
  out[ 1][ 3].re = -0.5*in[ 1][ 2].im;
  out[ 1][ 3].im =  0.5*in[ 1][ 2].re;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re =  0.5*in[ 2][ 3].im;
  out[ 2][ 2].im = -0.5*in[ 2][ 3].re;
  out[ 2][ 3].re = -0.5*in[ 2][ 2].im;
  out[ 2][ 3].im =  0.5*in[ 2][ 2].re;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re =  0.5*in[ 3][ 3].im;
  out[ 3][ 2].im = -0.5*in[ 3][ 3].re;
  out[ 3][ 3].re = -0.5*in[ 3][ 2].im;
  out[ 3][ 3].im =  0.5*in[ 3][ 2].re;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_z from the right */
__inline__ void
prop_G_ProjZp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 1].re = -0.5*in[ 0][ 1].re;
  out[ 0][ 1].im = -0.5*in[ 0][ 1].im;
  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 1].re = -0.5*in[ 1][ 1].re;
  out[ 1][ 1].im = -0.5*in[ 1][ 1].im;
  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 1].re = -0.5*in[ 2][ 1].re;
  out[ 2][ 1].im = -0.5*in[ 2][ 1].im;
  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 1].re = -0.5*in[ 3][ 1].re;
  out[ 3][ 1].im = -0.5*in[ 3][ 1].im;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_z from the right */
__inline__ void
prop_G_ProjZm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 2].re = -0.5*in[ 0][ 2].re;
  out[ 0][ 2].im = -0.5*in[ 0][ 2].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 2].re = -0.5*in[ 1][ 2].re;
  out[ 1][ 2].im = -0.5*in[ 1][ 2].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 2].re = -0.5*in[ 2][ 2].re;
  out[ 2][ 2].im = -0.5*in[ 2][ 2].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 2].re = -0.5*in[ 3][ 2].re;
  out[ 3][ 2].im = -0.5*in[ 3][ 2].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 3].im;


  return;
}

__inline__ void
prop_G_dag(qpb_complex B[NC*NS][NC*NS], qpb_complex A[NC*NS][NC*NS])
{

  B[ 0][ 0].re = A[ 0][ 0].re;

  B[ 0][ 0].im = -A[ 0][ 0].im;

  B[ 0][ 1].re = A[ 1][ 0].re;

  B[ 0][ 1].im = -A[ 1][ 0].im;

  B[ 0][ 2].re = A[ 2][ 0].re;

  B[ 0][ 2].im = -A[ 2][ 0].im;

  B[ 0][ 3].re = A[ 3][ 0].re;

  B[ 0][ 3].im = -A[ 3][ 0].im;

  B[ 1][ 0].re = A[ 0][ 1].re;

  B[ 1][ 0].im = -A[ 0][ 1].im;

  B[ 1][ 1].re = A[ 1][ 1].re;

  B[ 1][ 1].im = -A[ 1][ 1].im;

  B[ 1][ 2].re = A[ 2][ 1].re;

  B[ 1][ 2].im = -A[ 2][ 1].im;

  B[ 1][ 3].re = A[ 3][ 1].re;

  B[ 1][ 3].im = -A[ 3][ 1].im;

  B[ 2][ 0].re = A[ 0][ 2].re;

  B[ 2][ 0].im = -A[ 0][ 2].im;

  B[ 2][ 1].re = A[ 1][ 2].re;

  B[ 2][ 1].im = -A[ 1][ 2].im;

  B[ 2][ 2].re = A[ 2][ 2].re;

  B[ 2][ 2].im = -A[ 2][ 2].im;

  B[ 2][ 3].re = A[ 3][ 2].re;

  B[ 2][ 3].im = -A[ 3][ 2].im;

  B[ 3][ 0].re = A[ 0][ 3].re;

  B[ 3][ 0].im = -A[ 0][ 3].im;

  B[ 3][ 1].re = A[ 1][ 3].re;

  B[ 3][ 1].im = -A[ 1][ 3].im;

  B[ 3][ 2].re = A[ 2][ 3].re;

  B[ 3][ 2].im = -A[ 2][ 3].im;

  B[ 3][ 3].re = A[ 3][ 3].re;

  B[ 3][ 3].im = -A[ 3][ 3].im;

  return;
}

__inline__ void
prop_G_G(qpb_complex C[NC*NS][NC*NS], qpb_complex A[NC*NS][NC*NS], qpb_complex B[NC*NS][NC*NS])
{

  C[ 0][ 0].re = 
	-A[ 0][ 0].im*B[ 0][ 0].im 
	+A[ 0][ 0].re*B[ 0][ 0].re 
	-A[ 0][ 1].im*B[ 1][ 0].im 
	+A[ 0][ 1].re*B[ 1][ 0].re 
	-A[ 0][ 2].im*B[ 2][ 0].im 
	+A[ 0][ 2].re*B[ 2][ 0].re 
	-A[ 0][ 3].im*B[ 3][ 0].im 
	+A[ 0][ 3].re*B[ 3][ 0].re;

  C[ 0][ 0].im = 
	 A[ 0][ 0].im*B[ 0][ 0].re 
	+A[ 0][ 0].re*B[ 0][ 0].im 
	+A[ 0][ 1].im*B[ 1][ 0].re 
	+A[ 0][ 1].re*B[ 1][ 0].im 
	+A[ 0][ 2].im*B[ 2][ 0].re 
	+A[ 0][ 2].re*B[ 2][ 0].im 
	+A[ 0][ 3].im*B[ 3][ 0].re 
	+A[ 0][ 3].re*B[ 3][ 0].im;

  C[ 0][ 1].re = 
	-A[ 0][ 0].im*B[ 0][ 1].im 
	+A[ 0][ 0].re*B[ 0][ 1].re 
	-A[ 0][ 1].im*B[ 1][ 1].im 
	+A[ 0][ 1].re*B[ 1][ 1].re 
	-A[ 0][ 2].im*B[ 2][ 1].im 
	+A[ 0][ 2].re*B[ 2][ 1].re 
	-A[ 0][ 3].im*B[ 3][ 1].im 
	+A[ 0][ 3].re*B[ 3][ 1].re;

  C[ 0][ 1].im = 
	 A[ 0][ 0].im*B[ 0][ 1].re 
	+A[ 0][ 0].re*B[ 0][ 1].im 
	+A[ 0][ 1].im*B[ 1][ 1].re 
	+A[ 0][ 1].re*B[ 1][ 1].im 
	+A[ 0][ 2].im*B[ 2][ 1].re 
	+A[ 0][ 2].re*B[ 2][ 1].im 
	+A[ 0][ 3].im*B[ 3][ 1].re 
	+A[ 0][ 3].re*B[ 3][ 1].im;

  C[ 0][ 2].re = 
	-A[ 0][ 0].im*B[ 0][ 2].im 
	+A[ 0][ 0].re*B[ 0][ 2].re 
	-A[ 0][ 1].im*B[ 1][ 2].im 
	+A[ 0][ 1].re*B[ 1][ 2].re 
	-A[ 0][ 2].im*B[ 2][ 2].im 
	+A[ 0][ 2].re*B[ 2][ 2].re 
	-A[ 0][ 3].im*B[ 3][ 2].im 
	+A[ 0][ 3].re*B[ 3][ 2].re;

  C[ 0][ 2].im = 
	 A[ 0][ 0].im*B[ 0][ 2].re 
	+A[ 0][ 0].re*B[ 0][ 2].im 
	+A[ 0][ 1].im*B[ 1][ 2].re 
	+A[ 0][ 1].re*B[ 1][ 2].im 
	+A[ 0][ 2].im*B[ 2][ 2].re 
	+A[ 0][ 2].re*B[ 2][ 2].im 
	+A[ 0][ 3].im*B[ 3][ 2].re 
	+A[ 0][ 3].re*B[ 3][ 2].im;

  C[ 0][ 3].re = 
	-A[ 0][ 0].im*B[ 0][ 3].im 
	+A[ 0][ 0].re*B[ 0][ 3].re 
	-A[ 0][ 1].im*B[ 1][ 3].im 
	+A[ 0][ 1].re*B[ 1][ 3].re 
	-A[ 0][ 2].im*B[ 2][ 3].im 
	+A[ 0][ 2].re*B[ 2][ 3].re 
	-A[ 0][ 3].im*B[ 3][ 3].im 
	+A[ 0][ 3].re*B[ 3][ 3].re;

  C[ 0][ 3].im = 
	 A[ 0][ 0].im*B[ 0][ 3].re 
	+A[ 0][ 0].re*B[ 0][ 3].im 
	+A[ 0][ 1].im*B[ 1][ 3].re 
	+A[ 0][ 1].re*B[ 1][ 3].im 
	+A[ 0][ 2].im*B[ 2][ 3].re 
	+A[ 0][ 2].re*B[ 2][ 3].im 
	+A[ 0][ 3].im*B[ 3][ 3].re 
	+A[ 0][ 3].re*B[ 3][ 3].im;

  C[ 1][ 0].re = 
	-A[ 1][ 0].im*B[ 0][ 0].im 
	+A[ 1][ 0].re*B[ 0][ 0].re 
	-A[ 1][ 1].im*B[ 1][ 0].im 
	+A[ 1][ 1].re*B[ 1][ 0].re 
	-A[ 1][ 2].im*B[ 2][ 0].im 
	+A[ 1][ 2].re*B[ 2][ 0].re 
	-A[ 1][ 3].im*B[ 3][ 0].im 
	+A[ 1][ 3].re*B[ 3][ 0].re;

  C[ 1][ 0].im = 
	 A[ 1][ 0].im*B[ 0][ 0].re 
	+A[ 1][ 0].re*B[ 0][ 0].im 
	+A[ 1][ 1].im*B[ 1][ 0].re 
	+A[ 1][ 1].re*B[ 1][ 0].im 
	+A[ 1][ 2].im*B[ 2][ 0].re 
	+A[ 1][ 2].re*B[ 2][ 0].im 
	+A[ 1][ 3].im*B[ 3][ 0].re 
	+A[ 1][ 3].re*B[ 3][ 0].im;

  C[ 1][ 1].re = 
	-A[ 1][ 0].im*B[ 0][ 1].im 
	+A[ 1][ 0].re*B[ 0][ 1].re 
	-A[ 1][ 1].im*B[ 1][ 1].im 
	+A[ 1][ 1].re*B[ 1][ 1].re 
	-A[ 1][ 2].im*B[ 2][ 1].im 
	+A[ 1][ 2].re*B[ 2][ 1].re 
	-A[ 1][ 3].im*B[ 3][ 1].im 
	+A[ 1][ 3].re*B[ 3][ 1].re;

  C[ 1][ 1].im = 
	 A[ 1][ 0].im*B[ 0][ 1].re 
	+A[ 1][ 0].re*B[ 0][ 1].im 
	+A[ 1][ 1].im*B[ 1][ 1].re 
	+A[ 1][ 1].re*B[ 1][ 1].im 
	+A[ 1][ 2].im*B[ 2][ 1].re 
	+A[ 1][ 2].re*B[ 2][ 1].im 
	+A[ 1][ 3].im*B[ 3][ 1].re 
	+A[ 1][ 3].re*B[ 3][ 1].im;

  C[ 1][ 2].re = 
	-A[ 1][ 0].im*B[ 0][ 2].im 
	+A[ 1][ 0].re*B[ 0][ 2].re 
	-A[ 1][ 1].im*B[ 1][ 2].im 
	+A[ 1][ 1].re*B[ 1][ 2].re 
	-A[ 1][ 2].im*B[ 2][ 2].im 
	+A[ 1][ 2].re*B[ 2][ 2].re 
	-A[ 1][ 3].im*B[ 3][ 2].im 
	+A[ 1][ 3].re*B[ 3][ 2].re;

  C[ 1][ 2].im = 
	 A[ 1][ 0].im*B[ 0][ 2].re 
	+A[ 1][ 0].re*B[ 0][ 2].im 
	+A[ 1][ 1].im*B[ 1][ 2].re 
	+A[ 1][ 1].re*B[ 1][ 2].im 
	+A[ 1][ 2].im*B[ 2][ 2].re 
	+A[ 1][ 2].re*B[ 2][ 2].im 
	+A[ 1][ 3].im*B[ 3][ 2].re 
	+A[ 1][ 3].re*B[ 3][ 2].im;

  C[ 1][ 3].re = 
	-A[ 1][ 0].im*B[ 0][ 3].im 
	+A[ 1][ 0].re*B[ 0][ 3].re 
	-A[ 1][ 1].im*B[ 1][ 3].im 
	+A[ 1][ 1].re*B[ 1][ 3].re 
	-A[ 1][ 2].im*B[ 2][ 3].im 
	+A[ 1][ 2].re*B[ 2][ 3].re 
	-A[ 1][ 3].im*B[ 3][ 3].im 
	+A[ 1][ 3].re*B[ 3][ 3].re;

  C[ 1][ 3].im = 
	 A[ 1][ 0].im*B[ 0][ 3].re 
	+A[ 1][ 0].re*B[ 0][ 3].im 
	+A[ 1][ 1].im*B[ 1][ 3].re 
	+A[ 1][ 1].re*B[ 1][ 3].im 
	+A[ 1][ 2].im*B[ 2][ 3].re 
	+A[ 1][ 2].re*B[ 2][ 3].im 
	+A[ 1][ 3].im*B[ 3][ 3].re 
	+A[ 1][ 3].re*B[ 3][ 3].im;

  C[ 2][ 0].re = 
	-A[ 2][ 0].im*B[ 0][ 0].im 
	+A[ 2][ 0].re*B[ 0][ 0].re 
	-A[ 2][ 1].im*B[ 1][ 0].im 
	+A[ 2][ 1].re*B[ 1][ 0].re 
	-A[ 2][ 2].im*B[ 2][ 0].im 
	+A[ 2][ 2].re*B[ 2][ 0].re 
	-A[ 2][ 3].im*B[ 3][ 0].im 
	+A[ 2][ 3].re*B[ 3][ 0].re;

  C[ 2][ 0].im = 
	 A[ 2][ 0].im*B[ 0][ 0].re 
	+A[ 2][ 0].re*B[ 0][ 0].im 
	+A[ 2][ 1].im*B[ 1][ 0].re 
	+A[ 2][ 1].re*B[ 1][ 0].im 
	+A[ 2][ 2].im*B[ 2][ 0].re 
	+A[ 2][ 2].re*B[ 2][ 0].im 
	+A[ 2][ 3].im*B[ 3][ 0].re 
	+A[ 2][ 3].re*B[ 3][ 0].im;

  C[ 2][ 1].re = 
	-A[ 2][ 0].im*B[ 0][ 1].im 
	+A[ 2][ 0].re*B[ 0][ 1].re 
	-A[ 2][ 1].im*B[ 1][ 1].im 
	+A[ 2][ 1].re*B[ 1][ 1].re 
	-A[ 2][ 2].im*B[ 2][ 1].im 
	+A[ 2][ 2].re*B[ 2][ 1].re 
	-A[ 2][ 3].im*B[ 3][ 1].im 
	+A[ 2][ 3].re*B[ 3][ 1].re;

  C[ 2][ 1].im = 
	 A[ 2][ 0].im*B[ 0][ 1].re 
	+A[ 2][ 0].re*B[ 0][ 1].im 
	+A[ 2][ 1].im*B[ 1][ 1].re 
	+A[ 2][ 1].re*B[ 1][ 1].im 
	+A[ 2][ 2].im*B[ 2][ 1].re 
	+A[ 2][ 2].re*B[ 2][ 1].im 
	+A[ 2][ 3].im*B[ 3][ 1].re 
	+A[ 2][ 3].re*B[ 3][ 1].im;

  C[ 2][ 2].re = 
	-A[ 2][ 0].im*B[ 0][ 2].im 
	+A[ 2][ 0].re*B[ 0][ 2].re 
	-A[ 2][ 1].im*B[ 1][ 2].im 
	+A[ 2][ 1].re*B[ 1][ 2].re 
	-A[ 2][ 2].im*B[ 2][ 2].im 
	+A[ 2][ 2].re*B[ 2][ 2].re 
	-A[ 2][ 3].im*B[ 3][ 2].im 
	+A[ 2][ 3].re*B[ 3][ 2].re;

  C[ 2][ 2].im = 
	 A[ 2][ 0].im*B[ 0][ 2].re 
	+A[ 2][ 0].re*B[ 0][ 2].im 
	+A[ 2][ 1].im*B[ 1][ 2].re 
	+A[ 2][ 1].re*B[ 1][ 2].im 
	+A[ 2][ 2].im*B[ 2][ 2].re 
	+A[ 2][ 2].re*B[ 2][ 2].im 
	+A[ 2][ 3].im*B[ 3][ 2].re 
	+A[ 2][ 3].re*B[ 3][ 2].im;

  C[ 2][ 3].re = 
	-A[ 2][ 0].im*B[ 0][ 3].im 
	+A[ 2][ 0].re*B[ 0][ 3].re 
	-A[ 2][ 1].im*B[ 1][ 3].im 
	+A[ 2][ 1].re*B[ 1][ 3].re 
	-A[ 2][ 2].im*B[ 2][ 3].im 
	+A[ 2][ 2].re*B[ 2][ 3].re 
	-A[ 2][ 3].im*B[ 3][ 3].im 
	+A[ 2][ 3].re*B[ 3][ 3].re;

  C[ 2][ 3].im = 
	 A[ 2][ 0].im*B[ 0][ 3].re 
	+A[ 2][ 0].re*B[ 0][ 3].im 
	+A[ 2][ 1].im*B[ 1][ 3].re 
	+A[ 2][ 1].re*B[ 1][ 3].im 
	+A[ 2][ 2].im*B[ 2][ 3].re 
	+A[ 2][ 2].re*B[ 2][ 3].im 
	+A[ 2][ 3].im*B[ 3][ 3].re 
	+A[ 2][ 3].re*B[ 3][ 3].im;

  C[ 3][ 0].re = 
	-A[ 3][ 0].im*B[ 0][ 0].im 
	+A[ 3][ 0].re*B[ 0][ 0].re 
	-A[ 3][ 1].im*B[ 1][ 0].im 
	+A[ 3][ 1].re*B[ 1][ 0].re 
	-A[ 3][ 2].im*B[ 2][ 0].im 
	+A[ 3][ 2].re*B[ 2][ 0].re 
	-A[ 3][ 3].im*B[ 3][ 0].im 
	+A[ 3][ 3].re*B[ 3][ 0].re;

  C[ 3][ 0].im = 
	 A[ 3][ 0].im*B[ 0][ 0].re 
	+A[ 3][ 0].re*B[ 0][ 0].im 
	+A[ 3][ 1].im*B[ 1][ 0].re 
	+A[ 3][ 1].re*B[ 1][ 0].im 
	+A[ 3][ 2].im*B[ 2][ 0].re 
	+A[ 3][ 2].re*B[ 2][ 0].im 
	+A[ 3][ 3].im*B[ 3][ 0].re 
	+A[ 3][ 3].re*B[ 3][ 0].im;

  C[ 3][ 1].re = 
	-A[ 3][ 0].im*B[ 0][ 1].im 
	+A[ 3][ 0].re*B[ 0][ 1].re 
	-A[ 3][ 1].im*B[ 1][ 1].im 
	+A[ 3][ 1].re*B[ 1][ 1].re 
	-A[ 3][ 2].im*B[ 2][ 1].im 
	+A[ 3][ 2].re*B[ 2][ 1].re 
	-A[ 3][ 3].im*B[ 3][ 1].im 
	+A[ 3][ 3].re*B[ 3][ 1].re;

  C[ 3][ 1].im = 
	 A[ 3][ 0].im*B[ 0][ 1].re 
	+A[ 3][ 0].re*B[ 0][ 1].im 
	+A[ 3][ 1].im*B[ 1][ 1].re 
	+A[ 3][ 1].re*B[ 1][ 1].im 
	+A[ 3][ 2].im*B[ 2][ 1].re 
	+A[ 3][ 2].re*B[ 2][ 1].im 
	+A[ 3][ 3].im*B[ 3][ 1].re 
	+A[ 3][ 3].re*B[ 3][ 1].im;

  C[ 3][ 2].re = 
	-A[ 3][ 0].im*B[ 0][ 2].im 
	+A[ 3][ 0].re*B[ 0][ 2].re 
	-A[ 3][ 1].im*B[ 1][ 2].im 
	+A[ 3][ 1].re*B[ 1][ 2].re 
	-A[ 3][ 2].im*B[ 2][ 2].im 
	+A[ 3][ 2].re*B[ 2][ 2].re 
	-A[ 3][ 3].im*B[ 3][ 2].im 
	+A[ 3][ 3].re*B[ 3][ 2].re;

  C[ 3][ 2].im = 
	 A[ 3][ 0].im*B[ 0][ 2].re 
	+A[ 3][ 0].re*B[ 0][ 2].im 
	+A[ 3][ 1].im*B[ 1][ 2].re 
	+A[ 3][ 1].re*B[ 1][ 2].im 
	+A[ 3][ 2].im*B[ 2][ 2].re 
	+A[ 3][ 2].re*B[ 2][ 2].im 
	+A[ 3][ 3].im*B[ 3][ 2].re 
	+A[ 3][ 3].re*B[ 3][ 2].im;

  C[ 3][ 3].re = 
	-A[ 3][ 0].im*B[ 0][ 3].im 
	+A[ 3][ 0].re*B[ 0][ 3].re 
	-A[ 3][ 1].im*B[ 1][ 3].im 
	+A[ 3][ 1].re*B[ 1][ 3].re 
	-A[ 3][ 2].im*B[ 2][ 3].im 
	+A[ 3][ 2].re*B[ 2][ 3].re 
	-A[ 3][ 3].im*B[ 3][ 3].im 
	+A[ 3][ 3].re*B[ 3][ 3].re;

  C[ 3][ 3].im = 
	 A[ 3][ 0].im*B[ 0][ 3].re 
	+A[ 3][ 0].re*B[ 0][ 3].im 
	+A[ 3][ 1].im*B[ 1][ 3].re 
	+A[ 3][ 1].re*B[ 1][ 3].im 
	+A[ 3][ 2].im*B[ 2][ 3].re 
	+A[ 3][ 2].re*B[ 2][ 3].im 
	+A[ 3][ 3].im*B[ 3][ 3].re 
	+A[ 3][ 3].re*B[ 3][ 3].im;

  return;
}

#endif /* NC == 1 */
#if NC == 3
/* multiply prop by \gamma_x from the left */
__inline__ void
prop_gamma_x_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 9][ 0].im;
  out[ 0][ 0].im =  in[ 9][ 0].re;
  out[ 0][ 3].re = -in[ 9][ 3].im;
  out[ 0][ 3].im =  in[ 9][ 3].re;
  out[ 0][ 6].re = -in[ 9][ 6].im;
  out[ 0][ 6].im =  in[ 9][ 6].re;
  out[ 0][ 9].re = -in[ 9][ 9].im;
  out[ 0][ 9].im =  in[ 9][ 9].re;
  out[ 3][ 0].re = -in[ 6][ 0].im;
  out[ 3][ 0].im =  in[ 6][ 0].re;
  out[ 3][ 3].re = -in[ 6][ 3].im;
  out[ 3][ 3].im =  in[ 6][ 3].re;
  out[ 3][ 6].re = -in[ 6][ 6].im;
  out[ 3][ 6].im =  in[ 6][ 6].re;
  out[ 3][ 9].re = -in[ 6][ 9].im;
  out[ 3][ 9].im =  in[ 6][ 9].re;
  out[ 6][ 0].re =  in[ 3][ 0].im;
  out[ 6][ 0].im = -in[ 3][ 0].re;
  out[ 6][ 3].re =  in[ 3][ 3].im;
  out[ 6][ 3].im = -in[ 3][ 3].re;
  out[ 6][ 6].re =  in[ 3][ 6].im;
  out[ 6][ 6].im = -in[ 3][ 6].re;
  out[ 6][ 9].re =  in[ 3][ 9].im;
  out[ 6][ 9].im = -in[ 3][ 9].re;
  out[ 9][ 0].re =  in[ 0][ 0].im;
  out[ 9][ 0].im = -in[ 0][ 0].re;
  out[ 9][ 3].re =  in[ 0][ 3].im;
  out[ 9][ 3].im = -in[ 0][ 3].re;
  out[ 9][ 6].re =  in[ 0][ 6].im;
  out[ 9][ 6].im = -in[ 0][ 6].re;
  out[ 9][ 9].re =  in[ 0][ 9].im;
  out[ 9][ 9].im = -in[ 0][ 9].re;

  out[ 0][ 1].re = -in[ 9][ 1].im;
  out[ 0][ 1].im =  in[ 9][ 1].re;
  out[ 0][ 4].re = -in[ 9][ 4].im;
  out[ 0][ 4].im =  in[ 9][ 4].re;
  out[ 0][ 7].re = -in[ 9][ 7].im;
  out[ 0][ 7].im =  in[ 9][ 7].re;
  out[ 0][10].re = -in[ 9][10].im;
  out[ 0][10].im =  in[ 9][10].re;
  out[ 3][ 1].re = -in[ 6][ 1].im;
  out[ 3][ 1].im =  in[ 6][ 1].re;
  out[ 3][ 4].re = -in[ 6][ 4].im;
  out[ 3][ 4].im =  in[ 6][ 4].re;
  out[ 3][ 7].re = -in[ 6][ 7].im;
  out[ 3][ 7].im =  in[ 6][ 7].re;
  out[ 3][10].re = -in[ 6][10].im;
  out[ 3][10].im =  in[ 6][10].re;
  out[ 6][ 1].re =  in[ 3][ 1].im;
  out[ 6][ 1].im = -in[ 3][ 1].re;
  out[ 6][ 4].re =  in[ 3][ 4].im;
  out[ 6][ 4].im = -in[ 3][ 4].re;
  out[ 6][ 7].re =  in[ 3][ 7].im;
  out[ 6][ 7].im = -in[ 3][ 7].re;
  out[ 6][10].re =  in[ 3][10].im;
  out[ 6][10].im = -in[ 3][10].re;
  out[ 9][ 1].re =  in[ 0][ 1].im;
  out[ 9][ 1].im = -in[ 0][ 1].re;
  out[ 9][ 4].re =  in[ 0][ 4].im;
  out[ 9][ 4].im = -in[ 0][ 4].re;
  out[ 9][ 7].re =  in[ 0][ 7].im;
  out[ 9][ 7].im = -in[ 0][ 7].re;
  out[ 9][10].re =  in[ 0][10].im;
  out[ 9][10].im = -in[ 0][10].re;

  out[ 0][ 2].re = -in[ 9][ 2].im;
  out[ 0][ 2].im =  in[ 9][ 2].re;
  out[ 0][ 5].re = -in[ 9][ 5].im;
  out[ 0][ 5].im =  in[ 9][ 5].re;
  out[ 0][ 8].re = -in[ 9][ 8].im;
  out[ 0][ 8].im =  in[ 9][ 8].re;
  out[ 0][11].re = -in[ 9][11].im;
  out[ 0][11].im =  in[ 9][11].re;
  out[ 3][ 2].re = -in[ 6][ 2].im;
  out[ 3][ 2].im =  in[ 6][ 2].re;
  out[ 3][ 5].re = -in[ 6][ 5].im;
  out[ 3][ 5].im =  in[ 6][ 5].re;
  out[ 3][ 8].re = -in[ 6][ 8].im;
  out[ 3][ 8].im =  in[ 6][ 8].re;
  out[ 3][11].re = -in[ 6][11].im;
  out[ 3][11].im =  in[ 6][11].re;
  out[ 6][ 2].re =  in[ 3][ 2].im;
  out[ 6][ 2].im = -in[ 3][ 2].re;
  out[ 6][ 5].re =  in[ 3][ 5].im;
  out[ 6][ 5].im = -in[ 3][ 5].re;
  out[ 6][ 8].re =  in[ 3][ 8].im;
  out[ 6][ 8].im = -in[ 3][ 8].re;
  out[ 6][11].re =  in[ 3][11].im;
  out[ 6][11].im = -in[ 3][11].re;
  out[ 9][ 2].re =  in[ 0][ 2].im;
  out[ 9][ 2].im = -in[ 0][ 2].re;
  out[ 9][ 5].re =  in[ 0][ 5].im;
  out[ 9][ 5].im = -in[ 0][ 5].re;
  out[ 9][ 8].re =  in[ 0][ 8].im;
  out[ 9][ 8].im = -in[ 0][ 8].re;
  out[ 9][11].re =  in[ 0][11].im;
  out[ 9][11].im = -in[ 0][11].re;

  out[ 1][ 0].re = -in[10][ 0].im;
  out[ 1][ 0].im =  in[10][ 0].re;
  out[ 1][ 3].re = -in[10][ 3].im;
  out[ 1][ 3].im =  in[10][ 3].re;
  out[ 1][ 6].re = -in[10][ 6].im;
  out[ 1][ 6].im =  in[10][ 6].re;
  out[ 1][ 9].re = -in[10][ 9].im;
  out[ 1][ 9].im =  in[10][ 9].re;
  out[ 4][ 0].re = -in[ 7][ 0].im;
  out[ 4][ 0].im =  in[ 7][ 0].re;
  out[ 4][ 3].re = -in[ 7][ 3].im;
  out[ 4][ 3].im =  in[ 7][ 3].re;
  out[ 4][ 6].re = -in[ 7][ 6].im;
  out[ 4][ 6].im =  in[ 7][ 6].re;
  out[ 4][ 9].re = -in[ 7][ 9].im;
  out[ 4][ 9].im =  in[ 7][ 9].re;
  out[ 7][ 0].re =  in[ 4][ 0].im;
  out[ 7][ 0].im = -in[ 4][ 0].re;
  out[ 7][ 3].re =  in[ 4][ 3].im;
  out[ 7][ 3].im = -in[ 4][ 3].re;
  out[ 7][ 6].re =  in[ 4][ 6].im;
  out[ 7][ 6].im = -in[ 4][ 6].re;
  out[ 7][ 9].re =  in[ 4][ 9].im;
  out[ 7][ 9].im = -in[ 4][ 9].re;
  out[10][ 0].re =  in[ 1][ 0].im;
  out[10][ 0].im = -in[ 1][ 0].re;
  out[10][ 3].re =  in[ 1][ 3].im;
  out[10][ 3].im = -in[ 1][ 3].re;
  out[10][ 6].re =  in[ 1][ 6].im;
  out[10][ 6].im = -in[ 1][ 6].re;
  out[10][ 9].re =  in[ 1][ 9].im;
  out[10][ 9].im = -in[ 1][ 9].re;

  out[ 1][ 1].re = -in[10][ 1].im;
  out[ 1][ 1].im =  in[10][ 1].re;
  out[ 1][ 4].re = -in[10][ 4].im;
  out[ 1][ 4].im =  in[10][ 4].re;
  out[ 1][ 7].re = -in[10][ 7].im;
  out[ 1][ 7].im =  in[10][ 7].re;
  out[ 1][10].re = -in[10][10].im;
  out[ 1][10].im =  in[10][10].re;
  out[ 4][ 1].re = -in[ 7][ 1].im;
  out[ 4][ 1].im =  in[ 7][ 1].re;
  out[ 4][ 4].re = -in[ 7][ 4].im;
  out[ 4][ 4].im =  in[ 7][ 4].re;
  out[ 4][ 7].re = -in[ 7][ 7].im;
  out[ 4][ 7].im =  in[ 7][ 7].re;
  out[ 4][10].re = -in[ 7][10].im;
  out[ 4][10].im =  in[ 7][10].re;
  out[ 7][ 1].re =  in[ 4][ 1].im;
  out[ 7][ 1].im = -in[ 4][ 1].re;
  out[ 7][ 4].re =  in[ 4][ 4].im;
  out[ 7][ 4].im = -in[ 4][ 4].re;
  out[ 7][ 7].re =  in[ 4][ 7].im;
  out[ 7][ 7].im = -in[ 4][ 7].re;
  out[ 7][10].re =  in[ 4][10].im;
  out[ 7][10].im = -in[ 4][10].re;
  out[10][ 1].re =  in[ 1][ 1].im;
  out[10][ 1].im = -in[ 1][ 1].re;
  out[10][ 4].re =  in[ 1][ 4].im;
  out[10][ 4].im = -in[ 1][ 4].re;
  out[10][ 7].re =  in[ 1][ 7].im;
  out[10][ 7].im = -in[ 1][ 7].re;
  out[10][10].re =  in[ 1][10].im;
  out[10][10].im = -in[ 1][10].re;

  out[ 1][ 2].re = -in[10][ 2].im;
  out[ 1][ 2].im =  in[10][ 2].re;
  out[ 1][ 5].re = -in[10][ 5].im;
  out[ 1][ 5].im =  in[10][ 5].re;
  out[ 1][ 8].re = -in[10][ 8].im;
  out[ 1][ 8].im =  in[10][ 8].re;
  out[ 1][11].re = -in[10][11].im;
  out[ 1][11].im =  in[10][11].re;
  out[ 4][ 2].re = -in[ 7][ 2].im;
  out[ 4][ 2].im =  in[ 7][ 2].re;
  out[ 4][ 5].re = -in[ 7][ 5].im;
  out[ 4][ 5].im =  in[ 7][ 5].re;
  out[ 4][ 8].re = -in[ 7][ 8].im;
  out[ 4][ 8].im =  in[ 7][ 8].re;
  out[ 4][11].re = -in[ 7][11].im;
  out[ 4][11].im =  in[ 7][11].re;
  out[ 7][ 2].re =  in[ 4][ 2].im;
  out[ 7][ 2].im = -in[ 4][ 2].re;
  out[ 7][ 5].re =  in[ 4][ 5].im;
  out[ 7][ 5].im = -in[ 4][ 5].re;
  out[ 7][ 8].re =  in[ 4][ 8].im;
  out[ 7][ 8].im = -in[ 4][ 8].re;
  out[ 7][11].re =  in[ 4][11].im;
  out[ 7][11].im = -in[ 4][11].re;
  out[10][ 2].re =  in[ 1][ 2].im;
  out[10][ 2].im = -in[ 1][ 2].re;
  out[10][ 5].re =  in[ 1][ 5].im;
  out[10][ 5].im = -in[ 1][ 5].re;
  out[10][ 8].re =  in[ 1][ 8].im;
  out[10][ 8].im = -in[ 1][ 8].re;
  out[10][11].re =  in[ 1][11].im;
  out[10][11].im = -in[ 1][11].re;

  out[ 2][ 0].re = -in[11][ 0].im;
  out[ 2][ 0].im =  in[11][ 0].re;
  out[ 2][ 3].re = -in[11][ 3].im;
  out[ 2][ 3].im =  in[11][ 3].re;
  out[ 2][ 6].re = -in[11][ 6].im;
  out[ 2][ 6].im =  in[11][ 6].re;
  out[ 2][ 9].re = -in[11][ 9].im;
  out[ 2][ 9].im =  in[11][ 9].re;
  out[ 5][ 0].re = -in[ 8][ 0].im;
  out[ 5][ 0].im =  in[ 8][ 0].re;
  out[ 5][ 3].re = -in[ 8][ 3].im;
  out[ 5][ 3].im =  in[ 8][ 3].re;
  out[ 5][ 6].re = -in[ 8][ 6].im;
  out[ 5][ 6].im =  in[ 8][ 6].re;
  out[ 5][ 9].re = -in[ 8][ 9].im;
  out[ 5][ 9].im =  in[ 8][ 9].re;
  out[ 8][ 0].re =  in[ 5][ 0].im;
  out[ 8][ 0].im = -in[ 5][ 0].re;
  out[ 8][ 3].re =  in[ 5][ 3].im;
  out[ 8][ 3].im = -in[ 5][ 3].re;
  out[ 8][ 6].re =  in[ 5][ 6].im;
  out[ 8][ 6].im = -in[ 5][ 6].re;
  out[ 8][ 9].re =  in[ 5][ 9].im;
  out[ 8][ 9].im = -in[ 5][ 9].re;
  out[11][ 0].re =  in[ 2][ 0].im;
  out[11][ 0].im = -in[ 2][ 0].re;
  out[11][ 3].re =  in[ 2][ 3].im;
  out[11][ 3].im = -in[ 2][ 3].re;
  out[11][ 6].re =  in[ 2][ 6].im;
  out[11][ 6].im = -in[ 2][ 6].re;
  out[11][ 9].re =  in[ 2][ 9].im;
  out[11][ 9].im = -in[ 2][ 9].re;

  out[ 2][ 1].re = -in[11][ 1].im;
  out[ 2][ 1].im =  in[11][ 1].re;
  out[ 2][ 4].re = -in[11][ 4].im;
  out[ 2][ 4].im =  in[11][ 4].re;
  out[ 2][ 7].re = -in[11][ 7].im;
  out[ 2][ 7].im =  in[11][ 7].re;
  out[ 2][10].re = -in[11][10].im;
  out[ 2][10].im =  in[11][10].re;
  out[ 5][ 1].re = -in[ 8][ 1].im;
  out[ 5][ 1].im =  in[ 8][ 1].re;
  out[ 5][ 4].re = -in[ 8][ 4].im;
  out[ 5][ 4].im =  in[ 8][ 4].re;
  out[ 5][ 7].re = -in[ 8][ 7].im;
  out[ 5][ 7].im =  in[ 8][ 7].re;
  out[ 5][10].re = -in[ 8][10].im;
  out[ 5][10].im =  in[ 8][10].re;
  out[ 8][ 1].re =  in[ 5][ 1].im;
  out[ 8][ 1].im = -in[ 5][ 1].re;
  out[ 8][ 4].re =  in[ 5][ 4].im;
  out[ 8][ 4].im = -in[ 5][ 4].re;
  out[ 8][ 7].re =  in[ 5][ 7].im;
  out[ 8][ 7].im = -in[ 5][ 7].re;
  out[ 8][10].re =  in[ 5][10].im;
  out[ 8][10].im = -in[ 5][10].re;
  out[11][ 1].re =  in[ 2][ 1].im;
  out[11][ 1].im = -in[ 2][ 1].re;
  out[11][ 4].re =  in[ 2][ 4].im;
  out[11][ 4].im = -in[ 2][ 4].re;
  out[11][ 7].re =  in[ 2][ 7].im;
  out[11][ 7].im = -in[ 2][ 7].re;
  out[11][10].re =  in[ 2][10].im;
  out[11][10].im = -in[ 2][10].re;

  out[ 2][ 2].re = -in[11][ 2].im;
  out[ 2][ 2].im =  in[11][ 2].re;
  out[ 2][ 5].re = -in[11][ 5].im;
  out[ 2][ 5].im =  in[11][ 5].re;
  out[ 2][ 8].re = -in[11][ 8].im;
  out[ 2][ 8].im =  in[11][ 8].re;
  out[ 2][11].re = -in[11][11].im;
  out[ 2][11].im =  in[11][11].re;
  out[ 5][ 2].re = -in[ 8][ 2].im;
  out[ 5][ 2].im =  in[ 8][ 2].re;
  out[ 5][ 5].re = -in[ 8][ 5].im;
  out[ 5][ 5].im =  in[ 8][ 5].re;
  out[ 5][ 8].re = -in[ 8][ 8].im;
  out[ 5][ 8].im =  in[ 8][ 8].re;
  out[ 5][11].re = -in[ 8][11].im;
  out[ 5][11].im =  in[ 8][11].re;
  out[ 8][ 2].re =  in[ 5][ 2].im;
  out[ 8][ 2].im = -in[ 5][ 2].re;
  out[ 8][ 5].re =  in[ 5][ 5].im;
  out[ 8][ 5].im = -in[ 5][ 5].re;
  out[ 8][ 8].re =  in[ 5][ 8].im;
  out[ 8][ 8].im = -in[ 5][ 8].re;
  out[ 8][11].re =  in[ 5][11].im;
  out[ 8][11].im = -in[ 5][11].re;
  out[11][ 2].re =  in[ 2][ 2].im;
  out[11][ 2].im = -in[ 2][ 2].re;
  out[11][ 5].re =  in[ 2][ 5].im;
  out[11][ 5].im = -in[ 2][ 5].re;
  out[11][ 8].re =  in[ 2][ 8].im;
  out[11][ 8].im = -in[ 2][ 8].re;
  out[11][11].re =  in[ 2][11].im;
  out[11][11].im = -in[ 2][11].re;


  return;
}

/* multiply prop by \gamma_y from the left */
__inline__ void
prop_gamma_y_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 9][ 0].re;
  out[ 0][ 0].im =  in[ 9][ 0].im;
  out[ 0][ 3].re =  in[ 9][ 3].re;
  out[ 0][ 3].im =  in[ 9][ 3].im;
  out[ 0][ 6].re =  in[ 9][ 6].re;
  out[ 0][ 6].im =  in[ 9][ 6].im;
  out[ 0][ 9].re =  in[ 9][ 9].re;
  out[ 0][ 9].im =  in[ 9][ 9].im;
  out[ 3][ 0].re = -in[ 6][ 0].re;
  out[ 3][ 0].im = -in[ 6][ 0].im;
  out[ 3][ 3].re = -in[ 6][ 3].re;
  out[ 3][ 3].im = -in[ 6][ 3].im;
  out[ 3][ 6].re = -in[ 6][ 6].re;
  out[ 3][ 6].im = -in[ 6][ 6].im;
  out[ 3][ 9].re = -in[ 6][ 9].re;
  out[ 3][ 9].im = -in[ 6][ 9].im;
  out[ 6][ 0].re = -in[ 3][ 0].re;
  out[ 6][ 0].im = -in[ 3][ 0].im;
  out[ 6][ 3].re = -in[ 3][ 3].re;
  out[ 6][ 3].im = -in[ 3][ 3].im;
  out[ 6][ 6].re = -in[ 3][ 6].re;
  out[ 6][ 6].im = -in[ 3][ 6].im;
  out[ 6][ 9].re = -in[ 3][ 9].re;
  out[ 6][ 9].im = -in[ 3][ 9].im;
  out[ 9][ 0].re =  in[ 0][ 0].re;
  out[ 9][ 0].im =  in[ 0][ 0].im;
  out[ 9][ 3].re =  in[ 0][ 3].re;
  out[ 9][ 3].im =  in[ 0][ 3].im;
  out[ 9][ 6].re =  in[ 0][ 6].re;
  out[ 9][ 6].im =  in[ 0][ 6].im;
  out[ 9][ 9].re =  in[ 0][ 9].re;
  out[ 9][ 9].im =  in[ 0][ 9].im;

  out[ 0][ 1].re =  in[ 9][ 1].re;
  out[ 0][ 1].im =  in[ 9][ 1].im;
  out[ 0][ 4].re =  in[ 9][ 4].re;
  out[ 0][ 4].im =  in[ 9][ 4].im;
  out[ 0][ 7].re =  in[ 9][ 7].re;
  out[ 0][ 7].im =  in[ 9][ 7].im;
  out[ 0][10].re =  in[ 9][10].re;
  out[ 0][10].im =  in[ 9][10].im;
  out[ 3][ 1].re = -in[ 6][ 1].re;
  out[ 3][ 1].im = -in[ 6][ 1].im;
  out[ 3][ 4].re = -in[ 6][ 4].re;
  out[ 3][ 4].im = -in[ 6][ 4].im;
  out[ 3][ 7].re = -in[ 6][ 7].re;
  out[ 3][ 7].im = -in[ 6][ 7].im;
  out[ 3][10].re = -in[ 6][10].re;
  out[ 3][10].im = -in[ 6][10].im;
  out[ 6][ 1].re = -in[ 3][ 1].re;
  out[ 6][ 1].im = -in[ 3][ 1].im;
  out[ 6][ 4].re = -in[ 3][ 4].re;
  out[ 6][ 4].im = -in[ 3][ 4].im;
  out[ 6][ 7].re = -in[ 3][ 7].re;
  out[ 6][ 7].im = -in[ 3][ 7].im;
  out[ 6][10].re = -in[ 3][10].re;
  out[ 6][10].im = -in[ 3][10].im;
  out[ 9][ 1].re =  in[ 0][ 1].re;
  out[ 9][ 1].im =  in[ 0][ 1].im;
  out[ 9][ 4].re =  in[ 0][ 4].re;
  out[ 9][ 4].im =  in[ 0][ 4].im;
  out[ 9][ 7].re =  in[ 0][ 7].re;
  out[ 9][ 7].im =  in[ 0][ 7].im;
  out[ 9][10].re =  in[ 0][10].re;
  out[ 9][10].im =  in[ 0][10].im;

  out[ 0][ 2].re =  in[ 9][ 2].re;
  out[ 0][ 2].im =  in[ 9][ 2].im;
  out[ 0][ 5].re =  in[ 9][ 5].re;
  out[ 0][ 5].im =  in[ 9][ 5].im;
  out[ 0][ 8].re =  in[ 9][ 8].re;
  out[ 0][ 8].im =  in[ 9][ 8].im;
  out[ 0][11].re =  in[ 9][11].re;
  out[ 0][11].im =  in[ 9][11].im;
  out[ 3][ 2].re = -in[ 6][ 2].re;
  out[ 3][ 2].im = -in[ 6][ 2].im;
  out[ 3][ 5].re = -in[ 6][ 5].re;
  out[ 3][ 5].im = -in[ 6][ 5].im;
  out[ 3][ 8].re = -in[ 6][ 8].re;
  out[ 3][ 8].im = -in[ 6][ 8].im;
  out[ 3][11].re = -in[ 6][11].re;
  out[ 3][11].im = -in[ 6][11].im;
  out[ 6][ 2].re = -in[ 3][ 2].re;
  out[ 6][ 2].im = -in[ 3][ 2].im;
  out[ 6][ 5].re = -in[ 3][ 5].re;
  out[ 6][ 5].im = -in[ 3][ 5].im;
  out[ 6][ 8].re = -in[ 3][ 8].re;
  out[ 6][ 8].im = -in[ 3][ 8].im;
  out[ 6][11].re = -in[ 3][11].re;
  out[ 6][11].im = -in[ 3][11].im;
  out[ 9][ 2].re =  in[ 0][ 2].re;
  out[ 9][ 2].im =  in[ 0][ 2].im;
  out[ 9][ 5].re =  in[ 0][ 5].re;
  out[ 9][ 5].im =  in[ 0][ 5].im;
  out[ 9][ 8].re =  in[ 0][ 8].re;
  out[ 9][ 8].im =  in[ 0][ 8].im;
  out[ 9][11].re =  in[ 0][11].re;
  out[ 9][11].im =  in[ 0][11].im;

  out[ 1][ 0].re =  in[10][ 0].re;
  out[ 1][ 0].im =  in[10][ 0].im;
  out[ 1][ 3].re =  in[10][ 3].re;
  out[ 1][ 3].im =  in[10][ 3].im;
  out[ 1][ 6].re =  in[10][ 6].re;
  out[ 1][ 6].im =  in[10][ 6].im;
  out[ 1][ 9].re =  in[10][ 9].re;
  out[ 1][ 9].im =  in[10][ 9].im;
  out[ 4][ 0].re = -in[ 7][ 0].re;
  out[ 4][ 0].im = -in[ 7][ 0].im;
  out[ 4][ 3].re = -in[ 7][ 3].re;
  out[ 4][ 3].im = -in[ 7][ 3].im;
  out[ 4][ 6].re = -in[ 7][ 6].re;
  out[ 4][ 6].im = -in[ 7][ 6].im;
  out[ 4][ 9].re = -in[ 7][ 9].re;
  out[ 4][ 9].im = -in[ 7][ 9].im;
  out[ 7][ 0].re = -in[ 4][ 0].re;
  out[ 7][ 0].im = -in[ 4][ 0].im;
  out[ 7][ 3].re = -in[ 4][ 3].re;
  out[ 7][ 3].im = -in[ 4][ 3].im;
  out[ 7][ 6].re = -in[ 4][ 6].re;
  out[ 7][ 6].im = -in[ 4][ 6].im;
  out[ 7][ 9].re = -in[ 4][ 9].re;
  out[ 7][ 9].im = -in[ 4][ 9].im;
  out[10][ 0].re =  in[ 1][ 0].re;
  out[10][ 0].im =  in[ 1][ 0].im;
  out[10][ 3].re =  in[ 1][ 3].re;
  out[10][ 3].im =  in[ 1][ 3].im;
  out[10][ 6].re =  in[ 1][ 6].re;
  out[10][ 6].im =  in[ 1][ 6].im;
  out[10][ 9].re =  in[ 1][ 9].re;
  out[10][ 9].im =  in[ 1][ 9].im;

  out[ 1][ 1].re =  in[10][ 1].re;
  out[ 1][ 1].im =  in[10][ 1].im;
  out[ 1][ 4].re =  in[10][ 4].re;
  out[ 1][ 4].im =  in[10][ 4].im;
  out[ 1][ 7].re =  in[10][ 7].re;
  out[ 1][ 7].im =  in[10][ 7].im;
  out[ 1][10].re =  in[10][10].re;
  out[ 1][10].im =  in[10][10].im;
  out[ 4][ 1].re = -in[ 7][ 1].re;
  out[ 4][ 1].im = -in[ 7][ 1].im;
  out[ 4][ 4].re = -in[ 7][ 4].re;
  out[ 4][ 4].im = -in[ 7][ 4].im;
  out[ 4][ 7].re = -in[ 7][ 7].re;
  out[ 4][ 7].im = -in[ 7][ 7].im;
  out[ 4][10].re = -in[ 7][10].re;
  out[ 4][10].im = -in[ 7][10].im;
  out[ 7][ 1].re = -in[ 4][ 1].re;
  out[ 7][ 1].im = -in[ 4][ 1].im;
  out[ 7][ 4].re = -in[ 4][ 4].re;
  out[ 7][ 4].im = -in[ 4][ 4].im;
  out[ 7][ 7].re = -in[ 4][ 7].re;
  out[ 7][ 7].im = -in[ 4][ 7].im;
  out[ 7][10].re = -in[ 4][10].re;
  out[ 7][10].im = -in[ 4][10].im;
  out[10][ 1].re =  in[ 1][ 1].re;
  out[10][ 1].im =  in[ 1][ 1].im;
  out[10][ 4].re =  in[ 1][ 4].re;
  out[10][ 4].im =  in[ 1][ 4].im;
  out[10][ 7].re =  in[ 1][ 7].re;
  out[10][ 7].im =  in[ 1][ 7].im;
  out[10][10].re =  in[ 1][10].re;
  out[10][10].im =  in[ 1][10].im;

  out[ 1][ 2].re =  in[10][ 2].re;
  out[ 1][ 2].im =  in[10][ 2].im;
  out[ 1][ 5].re =  in[10][ 5].re;
  out[ 1][ 5].im =  in[10][ 5].im;
  out[ 1][ 8].re =  in[10][ 8].re;
  out[ 1][ 8].im =  in[10][ 8].im;
  out[ 1][11].re =  in[10][11].re;
  out[ 1][11].im =  in[10][11].im;
  out[ 4][ 2].re = -in[ 7][ 2].re;
  out[ 4][ 2].im = -in[ 7][ 2].im;
  out[ 4][ 5].re = -in[ 7][ 5].re;
  out[ 4][ 5].im = -in[ 7][ 5].im;
  out[ 4][ 8].re = -in[ 7][ 8].re;
  out[ 4][ 8].im = -in[ 7][ 8].im;
  out[ 4][11].re = -in[ 7][11].re;
  out[ 4][11].im = -in[ 7][11].im;
  out[ 7][ 2].re = -in[ 4][ 2].re;
  out[ 7][ 2].im = -in[ 4][ 2].im;
  out[ 7][ 5].re = -in[ 4][ 5].re;
  out[ 7][ 5].im = -in[ 4][ 5].im;
  out[ 7][ 8].re = -in[ 4][ 8].re;
  out[ 7][ 8].im = -in[ 4][ 8].im;
  out[ 7][11].re = -in[ 4][11].re;
  out[ 7][11].im = -in[ 4][11].im;
  out[10][ 2].re =  in[ 1][ 2].re;
  out[10][ 2].im =  in[ 1][ 2].im;
  out[10][ 5].re =  in[ 1][ 5].re;
  out[10][ 5].im =  in[ 1][ 5].im;
  out[10][ 8].re =  in[ 1][ 8].re;
  out[10][ 8].im =  in[ 1][ 8].im;
  out[10][11].re =  in[ 1][11].re;
  out[10][11].im =  in[ 1][11].im;

  out[ 2][ 0].re =  in[11][ 0].re;
  out[ 2][ 0].im =  in[11][ 0].im;
  out[ 2][ 3].re =  in[11][ 3].re;
  out[ 2][ 3].im =  in[11][ 3].im;
  out[ 2][ 6].re =  in[11][ 6].re;
  out[ 2][ 6].im =  in[11][ 6].im;
  out[ 2][ 9].re =  in[11][ 9].re;
  out[ 2][ 9].im =  in[11][ 9].im;
  out[ 5][ 0].re = -in[ 8][ 0].re;
  out[ 5][ 0].im = -in[ 8][ 0].im;
  out[ 5][ 3].re = -in[ 8][ 3].re;
  out[ 5][ 3].im = -in[ 8][ 3].im;
  out[ 5][ 6].re = -in[ 8][ 6].re;
  out[ 5][ 6].im = -in[ 8][ 6].im;
  out[ 5][ 9].re = -in[ 8][ 9].re;
  out[ 5][ 9].im = -in[ 8][ 9].im;
  out[ 8][ 0].re = -in[ 5][ 0].re;
  out[ 8][ 0].im = -in[ 5][ 0].im;
  out[ 8][ 3].re = -in[ 5][ 3].re;
  out[ 8][ 3].im = -in[ 5][ 3].im;
  out[ 8][ 6].re = -in[ 5][ 6].re;
  out[ 8][ 6].im = -in[ 5][ 6].im;
  out[ 8][ 9].re = -in[ 5][ 9].re;
  out[ 8][ 9].im = -in[ 5][ 9].im;
  out[11][ 0].re =  in[ 2][ 0].re;
  out[11][ 0].im =  in[ 2][ 0].im;
  out[11][ 3].re =  in[ 2][ 3].re;
  out[11][ 3].im =  in[ 2][ 3].im;
  out[11][ 6].re =  in[ 2][ 6].re;
  out[11][ 6].im =  in[ 2][ 6].im;
  out[11][ 9].re =  in[ 2][ 9].re;
  out[11][ 9].im =  in[ 2][ 9].im;

  out[ 2][ 1].re =  in[11][ 1].re;
  out[ 2][ 1].im =  in[11][ 1].im;
  out[ 2][ 4].re =  in[11][ 4].re;
  out[ 2][ 4].im =  in[11][ 4].im;
  out[ 2][ 7].re =  in[11][ 7].re;
  out[ 2][ 7].im =  in[11][ 7].im;
  out[ 2][10].re =  in[11][10].re;
  out[ 2][10].im =  in[11][10].im;
  out[ 5][ 1].re = -in[ 8][ 1].re;
  out[ 5][ 1].im = -in[ 8][ 1].im;
  out[ 5][ 4].re = -in[ 8][ 4].re;
  out[ 5][ 4].im = -in[ 8][ 4].im;
  out[ 5][ 7].re = -in[ 8][ 7].re;
  out[ 5][ 7].im = -in[ 8][ 7].im;
  out[ 5][10].re = -in[ 8][10].re;
  out[ 5][10].im = -in[ 8][10].im;
  out[ 8][ 1].re = -in[ 5][ 1].re;
  out[ 8][ 1].im = -in[ 5][ 1].im;
  out[ 8][ 4].re = -in[ 5][ 4].re;
  out[ 8][ 4].im = -in[ 5][ 4].im;
  out[ 8][ 7].re = -in[ 5][ 7].re;
  out[ 8][ 7].im = -in[ 5][ 7].im;
  out[ 8][10].re = -in[ 5][10].re;
  out[ 8][10].im = -in[ 5][10].im;
  out[11][ 1].re =  in[ 2][ 1].re;
  out[11][ 1].im =  in[ 2][ 1].im;
  out[11][ 4].re =  in[ 2][ 4].re;
  out[11][ 4].im =  in[ 2][ 4].im;
  out[11][ 7].re =  in[ 2][ 7].re;
  out[11][ 7].im =  in[ 2][ 7].im;
  out[11][10].re =  in[ 2][10].re;
  out[11][10].im =  in[ 2][10].im;

  out[ 2][ 2].re =  in[11][ 2].re;
  out[ 2][ 2].im =  in[11][ 2].im;
  out[ 2][ 5].re =  in[11][ 5].re;
  out[ 2][ 5].im =  in[11][ 5].im;
  out[ 2][ 8].re =  in[11][ 8].re;
  out[ 2][ 8].im =  in[11][ 8].im;
  out[ 2][11].re =  in[11][11].re;
  out[ 2][11].im =  in[11][11].im;
  out[ 5][ 2].re = -in[ 8][ 2].re;
  out[ 5][ 2].im = -in[ 8][ 2].im;
  out[ 5][ 5].re = -in[ 8][ 5].re;
  out[ 5][ 5].im = -in[ 8][ 5].im;
  out[ 5][ 8].re = -in[ 8][ 8].re;
  out[ 5][ 8].im = -in[ 8][ 8].im;
  out[ 5][11].re = -in[ 8][11].re;
  out[ 5][11].im = -in[ 8][11].im;
  out[ 8][ 2].re = -in[ 5][ 2].re;
  out[ 8][ 2].im = -in[ 5][ 2].im;
  out[ 8][ 5].re = -in[ 5][ 5].re;
  out[ 8][ 5].im = -in[ 5][ 5].im;
  out[ 8][ 8].re = -in[ 5][ 8].re;
  out[ 8][ 8].im = -in[ 5][ 8].im;
  out[ 8][11].re = -in[ 5][11].re;
  out[ 8][11].im = -in[ 5][11].im;
  out[11][ 2].re =  in[ 2][ 2].re;
  out[11][ 2].im =  in[ 2][ 2].im;
  out[11][ 5].re =  in[ 2][ 5].re;
  out[11][ 5].im =  in[ 2][ 5].im;
  out[11][ 8].re =  in[ 2][ 8].re;
  out[11][ 8].im =  in[ 2][ 8].im;
  out[11][11].re =  in[ 2][11].re;
  out[11][11].im =  in[ 2][11].im;


  return;
}

/* multiply prop by \gamma_z from the left */
__inline__ void
prop_gamma_z_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 6][ 0].im;
  out[ 0][ 0].im =  in[ 6][ 0].re;
  out[ 0][ 3].re = -in[ 6][ 3].im;
  out[ 0][ 3].im =  in[ 6][ 3].re;
  out[ 0][ 6].re = -in[ 6][ 6].im;
  out[ 0][ 6].im =  in[ 6][ 6].re;
  out[ 0][ 9].re = -in[ 6][ 9].im;
  out[ 0][ 9].im =  in[ 6][ 9].re;
  out[ 3][ 0].re =  in[ 9][ 0].im;
  out[ 3][ 0].im = -in[ 9][ 0].re;
  out[ 3][ 3].re =  in[ 9][ 3].im;
  out[ 3][ 3].im = -in[ 9][ 3].re;
  out[ 3][ 6].re =  in[ 9][ 6].im;
  out[ 3][ 6].im = -in[ 9][ 6].re;
  out[ 3][ 9].re =  in[ 9][ 9].im;
  out[ 3][ 9].im = -in[ 9][ 9].re;
  out[ 6][ 0].re =  in[ 0][ 0].im;
  out[ 6][ 0].im = -in[ 0][ 0].re;
  out[ 6][ 3].re =  in[ 0][ 3].im;
  out[ 6][ 3].im = -in[ 0][ 3].re;
  out[ 6][ 6].re =  in[ 0][ 6].im;
  out[ 6][ 6].im = -in[ 0][ 6].re;
  out[ 6][ 9].re =  in[ 0][ 9].im;
  out[ 6][ 9].im = -in[ 0][ 9].re;
  out[ 9][ 0].re = -in[ 3][ 0].im;
  out[ 9][ 0].im =  in[ 3][ 0].re;
  out[ 9][ 3].re = -in[ 3][ 3].im;
  out[ 9][ 3].im =  in[ 3][ 3].re;
  out[ 9][ 6].re = -in[ 3][ 6].im;
  out[ 9][ 6].im =  in[ 3][ 6].re;
  out[ 9][ 9].re = -in[ 3][ 9].im;
  out[ 9][ 9].im =  in[ 3][ 9].re;

  out[ 0][ 1].re = -in[ 6][ 1].im;
  out[ 0][ 1].im =  in[ 6][ 1].re;
  out[ 0][ 4].re = -in[ 6][ 4].im;
  out[ 0][ 4].im =  in[ 6][ 4].re;
  out[ 0][ 7].re = -in[ 6][ 7].im;
  out[ 0][ 7].im =  in[ 6][ 7].re;
  out[ 0][10].re = -in[ 6][10].im;
  out[ 0][10].im =  in[ 6][10].re;
  out[ 3][ 1].re =  in[ 9][ 1].im;
  out[ 3][ 1].im = -in[ 9][ 1].re;
  out[ 3][ 4].re =  in[ 9][ 4].im;
  out[ 3][ 4].im = -in[ 9][ 4].re;
  out[ 3][ 7].re =  in[ 9][ 7].im;
  out[ 3][ 7].im = -in[ 9][ 7].re;
  out[ 3][10].re =  in[ 9][10].im;
  out[ 3][10].im = -in[ 9][10].re;
  out[ 6][ 1].re =  in[ 0][ 1].im;
  out[ 6][ 1].im = -in[ 0][ 1].re;
  out[ 6][ 4].re =  in[ 0][ 4].im;
  out[ 6][ 4].im = -in[ 0][ 4].re;
  out[ 6][ 7].re =  in[ 0][ 7].im;
  out[ 6][ 7].im = -in[ 0][ 7].re;
  out[ 6][10].re =  in[ 0][10].im;
  out[ 6][10].im = -in[ 0][10].re;
  out[ 9][ 1].re = -in[ 3][ 1].im;
  out[ 9][ 1].im =  in[ 3][ 1].re;
  out[ 9][ 4].re = -in[ 3][ 4].im;
  out[ 9][ 4].im =  in[ 3][ 4].re;
  out[ 9][ 7].re = -in[ 3][ 7].im;
  out[ 9][ 7].im =  in[ 3][ 7].re;
  out[ 9][10].re = -in[ 3][10].im;
  out[ 9][10].im =  in[ 3][10].re;

  out[ 0][ 2].re = -in[ 6][ 2].im;
  out[ 0][ 2].im =  in[ 6][ 2].re;
  out[ 0][ 5].re = -in[ 6][ 5].im;
  out[ 0][ 5].im =  in[ 6][ 5].re;
  out[ 0][ 8].re = -in[ 6][ 8].im;
  out[ 0][ 8].im =  in[ 6][ 8].re;
  out[ 0][11].re = -in[ 6][11].im;
  out[ 0][11].im =  in[ 6][11].re;
  out[ 3][ 2].re =  in[ 9][ 2].im;
  out[ 3][ 2].im = -in[ 9][ 2].re;
  out[ 3][ 5].re =  in[ 9][ 5].im;
  out[ 3][ 5].im = -in[ 9][ 5].re;
  out[ 3][ 8].re =  in[ 9][ 8].im;
  out[ 3][ 8].im = -in[ 9][ 8].re;
  out[ 3][11].re =  in[ 9][11].im;
  out[ 3][11].im = -in[ 9][11].re;
  out[ 6][ 2].re =  in[ 0][ 2].im;
  out[ 6][ 2].im = -in[ 0][ 2].re;
  out[ 6][ 5].re =  in[ 0][ 5].im;
  out[ 6][ 5].im = -in[ 0][ 5].re;
  out[ 6][ 8].re =  in[ 0][ 8].im;
  out[ 6][ 8].im = -in[ 0][ 8].re;
  out[ 6][11].re =  in[ 0][11].im;
  out[ 6][11].im = -in[ 0][11].re;
  out[ 9][ 2].re = -in[ 3][ 2].im;
  out[ 9][ 2].im =  in[ 3][ 2].re;
  out[ 9][ 5].re = -in[ 3][ 5].im;
  out[ 9][ 5].im =  in[ 3][ 5].re;
  out[ 9][ 8].re = -in[ 3][ 8].im;
  out[ 9][ 8].im =  in[ 3][ 8].re;
  out[ 9][11].re = -in[ 3][11].im;
  out[ 9][11].im =  in[ 3][11].re;

  out[ 1][ 0].re = -in[ 7][ 0].im;
  out[ 1][ 0].im =  in[ 7][ 0].re;
  out[ 1][ 3].re = -in[ 7][ 3].im;
  out[ 1][ 3].im =  in[ 7][ 3].re;
  out[ 1][ 6].re = -in[ 7][ 6].im;
  out[ 1][ 6].im =  in[ 7][ 6].re;
  out[ 1][ 9].re = -in[ 7][ 9].im;
  out[ 1][ 9].im =  in[ 7][ 9].re;
  out[ 4][ 0].re =  in[10][ 0].im;
  out[ 4][ 0].im = -in[10][ 0].re;
  out[ 4][ 3].re =  in[10][ 3].im;
  out[ 4][ 3].im = -in[10][ 3].re;
  out[ 4][ 6].re =  in[10][ 6].im;
  out[ 4][ 6].im = -in[10][ 6].re;
  out[ 4][ 9].re =  in[10][ 9].im;
  out[ 4][ 9].im = -in[10][ 9].re;
  out[ 7][ 0].re =  in[ 1][ 0].im;
  out[ 7][ 0].im = -in[ 1][ 0].re;
  out[ 7][ 3].re =  in[ 1][ 3].im;
  out[ 7][ 3].im = -in[ 1][ 3].re;
  out[ 7][ 6].re =  in[ 1][ 6].im;
  out[ 7][ 6].im = -in[ 1][ 6].re;
  out[ 7][ 9].re =  in[ 1][ 9].im;
  out[ 7][ 9].im = -in[ 1][ 9].re;
  out[10][ 0].re = -in[ 4][ 0].im;
  out[10][ 0].im =  in[ 4][ 0].re;
  out[10][ 3].re = -in[ 4][ 3].im;
  out[10][ 3].im =  in[ 4][ 3].re;
  out[10][ 6].re = -in[ 4][ 6].im;
  out[10][ 6].im =  in[ 4][ 6].re;
  out[10][ 9].re = -in[ 4][ 9].im;
  out[10][ 9].im =  in[ 4][ 9].re;

  out[ 1][ 1].re = -in[ 7][ 1].im;
  out[ 1][ 1].im =  in[ 7][ 1].re;
  out[ 1][ 4].re = -in[ 7][ 4].im;
  out[ 1][ 4].im =  in[ 7][ 4].re;
  out[ 1][ 7].re = -in[ 7][ 7].im;
  out[ 1][ 7].im =  in[ 7][ 7].re;
  out[ 1][10].re = -in[ 7][10].im;
  out[ 1][10].im =  in[ 7][10].re;
  out[ 4][ 1].re =  in[10][ 1].im;
  out[ 4][ 1].im = -in[10][ 1].re;
  out[ 4][ 4].re =  in[10][ 4].im;
  out[ 4][ 4].im = -in[10][ 4].re;
  out[ 4][ 7].re =  in[10][ 7].im;
  out[ 4][ 7].im = -in[10][ 7].re;
  out[ 4][10].re =  in[10][10].im;
  out[ 4][10].im = -in[10][10].re;
  out[ 7][ 1].re =  in[ 1][ 1].im;
  out[ 7][ 1].im = -in[ 1][ 1].re;
  out[ 7][ 4].re =  in[ 1][ 4].im;
  out[ 7][ 4].im = -in[ 1][ 4].re;
  out[ 7][ 7].re =  in[ 1][ 7].im;
  out[ 7][ 7].im = -in[ 1][ 7].re;
  out[ 7][10].re =  in[ 1][10].im;
  out[ 7][10].im = -in[ 1][10].re;
  out[10][ 1].re = -in[ 4][ 1].im;
  out[10][ 1].im =  in[ 4][ 1].re;
  out[10][ 4].re = -in[ 4][ 4].im;
  out[10][ 4].im =  in[ 4][ 4].re;
  out[10][ 7].re = -in[ 4][ 7].im;
  out[10][ 7].im =  in[ 4][ 7].re;
  out[10][10].re = -in[ 4][10].im;
  out[10][10].im =  in[ 4][10].re;

  out[ 1][ 2].re = -in[ 7][ 2].im;
  out[ 1][ 2].im =  in[ 7][ 2].re;
  out[ 1][ 5].re = -in[ 7][ 5].im;
  out[ 1][ 5].im =  in[ 7][ 5].re;
  out[ 1][ 8].re = -in[ 7][ 8].im;
  out[ 1][ 8].im =  in[ 7][ 8].re;
  out[ 1][11].re = -in[ 7][11].im;
  out[ 1][11].im =  in[ 7][11].re;
  out[ 4][ 2].re =  in[10][ 2].im;
  out[ 4][ 2].im = -in[10][ 2].re;
  out[ 4][ 5].re =  in[10][ 5].im;
  out[ 4][ 5].im = -in[10][ 5].re;
  out[ 4][ 8].re =  in[10][ 8].im;
  out[ 4][ 8].im = -in[10][ 8].re;
  out[ 4][11].re =  in[10][11].im;
  out[ 4][11].im = -in[10][11].re;
  out[ 7][ 2].re =  in[ 1][ 2].im;
  out[ 7][ 2].im = -in[ 1][ 2].re;
  out[ 7][ 5].re =  in[ 1][ 5].im;
  out[ 7][ 5].im = -in[ 1][ 5].re;
  out[ 7][ 8].re =  in[ 1][ 8].im;
  out[ 7][ 8].im = -in[ 1][ 8].re;
  out[ 7][11].re =  in[ 1][11].im;
  out[ 7][11].im = -in[ 1][11].re;
  out[10][ 2].re = -in[ 4][ 2].im;
  out[10][ 2].im =  in[ 4][ 2].re;
  out[10][ 5].re = -in[ 4][ 5].im;
  out[10][ 5].im =  in[ 4][ 5].re;
  out[10][ 8].re = -in[ 4][ 8].im;
  out[10][ 8].im =  in[ 4][ 8].re;
  out[10][11].re = -in[ 4][11].im;
  out[10][11].im =  in[ 4][11].re;

  out[ 2][ 0].re = -in[ 8][ 0].im;
  out[ 2][ 0].im =  in[ 8][ 0].re;
  out[ 2][ 3].re = -in[ 8][ 3].im;
  out[ 2][ 3].im =  in[ 8][ 3].re;
  out[ 2][ 6].re = -in[ 8][ 6].im;
  out[ 2][ 6].im =  in[ 8][ 6].re;
  out[ 2][ 9].re = -in[ 8][ 9].im;
  out[ 2][ 9].im =  in[ 8][ 9].re;
  out[ 5][ 0].re =  in[11][ 0].im;
  out[ 5][ 0].im = -in[11][ 0].re;
  out[ 5][ 3].re =  in[11][ 3].im;
  out[ 5][ 3].im = -in[11][ 3].re;
  out[ 5][ 6].re =  in[11][ 6].im;
  out[ 5][ 6].im = -in[11][ 6].re;
  out[ 5][ 9].re =  in[11][ 9].im;
  out[ 5][ 9].im = -in[11][ 9].re;
  out[ 8][ 0].re =  in[ 2][ 0].im;
  out[ 8][ 0].im = -in[ 2][ 0].re;
  out[ 8][ 3].re =  in[ 2][ 3].im;
  out[ 8][ 3].im = -in[ 2][ 3].re;
  out[ 8][ 6].re =  in[ 2][ 6].im;
  out[ 8][ 6].im = -in[ 2][ 6].re;
  out[ 8][ 9].re =  in[ 2][ 9].im;
  out[ 8][ 9].im = -in[ 2][ 9].re;
  out[11][ 0].re = -in[ 5][ 0].im;
  out[11][ 0].im =  in[ 5][ 0].re;
  out[11][ 3].re = -in[ 5][ 3].im;
  out[11][ 3].im =  in[ 5][ 3].re;
  out[11][ 6].re = -in[ 5][ 6].im;
  out[11][ 6].im =  in[ 5][ 6].re;
  out[11][ 9].re = -in[ 5][ 9].im;
  out[11][ 9].im =  in[ 5][ 9].re;

  out[ 2][ 1].re = -in[ 8][ 1].im;
  out[ 2][ 1].im =  in[ 8][ 1].re;
  out[ 2][ 4].re = -in[ 8][ 4].im;
  out[ 2][ 4].im =  in[ 8][ 4].re;
  out[ 2][ 7].re = -in[ 8][ 7].im;
  out[ 2][ 7].im =  in[ 8][ 7].re;
  out[ 2][10].re = -in[ 8][10].im;
  out[ 2][10].im =  in[ 8][10].re;
  out[ 5][ 1].re =  in[11][ 1].im;
  out[ 5][ 1].im = -in[11][ 1].re;
  out[ 5][ 4].re =  in[11][ 4].im;
  out[ 5][ 4].im = -in[11][ 4].re;
  out[ 5][ 7].re =  in[11][ 7].im;
  out[ 5][ 7].im = -in[11][ 7].re;
  out[ 5][10].re =  in[11][10].im;
  out[ 5][10].im = -in[11][10].re;
  out[ 8][ 1].re =  in[ 2][ 1].im;
  out[ 8][ 1].im = -in[ 2][ 1].re;
  out[ 8][ 4].re =  in[ 2][ 4].im;
  out[ 8][ 4].im = -in[ 2][ 4].re;
  out[ 8][ 7].re =  in[ 2][ 7].im;
  out[ 8][ 7].im = -in[ 2][ 7].re;
  out[ 8][10].re =  in[ 2][10].im;
  out[ 8][10].im = -in[ 2][10].re;
  out[11][ 1].re = -in[ 5][ 1].im;
  out[11][ 1].im =  in[ 5][ 1].re;
  out[11][ 4].re = -in[ 5][ 4].im;
  out[11][ 4].im =  in[ 5][ 4].re;
  out[11][ 7].re = -in[ 5][ 7].im;
  out[11][ 7].im =  in[ 5][ 7].re;
  out[11][10].re = -in[ 5][10].im;
  out[11][10].im =  in[ 5][10].re;

  out[ 2][ 2].re = -in[ 8][ 2].im;
  out[ 2][ 2].im =  in[ 8][ 2].re;
  out[ 2][ 5].re = -in[ 8][ 5].im;
  out[ 2][ 5].im =  in[ 8][ 5].re;
  out[ 2][ 8].re = -in[ 8][ 8].im;
  out[ 2][ 8].im =  in[ 8][ 8].re;
  out[ 2][11].re = -in[ 8][11].im;
  out[ 2][11].im =  in[ 8][11].re;
  out[ 5][ 2].re =  in[11][ 2].im;
  out[ 5][ 2].im = -in[11][ 2].re;
  out[ 5][ 5].re =  in[11][ 5].im;
  out[ 5][ 5].im = -in[11][ 5].re;
  out[ 5][ 8].re =  in[11][ 8].im;
  out[ 5][ 8].im = -in[11][ 8].re;
  out[ 5][11].re =  in[11][11].im;
  out[ 5][11].im = -in[11][11].re;
  out[ 8][ 2].re =  in[ 2][ 2].im;
  out[ 8][ 2].im = -in[ 2][ 2].re;
  out[ 8][ 5].re =  in[ 2][ 5].im;
  out[ 8][ 5].im = -in[ 2][ 5].re;
  out[ 8][ 8].re =  in[ 2][ 8].im;
  out[ 8][ 8].im = -in[ 2][ 8].re;
  out[ 8][11].re =  in[ 2][11].im;
  out[ 8][11].im = -in[ 2][11].re;
  out[11][ 2].re = -in[ 5][ 2].im;
  out[11][ 2].im =  in[ 5][ 2].re;
  out[11][ 5].re = -in[ 5][ 5].im;
  out[11][ 5].im =  in[ 5][ 5].re;
  out[11][ 8].re = -in[ 5][ 8].im;
  out[11][ 8].im =  in[ 5][ 8].re;
  out[11][11].re = -in[ 5][11].im;
  out[11][11].im =  in[ 5][11].re;


  return;
}

/* multiply prop by \gamma_t from the left */
__inline__ void
prop_gamma_t_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 3].re =  in[ 0][ 3].re;
  out[ 0][ 3].im =  in[ 0][ 3].im;
  out[ 0][ 6].re =  in[ 0][ 6].re;
  out[ 0][ 6].im =  in[ 0][ 6].im;
  out[ 0][ 9].re =  in[ 0][ 9].re;
  out[ 0][ 9].im =  in[ 0][ 9].im;
  out[ 3][ 0].re =  in[ 3][ 0].re;
  out[ 3][ 0].im =  in[ 3][ 0].im;
  out[ 3][ 3].re =  in[ 3][ 3].re;
  out[ 3][ 3].im =  in[ 3][ 3].im;
  out[ 3][ 6].re =  in[ 3][ 6].re;
  out[ 3][ 6].im =  in[ 3][ 6].im;
  out[ 3][ 9].re =  in[ 3][ 9].re;
  out[ 3][ 9].im =  in[ 3][ 9].im;
  out[ 6][ 0].re = -in[ 6][ 0].re;
  out[ 6][ 0].im = -in[ 6][ 0].im;
  out[ 6][ 3].re = -in[ 6][ 3].re;
  out[ 6][ 3].im = -in[ 6][ 3].im;
  out[ 6][ 6].re = -in[ 6][ 6].re;
  out[ 6][ 6].im = -in[ 6][ 6].im;
  out[ 6][ 9].re = -in[ 6][ 9].re;
  out[ 6][ 9].im = -in[ 6][ 9].im;
  out[ 9][ 0].re = -in[ 9][ 0].re;
  out[ 9][ 0].im = -in[ 9][ 0].im;
  out[ 9][ 3].re = -in[ 9][ 3].re;
  out[ 9][ 3].im = -in[ 9][ 3].im;
  out[ 9][ 6].re = -in[ 9][ 6].re;
  out[ 9][ 6].im = -in[ 9][ 6].im;
  out[ 9][ 9].re = -in[ 9][ 9].re;
  out[ 9][ 9].im = -in[ 9][ 9].im;

  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 4].re =  in[ 0][ 4].re;
  out[ 0][ 4].im =  in[ 0][ 4].im;
  out[ 0][ 7].re =  in[ 0][ 7].re;
  out[ 0][ 7].im =  in[ 0][ 7].im;
  out[ 0][10].re =  in[ 0][10].re;
  out[ 0][10].im =  in[ 0][10].im;
  out[ 3][ 1].re =  in[ 3][ 1].re;
  out[ 3][ 1].im =  in[ 3][ 1].im;
  out[ 3][ 4].re =  in[ 3][ 4].re;
  out[ 3][ 4].im =  in[ 3][ 4].im;
  out[ 3][ 7].re =  in[ 3][ 7].re;
  out[ 3][ 7].im =  in[ 3][ 7].im;
  out[ 3][10].re =  in[ 3][10].re;
  out[ 3][10].im =  in[ 3][10].im;
  out[ 6][ 1].re = -in[ 6][ 1].re;
  out[ 6][ 1].im = -in[ 6][ 1].im;
  out[ 6][ 4].re = -in[ 6][ 4].re;
  out[ 6][ 4].im = -in[ 6][ 4].im;
  out[ 6][ 7].re = -in[ 6][ 7].re;
  out[ 6][ 7].im = -in[ 6][ 7].im;
  out[ 6][10].re = -in[ 6][10].re;
  out[ 6][10].im = -in[ 6][10].im;
  out[ 9][ 1].re = -in[ 9][ 1].re;
  out[ 9][ 1].im = -in[ 9][ 1].im;
  out[ 9][ 4].re = -in[ 9][ 4].re;
  out[ 9][ 4].im = -in[ 9][ 4].im;
  out[ 9][ 7].re = -in[ 9][ 7].re;
  out[ 9][ 7].im = -in[ 9][ 7].im;
  out[ 9][10].re = -in[ 9][10].re;
  out[ 9][10].im = -in[ 9][10].im;

  out[ 0][ 2].re =  in[ 0][ 2].re;
  out[ 0][ 2].im =  in[ 0][ 2].im;
  out[ 0][ 5].re =  in[ 0][ 5].re;
  out[ 0][ 5].im =  in[ 0][ 5].im;
  out[ 0][ 8].re =  in[ 0][ 8].re;
  out[ 0][ 8].im =  in[ 0][ 8].im;
  out[ 0][11].re =  in[ 0][11].re;
  out[ 0][11].im =  in[ 0][11].im;
  out[ 3][ 2].re =  in[ 3][ 2].re;
  out[ 3][ 2].im =  in[ 3][ 2].im;
  out[ 3][ 5].re =  in[ 3][ 5].re;
  out[ 3][ 5].im =  in[ 3][ 5].im;
  out[ 3][ 8].re =  in[ 3][ 8].re;
  out[ 3][ 8].im =  in[ 3][ 8].im;
  out[ 3][11].re =  in[ 3][11].re;
  out[ 3][11].im =  in[ 3][11].im;
  out[ 6][ 2].re = -in[ 6][ 2].re;
  out[ 6][ 2].im = -in[ 6][ 2].im;
  out[ 6][ 5].re = -in[ 6][ 5].re;
  out[ 6][ 5].im = -in[ 6][ 5].im;
  out[ 6][ 8].re = -in[ 6][ 8].re;
  out[ 6][ 8].im = -in[ 6][ 8].im;
  out[ 6][11].re = -in[ 6][11].re;
  out[ 6][11].im = -in[ 6][11].im;
  out[ 9][ 2].re = -in[ 9][ 2].re;
  out[ 9][ 2].im = -in[ 9][ 2].im;
  out[ 9][ 5].re = -in[ 9][ 5].re;
  out[ 9][ 5].im = -in[ 9][ 5].im;
  out[ 9][ 8].re = -in[ 9][ 8].re;
  out[ 9][ 8].im = -in[ 9][ 8].im;
  out[ 9][11].re = -in[ 9][11].re;
  out[ 9][11].im = -in[ 9][11].im;

  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 3].re =  in[ 1][ 3].re;
  out[ 1][ 3].im =  in[ 1][ 3].im;
  out[ 1][ 6].re =  in[ 1][ 6].re;
  out[ 1][ 6].im =  in[ 1][ 6].im;
  out[ 1][ 9].re =  in[ 1][ 9].re;
  out[ 1][ 9].im =  in[ 1][ 9].im;
  out[ 4][ 0].re =  in[ 4][ 0].re;
  out[ 4][ 0].im =  in[ 4][ 0].im;
  out[ 4][ 3].re =  in[ 4][ 3].re;
  out[ 4][ 3].im =  in[ 4][ 3].im;
  out[ 4][ 6].re =  in[ 4][ 6].re;
  out[ 4][ 6].im =  in[ 4][ 6].im;
  out[ 4][ 9].re =  in[ 4][ 9].re;
  out[ 4][ 9].im =  in[ 4][ 9].im;
  out[ 7][ 0].re = -in[ 7][ 0].re;
  out[ 7][ 0].im = -in[ 7][ 0].im;
  out[ 7][ 3].re = -in[ 7][ 3].re;
  out[ 7][ 3].im = -in[ 7][ 3].im;
  out[ 7][ 6].re = -in[ 7][ 6].re;
  out[ 7][ 6].im = -in[ 7][ 6].im;
  out[ 7][ 9].re = -in[ 7][ 9].re;
  out[ 7][ 9].im = -in[ 7][ 9].im;
  out[10][ 0].re = -in[10][ 0].re;
  out[10][ 0].im = -in[10][ 0].im;
  out[10][ 3].re = -in[10][ 3].re;
  out[10][ 3].im = -in[10][ 3].im;
  out[10][ 6].re = -in[10][ 6].re;
  out[10][ 6].im = -in[10][ 6].im;
  out[10][ 9].re = -in[10][ 9].re;
  out[10][ 9].im = -in[10][ 9].im;

  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 4].re =  in[ 1][ 4].re;
  out[ 1][ 4].im =  in[ 1][ 4].im;
  out[ 1][ 7].re =  in[ 1][ 7].re;
  out[ 1][ 7].im =  in[ 1][ 7].im;
  out[ 1][10].re =  in[ 1][10].re;
  out[ 1][10].im =  in[ 1][10].im;
  out[ 4][ 1].re =  in[ 4][ 1].re;
  out[ 4][ 1].im =  in[ 4][ 1].im;
  out[ 4][ 4].re =  in[ 4][ 4].re;
  out[ 4][ 4].im =  in[ 4][ 4].im;
  out[ 4][ 7].re =  in[ 4][ 7].re;
  out[ 4][ 7].im =  in[ 4][ 7].im;
  out[ 4][10].re =  in[ 4][10].re;
  out[ 4][10].im =  in[ 4][10].im;
  out[ 7][ 1].re = -in[ 7][ 1].re;
  out[ 7][ 1].im = -in[ 7][ 1].im;
  out[ 7][ 4].re = -in[ 7][ 4].re;
  out[ 7][ 4].im = -in[ 7][ 4].im;
  out[ 7][ 7].re = -in[ 7][ 7].re;
  out[ 7][ 7].im = -in[ 7][ 7].im;
  out[ 7][10].re = -in[ 7][10].re;
  out[ 7][10].im = -in[ 7][10].im;
  out[10][ 1].re = -in[10][ 1].re;
  out[10][ 1].im = -in[10][ 1].im;
  out[10][ 4].re = -in[10][ 4].re;
  out[10][ 4].im = -in[10][ 4].im;
  out[10][ 7].re = -in[10][ 7].re;
  out[10][ 7].im = -in[10][ 7].im;
  out[10][10].re = -in[10][10].re;
  out[10][10].im = -in[10][10].im;

  out[ 1][ 2].re =  in[ 1][ 2].re;
  out[ 1][ 2].im =  in[ 1][ 2].im;
  out[ 1][ 5].re =  in[ 1][ 5].re;
  out[ 1][ 5].im =  in[ 1][ 5].im;
  out[ 1][ 8].re =  in[ 1][ 8].re;
  out[ 1][ 8].im =  in[ 1][ 8].im;
  out[ 1][11].re =  in[ 1][11].re;
  out[ 1][11].im =  in[ 1][11].im;
  out[ 4][ 2].re =  in[ 4][ 2].re;
  out[ 4][ 2].im =  in[ 4][ 2].im;
  out[ 4][ 5].re =  in[ 4][ 5].re;
  out[ 4][ 5].im =  in[ 4][ 5].im;
  out[ 4][ 8].re =  in[ 4][ 8].re;
  out[ 4][ 8].im =  in[ 4][ 8].im;
  out[ 4][11].re =  in[ 4][11].re;
  out[ 4][11].im =  in[ 4][11].im;
  out[ 7][ 2].re = -in[ 7][ 2].re;
  out[ 7][ 2].im = -in[ 7][ 2].im;
  out[ 7][ 5].re = -in[ 7][ 5].re;
  out[ 7][ 5].im = -in[ 7][ 5].im;
  out[ 7][ 8].re = -in[ 7][ 8].re;
  out[ 7][ 8].im = -in[ 7][ 8].im;
  out[ 7][11].re = -in[ 7][11].re;
  out[ 7][11].im = -in[ 7][11].im;
  out[10][ 2].re = -in[10][ 2].re;
  out[10][ 2].im = -in[10][ 2].im;
  out[10][ 5].re = -in[10][ 5].re;
  out[10][ 5].im = -in[10][ 5].im;
  out[10][ 8].re = -in[10][ 8].re;
  out[10][ 8].im = -in[10][ 8].im;
  out[10][11].re = -in[10][11].re;
  out[10][11].im = -in[10][11].im;

  out[ 2][ 0].re =  in[ 2][ 0].re;
  out[ 2][ 0].im =  in[ 2][ 0].im;
  out[ 2][ 3].re =  in[ 2][ 3].re;
  out[ 2][ 3].im =  in[ 2][ 3].im;
  out[ 2][ 6].re =  in[ 2][ 6].re;
  out[ 2][ 6].im =  in[ 2][ 6].im;
  out[ 2][ 9].re =  in[ 2][ 9].re;
  out[ 2][ 9].im =  in[ 2][ 9].im;
  out[ 5][ 0].re =  in[ 5][ 0].re;
  out[ 5][ 0].im =  in[ 5][ 0].im;
  out[ 5][ 3].re =  in[ 5][ 3].re;
  out[ 5][ 3].im =  in[ 5][ 3].im;
  out[ 5][ 6].re =  in[ 5][ 6].re;
  out[ 5][ 6].im =  in[ 5][ 6].im;
  out[ 5][ 9].re =  in[ 5][ 9].re;
  out[ 5][ 9].im =  in[ 5][ 9].im;
  out[ 8][ 0].re = -in[ 8][ 0].re;
  out[ 8][ 0].im = -in[ 8][ 0].im;
  out[ 8][ 3].re = -in[ 8][ 3].re;
  out[ 8][ 3].im = -in[ 8][ 3].im;
  out[ 8][ 6].re = -in[ 8][ 6].re;
  out[ 8][ 6].im = -in[ 8][ 6].im;
  out[ 8][ 9].re = -in[ 8][ 9].re;
  out[ 8][ 9].im = -in[ 8][ 9].im;
  out[11][ 0].re = -in[11][ 0].re;
  out[11][ 0].im = -in[11][ 0].im;
  out[11][ 3].re = -in[11][ 3].re;
  out[11][ 3].im = -in[11][ 3].im;
  out[11][ 6].re = -in[11][ 6].re;
  out[11][ 6].im = -in[11][ 6].im;
  out[11][ 9].re = -in[11][ 9].re;
  out[11][ 9].im = -in[11][ 9].im;

  out[ 2][ 1].re =  in[ 2][ 1].re;
  out[ 2][ 1].im =  in[ 2][ 1].im;
  out[ 2][ 4].re =  in[ 2][ 4].re;
  out[ 2][ 4].im =  in[ 2][ 4].im;
  out[ 2][ 7].re =  in[ 2][ 7].re;
  out[ 2][ 7].im =  in[ 2][ 7].im;
  out[ 2][10].re =  in[ 2][10].re;
  out[ 2][10].im =  in[ 2][10].im;
  out[ 5][ 1].re =  in[ 5][ 1].re;
  out[ 5][ 1].im =  in[ 5][ 1].im;
  out[ 5][ 4].re =  in[ 5][ 4].re;
  out[ 5][ 4].im =  in[ 5][ 4].im;
  out[ 5][ 7].re =  in[ 5][ 7].re;
  out[ 5][ 7].im =  in[ 5][ 7].im;
  out[ 5][10].re =  in[ 5][10].re;
  out[ 5][10].im =  in[ 5][10].im;
  out[ 8][ 1].re = -in[ 8][ 1].re;
  out[ 8][ 1].im = -in[ 8][ 1].im;
  out[ 8][ 4].re = -in[ 8][ 4].re;
  out[ 8][ 4].im = -in[ 8][ 4].im;
  out[ 8][ 7].re = -in[ 8][ 7].re;
  out[ 8][ 7].im = -in[ 8][ 7].im;
  out[ 8][10].re = -in[ 8][10].re;
  out[ 8][10].im = -in[ 8][10].im;
  out[11][ 1].re = -in[11][ 1].re;
  out[11][ 1].im = -in[11][ 1].im;
  out[11][ 4].re = -in[11][ 4].re;
  out[11][ 4].im = -in[11][ 4].im;
  out[11][ 7].re = -in[11][ 7].re;
  out[11][ 7].im = -in[11][ 7].im;
  out[11][10].re = -in[11][10].re;
  out[11][10].im = -in[11][10].im;

  out[ 2][ 2].re =  in[ 2][ 2].re;
  out[ 2][ 2].im =  in[ 2][ 2].im;
  out[ 2][ 5].re =  in[ 2][ 5].re;
  out[ 2][ 5].im =  in[ 2][ 5].im;
  out[ 2][ 8].re =  in[ 2][ 8].re;
  out[ 2][ 8].im =  in[ 2][ 8].im;
  out[ 2][11].re =  in[ 2][11].re;
  out[ 2][11].im =  in[ 2][11].im;
  out[ 5][ 2].re =  in[ 5][ 2].re;
  out[ 5][ 2].im =  in[ 5][ 2].im;
  out[ 5][ 5].re =  in[ 5][ 5].re;
  out[ 5][ 5].im =  in[ 5][ 5].im;
  out[ 5][ 8].re =  in[ 5][ 8].re;
  out[ 5][ 8].im =  in[ 5][ 8].im;
  out[ 5][11].re =  in[ 5][11].re;
  out[ 5][11].im =  in[ 5][11].im;
  out[ 8][ 2].re = -in[ 8][ 2].re;
  out[ 8][ 2].im = -in[ 8][ 2].im;
  out[ 8][ 5].re = -in[ 8][ 5].re;
  out[ 8][ 5].im = -in[ 8][ 5].im;
  out[ 8][ 8].re = -in[ 8][ 8].re;
  out[ 8][ 8].im = -in[ 8][ 8].im;
  out[ 8][11].re = -in[ 8][11].re;
  out[ 8][11].im = -in[ 8][11].im;
  out[11][ 2].re = -in[11][ 2].re;
  out[11][ 2].im = -in[11][ 2].im;
  out[11][ 5].re = -in[11][ 5].re;
  out[11][ 5].im = -in[11][ 5].im;
  out[11][ 8].re = -in[11][ 8].re;
  out[11][ 8].im = -in[11][ 8].im;
  out[11][11].re = -in[11][11].re;
  out[11][11].im = -in[11][11].im;


  return;
}

/* multiply prop by \gamma_5 from the left */
__inline__ void
prop_gamma_5_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 6][ 0].re;
  out[ 0][ 0].im =  in[ 6][ 0].im;
  out[ 0][ 3].re =  in[ 6][ 3].re;
  out[ 0][ 3].im =  in[ 6][ 3].im;
  out[ 0][ 6].re =  in[ 6][ 6].re;
  out[ 0][ 6].im =  in[ 6][ 6].im;
  out[ 0][ 9].re =  in[ 6][ 9].re;
  out[ 0][ 9].im =  in[ 6][ 9].im;
  out[ 3][ 0].re =  in[ 9][ 0].re;
  out[ 3][ 0].im =  in[ 9][ 0].im;
  out[ 3][ 3].re =  in[ 9][ 3].re;
  out[ 3][ 3].im =  in[ 9][ 3].im;
  out[ 3][ 6].re =  in[ 9][ 6].re;
  out[ 3][ 6].im =  in[ 9][ 6].im;
  out[ 3][ 9].re =  in[ 9][ 9].re;
  out[ 3][ 9].im =  in[ 9][ 9].im;
  out[ 6][ 0].re =  in[ 0][ 0].re;
  out[ 6][ 0].im =  in[ 0][ 0].im;
  out[ 6][ 3].re =  in[ 0][ 3].re;
  out[ 6][ 3].im =  in[ 0][ 3].im;
  out[ 6][ 6].re =  in[ 0][ 6].re;
  out[ 6][ 6].im =  in[ 0][ 6].im;
  out[ 6][ 9].re =  in[ 0][ 9].re;
  out[ 6][ 9].im =  in[ 0][ 9].im;
  out[ 9][ 0].re =  in[ 3][ 0].re;
  out[ 9][ 0].im =  in[ 3][ 0].im;
  out[ 9][ 3].re =  in[ 3][ 3].re;
  out[ 9][ 3].im =  in[ 3][ 3].im;
  out[ 9][ 6].re =  in[ 3][ 6].re;
  out[ 9][ 6].im =  in[ 3][ 6].im;
  out[ 9][ 9].re =  in[ 3][ 9].re;
  out[ 9][ 9].im =  in[ 3][ 9].im;

  out[ 0][ 1].re =  in[ 6][ 1].re;
  out[ 0][ 1].im =  in[ 6][ 1].im;
  out[ 0][ 4].re =  in[ 6][ 4].re;
  out[ 0][ 4].im =  in[ 6][ 4].im;
  out[ 0][ 7].re =  in[ 6][ 7].re;
  out[ 0][ 7].im =  in[ 6][ 7].im;
  out[ 0][10].re =  in[ 6][10].re;
  out[ 0][10].im =  in[ 6][10].im;
  out[ 3][ 1].re =  in[ 9][ 1].re;
  out[ 3][ 1].im =  in[ 9][ 1].im;
  out[ 3][ 4].re =  in[ 9][ 4].re;
  out[ 3][ 4].im =  in[ 9][ 4].im;
  out[ 3][ 7].re =  in[ 9][ 7].re;
  out[ 3][ 7].im =  in[ 9][ 7].im;
  out[ 3][10].re =  in[ 9][10].re;
  out[ 3][10].im =  in[ 9][10].im;
  out[ 6][ 1].re =  in[ 0][ 1].re;
  out[ 6][ 1].im =  in[ 0][ 1].im;
  out[ 6][ 4].re =  in[ 0][ 4].re;
  out[ 6][ 4].im =  in[ 0][ 4].im;
  out[ 6][ 7].re =  in[ 0][ 7].re;
  out[ 6][ 7].im =  in[ 0][ 7].im;
  out[ 6][10].re =  in[ 0][10].re;
  out[ 6][10].im =  in[ 0][10].im;
  out[ 9][ 1].re =  in[ 3][ 1].re;
  out[ 9][ 1].im =  in[ 3][ 1].im;
  out[ 9][ 4].re =  in[ 3][ 4].re;
  out[ 9][ 4].im =  in[ 3][ 4].im;
  out[ 9][ 7].re =  in[ 3][ 7].re;
  out[ 9][ 7].im =  in[ 3][ 7].im;
  out[ 9][10].re =  in[ 3][10].re;
  out[ 9][10].im =  in[ 3][10].im;

  out[ 0][ 2].re =  in[ 6][ 2].re;
  out[ 0][ 2].im =  in[ 6][ 2].im;
  out[ 0][ 5].re =  in[ 6][ 5].re;
  out[ 0][ 5].im =  in[ 6][ 5].im;
  out[ 0][ 8].re =  in[ 6][ 8].re;
  out[ 0][ 8].im =  in[ 6][ 8].im;
  out[ 0][11].re =  in[ 6][11].re;
  out[ 0][11].im =  in[ 6][11].im;
  out[ 3][ 2].re =  in[ 9][ 2].re;
  out[ 3][ 2].im =  in[ 9][ 2].im;
  out[ 3][ 5].re =  in[ 9][ 5].re;
  out[ 3][ 5].im =  in[ 9][ 5].im;
  out[ 3][ 8].re =  in[ 9][ 8].re;
  out[ 3][ 8].im =  in[ 9][ 8].im;
  out[ 3][11].re =  in[ 9][11].re;
  out[ 3][11].im =  in[ 9][11].im;
  out[ 6][ 2].re =  in[ 0][ 2].re;
  out[ 6][ 2].im =  in[ 0][ 2].im;
  out[ 6][ 5].re =  in[ 0][ 5].re;
  out[ 6][ 5].im =  in[ 0][ 5].im;
  out[ 6][ 8].re =  in[ 0][ 8].re;
  out[ 6][ 8].im =  in[ 0][ 8].im;
  out[ 6][11].re =  in[ 0][11].re;
  out[ 6][11].im =  in[ 0][11].im;
  out[ 9][ 2].re =  in[ 3][ 2].re;
  out[ 9][ 2].im =  in[ 3][ 2].im;
  out[ 9][ 5].re =  in[ 3][ 5].re;
  out[ 9][ 5].im =  in[ 3][ 5].im;
  out[ 9][ 8].re =  in[ 3][ 8].re;
  out[ 9][ 8].im =  in[ 3][ 8].im;
  out[ 9][11].re =  in[ 3][11].re;
  out[ 9][11].im =  in[ 3][11].im;

  out[ 1][ 0].re =  in[ 7][ 0].re;
  out[ 1][ 0].im =  in[ 7][ 0].im;
  out[ 1][ 3].re =  in[ 7][ 3].re;
  out[ 1][ 3].im =  in[ 7][ 3].im;
  out[ 1][ 6].re =  in[ 7][ 6].re;
  out[ 1][ 6].im =  in[ 7][ 6].im;
  out[ 1][ 9].re =  in[ 7][ 9].re;
  out[ 1][ 9].im =  in[ 7][ 9].im;
  out[ 4][ 0].re =  in[10][ 0].re;
  out[ 4][ 0].im =  in[10][ 0].im;
  out[ 4][ 3].re =  in[10][ 3].re;
  out[ 4][ 3].im =  in[10][ 3].im;
  out[ 4][ 6].re =  in[10][ 6].re;
  out[ 4][ 6].im =  in[10][ 6].im;
  out[ 4][ 9].re =  in[10][ 9].re;
  out[ 4][ 9].im =  in[10][ 9].im;
  out[ 7][ 0].re =  in[ 1][ 0].re;
  out[ 7][ 0].im =  in[ 1][ 0].im;
  out[ 7][ 3].re =  in[ 1][ 3].re;
  out[ 7][ 3].im =  in[ 1][ 3].im;
  out[ 7][ 6].re =  in[ 1][ 6].re;
  out[ 7][ 6].im =  in[ 1][ 6].im;
  out[ 7][ 9].re =  in[ 1][ 9].re;
  out[ 7][ 9].im =  in[ 1][ 9].im;
  out[10][ 0].re =  in[ 4][ 0].re;
  out[10][ 0].im =  in[ 4][ 0].im;
  out[10][ 3].re =  in[ 4][ 3].re;
  out[10][ 3].im =  in[ 4][ 3].im;
  out[10][ 6].re =  in[ 4][ 6].re;
  out[10][ 6].im =  in[ 4][ 6].im;
  out[10][ 9].re =  in[ 4][ 9].re;
  out[10][ 9].im =  in[ 4][ 9].im;

  out[ 1][ 1].re =  in[ 7][ 1].re;
  out[ 1][ 1].im =  in[ 7][ 1].im;
  out[ 1][ 4].re =  in[ 7][ 4].re;
  out[ 1][ 4].im =  in[ 7][ 4].im;
  out[ 1][ 7].re =  in[ 7][ 7].re;
  out[ 1][ 7].im =  in[ 7][ 7].im;
  out[ 1][10].re =  in[ 7][10].re;
  out[ 1][10].im =  in[ 7][10].im;
  out[ 4][ 1].re =  in[10][ 1].re;
  out[ 4][ 1].im =  in[10][ 1].im;
  out[ 4][ 4].re =  in[10][ 4].re;
  out[ 4][ 4].im =  in[10][ 4].im;
  out[ 4][ 7].re =  in[10][ 7].re;
  out[ 4][ 7].im =  in[10][ 7].im;
  out[ 4][10].re =  in[10][10].re;
  out[ 4][10].im =  in[10][10].im;
  out[ 7][ 1].re =  in[ 1][ 1].re;
  out[ 7][ 1].im =  in[ 1][ 1].im;
  out[ 7][ 4].re =  in[ 1][ 4].re;
  out[ 7][ 4].im =  in[ 1][ 4].im;
  out[ 7][ 7].re =  in[ 1][ 7].re;
  out[ 7][ 7].im =  in[ 1][ 7].im;
  out[ 7][10].re =  in[ 1][10].re;
  out[ 7][10].im =  in[ 1][10].im;
  out[10][ 1].re =  in[ 4][ 1].re;
  out[10][ 1].im =  in[ 4][ 1].im;
  out[10][ 4].re =  in[ 4][ 4].re;
  out[10][ 4].im =  in[ 4][ 4].im;
  out[10][ 7].re =  in[ 4][ 7].re;
  out[10][ 7].im =  in[ 4][ 7].im;
  out[10][10].re =  in[ 4][10].re;
  out[10][10].im =  in[ 4][10].im;

  out[ 1][ 2].re =  in[ 7][ 2].re;
  out[ 1][ 2].im =  in[ 7][ 2].im;
  out[ 1][ 5].re =  in[ 7][ 5].re;
  out[ 1][ 5].im =  in[ 7][ 5].im;
  out[ 1][ 8].re =  in[ 7][ 8].re;
  out[ 1][ 8].im =  in[ 7][ 8].im;
  out[ 1][11].re =  in[ 7][11].re;
  out[ 1][11].im =  in[ 7][11].im;
  out[ 4][ 2].re =  in[10][ 2].re;
  out[ 4][ 2].im =  in[10][ 2].im;
  out[ 4][ 5].re =  in[10][ 5].re;
  out[ 4][ 5].im =  in[10][ 5].im;
  out[ 4][ 8].re =  in[10][ 8].re;
  out[ 4][ 8].im =  in[10][ 8].im;
  out[ 4][11].re =  in[10][11].re;
  out[ 4][11].im =  in[10][11].im;
  out[ 7][ 2].re =  in[ 1][ 2].re;
  out[ 7][ 2].im =  in[ 1][ 2].im;
  out[ 7][ 5].re =  in[ 1][ 5].re;
  out[ 7][ 5].im =  in[ 1][ 5].im;
  out[ 7][ 8].re =  in[ 1][ 8].re;
  out[ 7][ 8].im =  in[ 1][ 8].im;
  out[ 7][11].re =  in[ 1][11].re;
  out[ 7][11].im =  in[ 1][11].im;
  out[10][ 2].re =  in[ 4][ 2].re;
  out[10][ 2].im =  in[ 4][ 2].im;
  out[10][ 5].re =  in[ 4][ 5].re;
  out[10][ 5].im =  in[ 4][ 5].im;
  out[10][ 8].re =  in[ 4][ 8].re;
  out[10][ 8].im =  in[ 4][ 8].im;
  out[10][11].re =  in[ 4][11].re;
  out[10][11].im =  in[ 4][11].im;

  out[ 2][ 0].re =  in[ 8][ 0].re;
  out[ 2][ 0].im =  in[ 8][ 0].im;
  out[ 2][ 3].re =  in[ 8][ 3].re;
  out[ 2][ 3].im =  in[ 8][ 3].im;
  out[ 2][ 6].re =  in[ 8][ 6].re;
  out[ 2][ 6].im =  in[ 8][ 6].im;
  out[ 2][ 9].re =  in[ 8][ 9].re;
  out[ 2][ 9].im =  in[ 8][ 9].im;
  out[ 5][ 0].re =  in[11][ 0].re;
  out[ 5][ 0].im =  in[11][ 0].im;
  out[ 5][ 3].re =  in[11][ 3].re;
  out[ 5][ 3].im =  in[11][ 3].im;
  out[ 5][ 6].re =  in[11][ 6].re;
  out[ 5][ 6].im =  in[11][ 6].im;
  out[ 5][ 9].re =  in[11][ 9].re;
  out[ 5][ 9].im =  in[11][ 9].im;
  out[ 8][ 0].re =  in[ 2][ 0].re;
  out[ 8][ 0].im =  in[ 2][ 0].im;
  out[ 8][ 3].re =  in[ 2][ 3].re;
  out[ 8][ 3].im =  in[ 2][ 3].im;
  out[ 8][ 6].re =  in[ 2][ 6].re;
  out[ 8][ 6].im =  in[ 2][ 6].im;
  out[ 8][ 9].re =  in[ 2][ 9].re;
  out[ 8][ 9].im =  in[ 2][ 9].im;
  out[11][ 0].re =  in[ 5][ 0].re;
  out[11][ 0].im =  in[ 5][ 0].im;
  out[11][ 3].re =  in[ 5][ 3].re;
  out[11][ 3].im =  in[ 5][ 3].im;
  out[11][ 6].re =  in[ 5][ 6].re;
  out[11][ 6].im =  in[ 5][ 6].im;
  out[11][ 9].re =  in[ 5][ 9].re;
  out[11][ 9].im =  in[ 5][ 9].im;

  out[ 2][ 1].re =  in[ 8][ 1].re;
  out[ 2][ 1].im =  in[ 8][ 1].im;
  out[ 2][ 4].re =  in[ 8][ 4].re;
  out[ 2][ 4].im =  in[ 8][ 4].im;
  out[ 2][ 7].re =  in[ 8][ 7].re;
  out[ 2][ 7].im =  in[ 8][ 7].im;
  out[ 2][10].re =  in[ 8][10].re;
  out[ 2][10].im =  in[ 8][10].im;
  out[ 5][ 1].re =  in[11][ 1].re;
  out[ 5][ 1].im =  in[11][ 1].im;
  out[ 5][ 4].re =  in[11][ 4].re;
  out[ 5][ 4].im =  in[11][ 4].im;
  out[ 5][ 7].re =  in[11][ 7].re;
  out[ 5][ 7].im =  in[11][ 7].im;
  out[ 5][10].re =  in[11][10].re;
  out[ 5][10].im =  in[11][10].im;
  out[ 8][ 1].re =  in[ 2][ 1].re;
  out[ 8][ 1].im =  in[ 2][ 1].im;
  out[ 8][ 4].re =  in[ 2][ 4].re;
  out[ 8][ 4].im =  in[ 2][ 4].im;
  out[ 8][ 7].re =  in[ 2][ 7].re;
  out[ 8][ 7].im =  in[ 2][ 7].im;
  out[ 8][10].re =  in[ 2][10].re;
  out[ 8][10].im =  in[ 2][10].im;
  out[11][ 1].re =  in[ 5][ 1].re;
  out[11][ 1].im =  in[ 5][ 1].im;
  out[11][ 4].re =  in[ 5][ 4].re;
  out[11][ 4].im =  in[ 5][ 4].im;
  out[11][ 7].re =  in[ 5][ 7].re;
  out[11][ 7].im =  in[ 5][ 7].im;
  out[11][10].re =  in[ 5][10].re;
  out[11][10].im =  in[ 5][10].im;

  out[ 2][ 2].re =  in[ 8][ 2].re;
  out[ 2][ 2].im =  in[ 8][ 2].im;
  out[ 2][ 5].re =  in[ 8][ 5].re;
  out[ 2][ 5].im =  in[ 8][ 5].im;
  out[ 2][ 8].re =  in[ 8][ 8].re;
  out[ 2][ 8].im =  in[ 8][ 8].im;
  out[ 2][11].re =  in[ 8][11].re;
  out[ 2][11].im =  in[ 8][11].im;
  out[ 5][ 2].re =  in[11][ 2].re;
  out[ 5][ 2].im =  in[11][ 2].im;
  out[ 5][ 5].re =  in[11][ 5].re;
  out[ 5][ 5].im =  in[11][ 5].im;
  out[ 5][ 8].re =  in[11][ 8].re;
  out[ 5][ 8].im =  in[11][ 8].im;
  out[ 5][11].re =  in[11][11].re;
  out[ 5][11].im =  in[11][11].im;
  out[ 8][ 2].re =  in[ 2][ 2].re;
  out[ 8][ 2].im =  in[ 2][ 2].im;
  out[ 8][ 5].re =  in[ 2][ 5].re;
  out[ 8][ 5].im =  in[ 2][ 5].im;
  out[ 8][ 8].re =  in[ 2][ 8].re;
  out[ 8][ 8].im =  in[ 2][ 8].im;
  out[ 8][11].re =  in[ 2][11].re;
  out[ 8][11].im =  in[ 2][11].im;
  out[11][ 2].re =  in[ 5][ 2].re;
  out[11][ 2].im =  in[ 5][ 2].im;
  out[11][ 5].re =  in[ 5][ 5].re;
  out[11][ 5].im =  in[ 5][ 5].im;
  out[11][ 8].re =  in[ 5][ 8].re;
  out[11][ 8].im =  in[ 5][ 8].im;
  out[11][11].re =  in[ 5][11].re;
  out[11][11].im =  in[ 5][11].im;


  return;
}

/* multiply prop by C from the left */
__inline__ void
prop_C_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 9][ 0].re;
  out[ 0][ 0].im =  in[ 9][ 0].im;
  out[ 0][ 3].re =  in[ 9][ 3].re;
  out[ 0][ 3].im =  in[ 9][ 3].im;
  out[ 0][ 6].re =  in[ 9][ 6].re;
  out[ 0][ 6].im =  in[ 9][ 6].im;
  out[ 0][ 9].re =  in[ 9][ 9].re;
  out[ 0][ 9].im =  in[ 9][ 9].im;
  out[ 3][ 0].re = -in[ 6][ 0].re;
  out[ 3][ 0].im = -in[ 6][ 0].im;
  out[ 3][ 3].re = -in[ 6][ 3].re;
  out[ 3][ 3].im = -in[ 6][ 3].im;
  out[ 3][ 6].re = -in[ 6][ 6].re;
  out[ 3][ 6].im = -in[ 6][ 6].im;
  out[ 3][ 9].re = -in[ 6][ 9].re;
  out[ 3][ 9].im = -in[ 6][ 9].im;
  out[ 6][ 0].re =  in[ 3][ 0].re;
  out[ 6][ 0].im =  in[ 3][ 0].im;
  out[ 6][ 3].re =  in[ 3][ 3].re;
  out[ 6][ 3].im =  in[ 3][ 3].im;
  out[ 6][ 6].re =  in[ 3][ 6].re;
  out[ 6][ 6].im =  in[ 3][ 6].im;
  out[ 6][ 9].re =  in[ 3][ 9].re;
  out[ 6][ 9].im =  in[ 3][ 9].im;
  out[ 9][ 0].re = -in[ 0][ 0].re;
  out[ 9][ 0].im = -in[ 0][ 0].im;
  out[ 9][ 3].re = -in[ 0][ 3].re;
  out[ 9][ 3].im = -in[ 0][ 3].im;
  out[ 9][ 6].re = -in[ 0][ 6].re;
  out[ 9][ 6].im = -in[ 0][ 6].im;
  out[ 9][ 9].re = -in[ 0][ 9].re;
  out[ 9][ 9].im = -in[ 0][ 9].im;

  out[ 0][ 1].re =  in[ 9][ 1].re;
  out[ 0][ 1].im =  in[ 9][ 1].im;
  out[ 0][ 4].re =  in[ 9][ 4].re;
  out[ 0][ 4].im =  in[ 9][ 4].im;
  out[ 0][ 7].re =  in[ 9][ 7].re;
  out[ 0][ 7].im =  in[ 9][ 7].im;
  out[ 0][10].re =  in[ 9][10].re;
  out[ 0][10].im =  in[ 9][10].im;
  out[ 3][ 1].re = -in[ 6][ 1].re;
  out[ 3][ 1].im = -in[ 6][ 1].im;
  out[ 3][ 4].re = -in[ 6][ 4].re;
  out[ 3][ 4].im = -in[ 6][ 4].im;
  out[ 3][ 7].re = -in[ 6][ 7].re;
  out[ 3][ 7].im = -in[ 6][ 7].im;
  out[ 3][10].re = -in[ 6][10].re;
  out[ 3][10].im = -in[ 6][10].im;
  out[ 6][ 1].re =  in[ 3][ 1].re;
  out[ 6][ 1].im =  in[ 3][ 1].im;
  out[ 6][ 4].re =  in[ 3][ 4].re;
  out[ 6][ 4].im =  in[ 3][ 4].im;
  out[ 6][ 7].re =  in[ 3][ 7].re;
  out[ 6][ 7].im =  in[ 3][ 7].im;
  out[ 6][10].re =  in[ 3][10].re;
  out[ 6][10].im =  in[ 3][10].im;
  out[ 9][ 1].re = -in[ 0][ 1].re;
  out[ 9][ 1].im = -in[ 0][ 1].im;
  out[ 9][ 4].re = -in[ 0][ 4].re;
  out[ 9][ 4].im = -in[ 0][ 4].im;
  out[ 9][ 7].re = -in[ 0][ 7].re;
  out[ 9][ 7].im = -in[ 0][ 7].im;
  out[ 9][10].re = -in[ 0][10].re;
  out[ 9][10].im = -in[ 0][10].im;

  out[ 0][ 2].re =  in[ 9][ 2].re;
  out[ 0][ 2].im =  in[ 9][ 2].im;
  out[ 0][ 5].re =  in[ 9][ 5].re;
  out[ 0][ 5].im =  in[ 9][ 5].im;
  out[ 0][ 8].re =  in[ 9][ 8].re;
  out[ 0][ 8].im =  in[ 9][ 8].im;
  out[ 0][11].re =  in[ 9][11].re;
  out[ 0][11].im =  in[ 9][11].im;
  out[ 3][ 2].re = -in[ 6][ 2].re;
  out[ 3][ 2].im = -in[ 6][ 2].im;
  out[ 3][ 5].re = -in[ 6][ 5].re;
  out[ 3][ 5].im = -in[ 6][ 5].im;
  out[ 3][ 8].re = -in[ 6][ 8].re;
  out[ 3][ 8].im = -in[ 6][ 8].im;
  out[ 3][11].re = -in[ 6][11].re;
  out[ 3][11].im = -in[ 6][11].im;
  out[ 6][ 2].re =  in[ 3][ 2].re;
  out[ 6][ 2].im =  in[ 3][ 2].im;
  out[ 6][ 5].re =  in[ 3][ 5].re;
  out[ 6][ 5].im =  in[ 3][ 5].im;
  out[ 6][ 8].re =  in[ 3][ 8].re;
  out[ 6][ 8].im =  in[ 3][ 8].im;
  out[ 6][11].re =  in[ 3][11].re;
  out[ 6][11].im =  in[ 3][11].im;
  out[ 9][ 2].re = -in[ 0][ 2].re;
  out[ 9][ 2].im = -in[ 0][ 2].im;
  out[ 9][ 5].re = -in[ 0][ 5].re;
  out[ 9][ 5].im = -in[ 0][ 5].im;
  out[ 9][ 8].re = -in[ 0][ 8].re;
  out[ 9][ 8].im = -in[ 0][ 8].im;
  out[ 9][11].re = -in[ 0][11].re;
  out[ 9][11].im = -in[ 0][11].im;

  out[ 1][ 0].re =  in[10][ 0].re;
  out[ 1][ 0].im =  in[10][ 0].im;
  out[ 1][ 3].re =  in[10][ 3].re;
  out[ 1][ 3].im =  in[10][ 3].im;
  out[ 1][ 6].re =  in[10][ 6].re;
  out[ 1][ 6].im =  in[10][ 6].im;
  out[ 1][ 9].re =  in[10][ 9].re;
  out[ 1][ 9].im =  in[10][ 9].im;
  out[ 4][ 0].re = -in[ 7][ 0].re;
  out[ 4][ 0].im = -in[ 7][ 0].im;
  out[ 4][ 3].re = -in[ 7][ 3].re;
  out[ 4][ 3].im = -in[ 7][ 3].im;
  out[ 4][ 6].re = -in[ 7][ 6].re;
  out[ 4][ 6].im = -in[ 7][ 6].im;
  out[ 4][ 9].re = -in[ 7][ 9].re;
  out[ 4][ 9].im = -in[ 7][ 9].im;
  out[ 7][ 0].re =  in[ 4][ 0].re;
  out[ 7][ 0].im =  in[ 4][ 0].im;
  out[ 7][ 3].re =  in[ 4][ 3].re;
  out[ 7][ 3].im =  in[ 4][ 3].im;
  out[ 7][ 6].re =  in[ 4][ 6].re;
  out[ 7][ 6].im =  in[ 4][ 6].im;
  out[ 7][ 9].re =  in[ 4][ 9].re;
  out[ 7][ 9].im =  in[ 4][ 9].im;
  out[10][ 0].re = -in[ 1][ 0].re;
  out[10][ 0].im = -in[ 1][ 0].im;
  out[10][ 3].re = -in[ 1][ 3].re;
  out[10][ 3].im = -in[ 1][ 3].im;
  out[10][ 6].re = -in[ 1][ 6].re;
  out[10][ 6].im = -in[ 1][ 6].im;
  out[10][ 9].re = -in[ 1][ 9].re;
  out[10][ 9].im = -in[ 1][ 9].im;

  out[ 1][ 1].re =  in[10][ 1].re;
  out[ 1][ 1].im =  in[10][ 1].im;
  out[ 1][ 4].re =  in[10][ 4].re;
  out[ 1][ 4].im =  in[10][ 4].im;
  out[ 1][ 7].re =  in[10][ 7].re;
  out[ 1][ 7].im =  in[10][ 7].im;
  out[ 1][10].re =  in[10][10].re;
  out[ 1][10].im =  in[10][10].im;
  out[ 4][ 1].re = -in[ 7][ 1].re;
  out[ 4][ 1].im = -in[ 7][ 1].im;
  out[ 4][ 4].re = -in[ 7][ 4].re;
  out[ 4][ 4].im = -in[ 7][ 4].im;
  out[ 4][ 7].re = -in[ 7][ 7].re;
  out[ 4][ 7].im = -in[ 7][ 7].im;
  out[ 4][10].re = -in[ 7][10].re;
  out[ 4][10].im = -in[ 7][10].im;
  out[ 7][ 1].re =  in[ 4][ 1].re;
  out[ 7][ 1].im =  in[ 4][ 1].im;
  out[ 7][ 4].re =  in[ 4][ 4].re;
  out[ 7][ 4].im =  in[ 4][ 4].im;
  out[ 7][ 7].re =  in[ 4][ 7].re;
  out[ 7][ 7].im =  in[ 4][ 7].im;
  out[ 7][10].re =  in[ 4][10].re;
  out[ 7][10].im =  in[ 4][10].im;
  out[10][ 1].re = -in[ 1][ 1].re;
  out[10][ 1].im = -in[ 1][ 1].im;
  out[10][ 4].re = -in[ 1][ 4].re;
  out[10][ 4].im = -in[ 1][ 4].im;
  out[10][ 7].re = -in[ 1][ 7].re;
  out[10][ 7].im = -in[ 1][ 7].im;
  out[10][10].re = -in[ 1][10].re;
  out[10][10].im = -in[ 1][10].im;

  out[ 1][ 2].re =  in[10][ 2].re;
  out[ 1][ 2].im =  in[10][ 2].im;
  out[ 1][ 5].re =  in[10][ 5].re;
  out[ 1][ 5].im =  in[10][ 5].im;
  out[ 1][ 8].re =  in[10][ 8].re;
  out[ 1][ 8].im =  in[10][ 8].im;
  out[ 1][11].re =  in[10][11].re;
  out[ 1][11].im =  in[10][11].im;
  out[ 4][ 2].re = -in[ 7][ 2].re;
  out[ 4][ 2].im = -in[ 7][ 2].im;
  out[ 4][ 5].re = -in[ 7][ 5].re;
  out[ 4][ 5].im = -in[ 7][ 5].im;
  out[ 4][ 8].re = -in[ 7][ 8].re;
  out[ 4][ 8].im = -in[ 7][ 8].im;
  out[ 4][11].re = -in[ 7][11].re;
  out[ 4][11].im = -in[ 7][11].im;
  out[ 7][ 2].re =  in[ 4][ 2].re;
  out[ 7][ 2].im =  in[ 4][ 2].im;
  out[ 7][ 5].re =  in[ 4][ 5].re;
  out[ 7][ 5].im =  in[ 4][ 5].im;
  out[ 7][ 8].re =  in[ 4][ 8].re;
  out[ 7][ 8].im =  in[ 4][ 8].im;
  out[ 7][11].re =  in[ 4][11].re;
  out[ 7][11].im =  in[ 4][11].im;
  out[10][ 2].re = -in[ 1][ 2].re;
  out[10][ 2].im = -in[ 1][ 2].im;
  out[10][ 5].re = -in[ 1][ 5].re;
  out[10][ 5].im = -in[ 1][ 5].im;
  out[10][ 8].re = -in[ 1][ 8].re;
  out[10][ 8].im = -in[ 1][ 8].im;
  out[10][11].re = -in[ 1][11].re;
  out[10][11].im = -in[ 1][11].im;

  out[ 2][ 0].re =  in[11][ 0].re;
  out[ 2][ 0].im =  in[11][ 0].im;
  out[ 2][ 3].re =  in[11][ 3].re;
  out[ 2][ 3].im =  in[11][ 3].im;
  out[ 2][ 6].re =  in[11][ 6].re;
  out[ 2][ 6].im =  in[11][ 6].im;
  out[ 2][ 9].re =  in[11][ 9].re;
  out[ 2][ 9].im =  in[11][ 9].im;
  out[ 5][ 0].re = -in[ 8][ 0].re;
  out[ 5][ 0].im = -in[ 8][ 0].im;
  out[ 5][ 3].re = -in[ 8][ 3].re;
  out[ 5][ 3].im = -in[ 8][ 3].im;
  out[ 5][ 6].re = -in[ 8][ 6].re;
  out[ 5][ 6].im = -in[ 8][ 6].im;
  out[ 5][ 9].re = -in[ 8][ 9].re;
  out[ 5][ 9].im = -in[ 8][ 9].im;
  out[ 8][ 0].re =  in[ 5][ 0].re;
  out[ 8][ 0].im =  in[ 5][ 0].im;
  out[ 8][ 3].re =  in[ 5][ 3].re;
  out[ 8][ 3].im =  in[ 5][ 3].im;
  out[ 8][ 6].re =  in[ 5][ 6].re;
  out[ 8][ 6].im =  in[ 5][ 6].im;
  out[ 8][ 9].re =  in[ 5][ 9].re;
  out[ 8][ 9].im =  in[ 5][ 9].im;
  out[11][ 0].re = -in[ 2][ 0].re;
  out[11][ 0].im = -in[ 2][ 0].im;
  out[11][ 3].re = -in[ 2][ 3].re;
  out[11][ 3].im = -in[ 2][ 3].im;
  out[11][ 6].re = -in[ 2][ 6].re;
  out[11][ 6].im = -in[ 2][ 6].im;
  out[11][ 9].re = -in[ 2][ 9].re;
  out[11][ 9].im = -in[ 2][ 9].im;

  out[ 2][ 1].re =  in[11][ 1].re;
  out[ 2][ 1].im =  in[11][ 1].im;
  out[ 2][ 4].re =  in[11][ 4].re;
  out[ 2][ 4].im =  in[11][ 4].im;
  out[ 2][ 7].re =  in[11][ 7].re;
  out[ 2][ 7].im =  in[11][ 7].im;
  out[ 2][10].re =  in[11][10].re;
  out[ 2][10].im =  in[11][10].im;
  out[ 5][ 1].re = -in[ 8][ 1].re;
  out[ 5][ 1].im = -in[ 8][ 1].im;
  out[ 5][ 4].re = -in[ 8][ 4].re;
  out[ 5][ 4].im = -in[ 8][ 4].im;
  out[ 5][ 7].re = -in[ 8][ 7].re;
  out[ 5][ 7].im = -in[ 8][ 7].im;
  out[ 5][10].re = -in[ 8][10].re;
  out[ 5][10].im = -in[ 8][10].im;
  out[ 8][ 1].re =  in[ 5][ 1].re;
  out[ 8][ 1].im =  in[ 5][ 1].im;
  out[ 8][ 4].re =  in[ 5][ 4].re;
  out[ 8][ 4].im =  in[ 5][ 4].im;
  out[ 8][ 7].re =  in[ 5][ 7].re;
  out[ 8][ 7].im =  in[ 5][ 7].im;
  out[ 8][10].re =  in[ 5][10].re;
  out[ 8][10].im =  in[ 5][10].im;
  out[11][ 1].re = -in[ 2][ 1].re;
  out[11][ 1].im = -in[ 2][ 1].im;
  out[11][ 4].re = -in[ 2][ 4].re;
  out[11][ 4].im = -in[ 2][ 4].im;
  out[11][ 7].re = -in[ 2][ 7].re;
  out[11][ 7].im = -in[ 2][ 7].im;
  out[11][10].re = -in[ 2][10].re;
  out[11][10].im = -in[ 2][10].im;

  out[ 2][ 2].re =  in[11][ 2].re;
  out[ 2][ 2].im =  in[11][ 2].im;
  out[ 2][ 5].re =  in[11][ 5].re;
  out[ 2][ 5].im =  in[11][ 5].im;
  out[ 2][ 8].re =  in[11][ 8].re;
  out[ 2][ 8].im =  in[11][ 8].im;
  out[ 2][11].re =  in[11][11].re;
  out[ 2][11].im =  in[11][11].im;
  out[ 5][ 2].re = -in[ 8][ 2].re;
  out[ 5][ 2].im = -in[ 8][ 2].im;
  out[ 5][ 5].re = -in[ 8][ 5].re;
  out[ 5][ 5].im = -in[ 8][ 5].im;
  out[ 5][ 8].re = -in[ 8][ 8].re;
  out[ 5][ 8].im = -in[ 8][ 8].im;
  out[ 5][11].re = -in[ 8][11].re;
  out[ 5][11].im = -in[ 8][11].im;
  out[ 8][ 2].re =  in[ 5][ 2].re;
  out[ 8][ 2].im =  in[ 5][ 2].im;
  out[ 8][ 5].re =  in[ 5][ 5].re;
  out[ 8][ 5].im =  in[ 5][ 5].im;
  out[ 8][ 8].re =  in[ 5][ 8].re;
  out[ 8][ 8].im =  in[ 5][ 8].im;
  out[ 8][11].re =  in[ 5][11].re;
  out[ 8][11].im =  in[ 5][11].im;
  out[11][ 2].re = -in[ 2][ 2].re;
  out[11][ 2].im = -in[ 2][ 2].im;
  out[11][ 5].re = -in[ 2][ 5].re;
  out[11][ 5].im = -in[ 2][ 5].im;
  out[11][ 8].re = -in[ 2][ 8].re;
  out[11][ 8].im = -in[ 2][ 8].im;
  out[11][11].re = -in[ 2][11].re;
  out[11][11].im = -in[ 2][11].im;


  return;
}

/* multiply prop by C\gamma_5 from the left */
__inline__ void
prop_Cg5_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 3][ 0].re;
  out[ 0][ 0].im =  in[ 3][ 0].im;
  out[ 0][ 3].re =  in[ 3][ 3].re;
  out[ 0][ 3].im =  in[ 3][ 3].im;
  out[ 0][ 6].re =  in[ 3][ 6].re;
  out[ 0][ 6].im =  in[ 3][ 6].im;
  out[ 0][ 9].re =  in[ 3][ 9].re;
  out[ 0][ 9].im =  in[ 3][ 9].im;
  out[ 3][ 0].re = -in[ 0][ 0].re;
  out[ 3][ 0].im = -in[ 0][ 0].im;
  out[ 3][ 3].re = -in[ 0][ 3].re;
  out[ 3][ 3].im = -in[ 0][ 3].im;
  out[ 3][ 6].re = -in[ 0][ 6].re;
  out[ 3][ 6].im = -in[ 0][ 6].im;
  out[ 3][ 9].re = -in[ 0][ 9].re;
  out[ 3][ 9].im = -in[ 0][ 9].im;
  out[ 6][ 0].re =  in[ 9][ 0].re;
  out[ 6][ 0].im =  in[ 9][ 0].im;
  out[ 6][ 3].re =  in[ 9][ 3].re;
  out[ 6][ 3].im =  in[ 9][ 3].im;
  out[ 6][ 6].re =  in[ 9][ 6].re;
  out[ 6][ 6].im =  in[ 9][ 6].im;
  out[ 6][ 9].re =  in[ 9][ 9].re;
  out[ 6][ 9].im =  in[ 9][ 9].im;
  out[ 9][ 0].re = -in[ 6][ 0].re;
  out[ 9][ 0].im = -in[ 6][ 0].im;
  out[ 9][ 3].re = -in[ 6][ 3].re;
  out[ 9][ 3].im = -in[ 6][ 3].im;
  out[ 9][ 6].re = -in[ 6][ 6].re;
  out[ 9][ 6].im = -in[ 6][ 6].im;
  out[ 9][ 9].re = -in[ 6][ 9].re;
  out[ 9][ 9].im = -in[ 6][ 9].im;

  out[ 0][ 1].re =  in[ 3][ 1].re;
  out[ 0][ 1].im =  in[ 3][ 1].im;
  out[ 0][ 4].re =  in[ 3][ 4].re;
  out[ 0][ 4].im =  in[ 3][ 4].im;
  out[ 0][ 7].re =  in[ 3][ 7].re;
  out[ 0][ 7].im =  in[ 3][ 7].im;
  out[ 0][10].re =  in[ 3][10].re;
  out[ 0][10].im =  in[ 3][10].im;
  out[ 3][ 1].re = -in[ 0][ 1].re;
  out[ 3][ 1].im = -in[ 0][ 1].im;
  out[ 3][ 4].re = -in[ 0][ 4].re;
  out[ 3][ 4].im = -in[ 0][ 4].im;
  out[ 3][ 7].re = -in[ 0][ 7].re;
  out[ 3][ 7].im = -in[ 0][ 7].im;
  out[ 3][10].re = -in[ 0][10].re;
  out[ 3][10].im = -in[ 0][10].im;
  out[ 6][ 1].re =  in[ 9][ 1].re;
  out[ 6][ 1].im =  in[ 9][ 1].im;
  out[ 6][ 4].re =  in[ 9][ 4].re;
  out[ 6][ 4].im =  in[ 9][ 4].im;
  out[ 6][ 7].re =  in[ 9][ 7].re;
  out[ 6][ 7].im =  in[ 9][ 7].im;
  out[ 6][10].re =  in[ 9][10].re;
  out[ 6][10].im =  in[ 9][10].im;
  out[ 9][ 1].re = -in[ 6][ 1].re;
  out[ 9][ 1].im = -in[ 6][ 1].im;
  out[ 9][ 4].re = -in[ 6][ 4].re;
  out[ 9][ 4].im = -in[ 6][ 4].im;
  out[ 9][ 7].re = -in[ 6][ 7].re;
  out[ 9][ 7].im = -in[ 6][ 7].im;
  out[ 9][10].re = -in[ 6][10].re;
  out[ 9][10].im = -in[ 6][10].im;

  out[ 0][ 2].re =  in[ 3][ 2].re;
  out[ 0][ 2].im =  in[ 3][ 2].im;
  out[ 0][ 5].re =  in[ 3][ 5].re;
  out[ 0][ 5].im =  in[ 3][ 5].im;
  out[ 0][ 8].re =  in[ 3][ 8].re;
  out[ 0][ 8].im =  in[ 3][ 8].im;
  out[ 0][11].re =  in[ 3][11].re;
  out[ 0][11].im =  in[ 3][11].im;
  out[ 3][ 2].re = -in[ 0][ 2].re;
  out[ 3][ 2].im = -in[ 0][ 2].im;
  out[ 3][ 5].re = -in[ 0][ 5].re;
  out[ 3][ 5].im = -in[ 0][ 5].im;
  out[ 3][ 8].re = -in[ 0][ 8].re;
  out[ 3][ 8].im = -in[ 0][ 8].im;
  out[ 3][11].re = -in[ 0][11].re;
  out[ 3][11].im = -in[ 0][11].im;
  out[ 6][ 2].re =  in[ 9][ 2].re;
  out[ 6][ 2].im =  in[ 9][ 2].im;
  out[ 6][ 5].re =  in[ 9][ 5].re;
  out[ 6][ 5].im =  in[ 9][ 5].im;
  out[ 6][ 8].re =  in[ 9][ 8].re;
  out[ 6][ 8].im =  in[ 9][ 8].im;
  out[ 6][11].re =  in[ 9][11].re;
  out[ 6][11].im =  in[ 9][11].im;
  out[ 9][ 2].re = -in[ 6][ 2].re;
  out[ 9][ 2].im = -in[ 6][ 2].im;
  out[ 9][ 5].re = -in[ 6][ 5].re;
  out[ 9][ 5].im = -in[ 6][ 5].im;
  out[ 9][ 8].re = -in[ 6][ 8].re;
  out[ 9][ 8].im = -in[ 6][ 8].im;
  out[ 9][11].re = -in[ 6][11].re;
  out[ 9][11].im = -in[ 6][11].im;

  out[ 1][ 0].re =  in[ 4][ 0].re;
  out[ 1][ 0].im =  in[ 4][ 0].im;
  out[ 1][ 3].re =  in[ 4][ 3].re;
  out[ 1][ 3].im =  in[ 4][ 3].im;
  out[ 1][ 6].re =  in[ 4][ 6].re;
  out[ 1][ 6].im =  in[ 4][ 6].im;
  out[ 1][ 9].re =  in[ 4][ 9].re;
  out[ 1][ 9].im =  in[ 4][ 9].im;
  out[ 4][ 0].re = -in[ 1][ 0].re;
  out[ 4][ 0].im = -in[ 1][ 0].im;
  out[ 4][ 3].re = -in[ 1][ 3].re;
  out[ 4][ 3].im = -in[ 1][ 3].im;
  out[ 4][ 6].re = -in[ 1][ 6].re;
  out[ 4][ 6].im = -in[ 1][ 6].im;
  out[ 4][ 9].re = -in[ 1][ 9].re;
  out[ 4][ 9].im = -in[ 1][ 9].im;
  out[ 7][ 0].re =  in[10][ 0].re;
  out[ 7][ 0].im =  in[10][ 0].im;
  out[ 7][ 3].re =  in[10][ 3].re;
  out[ 7][ 3].im =  in[10][ 3].im;
  out[ 7][ 6].re =  in[10][ 6].re;
  out[ 7][ 6].im =  in[10][ 6].im;
  out[ 7][ 9].re =  in[10][ 9].re;
  out[ 7][ 9].im =  in[10][ 9].im;
  out[10][ 0].re = -in[ 7][ 0].re;
  out[10][ 0].im = -in[ 7][ 0].im;
  out[10][ 3].re = -in[ 7][ 3].re;
  out[10][ 3].im = -in[ 7][ 3].im;
  out[10][ 6].re = -in[ 7][ 6].re;
  out[10][ 6].im = -in[ 7][ 6].im;
  out[10][ 9].re = -in[ 7][ 9].re;
  out[10][ 9].im = -in[ 7][ 9].im;

  out[ 1][ 1].re =  in[ 4][ 1].re;
  out[ 1][ 1].im =  in[ 4][ 1].im;
  out[ 1][ 4].re =  in[ 4][ 4].re;
  out[ 1][ 4].im =  in[ 4][ 4].im;
  out[ 1][ 7].re =  in[ 4][ 7].re;
  out[ 1][ 7].im =  in[ 4][ 7].im;
  out[ 1][10].re =  in[ 4][10].re;
  out[ 1][10].im =  in[ 4][10].im;
  out[ 4][ 1].re = -in[ 1][ 1].re;
  out[ 4][ 1].im = -in[ 1][ 1].im;
  out[ 4][ 4].re = -in[ 1][ 4].re;
  out[ 4][ 4].im = -in[ 1][ 4].im;
  out[ 4][ 7].re = -in[ 1][ 7].re;
  out[ 4][ 7].im = -in[ 1][ 7].im;
  out[ 4][10].re = -in[ 1][10].re;
  out[ 4][10].im = -in[ 1][10].im;
  out[ 7][ 1].re =  in[10][ 1].re;
  out[ 7][ 1].im =  in[10][ 1].im;
  out[ 7][ 4].re =  in[10][ 4].re;
  out[ 7][ 4].im =  in[10][ 4].im;
  out[ 7][ 7].re =  in[10][ 7].re;
  out[ 7][ 7].im =  in[10][ 7].im;
  out[ 7][10].re =  in[10][10].re;
  out[ 7][10].im =  in[10][10].im;
  out[10][ 1].re = -in[ 7][ 1].re;
  out[10][ 1].im = -in[ 7][ 1].im;
  out[10][ 4].re = -in[ 7][ 4].re;
  out[10][ 4].im = -in[ 7][ 4].im;
  out[10][ 7].re = -in[ 7][ 7].re;
  out[10][ 7].im = -in[ 7][ 7].im;
  out[10][10].re = -in[ 7][10].re;
  out[10][10].im = -in[ 7][10].im;

  out[ 1][ 2].re =  in[ 4][ 2].re;
  out[ 1][ 2].im =  in[ 4][ 2].im;
  out[ 1][ 5].re =  in[ 4][ 5].re;
  out[ 1][ 5].im =  in[ 4][ 5].im;
  out[ 1][ 8].re =  in[ 4][ 8].re;
  out[ 1][ 8].im =  in[ 4][ 8].im;
  out[ 1][11].re =  in[ 4][11].re;
  out[ 1][11].im =  in[ 4][11].im;
  out[ 4][ 2].re = -in[ 1][ 2].re;
  out[ 4][ 2].im = -in[ 1][ 2].im;
  out[ 4][ 5].re = -in[ 1][ 5].re;
  out[ 4][ 5].im = -in[ 1][ 5].im;
  out[ 4][ 8].re = -in[ 1][ 8].re;
  out[ 4][ 8].im = -in[ 1][ 8].im;
  out[ 4][11].re = -in[ 1][11].re;
  out[ 4][11].im = -in[ 1][11].im;
  out[ 7][ 2].re =  in[10][ 2].re;
  out[ 7][ 2].im =  in[10][ 2].im;
  out[ 7][ 5].re =  in[10][ 5].re;
  out[ 7][ 5].im =  in[10][ 5].im;
  out[ 7][ 8].re =  in[10][ 8].re;
  out[ 7][ 8].im =  in[10][ 8].im;
  out[ 7][11].re =  in[10][11].re;
  out[ 7][11].im =  in[10][11].im;
  out[10][ 2].re = -in[ 7][ 2].re;
  out[10][ 2].im = -in[ 7][ 2].im;
  out[10][ 5].re = -in[ 7][ 5].re;
  out[10][ 5].im = -in[ 7][ 5].im;
  out[10][ 8].re = -in[ 7][ 8].re;
  out[10][ 8].im = -in[ 7][ 8].im;
  out[10][11].re = -in[ 7][11].re;
  out[10][11].im = -in[ 7][11].im;

  out[ 2][ 0].re =  in[ 5][ 0].re;
  out[ 2][ 0].im =  in[ 5][ 0].im;
  out[ 2][ 3].re =  in[ 5][ 3].re;
  out[ 2][ 3].im =  in[ 5][ 3].im;
  out[ 2][ 6].re =  in[ 5][ 6].re;
  out[ 2][ 6].im =  in[ 5][ 6].im;
  out[ 2][ 9].re =  in[ 5][ 9].re;
  out[ 2][ 9].im =  in[ 5][ 9].im;
  out[ 5][ 0].re = -in[ 2][ 0].re;
  out[ 5][ 0].im = -in[ 2][ 0].im;
  out[ 5][ 3].re = -in[ 2][ 3].re;
  out[ 5][ 3].im = -in[ 2][ 3].im;
  out[ 5][ 6].re = -in[ 2][ 6].re;
  out[ 5][ 6].im = -in[ 2][ 6].im;
  out[ 5][ 9].re = -in[ 2][ 9].re;
  out[ 5][ 9].im = -in[ 2][ 9].im;
  out[ 8][ 0].re =  in[11][ 0].re;
  out[ 8][ 0].im =  in[11][ 0].im;
  out[ 8][ 3].re =  in[11][ 3].re;
  out[ 8][ 3].im =  in[11][ 3].im;
  out[ 8][ 6].re =  in[11][ 6].re;
  out[ 8][ 6].im =  in[11][ 6].im;
  out[ 8][ 9].re =  in[11][ 9].re;
  out[ 8][ 9].im =  in[11][ 9].im;
  out[11][ 0].re = -in[ 8][ 0].re;
  out[11][ 0].im = -in[ 8][ 0].im;
  out[11][ 3].re = -in[ 8][ 3].re;
  out[11][ 3].im = -in[ 8][ 3].im;
  out[11][ 6].re = -in[ 8][ 6].re;
  out[11][ 6].im = -in[ 8][ 6].im;
  out[11][ 9].re = -in[ 8][ 9].re;
  out[11][ 9].im = -in[ 8][ 9].im;

  out[ 2][ 1].re =  in[ 5][ 1].re;
  out[ 2][ 1].im =  in[ 5][ 1].im;
  out[ 2][ 4].re =  in[ 5][ 4].re;
  out[ 2][ 4].im =  in[ 5][ 4].im;
  out[ 2][ 7].re =  in[ 5][ 7].re;
  out[ 2][ 7].im =  in[ 5][ 7].im;
  out[ 2][10].re =  in[ 5][10].re;
  out[ 2][10].im =  in[ 5][10].im;
  out[ 5][ 1].re = -in[ 2][ 1].re;
  out[ 5][ 1].im = -in[ 2][ 1].im;
  out[ 5][ 4].re = -in[ 2][ 4].re;
  out[ 5][ 4].im = -in[ 2][ 4].im;
  out[ 5][ 7].re = -in[ 2][ 7].re;
  out[ 5][ 7].im = -in[ 2][ 7].im;
  out[ 5][10].re = -in[ 2][10].re;
  out[ 5][10].im = -in[ 2][10].im;
  out[ 8][ 1].re =  in[11][ 1].re;
  out[ 8][ 1].im =  in[11][ 1].im;
  out[ 8][ 4].re =  in[11][ 4].re;
  out[ 8][ 4].im =  in[11][ 4].im;
  out[ 8][ 7].re =  in[11][ 7].re;
  out[ 8][ 7].im =  in[11][ 7].im;
  out[ 8][10].re =  in[11][10].re;
  out[ 8][10].im =  in[11][10].im;
  out[11][ 1].re = -in[ 8][ 1].re;
  out[11][ 1].im = -in[ 8][ 1].im;
  out[11][ 4].re = -in[ 8][ 4].re;
  out[11][ 4].im = -in[ 8][ 4].im;
  out[11][ 7].re = -in[ 8][ 7].re;
  out[11][ 7].im = -in[ 8][ 7].im;
  out[11][10].re = -in[ 8][10].re;
  out[11][10].im = -in[ 8][10].im;

  out[ 2][ 2].re =  in[ 5][ 2].re;
  out[ 2][ 2].im =  in[ 5][ 2].im;
  out[ 2][ 5].re =  in[ 5][ 5].re;
  out[ 2][ 5].im =  in[ 5][ 5].im;
  out[ 2][ 8].re =  in[ 5][ 8].re;
  out[ 2][ 8].im =  in[ 5][ 8].im;
  out[ 2][11].re =  in[ 5][11].re;
  out[ 2][11].im =  in[ 5][11].im;
  out[ 5][ 2].re = -in[ 2][ 2].re;
  out[ 5][ 2].im = -in[ 2][ 2].im;
  out[ 5][ 5].re = -in[ 2][ 5].re;
  out[ 5][ 5].im = -in[ 2][ 5].im;
  out[ 5][ 8].re = -in[ 2][ 8].re;
  out[ 5][ 8].im = -in[ 2][ 8].im;
  out[ 5][11].re = -in[ 2][11].re;
  out[ 5][11].im = -in[ 2][11].im;
  out[ 8][ 2].re =  in[11][ 2].re;
  out[ 8][ 2].im =  in[11][ 2].im;
  out[ 8][ 5].re =  in[11][ 5].re;
  out[ 8][ 5].im =  in[11][ 5].im;
  out[ 8][ 8].re =  in[11][ 8].re;
  out[ 8][ 8].im =  in[11][ 8].im;
  out[ 8][11].re =  in[11][11].re;
  out[ 8][11].im =  in[11][11].im;
  out[11][ 2].re = -in[ 8][ 2].re;
  out[11][ 2].im = -in[ 8][ 2].im;
  out[11][ 5].re = -in[ 8][ 5].re;
  out[11][ 5].im = -in[ 8][ 5].im;
  out[11][ 8].re = -in[ 8][ 8].re;
  out[11][ 8].im = -in[ 8][ 8].im;
  out[11][11].re = -in[ 8][11].re;
  out[11][11].im = -in[ 8][11].im;


  return;
}

/* multiply prop by C\gamma_x from the left */
__inline__ void
prop_Cgx_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].im;
  out[ 0][ 0].im = -in[ 0][ 0].re;
  out[ 0][ 3].re =  in[ 0][ 3].im;
  out[ 0][ 3].im = -in[ 0][ 3].re;
  out[ 0][ 6].re =  in[ 0][ 6].im;
  out[ 0][ 6].im = -in[ 0][ 6].re;
  out[ 0][ 9].re =  in[ 0][ 9].im;
  out[ 0][ 9].im = -in[ 0][ 9].re;
  out[ 3][ 0].re = -in[ 3][ 0].im;
  out[ 3][ 0].im =  in[ 3][ 0].re;
  out[ 3][ 3].re = -in[ 3][ 3].im;
  out[ 3][ 3].im =  in[ 3][ 3].re;
  out[ 3][ 6].re = -in[ 3][ 6].im;
  out[ 3][ 6].im =  in[ 3][ 6].re;
  out[ 3][ 9].re = -in[ 3][ 9].im;
  out[ 3][ 9].im =  in[ 3][ 9].re;
  out[ 6][ 0].re = -in[ 6][ 0].im;
  out[ 6][ 0].im =  in[ 6][ 0].re;
  out[ 6][ 3].re = -in[ 6][ 3].im;
  out[ 6][ 3].im =  in[ 6][ 3].re;
  out[ 6][ 6].re = -in[ 6][ 6].im;
  out[ 6][ 6].im =  in[ 6][ 6].re;
  out[ 6][ 9].re = -in[ 6][ 9].im;
  out[ 6][ 9].im =  in[ 6][ 9].re;
  out[ 9][ 0].re =  in[ 9][ 0].im;
  out[ 9][ 0].im = -in[ 9][ 0].re;
  out[ 9][ 3].re =  in[ 9][ 3].im;
  out[ 9][ 3].im = -in[ 9][ 3].re;
  out[ 9][ 6].re =  in[ 9][ 6].im;
  out[ 9][ 6].im = -in[ 9][ 6].re;
  out[ 9][ 9].re =  in[ 9][ 9].im;
  out[ 9][ 9].im = -in[ 9][ 9].re;

  out[ 0][ 1].re =  in[ 0][ 1].im;
  out[ 0][ 1].im = -in[ 0][ 1].re;
  out[ 0][ 4].re =  in[ 0][ 4].im;
  out[ 0][ 4].im = -in[ 0][ 4].re;
  out[ 0][ 7].re =  in[ 0][ 7].im;
  out[ 0][ 7].im = -in[ 0][ 7].re;
  out[ 0][10].re =  in[ 0][10].im;
  out[ 0][10].im = -in[ 0][10].re;
  out[ 3][ 1].re = -in[ 3][ 1].im;
  out[ 3][ 1].im =  in[ 3][ 1].re;
  out[ 3][ 4].re = -in[ 3][ 4].im;
  out[ 3][ 4].im =  in[ 3][ 4].re;
  out[ 3][ 7].re = -in[ 3][ 7].im;
  out[ 3][ 7].im =  in[ 3][ 7].re;
  out[ 3][10].re = -in[ 3][10].im;
  out[ 3][10].im =  in[ 3][10].re;
  out[ 6][ 1].re = -in[ 6][ 1].im;
  out[ 6][ 1].im =  in[ 6][ 1].re;
  out[ 6][ 4].re = -in[ 6][ 4].im;
  out[ 6][ 4].im =  in[ 6][ 4].re;
  out[ 6][ 7].re = -in[ 6][ 7].im;
  out[ 6][ 7].im =  in[ 6][ 7].re;
  out[ 6][10].re = -in[ 6][10].im;
  out[ 6][10].im =  in[ 6][10].re;
  out[ 9][ 1].re =  in[ 9][ 1].im;
  out[ 9][ 1].im = -in[ 9][ 1].re;
  out[ 9][ 4].re =  in[ 9][ 4].im;
  out[ 9][ 4].im = -in[ 9][ 4].re;
  out[ 9][ 7].re =  in[ 9][ 7].im;
  out[ 9][ 7].im = -in[ 9][ 7].re;
  out[ 9][10].re =  in[ 9][10].im;
  out[ 9][10].im = -in[ 9][10].re;

  out[ 0][ 2].re =  in[ 0][ 2].im;
  out[ 0][ 2].im = -in[ 0][ 2].re;
  out[ 0][ 5].re =  in[ 0][ 5].im;
  out[ 0][ 5].im = -in[ 0][ 5].re;
  out[ 0][ 8].re =  in[ 0][ 8].im;
  out[ 0][ 8].im = -in[ 0][ 8].re;
  out[ 0][11].re =  in[ 0][11].im;
  out[ 0][11].im = -in[ 0][11].re;
  out[ 3][ 2].re = -in[ 3][ 2].im;
  out[ 3][ 2].im =  in[ 3][ 2].re;
  out[ 3][ 5].re = -in[ 3][ 5].im;
  out[ 3][ 5].im =  in[ 3][ 5].re;
  out[ 3][ 8].re = -in[ 3][ 8].im;
  out[ 3][ 8].im =  in[ 3][ 8].re;
  out[ 3][11].re = -in[ 3][11].im;
  out[ 3][11].im =  in[ 3][11].re;
  out[ 6][ 2].re = -in[ 6][ 2].im;
  out[ 6][ 2].im =  in[ 6][ 2].re;
  out[ 6][ 5].re = -in[ 6][ 5].im;
  out[ 6][ 5].im =  in[ 6][ 5].re;
  out[ 6][ 8].re = -in[ 6][ 8].im;
  out[ 6][ 8].im =  in[ 6][ 8].re;
  out[ 6][11].re = -in[ 6][11].im;
  out[ 6][11].im =  in[ 6][11].re;
  out[ 9][ 2].re =  in[ 9][ 2].im;
  out[ 9][ 2].im = -in[ 9][ 2].re;
  out[ 9][ 5].re =  in[ 9][ 5].im;
  out[ 9][ 5].im = -in[ 9][ 5].re;
  out[ 9][ 8].re =  in[ 9][ 8].im;
  out[ 9][ 8].im = -in[ 9][ 8].re;
  out[ 9][11].re =  in[ 9][11].im;
  out[ 9][11].im = -in[ 9][11].re;

  out[ 1][ 0].re =  in[ 1][ 0].im;
  out[ 1][ 0].im = -in[ 1][ 0].re;
  out[ 1][ 3].re =  in[ 1][ 3].im;
  out[ 1][ 3].im = -in[ 1][ 3].re;
  out[ 1][ 6].re =  in[ 1][ 6].im;
  out[ 1][ 6].im = -in[ 1][ 6].re;
  out[ 1][ 9].re =  in[ 1][ 9].im;
  out[ 1][ 9].im = -in[ 1][ 9].re;
  out[ 4][ 0].re = -in[ 4][ 0].im;
  out[ 4][ 0].im =  in[ 4][ 0].re;
  out[ 4][ 3].re = -in[ 4][ 3].im;
  out[ 4][ 3].im =  in[ 4][ 3].re;
  out[ 4][ 6].re = -in[ 4][ 6].im;
  out[ 4][ 6].im =  in[ 4][ 6].re;
  out[ 4][ 9].re = -in[ 4][ 9].im;
  out[ 4][ 9].im =  in[ 4][ 9].re;
  out[ 7][ 0].re = -in[ 7][ 0].im;
  out[ 7][ 0].im =  in[ 7][ 0].re;
  out[ 7][ 3].re = -in[ 7][ 3].im;
  out[ 7][ 3].im =  in[ 7][ 3].re;
  out[ 7][ 6].re = -in[ 7][ 6].im;
  out[ 7][ 6].im =  in[ 7][ 6].re;
  out[ 7][ 9].re = -in[ 7][ 9].im;
  out[ 7][ 9].im =  in[ 7][ 9].re;
  out[10][ 0].re =  in[10][ 0].im;
  out[10][ 0].im = -in[10][ 0].re;
  out[10][ 3].re =  in[10][ 3].im;
  out[10][ 3].im = -in[10][ 3].re;
  out[10][ 6].re =  in[10][ 6].im;
  out[10][ 6].im = -in[10][ 6].re;
  out[10][ 9].re =  in[10][ 9].im;
  out[10][ 9].im = -in[10][ 9].re;

  out[ 1][ 1].re =  in[ 1][ 1].im;
  out[ 1][ 1].im = -in[ 1][ 1].re;
  out[ 1][ 4].re =  in[ 1][ 4].im;
  out[ 1][ 4].im = -in[ 1][ 4].re;
  out[ 1][ 7].re =  in[ 1][ 7].im;
  out[ 1][ 7].im = -in[ 1][ 7].re;
  out[ 1][10].re =  in[ 1][10].im;
  out[ 1][10].im = -in[ 1][10].re;
  out[ 4][ 1].re = -in[ 4][ 1].im;
  out[ 4][ 1].im =  in[ 4][ 1].re;
  out[ 4][ 4].re = -in[ 4][ 4].im;
  out[ 4][ 4].im =  in[ 4][ 4].re;
  out[ 4][ 7].re = -in[ 4][ 7].im;
  out[ 4][ 7].im =  in[ 4][ 7].re;
  out[ 4][10].re = -in[ 4][10].im;
  out[ 4][10].im =  in[ 4][10].re;
  out[ 7][ 1].re = -in[ 7][ 1].im;
  out[ 7][ 1].im =  in[ 7][ 1].re;
  out[ 7][ 4].re = -in[ 7][ 4].im;
  out[ 7][ 4].im =  in[ 7][ 4].re;
  out[ 7][ 7].re = -in[ 7][ 7].im;
  out[ 7][ 7].im =  in[ 7][ 7].re;
  out[ 7][10].re = -in[ 7][10].im;
  out[ 7][10].im =  in[ 7][10].re;
  out[10][ 1].re =  in[10][ 1].im;
  out[10][ 1].im = -in[10][ 1].re;
  out[10][ 4].re =  in[10][ 4].im;
  out[10][ 4].im = -in[10][ 4].re;
  out[10][ 7].re =  in[10][ 7].im;
  out[10][ 7].im = -in[10][ 7].re;
  out[10][10].re =  in[10][10].im;
  out[10][10].im = -in[10][10].re;

  out[ 1][ 2].re =  in[ 1][ 2].im;
  out[ 1][ 2].im = -in[ 1][ 2].re;
  out[ 1][ 5].re =  in[ 1][ 5].im;
  out[ 1][ 5].im = -in[ 1][ 5].re;
  out[ 1][ 8].re =  in[ 1][ 8].im;
  out[ 1][ 8].im = -in[ 1][ 8].re;
  out[ 1][11].re =  in[ 1][11].im;
  out[ 1][11].im = -in[ 1][11].re;
  out[ 4][ 2].re = -in[ 4][ 2].im;
  out[ 4][ 2].im =  in[ 4][ 2].re;
  out[ 4][ 5].re = -in[ 4][ 5].im;
  out[ 4][ 5].im =  in[ 4][ 5].re;
  out[ 4][ 8].re = -in[ 4][ 8].im;
  out[ 4][ 8].im =  in[ 4][ 8].re;
  out[ 4][11].re = -in[ 4][11].im;
  out[ 4][11].im =  in[ 4][11].re;
  out[ 7][ 2].re = -in[ 7][ 2].im;
  out[ 7][ 2].im =  in[ 7][ 2].re;
  out[ 7][ 5].re = -in[ 7][ 5].im;
  out[ 7][ 5].im =  in[ 7][ 5].re;
  out[ 7][ 8].re = -in[ 7][ 8].im;
  out[ 7][ 8].im =  in[ 7][ 8].re;
  out[ 7][11].re = -in[ 7][11].im;
  out[ 7][11].im =  in[ 7][11].re;
  out[10][ 2].re =  in[10][ 2].im;
  out[10][ 2].im = -in[10][ 2].re;
  out[10][ 5].re =  in[10][ 5].im;
  out[10][ 5].im = -in[10][ 5].re;
  out[10][ 8].re =  in[10][ 8].im;
  out[10][ 8].im = -in[10][ 8].re;
  out[10][11].re =  in[10][11].im;
  out[10][11].im = -in[10][11].re;

  out[ 2][ 0].re =  in[ 2][ 0].im;
  out[ 2][ 0].im = -in[ 2][ 0].re;
  out[ 2][ 3].re =  in[ 2][ 3].im;
  out[ 2][ 3].im = -in[ 2][ 3].re;
  out[ 2][ 6].re =  in[ 2][ 6].im;
  out[ 2][ 6].im = -in[ 2][ 6].re;
  out[ 2][ 9].re =  in[ 2][ 9].im;
  out[ 2][ 9].im = -in[ 2][ 9].re;
  out[ 5][ 0].re = -in[ 5][ 0].im;
  out[ 5][ 0].im =  in[ 5][ 0].re;
  out[ 5][ 3].re = -in[ 5][ 3].im;
  out[ 5][ 3].im =  in[ 5][ 3].re;
  out[ 5][ 6].re = -in[ 5][ 6].im;
  out[ 5][ 6].im =  in[ 5][ 6].re;
  out[ 5][ 9].re = -in[ 5][ 9].im;
  out[ 5][ 9].im =  in[ 5][ 9].re;
  out[ 8][ 0].re = -in[ 8][ 0].im;
  out[ 8][ 0].im =  in[ 8][ 0].re;
  out[ 8][ 3].re = -in[ 8][ 3].im;
  out[ 8][ 3].im =  in[ 8][ 3].re;
  out[ 8][ 6].re = -in[ 8][ 6].im;
  out[ 8][ 6].im =  in[ 8][ 6].re;
  out[ 8][ 9].re = -in[ 8][ 9].im;
  out[ 8][ 9].im =  in[ 8][ 9].re;
  out[11][ 0].re =  in[11][ 0].im;
  out[11][ 0].im = -in[11][ 0].re;
  out[11][ 3].re =  in[11][ 3].im;
  out[11][ 3].im = -in[11][ 3].re;
  out[11][ 6].re =  in[11][ 6].im;
  out[11][ 6].im = -in[11][ 6].re;
  out[11][ 9].re =  in[11][ 9].im;
  out[11][ 9].im = -in[11][ 9].re;

  out[ 2][ 1].re =  in[ 2][ 1].im;
  out[ 2][ 1].im = -in[ 2][ 1].re;
  out[ 2][ 4].re =  in[ 2][ 4].im;
  out[ 2][ 4].im = -in[ 2][ 4].re;
  out[ 2][ 7].re =  in[ 2][ 7].im;
  out[ 2][ 7].im = -in[ 2][ 7].re;
  out[ 2][10].re =  in[ 2][10].im;
  out[ 2][10].im = -in[ 2][10].re;
  out[ 5][ 1].re = -in[ 5][ 1].im;
  out[ 5][ 1].im =  in[ 5][ 1].re;
  out[ 5][ 4].re = -in[ 5][ 4].im;
  out[ 5][ 4].im =  in[ 5][ 4].re;
  out[ 5][ 7].re = -in[ 5][ 7].im;
  out[ 5][ 7].im =  in[ 5][ 7].re;
  out[ 5][10].re = -in[ 5][10].im;
  out[ 5][10].im =  in[ 5][10].re;
  out[ 8][ 1].re = -in[ 8][ 1].im;
  out[ 8][ 1].im =  in[ 8][ 1].re;
  out[ 8][ 4].re = -in[ 8][ 4].im;
  out[ 8][ 4].im =  in[ 8][ 4].re;
  out[ 8][ 7].re = -in[ 8][ 7].im;
  out[ 8][ 7].im =  in[ 8][ 7].re;
  out[ 8][10].re = -in[ 8][10].im;
  out[ 8][10].im =  in[ 8][10].re;
  out[11][ 1].re =  in[11][ 1].im;
  out[11][ 1].im = -in[11][ 1].re;
  out[11][ 4].re =  in[11][ 4].im;
  out[11][ 4].im = -in[11][ 4].re;
  out[11][ 7].re =  in[11][ 7].im;
  out[11][ 7].im = -in[11][ 7].re;
  out[11][10].re =  in[11][10].im;
  out[11][10].im = -in[11][10].re;

  out[ 2][ 2].re =  in[ 2][ 2].im;
  out[ 2][ 2].im = -in[ 2][ 2].re;
  out[ 2][ 5].re =  in[ 2][ 5].im;
  out[ 2][ 5].im = -in[ 2][ 5].re;
  out[ 2][ 8].re =  in[ 2][ 8].im;
  out[ 2][ 8].im = -in[ 2][ 8].re;
  out[ 2][11].re =  in[ 2][11].im;
  out[ 2][11].im = -in[ 2][11].re;
  out[ 5][ 2].re = -in[ 5][ 2].im;
  out[ 5][ 2].im =  in[ 5][ 2].re;
  out[ 5][ 5].re = -in[ 5][ 5].im;
  out[ 5][ 5].im =  in[ 5][ 5].re;
  out[ 5][ 8].re = -in[ 5][ 8].im;
  out[ 5][ 8].im =  in[ 5][ 8].re;
  out[ 5][11].re = -in[ 5][11].im;
  out[ 5][11].im =  in[ 5][11].re;
  out[ 8][ 2].re = -in[ 8][ 2].im;
  out[ 8][ 2].im =  in[ 8][ 2].re;
  out[ 8][ 5].re = -in[ 8][ 5].im;
  out[ 8][ 5].im =  in[ 8][ 5].re;
  out[ 8][ 8].re = -in[ 8][ 8].im;
  out[ 8][ 8].im =  in[ 8][ 8].re;
  out[ 8][11].re = -in[ 8][11].im;
  out[ 8][11].im =  in[ 8][11].re;
  out[11][ 2].re =  in[11][ 2].im;
  out[11][ 2].im = -in[11][ 2].re;
  out[11][ 5].re =  in[11][ 5].im;
  out[11][ 5].im = -in[11][ 5].re;
  out[11][ 8].re =  in[11][ 8].im;
  out[11][ 8].im = -in[11][ 8].re;
  out[11][11].re =  in[11][11].im;
  out[11][11].im = -in[11][11].re;


  return;
}

/* multiply prop by C\gamma_y from the left */
__inline__ void
prop_Cgy_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 3].re =  in[ 0][ 3].re;
  out[ 0][ 3].im =  in[ 0][ 3].im;
  out[ 0][ 6].re =  in[ 0][ 6].re;
  out[ 0][ 6].im =  in[ 0][ 6].im;
  out[ 0][ 9].re =  in[ 0][ 9].re;
  out[ 0][ 9].im =  in[ 0][ 9].im;
  out[ 3][ 0].re =  in[ 3][ 0].re;
  out[ 3][ 0].im =  in[ 3][ 0].im;
  out[ 3][ 3].re =  in[ 3][ 3].re;
  out[ 3][ 3].im =  in[ 3][ 3].im;
  out[ 3][ 6].re =  in[ 3][ 6].re;
  out[ 3][ 6].im =  in[ 3][ 6].im;
  out[ 3][ 9].re =  in[ 3][ 9].re;
  out[ 3][ 9].im =  in[ 3][ 9].im;
  out[ 6][ 0].re = -in[ 6][ 0].re;
  out[ 6][ 0].im = -in[ 6][ 0].im;
  out[ 6][ 3].re = -in[ 6][ 3].re;
  out[ 6][ 3].im = -in[ 6][ 3].im;
  out[ 6][ 6].re = -in[ 6][ 6].re;
  out[ 6][ 6].im = -in[ 6][ 6].im;
  out[ 6][ 9].re = -in[ 6][ 9].re;
  out[ 6][ 9].im = -in[ 6][ 9].im;
  out[ 9][ 0].re = -in[ 9][ 0].re;
  out[ 9][ 0].im = -in[ 9][ 0].im;
  out[ 9][ 3].re = -in[ 9][ 3].re;
  out[ 9][ 3].im = -in[ 9][ 3].im;
  out[ 9][ 6].re = -in[ 9][ 6].re;
  out[ 9][ 6].im = -in[ 9][ 6].im;
  out[ 9][ 9].re = -in[ 9][ 9].re;
  out[ 9][ 9].im = -in[ 9][ 9].im;

  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 4].re =  in[ 0][ 4].re;
  out[ 0][ 4].im =  in[ 0][ 4].im;
  out[ 0][ 7].re =  in[ 0][ 7].re;
  out[ 0][ 7].im =  in[ 0][ 7].im;
  out[ 0][10].re =  in[ 0][10].re;
  out[ 0][10].im =  in[ 0][10].im;
  out[ 3][ 1].re =  in[ 3][ 1].re;
  out[ 3][ 1].im =  in[ 3][ 1].im;
  out[ 3][ 4].re =  in[ 3][ 4].re;
  out[ 3][ 4].im =  in[ 3][ 4].im;
  out[ 3][ 7].re =  in[ 3][ 7].re;
  out[ 3][ 7].im =  in[ 3][ 7].im;
  out[ 3][10].re =  in[ 3][10].re;
  out[ 3][10].im =  in[ 3][10].im;
  out[ 6][ 1].re = -in[ 6][ 1].re;
  out[ 6][ 1].im = -in[ 6][ 1].im;
  out[ 6][ 4].re = -in[ 6][ 4].re;
  out[ 6][ 4].im = -in[ 6][ 4].im;
  out[ 6][ 7].re = -in[ 6][ 7].re;
  out[ 6][ 7].im = -in[ 6][ 7].im;
  out[ 6][10].re = -in[ 6][10].re;
  out[ 6][10].im = -in[ 6][10].im;
  out[ 9][ 1].re = -in[ 9][ 1].re;
  out[ 9][ 1].im = -in[ 9][ 1].im;
  out[ 9][ 4].re = -in[ 9][ 4].re;
  out[ 9][ 4].im = -in[ 9][ 4].im;
  out[ 9][ 7].re = -in[ 9][ 7].re;
  out[ 9][ 7].im = -in[ 9][ 7].im;
  out[ 9][10].re = -in[ 9][10].re;
  out[ 9][10].im = -in[ 9][10].im;

  out[ 0][ 2].re =  in[ 0][ 2].re;
  out[ 0][ 2].im =  in[ 0][ 2].im;
  out[ 0][ 5].re =  in[ 0][ 5].re;
  out[ 0][ 5].im =  in[ 0][ 5].im;
  out[ 0][ 8].re =  in[ 0][ 8].re;
  out[ 0][ 8].im =  in[ 0][ 8].im;
  out[ 0][11].re =  in[ 0][11].re;
  out[ 0][11].im =  in[ 0][11].im;
  out[ 3][ 2].re =  in[ 3][ 2].re;
  out[ 3][ 2].im =  in[ 3][ 2].im;
  out[ 3][ 5].re =  in[ 3][ 5].re;
  out[ 3][ 5].im =  in[ 3][ 5].im;
  out[ 3][ 8].re =  in[ 3][ 8].re;
  out[ 3][ 8].im =  in[ 3][ 8].im;
  out[ 3][11].re =  in[ 3][11].re;
  out[ 3][11].im =  in[ 3][11].im;
  out[ 6][ 2].re = -in[ 6][ 2].re;
  out[ 6][ 2].im = -in[ 6][ 2].im;
  out[ 6][ 5].re = -in[ 6][ 5].re;
  out[ 6][ 5].im = -in[ 6][ 5].im;
  out[ 6][ 8].re = -in[ 6][ 8].re;
  out[ 6][ 8].im = -in[ 6][ 8].im;
  out[ 6][11].re = -in[ 6][11].re;
  out[ 6][11].im = -in[ 6][11].im;
  out[ 9][ 2].re = -in[ 9][ 2].re;
  out[ 9][ 2].im = -in[ 9][ 2].im;
  out[ 9][ 5].re = -in[ 9][ 5].re;
  out[ 9][ 5].im = -in[ 9][ 5].im;
  out[ 9][ 8].re = -in[ 9][ 8].re;
  out[ 9][ 8].im = -in[ 9][ 8].im;
  out[ 9][11].re = -in[ 9][11].re;
  out[ 9][11].im = -in[ 9][11].im;

  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 3].re =  in[ 1][ 3].re;
  out[ 1][ 3].im =  in[ 1][ 3].im;
  out[ 1][ 6].re =  in[ 1][ 6].re;
  out[ 1][ 6].im =  in[ 1][ 6].im;
  out[ 1][ 9].re =  in[ 1][ 9].re;
  out[ 1][ 9].im =  in[ 1][ 9].im;
  out[ 4][ 0].re =  in[ 4][ 0].re;
  out[ 4][ 0].im =  in[ 4][ 0].im;
  out[ 4][ 3].re =  in[ 4][ 3].re;
  out[ 4][ 3].im =  in[ 4][ 3].im;
  out[ 4][ 6].re =  in[ 4][ 6].re;
  out[ 4][ 6].im =  in[ 4][ 6].im;
  out[ 4][ 9].re =  in[ 4][ 9].re;
  out[ 4][ 9].im =  in[ 4][ 9].im;
  out[ 7][ 0].re = -in[ 7][ 0].re;
  out[ 7][ 0].im = -in[ 7][ 0].im;
  out[ 7][ 3].re = -in[ 7][ 3].re;
  out[ 7][ 3].im = -in[ 7][ 3].im;
  out[ 7][ 6].re = -in[ 7][ 6].re;
  out[ 7][ 6].im = -in[ 7][ 6].im;
  out[ 7][ 9].re = -in[ 7][ 9].re;
  out[ 7][ 9].im = -in[ 7][ 9].im;
  out[10][ 0].re = -in[10][ 0].re;
  out[10][ 0].im = -in[10][ 0].im;
  out[10][ 3].re = -in[10][ 3].re;
  out[10][ 3].im = -in[10][ 3].im;
  out[10][ 6].re = -in[10][ 6].re;
  out[10][ 6].im = -in[10][ 6].im;
  out[10][ 9].re = -in[10][ 9].re;
  out[10][ 9].im = -in[10][ 9].im;

  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 4].re =  in[ 1][ 4].re;
  out[ 1][ 4].im =  in[ 1][ 4].im;
  out[ 1][ 7].re =  in[ 1][ 7].re;
  out[ 1][ 7].im =  in[ 1][ 7].im;
  out[ 1][10].re =  in[ 1][10].re;
  out[ 1][10].im =  in[ 1][10].im;
  out[ 4][ 1].re =  in[ 4][ 1].re;
  out[ 4][ 1].im =  in[ 4][ 1].im;
  out[ 4][ 4].re =  in[ 4][ 4].re;
  out[ 4][ 4].im =  in[ 4][ 4].im;
  out[ 4][ 7].re =  in[ 4][ 7].re;
  out[ 4][ 7].im =  in[ 4][ 7].im;
  out[ 4][10].re =  in[ 4][10].re;
  out[ 4][10].im =  in[ 4][10].im;
  out[ 7][ 1].re = -in[ 7][ 1].re;
  out[ 7][ 1].im = -in[ 7][ 1].im;
  out[ 7][ 4].re = -in[ 7][ 4].re;
  out[ 7][ 4].im = -in[ 7][ 4].im;
  out[ 7][ 7].re = -in[ 7][ 7].re;
  out[ 7][ 7].im = -in[ 7][ 7].im;
  out[ 7][10].re = -in[ 7][10].re;
  out[ 7][10].im = -in[ 7][10].im;
  out[10][ 1].re = -in[10][ 1].re;
  out[10][ 1].im = -in[10][ 1].im;
  out[10][ 4].re = -in[10][ 4].re;
  out[10][ 4].im = -in[10][ 4].im;
  out[10][ 7].re = -in[10][ 7].re;
  out[10][ 7].im = -in[10][ 7].im;
  out[10][10].re = -in[10][10].re;
  out[10][10].im = -in[10][10].im;

  out[ 1][ 2].re =  in[ 1][ 2].re;
  out[ 1][ 2].im =  in[ 1][ 2].im;
  out[ 1][ 5].re =  in[ 1][ 5].re;
  out[ 1][ 5].im =  in[ 1][ 5].im;
  out[ 1][ 8].re =  in[ 1][ 8].re;
  out[ 1][ 8].im =  in[ 1][ 8].im;
  out[ 1][11].re =  in[ 1][11].re;
  out[ 1][11].im =  in[ 1][11].im;
  out[ 4][ 2].re =  in[ 4][ 2].re;
  out[ 4][ 2].im =  in[ 4][ 2].im;
  out[ 4][ 5].re =  in[ 4][ 5].re;
  out[ 4][ 5].im =  in[ 4][ 5].im;
  out[ 4][ 8].re =  in[ 4][ 8].re;
  out[ 4][ 8].im =  in[ 4][ 8].im;
  out[ 4][11].re =  in[ 4][11].re;
  out[ 4][11].im =  in[ 4][11].im;
  out[ 7][ 2].re = -in[ 7][ 2].re;
  out[ 7][ 2].im = -in[ 7][ 2].im;
  out[ 7][ 5].re = -in[ 7][ 5].re;
  out[ 7][ 5].im = -in[ 7][ 5].im;
  out[ 7][ 8].re = -in[ 7][ 8].re;
  out[ 7][ 8].im = -in[ 7][ 8].im;
  out[ 7][11].re = -in[ 7][11].re;
  out[ 7][11].im = -in[ 7][11].im;
  out[10][ 2].re = -in[10][ 2].re;
  out[10][ 2].im = -in[10][ 2].im;
  out[10][ 5].re = -in[10][ 5].re;
  out[10][ 5].im = -in[10][ 5].im;
  out[10][ 8].re = -in[10][ 8].re;
  out[10][ 8].im = -in[10][ 8].im;
  out[10][11].re = -in[10][11].re;
  out[10][11].im = -in[10][11].im;

  out[ 2][ 0].re =  in[ 2][ 0].re;
  out[ 2][ 0].im =  in[ 2][ 0].im;
  out[ 2][ 3].re =  in[ 2][ 3].re;
  out[ 2][ 3].im =  in[ 2][ 3].im;
  out[ 2][ 6].re =  in[ 2][ 6].re;
  out[ 2][ 6].im =  in[ 2][ 6].im;
  out[ 2][ 9].re =  in[ 2][ 9].re;
  out[ 2][ 9].im =  in[ 2][ 9].im;
  out[ 5][ 0].re =  in[ 5][ 0].re;
  out[ 5][ 0].im =  in[ 5][ 0].im;
  out[ 5][ 3].re =  in[ 5][ 3].re;
  out[ 5][ 3].im =  in[ 5][ 3].im;
  out[ 5][ 6].re =  in[ 5][ 6].re;
  out[ 5][ 6].im =  in[ 5][ 6].im;
  out[ 5][ 9].re =  in[ 5][ 9].re;
  out[ 5][ 9].im =  in[ 5][ 9].im;
  out[ 8][ 0].re = -in[ 8][ 0].re;
  out[ 8][ 0].im = -in[ 8][ 0].im;
  out[ 8][ 3].re = -in[ 8][ 3].re;
  out[ 8][ 3].im = -in[ 8][ 3].im;
  out[ 8][ 6].re = -in[ 8][ 6].re;
  out[ 8][ 6].im = -in[ 8][ 6].im;
  out[ 8][ 9].re = -in[ 8][ 9].re;
  out[ 8][ 9].im = -in[ 8][ 9].im;
  out[11][ 0].re = -in[11][ 0].re;
  out[11][ 0].im = -in[11][ 0].im;
  out[11][ 3].re = -in[11][ 3].re;
  out[11][ 3].im = -in[11][ 3].im;
  out[11][ 6].re = -in[11][ 6].re;
  out[11][ 6].im = -in[11][ 6].im;
  out[11][ 9].re = -in[11][ 9].re;
  out[11][ 9].im = -in[11][ 9].im;

  out[ 2][ 1].re =  in[ 2][ 1].re;
  out[ 2][ 1].im =  in[ 2][ 1].im;
  out[ 2][ 4].re =  in[ 2][ 4].re;
  out[ 2][ 4].im =  in[ 2][ 4].im;
  out[ 2][ 7].re =  in[ 2][ 7].re;
  out[ 2][ 7].im =  in[ 2][ 7].im;
  out[ 2][10].re =  in[ 2][10].re;
  out[ 2][10].im =  in[ 2][10].im;
  out[ 5][ 1].re =  in[ 5][ 1].re;
  out[ 5][ 1].im =  in[ 5][ 1].im;
  out[ 5][ 4].re =  in[ 5][ 4].re;
  out[ 5][ 4].im =  in[ 5][ 4].im;
  out[ 5][ 7].re =  in[ 5][ 7].re;
  out[ 5][ 7].im =  in[ 5][ 7].im;
  out[ 5][10].re =  in[ 5][10].re;
  out[ 5][10].im =  in[ 5][10].im;
  out[ 8][ 1].re = -in[ 8][ 1].re;
  out[ 8][ 1].im = -in[ 8][ 1].im;
  out[ 8][ 4].re = -in[ 8][ 4].re;
  out[ 8][ 4].im = -in[ 8][ 4].im;
  out[ 8][ 7].re = -in[ 8][ 7].re;
  out[ 8][ 7].im = -in[ 8][ 7].im;
  out[ 8][10].re = -in[ 8][10].re;
  out[ 8][10].im = -in[ 8][10].im;
  out[11][ 1].re = -in[11][ 1].re;
  out[11][ 1].im = -in[11][ 1].im;
  out[11][ 4].re = -in[11][ 4].re;
  out[11][ 4].im = -in[11][ 4].im;
  out[11][ 7].re = -in[11][ 7].re;
  out[11][ 7].im = -in[11][ 7].im;
  out[11][10].re = -in[11][10].re;
  out[11][10].im = -in[11][10].im;

  out[ 2][ 2].re =  in[ 2][ 2].re;
  out[ 2][ 2].im =  in[ 2][ 2].im;
  out[ 2][ 5].re =  in[ 2][ 5].re;
  out[ 2][ 5].im =  in[ 2][ 5].im;
  out[ 2][ 8].re =  in[ 2][ 8].re;
  out[ 2][ 8].im =  in[ 2][ 8].im;
  out[ 2][11].re =  in[ 2][11].re;
  out[ 2][11].im =  in[ 2][11].im;
  out[ 5][ 2].re =  in[ 5][ 2].re;
  out[ 5][ 2].im =  in[ 5][ 2].im;
  out[ 5][ 5].re =  in[ 5][ 5].re;
  out[ 5][ 5].im =  in[ 5][ 5].im;
  out[ 5][ 8].re =  in[ 5][ 8].re;
  out[ 5][ 8].im =  in[ 5][ 8].im;
  out[ 5][11].re =  in[ 5][11].re;
  out[ 5][11].im =  in[ 5][11].im;
  out[ 8][ 2].re = -in[ 8][ 2].re;
  out[ 8][ 2].im = -in[ 8][ 2].im;
  out[ 8][ 5].re = -in[ 8][ 5].re;
  out[ 8][ 5].im = -in[ 8][ 5].im;
  out[ 8][ 8].re = -in[ 8][ 8].re;
  out[ 8][ 8].im = -in[ 8][ 8].im;
  out[ 8][11].re = -in[ 8][11].re;
  out[ 8][11].im = -in[ 8][11].im;
  out[11][ 2].re = -in[11][ 2].re;
  out[11][ 2].im = -in[11][ 2].im;
  out[11][ 5].re = -in[11][ 5].re;
  out[11][ 5].im = -in[11][ 5].im;
  out[11][ 8].re = -in[11][ 8].re;
  out[11][ 8].im = -in[11][ 8].im;
  out[11][11].re = -in[11][11].re;
  out[11][11].im = -in[11][11].im;


  return;
}

/* multiply prop by C\gamma_z from the left */
__inline__ void
prop_Cgz_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 3][ 0].im;
  out[ 0][ 0].im =  in[ 3][ 0].re;
  out[ 0][ 3].re = -in[ 3][ 3].im;
  out[ 0][ 3].im =  in[ 3][ 3].re;
  out[ 0][ 6].re = -in[ 3][ 6].im;
  out[ 0][ 6].im =  in[ 3][ 6].re;
  out[ 0][ 9].re = -in[ 3][ 9].im;
  out[ 0][ 9].im =  in[ 3][ 9].re;
  out[ 3][ 0].re = -in[ 0][ 0].im;
  out[ 3][ 0].im =  in[ 0][ 0].re;
  out[ 3][ 3].re = -in[ 0][ 3].im;
  out[ 3][ 3].im =  in[ 0][ 3].re;
  out[ 3][ 6].re = -in[ 0][ 6].im;
  out[ 3][ 6].im =  in[ 0][ 6].re;
  out[ 3][ 9].re = -in[ 0][ 9].im;
  out[ 3][ 9].im =  in[ 0][ 9].re;
  out[ 6][ 0].re =  in[ 9][ 0].im;
  out[ 6][ 0].im = -in[ 9][ 0].re;
  out[ 6][ 3].re =  in[ 9][ 3].im;
  out[ 6][ 3].im = -in[ 9][ 3].re;
  out[ 6][ 6].re =  in[ 9][ 6].im;
  out[ 6][ 6].im = -in[ 9][ 6].re;
  out[ 6][ 9].re =  in[ 9][ 9].im;
  out[ 6][ 9].im = -in[ 9][ 9].re;
  out[ 9][ 0].re =  in[ 6][ 0].im;
  out[ 9][ 0].im = -in[ 6][ 0].re;
  out[ 9][ 3].re =  in[ 6][ 3].im;
  out[ 9][ 3].im = -in[ 6][ 3].re;
  out[ 9][ 6].re =  in[ 6][ 6].im;
  out[ 9][ 6].im = -in[ 6][ 6].re;
  out[ 9][ 9].re =  in[ 6][ 9].im;
  out[ 9][ 9].im = -in[ 6][ 9].re;

  out[ 0][ 1].re = -in[ 3][ 1].im;
  out[ 0][ 1].im =  in[ 3][ 1].re;
  out[ 0][ 4].re = -in[ 3][ 4].im;
  out[ 0][ 4].im =  in[ 3][ 4].re;
  out[ 0][ 7].re = -in[ 3][ 7].im;
  out[ 0][ 7].im =  in[ 3][ 7].re;
  out[ 0][10].re = -in[ 3][10].im;
  out[ 0][10].im =  in[ 3][10].re;
  out[ 3][ 1].re = -in[ 0][ 1].im;
  out[ 3][ 1].im =  in[ 0][ 1].re;
  out[ 3][ 4].re = -in[ 0][ 4].im;
  out[ 3][ 4].im =  in[ 0][ 4].re;
  out[ 3][ 7].re = -in[ 0][ 7].im;
  out[ 3][ 7].im =  in[ 0][ 7].re;
  out[ 3][10].re = -in[ 0][10].im;
  out[ 3][10].im =  in[ 0][10].re;
  out[ 6][ 1].re =  in[ 9][ 1].im;
  out[ 6][ 1].im = -in[ 9][ 1].re;
  out[ 6][ 4].re =  in[ 9][ 4].im;
  out[ 6][ 4].im = -in[ 9][ 4].re;
  out[ 6][ 7].re =  in[ 9][ 7].im;
  out[ 6][ 7].im = -in[ 9][ 7].re;
  out[ 6][10].re =  in[ 9][10].im;
  out[ 6][10].im = -in[ 9][10].re;
  out[ 9][ 1].re =  in[ 6][ 1].im;
  out[ 9][ 1].im = -in[ 6][ 1].re;
  out[ 9][ 4].re =  in[ 6][ 4].im;
  out[ 9][ 4].im = -in[ 6][ 4].re;
  out[ 9][ 7].re =  in[ 6][ 7].im;
  out[ 9][ 7].im = -in[ 6][ 7].re;
  out[ 9][10].re =  in[ 6][10].im;
  out[ 9][10].im = -in[ 6][10].re;

  out[ 0][ 2].re = -in[ 3][ 2].im;
  out[ 0][ 2].im =  in[ 3][ 2].re;
  out[ 0][ 5].re = -in[ 3][ 5].im;
  out[ 0][ 5].im =  in[ 3][ 5].re;
  out[ 0][ 8].re = -in[ 3][ 8].im;
  out[ 0][ 8].im =  in[ 3][ 8].re;
  out[ 0][11].re = -in[ 3][11].im;
  out[ 0][11].im =  in[ 3][11].re;
  out[ 3][ 2].re = -in[ 0][ 2].im;
  out[ 3][ 2].im =  in[ 0][ 2].re;
  out[ 3][ 5].re = -in[ 0][ 5].im;
  out[ 3][ 5].im =  in[ 0][ 5].re;
  out[ 3][ 8].re = -in[ 0][ 8].im;
  out[ 3][ 8].im =  in[ 0][ 8].re;
  out[ 3][11].re = -in[ 0][11].im;
  out[ 3][11].im =  in[ 0][11].re;
  out[ 6][ 2].re =  in[ 9][ 2].im;
  out[ 6][ 2].im = -in[ 9][ 2].re;
  out[ 6][ 5].re =  in[ 9][ 5].im;
  out[ 6][ 5].im = -in[ 9][ 5].re;
  out[ 6][ 8].re =  in[ 9][ 8].im;
  out[ 6][ 8].im = -in[ 9][ 8].re;
  out[ 6][11].re =  in[ 9][11].im;
  out[ 6][11].im = -in[ 9][11].re;
  out[ 9][ 2].re =  in[ 6][ 2].im;
  out[ 9][ 2].im = -in[ 6][ 2].re;
  out[ 9][ 5].re =  in[ 6][ 5].im;
  out[ 9][ 5].im = -in[ 6][ 5].re;
  out[ 9][ 8].re =  in[ 6][ 8].im;
  out[ 9][ 8].im = -in[ 6][ 8].re;
  out[ 9][11].re =  in[ 6][11].im;
  out[ 9][11].im = -in[ 6][11].re;

  out[ 1][ 0].re = -in[ 4][ 0].im;
  out[ 1][ 0].im =  in[ 4][ 0].re;
  out[ 1][ 3].re = -in[ 4][ 3].im;
  out[ 1][ 3].im =  in[ 4][ 3].re;
  out[ 1][ 6].re = -in[ 4][ 6].im;
  out[ 1][ 6].im =  in[ 4][ 6].re;
  out[ 1][ 9].re = -in[ 4][ 9].im;
  out[ 1][ 9].im =  in[ 4][ 9].re;
  out[ 4][ 0].re = -in[ 1][ 0].im;
  out[ 4][ 0].im =  in[ 1][ 0].re;
  out[ 4][ 3].re = -in[ 1][ 3].im;
  out[ 4][ 3].im =  in[ 1][ 3].re;
  out[ 4][ 6].re = -in[ 1][ 6].im;
  out[ 4][ 6].im =  in[ 1][ 6].re;
  out[ 4][ 9].re = -in[ 1][ 9].im;
  out[ 4][ 9].im =  in[ 1][ 9].re;
  out[ 7][ 0].re =  in[10][ 0].im;
  out[ 7][ 0].im = -in[10][ 0].re;
  out[ 7][ 3].re =  in[10][ 3].im;
  out[ 7][ 3].im = -in[10][ 3].re;
  out[ 7][ 6].re =  in[10][ 6].im;
  out[ 7][ 6].im = -in[10][ 6].re;
  out[ 7][ 9].re =  in[10][ 9].im;
  out[ 7][ 9].im = -in[10][ 9].re;
  out[10][ 0].re =  in[ 7][ 0].im;
  out[10][ 0].im = -in[ 7][ 0].re;
  out[10][ 3].re =  in[ 7][ 3].im;
  out[10][ 3].im = -in[ 7][ 3].re;
  out[10][ 6].re =  in[ 7][ 6].im;
  out[10][ 6].im = -in[ 7][ 6].re;
  out[10][ 9].re =  in[ 7][ 9].im;
  out[10][ 9].im = -in[ 7][ 9].re;

  out[ 1][ 1].re = -in[ 4][ 1].im;
  out[ 1][ 1].im =  in[ 4][ 1].re;
  out[ 1][ 4].re = -in[ 4][ 4].im;
  out[ 1][ 4].im =  in[ 4][ 4].re;
  out[ 1][ 7].re = -in[ 4][ 7].im;
  out[ 1][ 7].im =  in[ 4][ 7].re;
  out[ 1][10].re = -in[ 4][10].im;
  out[ 1][10].im =  in[ 4][10].re;
  out[ 4][ 1].re = -in[ 1][ 1].im;
  out[ 4][ 1].im =  in[ 1][ 1].re;
  out[ 4][ 4].re = -in[ 1][ 4].im;
  out[ 4][ 4].im =  in[ 1][ 4].re;
  out[ 4][ 7].re = -in[ 1][ 7].im;
  out[ 4][ 7].im =  in[ 1][ 7].re;
  out[ 4][10].re = -in[ 1][10].im;
  out[ 4][10].im =  in[ 1][10].re;
  out[ 7][ 1].re =  in[10][ 1].im;
  out[ 7][ 1].im = -in[10][ 1].re;
  out[ 7][ 4].re =  in[10][ 4].im;
  out[ 7][ 4].im = -in[10][ 4].re;
  out[ 7][ 7].re =  in[10][ 7].im;
  out[ 7][ 7].im = -in[10][ 7].re;
  out[ 7][10].re =  in[10][10].im;
  out[ 7][10].im = -in[10][10].re;
  out[10][ 1].re =  in[ 7][ 1].im;
  out[10][ 1].im = -in[ 7][ 1].re;
  out[10][ 4].re =  in[ 7][ 4].im;
  out[10][ 4].im = -in[ 7][ 4].re;
  out[10][ 7].re =  in[ 7][ 7].im;
  out[10][ 7].im = -in[ 7][ 7].re;
  out[10][10].re =  in[ 7][10].im;
  out[10][10].im = -in[ 7][10].re;

  out[ 1][ 2].re = -in[ 4][ 2].im;
  out[ 1][ 2].im =  in[ 4][ 2].re;
  out[ 1][ 5].re = -in[ 4][ 5].im;
  out[ 1][ 5].im =  in[ 4][ 5].re;
  out[ 1][ 8].re = -in[ 4][ 8].im;
  out[ 1][ 8].im =  in[ 4][ 8].re;
  out[ 1][11].re = -in[ 4][11].im;
  out[ 1][11].im =  in[ 4][11].re;
  out[ 4][ 2].re = -in[ 1][ 2].im;
  out[ 4][ 2].im =  in[ 1][ 2].re;
  out[ 4][ 5].re = -in[ 1][ 5].im;
  out[ 4][ 5].im =  in[ 1][ 5].re;
  out[ 4][ 8].re = -in[ 1][ 8].im;
  out[ 4][ 8].im =  in[ 1][ 8].re;
  out[ 4][11].re = -in[ 1][11].im;
  out[ 4][11].im =  in[ 1][11].re;
  out[ 7][ 2].re =  in[10][ 2].im;
  out[ 7][ 2].im = -in[10][ 2].re;
  out[ 7][ 5].re =  in[10][ 5].im;
  out[ 7][ 5].im = -in[10][ 5].re;
  out[ 7][ 8].re =  in[10][ 8].im;
  out[ 7][ 8].im = -in[10][ 8].re;
  out[ 7][11].re =  in[10][11].im;
  out[ 7][11].im = -in[10][11].re;
  out[10][ 2].re =  in[ 7][ 2].im;
  out[10][ 2].im = -in[ 7][ 2].re;
  out[10][ 5].re =  in[ 7][ 5].im;
  out[10][ 5].im = -in[ 7][ 5].re;
  out[10][ 8].re =  in[ 7][ 8].im;
  out[10][ 8].im = -in[ 7][ 8].re;
  out[10][11].re =  in[ 7][11].im;
  out[10][11].im = -in[ 7][11].re;

  out[ 2][ 0].re = -in[ 5][ 0].im;
  out[ 2][ 0].im =  in[ 5][ 0].re;
  out[ 2][ 3].re = -in[ 5][ 3].im;
  out[ 2][ 3].im =  in[ 5][ 3].re;
  out[ 2][ 6].re = -in[ 5][ 6].im;
  out[ 2][ 6].im =  in[ 5][ 6].re;
  out[ 2][ 9].re = -in[ 5][ 9].im;
  out[ 2][ 9].im =  in[ 5][ 9].re;
  out[ 5][ 0].re = -in[ 2][ 0].im;
  out[ 5][ 0].im =  in[ 2][ 0].re;
  out[ 5][ 3].re = -in[ 2][ 3].im;
  out[ 5][ 3].im =  in[ 2][ 3].re;
  out[ 5][ 6].re = -in[ 2][ 6].im;
  out[ 5][ 6].im =  in[ 2][ 6].re;
  out[ 5][ 9].re = -in[ 2][ 9].im;
  out[ 5][ 9].im =  in[ 2][ 9].re;
  out[ 8][ 0].re =  in[11][ 0].im;
  out[ 8][ 0].im = -in[11][ 0].re;
  out[ 8][ 3].re =  in[11][ 3].im;
  out[ 8][ 3].im = -in[11][ 3].re;
  out[ 8][ 6].re =  in[11][ 6].im;
  out[ 8][ 6].im = -in[11][ 6].re;
  out[ 8][ 9].re =  in[11][ 9].im;
  out[ 8][ 9].im = -in[11][ 9].re;
  out[11][ 0].re =  in[ 8][ 0].im;
  out[11][ 0].im = -in[ 8][ 0].re;
  out[11][ 3].re =  in[ 8][ 3].im;
  out[11][ 3].im = -in[ 8][ 3].re;
  out[11][ 6].re =  in[ 8][ 6].im;
  out[11][ 6].im = -in[ 8][ 6].re;
  out[11][ 9].re =  in[ 8][ 9].im;
  out[11][ 9].im = -in[ 8][ 9].re;

  out[ 2][ 1].re = -in[ 5][ 1].im;
  out[ 2][ 1].im =  in[ 5][ 1].re;
  out[ 2][ 4].re = -in[ 5][ 4].im;
  out[ 2][ 4].im =  in[ 5][ 4].re;
  out[ 2][ 7].re = -in[ 5][ 7].im;
  out[ 2][ 7].im =  in[ 5][ 7].re;
  out[ 2][10].re = -in[ 5][10].im;
  out[ 2][10].im =  in[ 5][10].re;
  out[ 5][ 1].re = -in[ 2][ 1].im;
  out[ 5][ 1].im =  in[ 2][ 1].re;
  out[ 5][ 4].re = -in[ 2][ 4].im;
  out[ 5][ 4].im =  in[ 2][ 4].re;
  out[ 5][ 7].re = -in[ 2][ 7].im;
  out[ 5][ 7].im =  in[ 2][ 7].re;
  out[ 5][10].re = -in[ 2][10].im;
  out[ 5][10].im =  in[ 2][10].re;
  out[ 8][ 1].re =  in[11][ 1].im;
  out[ 8][ 1].im = -in[11][ 1].re;
  out[ 8][ 4].re =  in[11][ 4].im;
  out[ 8][ 4].im = -in[11][ 4].re;
  out[ 8][ 7].re =  in[11][ 7].im;
  out[ 8][ 7].im = -in[11][ 7].re;
  out[ 8][10].re =  in[11][10].im;
  out[ 8][10].im = -in[11][10].re;
  out[11][ 1].re =  in[ 8][ 1].im;
  out[11][ 1].im = -in[ 8][ 1].re;
  out[11][ 4].re =  in[ 8][ 4].im;
  out[11][ 4].im = -in[ 8][ 4].re;
  out[11][ 7].re =  in[ 8][ 7].im;
  out[11][ 7].im = -in[ 8][ 7].re;
  out[11][10].re =  in[ 8][10].im;
  out[11][10].im = -in[ 8][10].re;

  out[ 2][ 2].re = -in[ 5][ 2].im;
  out[ 2][ 2].im =  in[ 5][ 2].re;
  out[ 2][ 5].re = -in[ 5][ 5].im;
  out[ 2][ 5].im =  in[ 5][ 5].re;
  out[ 2][ 8].re = -in[ 5][ 8].im;
  out[ 2][ 8].im =  in[ 5][ 8].re;
  out[ 2][11].re = -in[ 5][11].im;
  out[ 2][11].im =  in[ 5][11].re;
  out[ 5][ 2].re = -in[ 2][ 2].im;
  out[ 5][ 2].im =  in[ 2][ 2].re;
  out[ 5][ 5].re = -in[ 2][ 5].im;
  out[ 5][ 5].im =  in[ 2][ 5].re;
  out[ 5][ 8].re = -in[ 2][ 8].im;
  out[ 5][ 8].im =  in[ 2][ 8].re;
  out[ 5][11].re = -in[ 2][11].im;
  out[ 5][11].im =  in[ 2][11].re;
  out[ 8][ 2].re =  in[11][ 2].im;
  out[ 8][ 2].im = -in[11][ 2].re;
  out[ 8][ 5].re =  in[11][ 5].im;
  out[ 8][ 5].im = -in[11][ 5].re;
  out[ 8][ 8].re =  in[11][ 8].im;
  out[ 8][ 8].im = -in[11][ 8].re;
  out[ 8][11].re =  in[11][11].im;
  out[ 8][11].im = -in[11][11].re;
  out[11][ 2].re =  in[ 8][ 2].im;
  out[11][ 2].im = -in[ 8][ 2].re;
  out[11][ 5].re =  in[ 8][ 5].im;
  out[11][ 5].im = -in[ 8][ 5].re;
  out[11][ 8].re =  in[ 8][ 8].im;
  out[11][ 8].im = -in[ 8][ 8].re;
  out[11][11].re =  in[ 8][11].im;
  out[11][11].im = -in[ 8][11].re;


  return;
}

/* multiply prop by C\gamma_t from the left */
__inline__ void
prop_Cgt_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 9][ 0].re;
  out[ 0][ 0].im = -in[ 9][ 0].im;
  out[ 0][ 3].re = -in[ 9][ 3].re;
  out[ 0][ 3].im = -in[ 9][ 3].im;
  out[ 0][ 6].re = -in[ 9][ 6].re;
  out[ 0][ 6].im = -in[ 9][ 6].im;
  out[ 0][ 9].re = -in[ 9][ 9].re;
  out[ 0][ 9].im = -in[ 9][ 9].im;
  out[ 3][ 0].re =  in[ 6][ 0].re;
  out[ 3][ 0].im =  in[ 6][ 0].im;
  out[ 3][ 3].re =  in[ 6][ 3].re;
  out[ 3][ 3].im =  in[ 6][ 3].im;
  out[ 3][ 6].re =  in[ 6][ 6].re;
  out[ 3][ 6].im =  in[ 6][ 6].im;
  out[ 3][ 9].re =  in[ 6][ 9].re;
  out[ 3][ 9].im =  in[ 6][ 9].im;
  out[ 6][ 0].re =  in[ 3][ 0].re;
  out[ 6][ 0].im =  in[ 3][ 0].im;
  out[ 6][ 3].re =  in[ 3][ 3].re;
  out[ 6][ 3].im =  in[ 3][ 3].im;
  out[ 6][ 6].re =  in[ 3][ 6].re;
  out[ 6][ 6].im =  in[ 3][ 6].im;
  out[ 6][ 9].re =  in[ 3][ 9].re;
  out[ 6][ 9].im =  in[ 3][ 9].im;
  out[ 9][ 0].re = -in[ 0][ 0].re;
  out[ 9][ 0].im = -in[ 0][ 0].im;
  out[ 9][ 3].re = -in[ 0][ 3].re;
  out[ 9][ 3].im = -in[ 0][ 3].im;
  out[ 9][ 6].re = -in[ 0][ 6].re;
  out[ 9][ 6].im = -in[ 0][ 6].im;
  out[ 9][ 9].re = -in[ 0][ 9].re;
  out[ 9][ 9].im = -in[ 0][ 9].im;

  out[ 0][ 1].re = -in[ 9][ 1].re;
  out[ 0][ 1].im = -in[ 9][ 1].im;
  out[ 0][ 4].re = -in[ 9][ 4].re;
  out[ 0][ 4].im = -in[ 9][ 4].im;
  out[ 0][ 7].re = -in[ 9][ 7].re;
  out[ 0][ 7].im = -in[ 9][ 7].im;
  out[ 0][10].re = -in[ 9][10].re;
  out[ 0][10].im = -in[ 9][10].im;
  out[ 3][ 1].re =  in[ 6][ 1].re;
  out[ 3][ 1].im =  in[ 6][ 1].im;
  out[ 3][ 4].re =  in[ 6][ 4].re;
  out[ 3][ 4].im =  in[ 6][ 4].im;
  out[ 3][ 7].re =  in[ 6][ 7].re;
  out[ 3][ 7].im =  in[ 6][ 7].im;
  out[ 3][10].re =  in[ 6][10].re;
  out[ 3][10].im =  in[ 6][10].im;
  out[ 6][ 1].re =  in[ 3][ 1].re;
  out[ 6][ 1].im =  in[ 3][ 1].im;
  out[ 6][ 4].re =  in[ 3][ 4].re;
  out[ 6][ 4].im =  in[ 3][ 4].im;
  out[ 6][ 7].re =  in[ 3][ 7].re;
  out[ 6][ 7].im =  in[ 3][ 7].im;
  out[ 6][10].re =  in[ 3][10].re;
  out[ 6][10].im =  in[ 3][10].im;
  out[ 9][ 1].re = -in[ 0][ 1].re;
  out[ 9][ 1].im = -in[ 0][ 1].im;
  out[ 9][ 4].re = -in[ 0][ 4].re;
  out[ 9][ 4].im = -in[ 0][ 4].im;
  out[ 9][ 7].re = -in[ 0][ 7].re;
  out[ 9][ 7].im = -in[ 0][ 7].im;
  out[ 9][10].re = -in[ 0][10].re;
  out[ 9][10].im = -in[ 0][10].im;

  out[ 0][ 2].re = -in[ 9][ 2].re;
  out[ 0][ 2].im = -in[ 9][ 2].im;
  out[ 0][ 5].re = -in[ 9][ 5].re;
  out[ 0][ 5].im = -in[ 9][ 5].im;
  out[ 0][ 8].re = -in[ 9][ 8].re;
  out[ 0][ 8].im = -in[ 9][ 8].im;
  out[ 0][11].re = -in[ 9][11].re;
  out[ 0][11].im = -in[ 9][11].im;
  out[ 3][ 2].re =  in[ 6][ 2].re;
  out[ 3][ 2].im =  in[ 6][ 2].im;
  out[ 3][ 5].re =  in[ 6][ 5].re;
  out[ 3][ 5].im =  in[ 6][ 5].im;
  out[ 3][ 8].re =  in[ 6][ 8].re;
  out[ 3][ 8].im =  in[ 6][ 8].im;
  out[ 3][11].re =  in[ 6][11].re;
  out[ 3][11].im =  in[ 6][11].im;
  out[ 6][ 2].re =  in[ 3][ 2].re;
  out[ 6][ 2].im =  in[ 3][ 2].im;
  out[ 6][ 5].re =  in[ 3][ 5].re;
  out[ 6][ 5].im =  in[ 3][ 5].im;
  out[ 6][ 8].re =  in[ 3][ 8].re;
  out[ 6][ 8].im =  in[ 3][ 8].im;
  out[ 6][11].re =  in[ 3][11].re;
  out[ 6][11].im =  in[ 3][11].im;
  out[ 9][ 2].re = -in[ 0][ 2].re;
  out[ 9][ 2].im = -in[ 0][ 2].im;
  out[ 9][ 5].re = -in[ 0][ 5].re;
  out[ 9][ 5].im = -in[ 0][ 5].im;
  out[ 9][ 8].re = -in[ 0][ 8].re;
  out[ 9][ 8].im = -in[ 0][ 8].im;
  out[ 9][11].re = -in[ 0][11].re;
  out[ 9][11].im = -in[ 0][11].im;

  out[ 1][ 0].re = -in[10][ 0].re;
  out[ 1][ 0].im = -in[10][ 0].im;
  out[ 1][ 3].re = -in[10][ 3].re;
  out[ 1][ 3].im = -in[10][ 3].im;
  out[ 1][ 6].re = -in[10][ 6].re;
  out[ 1][ 6].im = -in[10][ 6].im;
  out[ 1][ 9].re = -in[10][ 9].re;
  out[ 1][ 9].im = -in[10][ 9].im;
  out[ 4][ 0].re =  in[ 7][ 0].re;
  out[ 4][ 0].im =  in[ 7][ 0].im;
  out[ 4][ 3].re =  in[ 7][ 3].re;
  out[ 4][ 3].im =  in[ 7][ 3].im;
  out[ 4][ 6].re =  in[ 7][ 6].re;
  out[ 4][ 6].im =  in[ 7][ 6].im;
  out[ 4][ 9].re =  in[ 7][ 9].re;
  out[ 4][ 9].im =  in[ 7][ 9].im;
  out[ 7][ 0].re =  in[ 4][ 0].re;
  out[ 7][ 0].im =  in[ 4][ 0].im;
  out[ 7][ 3].re =  in[ 4][ 3].re;
  out[ 7][ 3].im =  in[ 4][ 3].im;
  out[ 7][ 6].re =  in[ 4][ 6].re;
  out[ 7][ 6].im =  in[ 4][ 6].im;
  out[ 7][ 9].re =  in[ 4][ 9].re;
  out[ 7][ 9].im =  in[ 4][ 9].im;
  out[10][ 0].re = -in[ 1][ 0].re;
  out[10][ 0].im = -in[ 1][ 0].im;
  out[10][ 3].re = -in[ 1][ 3].re;
  out[10][ 3].im = -in[ 1][ 3].im;
  out[10][ 6].re = -in[ 1][ 6].re;
  out[10][ 6].im = -in[ 1][ 6].im;
  out[10][ 9].re = -in[ 1][ 9].re;
  out[10][ 9].im = -in[ 1][ 9].im;

  out[ 1][ 1].re = -in[10][ 1].re;
  out[ 1][ 1].im = -in[10][ 1].im;
  out[ 1][ 4].re = -in[10][ 4].re;
  out[ 1][ 4].im = -in[10][ 4].im;
  out[ 1][ 7].re = -in[10][ 7].re;
  out[ 1][ 7].im = -in[10][ 7].im;
  out[ 1][10].re = -in[10][10].re;
  out[ 1][10].im = -in[10][10].im;
  out[ 4][ 1].re =  in[ 7][ 1].re;
  out[ 4][ 1].im =  in[ 7][ 1].im;
  out[ 4][ 4].re =  in[ 7][ 4].re;
  out[ 4][ 4].im =  in[ 7][ 4].im;
  out[ 4][ 7].re =  in[ 7][ 7].re;
  out[ 4][ 7].im =  in[ 7][ 7].im;
  out[ 4][10].re =  in[ 7][10].re;
  out[ 4][10].im =  in[ 7][10].im;
  out[ 7][ 1].re =  in[ 4][ 1].re;
  out[ 7][ 1].im =  in[ 4][ 1].im;
  out[ 7][ 4].re =  in[ 4][ 4].re;
  out[ 7][ 4].im =  in[ 4][ 4].im;
  out[ 7][ 7].re =  in[ 4][ 7].re;
  out[ 7][ 7].im =  in[ 4][ 7].im;
  out[ 7][10].re =  in[ 4][10].re;
  out[ 7][10].im =  in[ 4][10].im;
  out[10][ 1].re = -in[ 1][ 1].re;
  out[10][ 1].im = -in[ 1][ 1].im;
  out[10][ 4].re = -in[ 1][ 4].re;
  out[10][ 4].im = -in[ 1][ 4].im;
  out[10][ 7].re = -in[ 1][ 7].re;
  out[10][ 7].im = -in[ 1][ 7].im;
  out[10][10].re = -in[ 1][10].re;
  out[10][10].im = -in[ 1][10].im;

  out[ 1][ 2].re = -in[10][ 2].re;
  out[ 1][ 2].im = -in[10][ 2].im;
  out[ 1][ 5].re = -in[10][ 5].re;
  out[ 1][ 5].im = -in[10][ 5].im;
  out[ 1][ 8].re = -in[10][ 8].re;
  out[ 1][ 8].im = -in[10][ 8].im;
  out[ 1][11].re = -in[10][11].re;
  out[ 1][11].im = -in[10][11].im;
  out[ 4][ 2].re =  in[ 7][ 2].re;
  out[ 4][ 2].im =  in[ 7][ 2].im;
  out[ 4][ 5].re =  in[ 7][ 5].re;
  out[ 4][ 5].im =  in[ 7][ 5].im;
  out[ 4][ 8].re =  in[ 7][ 8].re;
  out[ 4][ 8].im =  in[ 7][ 8].im;
  out[ 4][11].re =  in[ 7][11].re;
  out[ 4][11].im =  in[ 7][11].im;
  out[ 7][ 2].re =  in[ 4][ 2].re;
  out[ 7][ 2].im =  in[ 4][ 2].im;
  out[ 7][ 5].re =  in[ 4][ 5].re;
  out[ 7][ 5].im =  in[ 4][ 5].im;
  out[ 7][ 8].re =  in[ 4][ 8].re;
  out[ 7][ 8].im =  in[ 4][ 8].im;
  out[ 7][11].re =  in[ 4][11].re;
  out[ 7][11].im =  in[ 4][11].im;
  out[10][ 2].re = -in[ 1][ 2].re;
  out[10][ 2].im = -in[ 1][ 2].im;
  out[10][ 5].re = -in[ 1][ 5].re;
  out[10][ 5].im = -in[ 1][ 5].im;
  out[10][ 8].re = -in[ 1][ 8].re;
  out[10][ 8].im = -in[ 1][ 8].im;
  out[10][11].re = -in[ 1][11].re;
  out[10][11].im = -in[ 1][11].im;

  out[ 2][ 0].re = -in[11][ 0].re;
  out[ 2][ 0].im = -in[11][ 0].im;
  out[ 2][ 3].re = -in[11][ 3].re;
  out[ 2][ 3].im = -in[11][ 3].im;
  out[ 2][ 6].re = -in[11][ 6].re;
  out[ 2][ 6].im = -in[11][ 6].im;
  out[ 2][ 9].re = -in[11][ 9].re;
  out[ 2][ 9].im = -in[11][ 9].im;
  out[ 5][ 0].re =  in[ 8][ 0].re;
  out[ 5][ 0].im =  in[ 8][ 0].im;
  out[ 5][ 3].re =  in[ 8][ 3].re;
  out[ 5][ 3].im =  in[ 8][ 3].im;
  out[ 5][ 6].re =  in[ 8][ 6].re;
  out[ 5][ 6].im =  in[ 8][ 6].im;
  out[ 5][ 9].re =  in[ 8][ 9].re;
  out[ 5][ 9].im =  in[ 8][ 9].im;
  out[ 8][ 0].re =  in[ 5][ 0].re;
  out[ 8][ 0].im =  in[ 5][ 0].im;
  out[ 8][ 3].re =  in[ 5][ 3].re;
  out[ 8][ 3].im =  in[ 5][ 3].im;
  out[ 8][ 6].re =  in[ 5][ 6].re;
  out[ 8][ 6].im =  in[ 5][ 6].im;
  out[ 8][ 9].re =  in[ 5][ 9].re;
  out[ 8][ 9].im =  in[ 5][ 9].im;
  out[11][ 0].re = -in[ 2][ 0].re;
  out[11][ 0].im = -in[ 2][ 0].im;
  out[11][ 3].re = -in[ 2][ 3].re;
  out[11][ 3].im = -in[ 2][ 3].im;
  out[11][ 6].re = -in[ 2][ 6].re;
  out[11][ 6].im = -in[ 2][ 6].im;
  out[11][ 9].re = -in[ 2][ 9].re;
  out[11][ 9].im = -in[ 2][ 9].im;

  out[ 2][ 1].re = -in[11][ 1].re;
  out[ 2][ 1].im = -in[11][ 1].im;
  out[ 2][ 4].re = -in[11][ 4].re;
  out[ 2][ 4].im = -in[11][ 4].im;
  out[ 2][ 7].re = -in[11][ 7].re;
  out[ 2][ 7].im = -in[11][ 7].im;
  out[ 2][10].re = -in[11][10].re;
  out[ 2][10].im = -in[11][10].im;
  out[ 5][ 1].re =  in[ 8][ 1].re;
  out[ 5][ 1].im =  in[ 8][ 1].im;
  out[ 5][ 4].re =  in[ 8][ 4].re;
  out[ 5][ 4].im =  in[ 8][ 4].im;
  out[ 5][ 7].re =  in[ 8][ 7].re;
  out[ 5][ 7].im =  in[ 8][ 7].im;
  out[ 5][10].re =  in[ 8][10].re;
  out[ 5][10].im =  in[ 8][10].im;
  out[ 8][ 1].re =  in[ 5][ 1].re;
  out[ 8][ 1].im =  in[ 5][ 1].im;
  out[ 8][ 4].re =  in[ 5][ 4].re;
  out[ 8][ 4].im =  in[ 5][ 4].im;
  out[ 8][ 7].re =  in[ 5][ 7].re;
  out[ 8][ 7].im =  in[ 5][ 7].im;
  out[ 8][10].re =  in[ 5][10].re;
  out[ 8][10].im =  in[ 5][10].im;
  out[11][ 1].re = -in[ 2][ 1].re;
  out[11][ 1].im = -in[ 2][ 1].im;
  out[11][ 4].re = -in[ 2][ 4].re;
  out[11][ 4].im = -in[ 2][ 4].im;
  out[11][ 7].re = -in[ 2][ 7].re;
  out[11][ 7].im = -in[ 2][ 7].im;
  out[11][10].re = -in[ 2][10].re;
  out[11][10].im = -in[ 2][10].im;

  out[ 2][ 2].re = -in[11][ 2].re;
  out[ 2][ 2].im = -in[11][ 2].im;
  out[ 2][ 5].re = -in[11][ 5].re;
  out[ 2][ 5].im = -in[11][ 5].im;
  out[ 2][ 8].re = -in[11][ 8].re;
  out[ 2][ 8].im = -in[11][ 8].im;
  out[ 2][11].re = -in[11][11].re;
  out[ 2][11].im = -in[11][11].im;
  out[ 5][ 2].re =  in[ 8][ 2].re;
  out[ 5][ 2].im =  in[ 8][ 2].im;
  out[ 5][ 5].re =  in[ 8][ 5].re;
  out[ 5][ 5].im =  in[ 8][ 5].im;
  out[ 5][ 8].re =  in[ 8][ 8].re;
  out[ 5][ 8].im =  in[ 8][ 8].im;
  out[ 5][11].re =  in[ 8][11].re;
  out[ 5][11].im =  in[ 8][11].im;
  out[ 8][ 2].re =  in[ 5][ 2].re;
  out[ 8][ 2].im =  in[ 5][ 2].im;
  out[ 8][ 5].re =  in[ 5][ 5].re;
  out[ 8][ 5].im =  in[ 5][ 5].im;
  out[ 8][ 8].re =  in[ 5][ 8].re;
  out[ 8][ 8].im =  in[ 5][ 8].im;
  out[ 8][11].re =  in[ 5][11].re;
  out[ 8][11].im =  in[ 5][11].im;
  out[11][ 2].re = -in[ 2][ 2].re;
  out[11][ 2].im = -in[ 2][ 2].im;
  out[11][ 5].re = -in[ 2][ 5].re;
  out[11][ 5].im = -in[ 2][ 5].im;
  out[11][ 8].re = -in[ 2][ 8].re;
  out[11][ 8].im = -in[ 2][ 8].im;
  out[11][11].re = -in[ 2][11].re;
  out[11][11].im = -in[ 2][11].im;


  return;
}

/* multiply prop by ar{\gamma_x} from the right */
__inline__ void
prop_G_gamma_x(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 9].im;
  out[ 0][ 0].im =  in[ 0][ 9].re;
  out[ 0][ 3].re = -in[ 0][ 6].im;
  out[ 0][ 3].im =  in[ 0][ 6].re;
  out[ 0][ 6].re =  in[ 0][ 3].im;
  out[ 0][ 6].im = -in[ 0][ 3].re;
  out[ 0][ 9].re =  in[ 0][ 0].im;
  out[ 0][ 9].im = -in[ 0][ 0].re;
  out[ 3][ 0].re = -in[ 3][ 9].im;
  out[ 3][ 0].im =  in[ 3][ 9].re;
  out[ 3][ 3].re = -in[ 3][ 6].im;
  out[ 3][ 3].im =  in[ 3][ 6].re;
  out[ 3][ 6].re =  in[ 3][ 3].im;
  out[ 3][ 6].im = -in[ 3][ 3].re;
  out[ 3][ 9].re =  in[ 3][ 0].im;
  out[ 3][ 9].im = -in[ 3][ 0].re;
  out[ 6][ 0].re = -in[ 6][ 9].im;
  out[ 6][ 0].im =  in[ 6][ 9].re;
  out[ 6][ 3].re = -in[ 6][ 6].im;
  out[ 6][ 3].im =  in[ 6][ 6].re;
  out[ 6][ 6].re =  in[ 6][ 3].im;
  out[ 6][ 6].im = -in[ 6][ 3].re;
  out[ 6][ 9].re =  in[ 6][ 0].im;
  out[ 6][ 9].im = -in[ 6][ 0].re;
  out[ 9][ 0].re = -in[ 9][ 9].im;
  out[ 9][ 0].im =  in[ 9][ 9].re;
  out[ 9][ 3].re = -in[ 9][ 6].im;
  out[ 9][ 3].im =  in[ 9][ 6].re;
  out[ 9][ 6].re =  in[ 9][ 3].im;
  out[ 9][ 6].im = -in[ 9][ 3].re;
  out[ 9][ 9].re =  in[ 9][ 0].im;
  out[ 9][ 9].im = -in[ 9][ 0].re;

  out[ 0][ 1].re = -in[ 0][10].im;
  out[ 0][ 1].im =  in[ 0][10].re;
  out[ 0][ 4].re = -in[ 0][ 7].im;
  out[ 0][ 4].im =  in[ 0][ 7].re;
  out[ 0][ 7].re =  in[ 0][ 4].im;
  out[ 0][ 7].im = -in[ 0][ 4].re;
  out[ 0][10].re =  in[ 0][ 1].im;
  out[ 0][10].im = -in[ 0][ 1].re;
  out[ 3][ 1].re = -in[ 3][10].im;
  out[ 3][ 1].im =  in[ 3][10].re;
  out[ 3][ 4].re = -in[ 3][ 7].im;
  out[ 3][ 4].im =  in[ 3][ 7].re;
  out[ 3][ 7].re =  in[ 3][ 4].im;
  out[ 3][ 7].im = -in[ 3][ 4].re;
  out[ 3][10].re =  in[ 3][ 1].im;
  out[ 3][10].im = -in[ 3][ 1].re;
  out[ 6][ 1].re = -in[ 6][10].im;
  out[ 6][ 1].im =  in[ 6][10].re;
  out[ 6][ 4].re = -in[ 6][ 7].im;
  out[ 6][ 4].im =  in[ 6][ 7].re;
  out[ 6][ 7].re =  in[ 6][ 4].im;
  out[ 6][ 7].im = -in[ 6][ 4].re;
  out[ 6][10].re =  in[ 6][ 1].im;
  out[ 6][10].im = -in[ 6][ 1].re;
  out[ 9][ 1].re = -in[ 9][10].im;
  out[ 9][ 1].im =  in[ 9][10].re;
  out[ 9][ 4].re = -in[ 9][ 7].im;
  out[ 9][ 4].im =  in[ 9][ 7].re;
  out[ 9][ 7].re =  in[ 9][ 4].im;
  out[ 9][ 7].im = -in[ 9][ 4].re;
  out[ 9][10].re =  in[ 9][ 1].im;
  out[ 9][10].im = -in[ 9][ 1].re;

  out[ 0][ 2].re = -in[ 0][11].im;
  out[ 0][ 2].im =  in[ 0][11].re;
  out[ 0][ 5].re = -in[ 0][ 8].im;
  out[ 0][ 5].im =  in[ 0][ 8].re;
  out[ 0][ 8].re =  in[ 0][ 5].im;
  out[ 0][ 8].im = -in[ 0][ 5].re;
  out[ 0][11].re =  in[ 0][ 2].im;
  out[ 0][11].im = -in[ 0][ 2].re;
  out[ 3][ 2].re = -in[ 3][11].im;
  out[ 3][ 2].im =  in[ 3][11].re;
  out[ 3][ 5].re = -in[ 3][ 8].im;
  out[ 3][ 5].im =  in[ 3][ 8].re;
  out[ 3][ 8].re =  in[ 3][ 5].im;
  out[ 3][ 8].im = -in[ 3][ 5].re;
  out[ 3][11].re =  in[ 3][ 2].im;
  out[ 3][11].im = -in[ 3][ 2].re;
  out[ 6][ 2].re = -in[ 6][11].im;
  out[ 6][ 2].im =  in[ 6][11].re;
  out[ 6][ 5].re = -in[ 6][ 8].im;
  out[ 6][ 5].im =  in[ 6][ 8].re;
  out[ 6][ 8].re =  in[ 6][ 5].im;
  out[ 6][ 8].im = -in[ 6][ 5].re;
  out[ 6][11].re =  in[ 6][ 2].im;
  out[ 6][11].im = -in[ 6][ 2].re;
  out[ 9][ 2].re = -in[ 9][11].im;
  out[ 9][ 2].im =  in[ 9][11].re;
  out[ 9][ 5].re = -in[ 9][ 8].im;
  out[ 9][ 5].im =  in[ 9][ 8].re;
  out[ 9][ 8].re =  in[ 9][ 5].im;
  out[ 9][ 8].im = -in[ 9][ 5].re;
  out[ 9][11].re =  in[ 9][ 2].im;
  out[ 9][11].im = -in[ 9][ 2].re;

  out[ 1][ 0].re = -in[ 1][ 9].im;
  out[ 1][ 0].im =  in[ 1][ 9].re;
  out[ 1][ 3].re = -in[ 1][ 6].im;
  out[ 1][ 3].im =  in[ 1][ 6].re;
  out[ 1][ 6].re =  in[ 1][ 3].im;
  out[ 1][ 6].im = -in[ 1][ 3].re;
  out[ 1][ 9].re =  in[ 1][ 0].im;
  out[ 1][ 9].im = -in[ 1][ 0].re;
  out[ 4][ 0].re = -in[ 4][ 9].im;
  out[ 4][ 0].im =  in[ 4][ 9].re;
  out[ 4][ 3].re = -in[ 4][ 6].im;
  out[ 4][ 3].im =  in[ 4][ 6].re;
  out[ 4][ 6].re =  in[ 4][ 3].im;
  out[ 4][ 6].im = -in[ 4][ 3].re;
  out[ 4][ 9].re =  in[ 4][ 0].im;
  out[ 4][ 9].im = -in[ 4][ 0].re;
  out[ 7][ 0].re = -in[ 7][ 9].im;
  out[ 7][ 0].im =  in[ 7][ 9].re;
  out[ 7][ 3].re = -in[ 7][ 6].im;
  out[ 7][ 3].im =  in[ 7][ 6].re;
  out[ 7][ 6].re =  in[ 7][ 3].im;
  out[ 7][ 6].im = -in[ 7][ 3].re;
  out[ 7][ 9].re =  in[ 7][ 0].im;
  out[ 7][ 9].im = -in[ 7][ 0].re;
  out[10][ 0].re = -in[10][ 9].im;
  out[10][ 0].im =  in[10][ 9].re;
  out[10][ 3].re = -in[10][ 6].im;
  out[10][ 3].im =  in[10][ 6].re;
  out[10][ 6].re =  in[10][ 3].im;
  out[10][ 6].im = -in[10][ 3].re;
  out[10][ 9].re =  in[10][ 0].im;
  out[10][ 9].im = -in[10][ 0].re;

  out[ 1][ 1].re = -in[ 1][10].im;
  out[ 1][ 1].im =  in[ 1][10].re;
  out[ 1][ 4].re = -in[ 1][ 7].im;
  out[ 1][ 4].im =  in[ 1][ 7].re;
  out[ 1][ 7].re =  in[ 1][ 4].im;
  out[ 1][ 7].im = -in[ 1][ 4].re;
  out[ 1][10].re =  in[ 1][ 1].im;
  out[ 1][10].im = -in[ 1][ 1].re;
  out[ 4][ 1].re = -in[ 4][10].im;
  out[ 4][ 1].im =  in[ 4][10].re;
  out[ 4][ 4].re = -in[ 4][ 7].im;
  out[ 4][ 4].im =  in[ 4][ 7].re;
  out[ 4][ 7].re =  in[ 4][ 4].im;
  out[ 4][ 7].im = -in[ 4][ 4].re;
  out[ 4][10].re =  in[ 4][ 1].im;
  out[ 4][10].im = -in[ 4][ 1].re;
  out[ 7][ 1].re = -in[ 7][10].im;
  out[ 7][ 1].im =  in[ 7][10].re;
  out[ 7][ 4].re = -in[ 7][ 7].im;
  out[ 7][ 4].im =  in[ 7][ 7].re;
  out[ 7][ 7].re =  in[ 7][ 4].im;
  out[ 7][ 7].im = -in[ 7][ 4].re;
  out[ 7][10].re =  in[ 7][ 1].im;
  out[ 7][10].im = -in[ 7][ 1].re;
  out[10][ 1].re = -in[10][10].im;
  out[10][ 1].im =  in[10][10].re;
  out[10][ 4].re = -in[10][ 7].im;
  out[10][ 4].im =  in[10][ 7].re;
  out[10][ 7].re =  in[10][ 4].im;
  out[10][ 7].im = -in[10][ 4].re;
  out[10][10].re =  in[10][ 1].im;
  out[10][10].im = -in[10][ 1].re;

  out[ 1][ 2].re = -in[ 1][11].im;
  out[ 1][ 2].im =  in[ 1][11].re;
  out[ 1][ 5].re = -in[ 1][ 8].im;
  out[ 1][ 5].im =  in[ 1][ 8].re;
  out[ 1][ 8].re =  in[ 1][ 5].im;
  out[ 1][ 8].im = -in[ 1][ 5].re;
  out[ 1][11].re =  in[ 1][ 2].im;
  out[ 1][11].im = -in[ 1][ 2].re;
  out[ 4][ 2].re = -in[ 4][11].im;
  out[ 4][ 2].im =  in[ 4][11].re;
  out[ 4][ 5].re = -in[ 4][ 8].im;
  out[ 4][ 5].im =  in[ 4][ 8].re;
  out[ 4][ 8].re =  in[ 4][ 5].im;
  out[ 4][ 8].im = -in[ 4][ 5].re;
  out[ 4][11].re =  in[ 4][ 2].im;
  out[ 4][11].im = -in[ 4][ 2].re;
  out[ 7][ 2].re = -in[ 7][11].im;
  out[ 7][ 2].im =  in[ 7][11].re;
  out[ 7][ 5].re = -in[ 7][ 8].im;
  out[ 7][ 5].im =  in[ 7][ 8].re;
  out[ 7][ 8].re =  in[ 7][ 5].im;
  out[ 7][ 8].im = -in[ 7][ 5].re;
  out[ 7][11].re =  in[ 7][ 2].im;
  out[ 7][11].im = -in[ 7][ 2].re;
  out[10][ 2].re = -in[10][11].im;
  out[10][ 2].im =  in[10][11].re;
  out[10][ 5].re = -in[10][ 8].im;
  out[10][ 5].im =  in[10][ 8].re;
  out[10][ 8].re =  in[10][ 5].im;
  out[10][ 8].im = -in[10][ 5].re;
  out[10][11].re =  in[10][ 2].im;
  out[10][11].im = -in[10][ 2].re;

  out[ 2][ 0].re = -in[ 2][ 9].im;
  out[ 2][ 0].im =  in[ 2][ 9].re;
  out[ 2][ 3].re = -in[ 2][ 6].im;
  out[ 2][ 3].im =  in[ 2][ 6].re;
  out[ 2][ 6].re =  in[ 2][ 3].im;
  out[ 2][ 6].im = -in[ 2][ 3].re;
  out[ 2][ 9].re =  in[ 2][ 0].im;
  out[ 2][ 9].im = -in[ 2][ 0].re;
  out[ 5][ 0].re = -in[ 5][ 9].im;
  out[ 5][ 0].im =  in[ 5][ 9].re;
  out[ 5][ 3].re = -in[ 5][ 6].im;
  out[ 5][ 3].im =  in[ 5][ 6].re;
  out[ 5][ 6].re =  in[ 5][ 3].im;
  out[ 5][ 6].im = -in[ 5][ 3].re;
  out[ 5][ 9].re =  in[ 5][ 0].im;
  out[ 5][ 9].im = -in[ 5][ 0].re;
  out[ 8][ 0].re = -in[ 8][ 9].im;
  out[ 8][ 0].im =  in[ 8][ 9].re;
  out[ 8][ 3].re = -in[ 8][ 6].im;
  out[ 8][ 3].im =  in[ 8][ 6].re;
  out[ 8][ 6].re =  in[ 8][ 3].im;
  out[ 8][ 6].im = -in[ 8][ 3].re;
  out[ 8][ 9].re =  in[ 8][ 0].im;
  out[ 8][ 9].im = -in[ 8][ 0].re;
  out[11][ 0].re = -in[11][ 9].im;
  out[11][ 0].im =  in[11][ 9].re;
  out[11][ 3].re = -in[11][ 6].im;
  out[11][ 3].im =  in[11][ 6].re;
  out[11][ 6].re =  in[11][ 3].im;
  out[11][ 6].im = -in[11][ 3].re;
  out[11][ 9].re =  in[11][ 0].im;
  out[11][ 9].im = -in[11][ 0].re;

  out[ 2][ 1].re = -in[ 2][10].im;
  out[ 2][ 1].im =  in[ 2][10].re;
  out[ 2][ 4].re = -in[ 2][ 7].im;
  out[ 2][ 4].im =  in[ 2][ 7].re;
  out[ 2][ 7].re =  in[ 2][ 4].im;
  out[ 2][ 7].im = -in[ 2][ 4].re;
  out[ 2][10].re =  in[ 2][ 1].im;
  out[ 2][10].im = -in[ 2][ 1].re;
  out[ 5][ 1].re = -in[ 5][10].im;
  out[ 5][ 1].im =  in[ 5][10].re;
  out[ 5][ 4].re = -in[ 5][ 7].im;
  out[ 5][ 4].im =  in[ 5][ 7].re;
  out[ 5][ 7].re =  in[ 5][ 4].im;
  out[ 5][ 7].im = -in[ 5][ 4].re;
  out[ 5][10].re =  in[ 5][ 1].im;
  out[ 5][10].im = -in[ 5][ 1].re;
  out[ 8][ 1].re = -in[ 8][10].im;
  out[ 8][ 1].im =  in[ 8][10].re;
  out[ 8][ 4].re = -in[ 8][ 7].im;
  out[ 8][ 4].im =  in[ 8][ 7].re;
  out[ 8][ 7].re =  in[ 8][ 4].im;
  out[ 8][ 7].im = -in[ 8][ 4].re;
  out[ 8][10].re =  in[ 8][ 1].im;
  out[ 8][10].im = -in[ 8][ 1].re;
  out[11][ 1].re = -in[11][10].im;
  out[11][ 1].im =  in[11][10].re;
  out[11][ 4].re = -in[11][ 7].im;
  out[11][ 4].im =  in[11][ 7].re;
  out[11][ 7].re =  in[11][ 4].im;
  out[11][ 7].im = -in[11][ 4].re;
  out[11][10].re =  in[11][ 1].im;
  out[11][10].im = -in[11][ 1].re;

  out[ 2][ 2].re = -in[ 2][11].im;
  out[ 2][ 2].im =  in[ 2][11].re;
  out[ 2][ 5].re = -in[ 2][ 8].im;
  out[ 2][ 5].im =  in[ 2][ 8].re;
  out[ 2][ 8].re =  in[ 2][ 5].im;
  out[ 2][ 8].im = -in[ 2][ 5].re;
  out[ 2][11].re =  in[ 2][ 2].im;
  out[ 2][11].im = -in[ 2][ 2].re;
  out[ 5][ 2].re = -in[ 5][11].im;
  out[ 5][ 2].im =  in[ 5][11].re;
  out[ 5][ 5].re = -in[ 5][ 8].im;
  out[ 5][ 5].im =  in[ 5][ 8].re;
  out[ 5][ 8].re =  in[ 5][ 5].im;
  out[ 5][ 8].im = -in[ 5][ 5].re;
  out[ 5][11].re =  in[ 5][ 2].im;
  out[ 5][11].im = -in[ 5][ 2].re;
  out[ 8][ 2].re = -in[ 8][11].im;
  out[ 8][ 2].im =  in[ 8][11].re;
  out[ 8][ 5].re = -in[ 8][ 8].im;
  out[ 8][ 5].im =  in[ 8][ 8].re;
  out[ 8][ 8].re =  in[ 8][ 5].im;
  out[ 8][ 8].im = -in[ 8][ 5].re;
  out[ 8][11].re =  in[ 8][ 2].im;
  out[ 8][11].im = -in[ 8][ 2].re;
  out[11][ 2].re = -in[11][11].im;
  out[11][ 2].im =  in[11][11].re;
  out[11][ 5].re = -in[11][ 8].im;
  out[11][ 5].im =  in[11][ 8].re;
  out[11][ 8].re =  in[11][ 5].im;
  out[11][ 8].im = -in[11][ 5].re;
  out[11][11].re =  in[11][ 2].im;
  out[11][11].im = -in[11][ 2].re;


  return;
}

/* multiply prop by ar{\gamma_y} from the right */
__inline__ void
prop_G_gamma_y(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 9].re;
  out[ 0][ 0].im = -in[ 0][ 9].im;
  out[ 0][ 3].re =  in[ 0][ 6].re;
  out[ 0][ 3].im =  in[ 0][ 6].im;
  out[ 0][ 6].re =  in[ 0][ 3].re;
  out[ 0][ 6].im =  in[ 0][ 3].im;
  out[ 0][ 9].re = -in[ 0][ 0].re;
  out[ 0][ 9].im = -in[ 0][ 0].im;
  out[ 3][ 0].re = -in[ 3][ 9].re;
  out[ 3][ 0].im = -in[ 3][ 9].im;
  out[ 3][ 3].re =  in[ 3][ 6].re;
  out[ 3][ 3].im =  in[ 3][ 6].im;
  out[ 3][ 6].re =  in[ 3][ 3].re;
  out[ 3][ 6].im =  in[ 3][ 3].im;
  out[ 3][ 9].re = -in[ 3][ 0].re;
  out[ 3][ 9].im = -in[ 3][ 0].im;
  out[ 6][ 0].re = -in[ 6][ 9].re;
  out[ 6][ 0].im = -in[ 6][ 9].im;
  out[ 6][ 3].re =  in[ 6][ 6].re;
  out[ 6][ 3].im =  in[ 6][ 6].im;
  out[ 6][ 6].re =  in[ 6][ 3].re;
  out[ 6][ 6].im =  in[ 6][ 3].im;
  out[ 6][ 9].re = -in[ 6][ 0].re;
  out[ 6][ 9].im = -in[ 6][ 0].im;
  out[ 9][ 0].re = -in[ 9][ 9].re;
  out[ 9][ 0].im = -in[ 9][ 9].im;
  out[ 9][ 3].re =  in[ 9][ 6].re;
  out[ 9][ 3].im =  in[ 9][ 6].im;
  out[ 9][ 6].re =  in[ 9][ 3].re;
  out[ 9][ 6].im =  in[ 9][ 3].im;
  out[ 9][ 9].re = -in[ 9][ 0].re;
  out[ 9][ 9].im = -in[ 9][ 0].im;

  out[ 0][ 1].re = -in[ 0][10].re;
  out[ 0][ 1].im = -in[ 0][10].im;
  out[ 0][ 4].re =  in[ 0][ 7].re;
  out[ 0][ 4].im =  in[ 0][ 7].im;
  out[ 0][ 7].re =  in[ 0][ 4].re;
  out[ 0][ 7].im =  in[ 0][ 4].im;
  out[ 0][10].re = -in[ 0][ 1].re;
  out[ 0][10].im = -in[ 0][ 1].im;
  out[ 3][ 1].re = -in[ 3][10].re;
  out[ 3][ 1].im = -in[ 3][10].im;
  out[ 3][ 4].re =  in[ 3][ 7].re;
  out[ 3][ 4].im =  in[ 3][ 7].im;
  out[ 3][ 7].re =  in[ 3][ 4].re;
  out[ 3][ 7].im =  in[ 3][ 4].im;
  out[ 3][10].re = -in[ 3][ 1].re;
  out[ 3][10].im = -in[ 3][ 1].im;
  out[ 6][ 1].re = -in[ 6][10].re;
  out[ 6][ 1].im = -in[ 6][10].im;
  out[ 6][ 4].re =  in[ 6][ 7].re;
  out[ 6][ 4].im =  in[ 6][ 7].im;
  out[ 6][ 7].re =  in[ 6][ 4].re;
  out[ 6][ 7].im =  in[ 6][ 4].im;
  out[ 6][10].re = -in[ 6][ 1].re;
  out[ 6][10].im = -in[ 6][ 1].im;
  out[ 9][ 1].re = -in[ 9][10].re;
  out[ 9][ 1].im = -in[ 9][10].im;
  out[ 9][ 4].re =  in[ 9][ 7].re;
  out[ 9][ 4].im =  in[ 9][ 7].im;
  out[ 9][ 7].re =  in[ 9][ 4].re;
  out[ 9][ 7].im =  in[ 9][ 4].im;
  out[ 9][10].re = -in[ 9][ 1].re;
  out[ 9][10].im = -in[ 9][ 1].im;

  out[ 0][ 2].re = -in[ 0][11].re;
  out[ 0][ 2].im = -in[ 0][11].im;
  out[ 0][ 5].re =  in[ 0][ 8].re;
  out[ 0][ 5].im =  in[ 0][ 8].im;
  out[ 0][ 8].re =  in[ 0][ 5].re;
  out[ 0][ 8].im =  in[ 0][ 5].im;
  out[ 0][11].re = -in[ 0][ 2].re;
  out[ 0][11].im = -in[ 0][ 2].im;
  out[ 3][ 2].re = -in[ 3][11].re;
  out[ 3][ 2].im = -in[ 3][11].im;
  out[ 3][ 5].re =  in[ 3][ 8].re;
  out[ 3][ 5].im =  in[ 3][ 8].im;
  out[ 3][ 8].re =  in[ 3][ 5].re;
  out[ 3][ 8].im =  in[ 3][ 5].im;
  out[ 3][11].re = -in[ 3][ 2].re;
  out[ 3][11].im = -in[ 3][ 2].im;
  out[ 6][ 2].re = -in[ 6][11].re;
  out[ 6][ 2].im = -in[ 6][11].im;
  out[ 6][ 5].re =  in[ 6][ 8].re;
  out[ 6][ 5].im =  in[ 6][ 8].im;
  out[ 6][ 8].re =  in[ 6][ 5].re;
  out[ 6][ 8].im =  in[ 6][ 5].im;
  out[ 6][11].re = -in[ 6][ 2].re;
  out[ 6][11].im = -in[ 6][ 2].im;
  out[ 9][ 2].re = -in[ 9][11].re;
  out[ 9][ 2].im = -in[ 9][11].im;
  out[ 9][ 5].re =  in[ 9][ 8].re;
  out[ 9][ 5].im =  in[ 9][ 8].im;
  out[ 9][ 8].re =  in[ 9][ 5].re;
  out[ 9][ 8].im =  in[ 9][ 5].im;
  out[ 9][11].re = -in[ 9][ 2].re;
  out[ 9][11].im = -in[ 9][ 2].im;

  out[ 1][ 0].re = -in[ 1][ 9].re;
  out[ 1][ 0].im = -in[ 1][ 9].im;
  out[ 1][ 3].re =  in[ 1][ 6].re;
  out[ 1][ 3].im =  in[ 1][ 6].im;
  out[ 1][ 6].re =  in[ 1][ 3].re;
  out[ 1][ 6].im =  in[ 1][ 3].im;
  out[ 1][ 9].re = -in[ 1][ 0].re;
  out[ 1][ 9].im = -in[ 1][ 0].im;
  out[ 4][ 0].re = -in[ 4][ 9].re;
  out[ 4][ 0].im = -in[ 4][ 9].im;
  out[ 4][ 3].re =  in[ 4][ 6].re;
  out[ 4][ 3].im =  in[ 4][ 6].im;
  out[ 4][ 6].re =  in[ 4][ 3].re;
  out[ 4][ 6].im =  in[ 4][ 3].im;
  out[ 4][ 9].re = -in[ 4][ 0].re;
  out[ 4][ 9].im = -in[ 4][ 0].im;
  out[ 7][ 0].re = -in[ 7][ 9].re;
  out[ 7][ 0].im = -in[ 7][ 9].im;
  out[ 7][ 3].re =  in[ 7][ 6].re;
  out[ 7][ 3].im =  in[ 7][ 6].im;
  out[ 7][ 6].re =  in[ 7][ 3].re;
  out[ 7][ 6].im =  in[ 7][ 3].im;
  out[ 7][ 9].re = -in[ 7][ 0].re;
  out[ 7][ 9].im = -in[ 7][ 0].im;
  out[10][ 0].re = -in[10][ 9].re;
  out[10][ 0].im = -in[10][ 9].im;
  out[10][ 3].re =  in[10][ 6].re;
  out[10][ 3].im =  in[10][ 6].im;
  out[10][ 6].re =  in[10][ 3].re;
  out[10][ 6].im =  in[10][ 3].im;
  out[10][ 9].re = -in[10][ 0].re;
  out[10][ 9].im = -in[10][ 0].im;

  out[ 1][ 1].re = -in[ 1][10].re;
  out[ 1][ 1].im = -in[ 1][10].im;
  out[ 1][ 4].re =  in[ 1][ 7].re;
  out[ 1][ 4].im =  in[ 1][ 7].im;
  out[ 1][ 7].re =  in[ 1][ 4].re;
  out[ 1][ 7].im =  in[ 1][ 4].im;
  out[ 1][10].re = -in[ 1][ 1].re;
  out[ 1][10].im = -in[ 1][ 1].im;
  out[ 4][ 1].re = -in[ 4][10].re;
  out[ 4][ 1].im = -in[ 4][10].im;
  out[ 4][ 4].re =  in[ 4][ 7].re;
  out[ 4][ 4].im =  in[ 4][ 7].im;
  out[ 4][ 7].re =  in[ 4][ 4].re;
  out[ 4][ 7].im =  in[ 4][ 4].im;
  out[ 4][10].re = -in[ 4][ 1].re;
  out[ 4][10].im = -in[ 4][ 1].im;
  out[ 7][ 1].re = -in[ 7][10].re;
  out[ 7][ 1].im = -in[ 7][10].im;
  out[ 7][ 4].re =  in[ 7][ 7].re;
  out[ 7][ 4].im =  in[ 7][ 7].im;
  out[ 7][ 7].re =  in[ 7][ 4].re;
  out[ 7][ 7].im =  in[ 7][ 4].im;
  out[ 7][10].re = -in[ 7][ 1].re;
  out[ 7][10].im = -in[ 7][ 1].im;
  out[10][ 1].re = -in[10][10].re;
  out[10][ 1].im = -in[10][10].im;
  out[10][ 4].re =  in[10][ 7].re;
  out[10][ 4].im =  in[10][ 7].im;
  out[10][ 7].re =  in[10][ 4].re;
  out[10][ 7].im =  in[10][ 4].im;
  out[10][10].re = -in[10][ 1].re;
  out[10][10].im = -in[10][ 1].im;

  out[ 1][ 2].re = -in[ 1][11].re;
  out[ 1][ 2].im = -in[ 1][11].im;
  out[ 1][ 5].re =  in[ 1][ 8].re;
  out[ 1][ 5].im =  in[ 1][ 8].im;
  out[ 1][ 8].re =  in[ 1][ 5].re;
  out[ 1][ 8].im =  in[ 1][ 5].im;
  out[ 1][11].re = -in[ 1][ 2].re;
  out[ 1][11].im = -in[ 1][ 2].im;
  out[ 4][ 2].re = -in[ 4][11].re;
  out[ 4][ 2].im = -in[ 4][11].im;
  out[ 4][ 5].re =  in[ 4][ 8].re;
  out[ 4][ 5].im =  in[ 4][ 8].im;
  out[ 4][ 8].re =  in[ 4][ 5].re;
  out[ 4][ 8].im =  in[ 4][ 5].im;
  out[ 4][11].re = -in[ 4][ 2].re;
  out[ 4][11].im = -in[ 4][ 2].im;
  out[ 7][ 2].re = -in[ 7][11].re;
  out[ 7][ 2].im = -in[ 7][11].im;
  out[ 7][ 5].re =  in[ 7][ 8].re;
  out[ 7][ 5].im =  in[ 7][ 8].im;
  out[ 7][ 8].re =  in[ 7][ 5].re;
  out[ 7][ 8].im =  in[ 7][ 5].im;
  out[ 7][11].re = -in[ 7][ 2].re;
  out[ 7][11].im = -in[ 7][ 2].im;
  out[10][ 2].re = -in[10][11].re;
  out[10][ 2].im = -in[10][11].im;
  out[10][ 5].re =  in[10][ 8].re;
  out[10][ 5].im =  in[10][ 8].im;
  out[10][ 8].re =  in[10][ 5].re;
  out[10][ 8].im =  in[10][ 5].im;
  out[10][11].re = -in[10][ 2].re;
  out[10][11].im = -in[10][ 2].im;

  out[ 2][ 0].re = -in[ 2][ 9].re;
  out[ 2][ 0].im = -in[ 2][ 9].im;
  out[ 2][ 3].re =  in[ 2][ 6].re;
  out[ 2][ 3].im =  in[ 2][ 6].im;
  out[ 2][ 6].re =  in[ 2][ 3].re;
  out[ 2][ 6].im =  in[ 2][ 3].im;
  out[ 2][ 9].re = -in[ 2][ 0].re;
  out[ 2][ 9].im = -in[ 2][ 0].im;
  out[ 5][ 0].re = -in[ 5][ 9].re;
  out[ 5][ 0].im = -in[ 5][ 9].im;
  out[ 5][ 3].re =  in[ 5][ 6].re;
  out[ 5][ 3].im =  in[ 5][ 6].im;
  out[ 5][ 6].re =  in[ 5][ 3].re;
  out[ 5][ 6].im =  in[ 5][ 3].im;
  out[ 5][ 9].re = -in[ 5][ 0].re;
  out[ 5][ 9].im = -in[ 5][ 0].im;
  out[ 8][ 0].re = -in[ 8][ 9].re;
  out[ 8][ 0].im = -in[ 8][ 9].im;
  out[ 8][ 3].re =  in[ 8][ 6].re;
  out[ 8][ 3].im =  in[ 8][ 6].im;
  out[ 8][ 6].re =  in[ 8][ 3].re;
  out[ 8][ 6].im =  in[ 8][ 3].im;
  out[ 8][ 9].re = -in[ 8][ 0].re;
  out[ 8][ 9].im = -in[ 8][ 0].im;
  out[11][ 0].re = -in[11][ 9].re;
  out[11][ 0].im = -in[11][ 9].im;
  out[11][ 3].re =  in[11][ 6].re;
  out[11][ 3].im =  in[11][ 6].im;
  out[11][ 6].re =  in[11][ 3].re;
  out[11][ 6].im =  in[11][ 3].im;
  out[11][ 9].re = -in[11][ 0].re;
  out[11][ 9].im = -in[11][ 0].im;

  out[ 2][ 1].re = -in[ 2][10].re;
  out[ 2][ 1].im = -in[ 2][10].im;
  out[ 2][ 4].re =  in[ 2][ 7].re;
  out[ 2][ 4].im =  in[ 2][ 7].im;
  out[ 2][ 7].re =  in[ 2][ 4].re;
  out[ 2][ 7].im =  in[ 2][ 4].im;
  out[ 2][10].re = -in[ 2][ 1].re;
  out[ 2][10].im = -in[ 2][ 1].im;
  out[ 5][ 1].re = -in[ 5][10].re;
  out[ 5][ 1].im = -in[ 5][10].im;
  out[ 5][ 4].re =  in[ 5][ 7].re;
  out[ 5][ 4].im =  in[ 5][ 7].im;
  out[ 5][ 7].re =  in[ 5][ 4].re;
  out[ 5][ 7].im =  in[ 5][ 4].im;
  out[ 5][10].re = -in[ 5][ 1].re;
  out[ 5][10].im = -in[ 5][ 1].im;
  out[ 8][ 1].re = -in[ 8][10].re;
  out[ 8][ 1].im = -in[ 8][10].im;
  out[ 8][ 4].re =  in[ 8][ 7].re;
  out[ 8][ 4].im =  in[ 8][ 7].im;
  out[ 8][ 7].re =  in[ 8][ 4].re;
  out[ 8][ 7].im =  in[ 8][ 4].im;
  out[ 8][10].re = -in[ 8][ 1].re;
  out[ 8][10].im = -in[ 8][ 1].im;
  out[11][ 1].re = -in[11][10].re;
  out[11][ 1].im = -in[11][10].im;
  out[11][ 4].re =  in[11][ 7].re;
  out[11][ 4].im =  in[11][ 7].im;
  out[11][ 7].re =  in[11][ 4].re;
  out[11][ 7].im =  in[11][ 4].im;
  out[11][10].re = -in[11][ 1].re;
  out[11][10].im = -in[11][ 1].im;

  out[ 2][ 2].re = -in[ 2][11].re;
  out[ 2][ 2].im = -in[ 2][11].im;
  out[ 2][ 5].re =  in[ 2][ 8].re;
  out[ 2][ 5].im =  in[ 2][ 8].im;
  out[ 2][ 8].re =  in[ 2][ 5].re;
  out[ 2][ 8].im =  in[ 2][ 5].im;
  out[ 2][11].re = -in[ 2][ 2].re;
  out[ 2][11].im = -in[ 2][ 2].im;
  out[ 5][ 2].re = -in[ 5][11].re;
  out[ 5][ 2].im = -in[ 5][11].im;
  out[ 5][ 5].re =  in[ 5][ 8].re;
  out[ 5][ 5].im =  in[ 5][ 8].im;
  out[ 5][ 8].re =  in[ 5][ 5].re;
  out[ 5][ 8].im =  in[ 5][ 5].im;
  out[ 5][11].re = -in[ 5][ 2].re;
  out[ 5][11].im = -in[ 5][ 2].im;
  out[ 8][ 2].re = -in[ 8][11].re;
  out[ 8][ 2].im = -in[ 8][11].im;
  out[ 8][ 5].re =  in[ 8][ 8].re;
  out[ 8][ 5].im =  in[ 8][ 8].im;
  out[ 8][ 8].re =  in[ 8][ 5].re;
  out[ 8][ 8].im =  in[ 8][ 5].im;
  out[ 8][11].re = -in[ 8][ 2].re;
  out[ 8][11].im = -in[ 8][ 2].im;
  out[11][ 2].re = -in[11][11].re;
  out[11][ 2].im = -in[11][11].im;
  out[11][ 5].re =  in[11][ 8].re;
  out[11][ 5].im =  in[11][ 8].im;
  out[11][ 8].re =  in[11][ 5].re;
  out[11][ 8].im =  in[11][ 5].im;
  out[11][11].re = -in[11][ 2].re;
  out[11][11].im = -in[11][ 2].im;


  return;
}

/* multiply prop by ar{\gamma_z} from the right */
__inline__ void
prop_G_gamma_z(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 6].im;
  out[ 0][ 0].im =  in[ 0][ 6].re;
  out[ 0][ 3].re =  in[ 0][ 9].im;
  out[ 0][ 3].im = -in[ 0][ 9].re;
  out[ 0][ 6].re =  in[ 0][ 0].im;
  out[ 0][ 6].im = -in[ 0][ 0].re;
  out[ 0][ 9].re = -in[ 0][ 3].im;
  out[ 0][ 9].im =  in[ 0][ 3].re;
  out[ 3][ 0].re = -in[ 3][ 6].im;
  out[ 3][ 0].im =  in[ 3][ 6].re;
  out[ 3][ 3].re =  in[ 3][ 9].im;
  out[ 3][ 3].im = -in[ 3][ 9].re;
  out[ 3][ 6].re =  in[ 3][ 0].im;
  out[ 3][ 6].im = -in[ 3][ 0].re;
  out[ 3][ 9].re = -in[ 3][ 3].im;
  out[ 3][ 9].im =  in[ 3][ 3].re;
  out[ 6][ 0].re = -in[ 6][ 6].im;
  out[ 6][ 0].im =  in[ 6][ 6].re;
  out[ 6][ 3].re =  in[ 6][ 9].im;
  out[ 6][ 3].im = -in[ 6][ 9].re;
  out[ 6][ 6].re =  in[ 6][ 0].im;
  out[ 6][ 6].im = -in[ 6][ 0].re;
  out[ 6][ 9].re = -in[ 6][ 3].im;
  out[ 6][ 9].im =  in[ 6][ 3].re;
  out[ 9][ 0].re = -in[ 9][ 6].im;
  out[ 9][ 0].im =  in[ 9][ 6].re;
  out[ 9][ 3].re =  in[ 9][ 9].im;
  out[ 9][ 3].im = -in[ 9][ 9].re;
  out[ 9][ 6].re =  in[ 9][ 0].im;
  out[ 9][ 6].im = -in[ 9][ 0].re;
  out[ 9][ 9].re = -in[ 9][ 3].im;
  out[ 9][ 9].im =  in[ 9][ 3].re;

  out[ 0][ 1].re = -in[ 0][ 7].im;
  out[ 0][ 1].im =  in[ 0][ 7].re;
  out[ 0][ 4].re =  in[ 0][10].im;
  out[ 0][ 4].im = -in[ 0][10].re;
  out[ 0][ 7].re =  in[ 0][ 1].im;
  out[ 0][ 7].im = -in[ 0][ 1].re;
  out[ 0][10].re = -in[ 0][ 4].im;
  out[ 0][10].im =  in[ 0][ 4].re;
  out[ 3][ 1].re = -in[ 3][ 7].im;
  out[ 3][ 1].im =  in[ 3][ 7].re;
  out[ 3][ 4].re =  in[ 3][10].im;
  out[ 3][ 4].im = -in[ 3][10].re;
  out[ 3][ 7].re =  in[ 3][ 1].im;
  out[ 3][ 7].im = -in[ 3][ 1].re;
  out[ 3][10].re = -in[ 3][ 4].im;
  out[ 3][10].im =  in[ 3][ 4].re;
  out[ 6][ 1].re = -in[ 6][ 7].im;
  out[ 6][ 1].im =  in[ 6][ 7].re;
  out[ 6][ 4].re =  in[ 6][10].im;
  out[ 6][ 4].im = -in[ 6][10].re;
  out[ 6][ 7].re =  in[ 6][ 1].im;
  out[ 6][ 7].im = -in[ 6][ 1].re;
  out[ 6][10].re = -in[ 6][ 4].im;
  out[ 6][10].im =  in[ 6][ 4].re;
  out[ 9][ 1].re = -in[ 9][ 7].im;
  out[ 9][ 1].im =  in[ 9][ 7].re;
  out[ 9][ 4].re =  in[ 9][10].im;
  out[ 9][ 4].im = -in[ 9][10].re;
  out[ 9][ 7].re =  in[ 9][ 1].im;
  out[ 9][ 7].im = -in[ 9][ 1].re;
  out[ 9][10].re = -in[ 9][ 4].im;
  out[ 9][10].im =  in[ 9][ 4].re;

  out[ 0][ 2].re = -in[ 0][ 8].im;
  out[ 0][ 2].im =  in[ 0][ 8].re;
  out[ 0][ 5].re =  in[ 0][11].im;
  out[ 0][ 5].im = -in[ 0][11].re;
  out[ 0][ 8].re =  in[ 0][ 2].im;
  out[ 0][ 8].im = -in[ 0][ 2].re;
  out[ 0][11].re = -in[ 0][ 5].im;
  out[ 0][11].im =  in[ 0][ 5].re;
  out[ 3][ 2].re = -in[ 3][ 8].im;
  out[ 3][ 2].im =  in[ 3][ 8].re;
  out[ 3][ 5].re =  in[ 3][11].im;
  out[ 3][ 5].im = -in[ 3][11].re;
  out[ 3][ 8].re =  in[ 3][ 2].im;
  out[ 3][ 8].im = -in[ 3][ 2].re;
  out[ 3][11].re = -in[ 3][ 5].im;
  out[ 3][11].im =  in[ 3][ 5].re;
  out[ 6][ 2].re = -in[ 6][ 8].im;
  out[ 6][ 2].im =  in[ 6][ 8].re;
  out[ 6][ 5].re =  in[ 6][11].im;
  out[ 6][ 5].im = -in[ 6][11].re;
  out[ 6][ 8].re =  in[ 6][ 2].im;
  out[ 6][ 8].im = -in[ 6][ 2].re;
  out[ 6][11].re = -in[ 6][ 5].im;
  out[ 6][11].im =  in[ 6][ 5].re;
  out[ 9][ 2].re = -in[ 9][ 8].im;
  out[ 9][ 2].im =  in[ 9][ 8].re;
  out[ 9][ 5].re =  in[ 9][11].im;
  out[ 9][ 5].im = -in[ 9][11].re;
  out[ 9][ 8].re =  in[ 9][ 2].im;
  out[ 9][ 8].im = -in[ 9][ 2].re;
  out[ 9][11].re = -in[ 9][ 5].im;
  out[ 9][11].im =  in[ 9][ 5].re;

  out[ 1][ 0].re = -in[ 1][ 6].im;
  out[ 1][ 0].im =  in[ 1][ 6].re;
  out[ 1][ 3].re =  in[ 1][ 9].im;
  out[ 1][ 3].im = -in[ 1][ 9].re;
  out[ 1][ 6].re =  in[ 1][ 0].im;
  out[ 1][ 6].im = -in[ 1][ 0].re;
  out[ 1][ 9].re = -in[ 1][ 3].im;
  out[ 1][ 9].im =  in[ 1][ 3].re;
  out[ 4][ 0].re = -in[ 4][ 6].im;
  out[ 4][ 0].im =  in[ 4][ 6].re;
  out[ 4][ 3].re =  in[ 4][ 9].im;
  out[ 4][ 3].im = -in[ 4][ 9].re;
  out[ 4][ 6].re =  in[ 4][ 0].im;
  out[ 4][ 6].im = -in[ 4][ 0].re;
  out[ 4][ 9].re = -in[ 4][ 3].im;
  out[ 4][ 9].im =  in[ 4][ 3].re;
  out[ 7][ 0].re = -in[ 7][ 6].im;
  out[ 7][ 0].im =  in[ 7][ 6].re;
  out[ 7][ 3].re =  in[ 7][ 9].im;
  out[ 7][ 3].im = -in[ 7][ 9].re;
  out[ 7][ 6].re =  in[ 7][ 0].im;
  out[ 7][ 6].im = -in[ 7][ 0].re;
  out[ 7][ 9].re = -in[ 7][ 3].im;
  out[ 7][ 9].im =  in[ 7][ 3].re;
  out[10][ 0].re = -in[10][ 6].im;
  out[10][ 0].im =  in[10][ 6].re;
  out[10][ 3].re =  in[10][ 9].im;
  out[10][ 3].im = -in[10][ 9].re;
  out[10][ 6].re =  in[10][ 0].im;
  out[10][ 6].im = -in[10][ 0].re;
  out[10][ 9].re = -in[10][ 3].im;
  out[10][ 9].im =  in[10][ 3].re;

  out[ 1][ 1].re = -in[ 1][ 7].im;
  out[ 1][ 1].im =  in[ 1][ 7].re;
  out[ 1][ 4].re =  in[ 1][10].im;
  out[ 1][ 4].im = -in[ 1][10].re;
  out[ 1][ 7].re =  in[ 1][ 1].im;
  out[ 1][ 7].im = -in[ 1][ 1].re;
  out[ 1][10].re = -in[ 1][ 4].im;
  out[ 1][10].im =  in[ 1][ 4].re;
  out[ 4][ 1].re = -in[ 4][ 7].im;
  out[ 4][ 1].im =  in[ 4][ 7].re;
  out[ 4][ 4].re =  in[ 4][10].im;
  out[ 4][ 4].im = -in[ 4][10].re;
  out[ 4][ 7].re =  in[ 4][ 1].im;
  out[ 4][ 7].im = -in[ 4][ 1].re;
  out[ 4][10].re = -in[ 4][ 4].im;
  out[ 4][10].im =  in[ 4][ 4].re;
  out[ 7][ 1].re = -in[ 7][ 7].im;
  out[ 7][ 1].im =  in[ 7][ 7].re;
  out[ 7][ 4].re =  in[ 7][10].im;
  out[ 7][ 4].im = -in[ 7][10].re;
  out[ 7][ 7].re =  in[ 7][ 1].im;
  out[ 7][ 7].im = -in[ 7][ 1].re;
  out[ 7][10].re = -in[ 7][ 4].im;
  out[ 7][10].im =  in[ 7][ 4].re;
  out[10][ 1].re = -in[10][ 7].im;
  out[10][ 1].im =  in[10][ 7].re;
  out[10][ 4].re =  in[10][10].im;
  out[10][ 4].im = -in[10][10].re;
  out[10][ 7].re =  in[10][ 1].im;
  out[10][ 7].im = -in[10][ 1].re;
  out[10][10].re = -in[10][ 4].im;
  out[10][10].im =  in[10][ 4].re;

  out[ 1][ 2].re = -in[ 1][ 8].im;
  out[ 1][ 2].im =  in[ 1][ 8].re;
  out[ 1][ 5].re =  in[ 1][11].im;
  out[ 1][ 5].im = -in[ 1][11].re;
  out[ 1][ 8].re =  in[ 1][ 2].im;
  out[ 1][ 8].im = -in[ 1][ 2].re;
  out[ 1][11].re = -in[ 1][ 5].im;
  out[ 1][11].im =  in[ 1][ 5].re;
  out[ 4][ 2].re = -in[ 4][ 8].im;
  out[ 4][ 2].im =  in[ 4][ 8].re;
  out[ 4][ 5].re =  in[ 4][11].im;
  out[ 4][ 5].im = -in[ 4][11].re;
  out[ 4][ 8].re =  in[ 4][ 2].im;
  out[ 4][ 8].im = -in[ 4][ 2].re;
  out[ 4][11].re = -in[ 4][ 5].im;
  out[ 4][11].im =  in[ 4][ 5].re;
  out[ 7][ 2].re = -in[ 7][ 8].im;
  out[ 7][ 2].im =  in[ 7][ 8].re;
  out[ 7][ 5].re =  in[ 7][11].im;
  out[ 7][ 5].im = -in[ 7][11].re;
  out[ 7][ 8].re =  in[ 7][ 2].im;
  out[ 7][ 8].im = -in[ 7][ 2].re;
  out[ 7][11].re = -in[ 7][ 5].im;
  out[ 7][11].im =  in[ 7][ 5].re;
  out[10][ 2].re = -in[10][ 8].im;
  out[10][ 2].im =  in[10][ 8].re;
  out[10][ 5].re =  in[10][11].im;
  out[10][ 5].im = -in[10][11].re;
  out[10][ 8].re =  in[10][ 2].im;
  out[10][ 8].im = -in[10][ 2].re;
  out[10][11].re = -in[10][ 5].im;
  out[10][11].im =  in[10][ 5].re;

  out[ 2][ 0].re = -in[ 2][ 6].im;
  out[ 2][ 0].im =  in[ 2][ 6].re;
  out[ 2][ 3].re =  in[ 2][ 9].im;
  out[ 2][ 3].im = -in[ 2][ 9].re;
  out[ 2][ 6].re =  in[ 2][ 0].im;
  out[ 2][ 6].im = -in[ 2][ 0].re;
  out[ 2][ 9].re = -in[ 2][ 3].im;
  out[ 2][ 9].im =  in[ 2][ 3].re;
  out[ 5][ 0].re = -in[ 5][ 6].im;
  out[ 5][ 0].im =  in[ 5][ 6].re;
  out[ 5][ 3].re =  in[ 5][ 9].im;
  out[ 5][ 3].im = -in[ 5][ 9].re;
  out[ 5][ 6].re =  in[ 5][ 0].im;
  out[ 5][ 6].im = -in[ 5][ 0].re;
  out[ 5][ 9].re = -in[ 5][ 3].im;
  out[ 5][ 9].im =  in[ 5][ 3].re;
  out[ 8][ 0].re = -in[ 8][ 6].im;
  out[ 8][ 0].im =  in[ 8][ 6].re;
  out[ 8][ 3].re =  in[ 8][ 9].im;
  out[ 8][ 3].im = -in[ 8][ 9].re;
  out[ 8][ 6].re =  in[ 8][ 0].im;
  out[ 8][ 6].im = -in[ 8][ 0].re;
  out[ 8][ 9].re = -in[ 8][ 3].im;
  out[ 8][ 9].im =  in[ 8][ 3].re;
  out[11][ 0].re = -in[11][ 6].im;
  out[11][ 0].im =  in[11][ 6].re;
  out[11][ 3].re =  in[11][ 9].im;
  out[11][ 3].im = -in[11][ 9].re;
  out[11][ 6].re =  in[11][ 0].im;
  out[11][ 6].im = -in[11][ 0].re;
  out[11][ 9].re = -in[11][ 3].im;
  out[11][ 9].im =  in[11][ 3].re;

  out[ 2][ 1].re = -in[ 2][ 7].im;
  out[ 2][ 1].im =  in[ 2][ 7].re;
  out[ 2][ 4].re =  in[ 2][10].im;
  out[ 2][ 4].im = -in[ 2][10].re;
  out[ 2][ 7].re =  in[ 2][ 1].im;
  out[ 2][ 7].im = -in[ 2][ 1].re;
  out[ 2][10].re = -in[ 2][ 4].im;
  out[ 2][10].im =  in[ 2][ 4].re;
  out[ 5][ 1].re = -in[ 5][ 7].im;
  out[ 5][ 1].im =  in[ 5][ 7].re;
  out[ 5][ 4].re =  in[ 5][10].im;
  out[ 5][ 4].im = -in[ 5][10].re;
  out[ 5][ 7].re =  in[ 5][ 1].im;
  out[ 5][ 7].im = -in[ 5][ 1].re;
  out[ 5][10].re = -in[ 5][ 4].im;
  out[ 5][10].im =  in[ 5][ 4].re;
  out[ 8][ 1].re = -in[ 8][ 7].im;
  out[ 8][ 1].im =  in[ 8][ 7].re;
  out[ 8][ 4].re =  in[ 8][10].im;
  out[ 8][ 4].im = -in[ 8][10].re;
  out[ 8][ 7].re =  in[ 8][ 1].im;
  out[ 8][ 7].im = -in[ 8][ 1].re;
  out[ 8][10].re = -in[ 8][ 4].im;
  out[ 8][10].im =  in[ 8][ 4].re;
  out[11][ 1].re = -in[11][ 7].im;
  out[11][ 1].im =  in[11][ 7].re;
  out[11][ 4].re =  in[11][10].im;
  out[11][ 4].im = -in[11][10].re;
  out[11][ 7].re =  in[11][ 1].im;
  out[11][ 7].im = -in[11][ 1].re;
  out[11][10].re = -in[11][ 4].im;
  out[11][10].im =  in[11][ 4].re;

  out[ 2][ 2].re = -in[ 2][ 8].im;
  out[ 2][ 2].im =  in[ 2][ 8].re;
  out[ 2][ 5].re =  in[ 2][11].im;
  out[ 2][ 5].im = -in[ 2][11].re;
  out[ 2][ 8].re =  in[ 2][ 2].im;
  out[ 2][ 8].im = -in[ 2][ 2].re;
  out[ 2][11].re = -in[ 2][ 5].im;
  out[ 2][11].im =  in[ 2][ 5].re;
  out[ 5][ 2].re = -in[ 5][ 8].im;
  out[ 5][ 2].im =  in[ 5][ 8].re;
  out[ 5][ 5].re =  in[ 5][11].im;
  out[ 5][ 5].im = -in[ 5][11].re;
  out[ 5][ 8].re =  in[ 5][ 2].im;
  out[ 5][ 8].im = -in[ 5][ 2].re;
  out[ 5][11].re = -in[ 5][ 5].im;
  out[ 5][11].im =  in[ 5][ 5].re;
  out[ 8][ 2].re = -in[ 8][ 8].im;
  out[ 8][ 2].im =  in[ 8][ 8].re;
  out[ 8][ 5].re =  in[ 8][11].im;
  out[ 8][ 5].im = -in[ 8][11].re;
  out[ 8][ 8].re =  in[ 8][ 2].im;
  out[ 8][ 8].im = -in[ 8][ 2].re;
  out[ 8][11].re = -in[ 8][ 5].im;
  out[ 8][11].im =  in[ 8][ 5].re;
  out[11][ 2].re = -in[11][ 8].im;
  out[11][ 2].im =  in[11][ 8].re;
  out[11][ 5].re =  in[11][11].im;
  out[11][ 5].im = -in[11][11].re;
  out[11][ 8].re =  in[11][ 2].im;
  out[11][ 8].im = -in[11][ 2].re;
  out[11][11].re = -in[11][ 5].im;
  out[11][11].im =  in[11][ 5].re;


  return;
}

/* multiply prop by ar{\gamma_t} from the right */
__inline__ void
prop_G_gamma_t(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 3].re =  in[ 0][ 3].re;
  out[ 0][ 3].im =  in[ 0][ 3].im;
  out[ 0][ 6].re = -in[ 0][ 6].re;
  out[ 0][ 6].im = -in[ 0][ 6].im;
  out[ 0][ 9].re = -in[ 0][ 9].re;
  out[ 0][ 9].im = -in[ 0][ 9].im;
  out[ 3][ 0].re =  in[ 3][ 0].re;
  out[ 3][ 0].im =  in[ 3][ 0].im;
  out[ 3][ 3].re =  in[ 3][ 3].re;
  out[ 3][ 3].im =  in[ 3][ 3].im;
  out[ 3][ 6].re = -in[ 3][ 6].re;
  out[ 3][ 6].im = -in[ 3][ 6].im;
  out[ 3][ 9].re = -in[ 3][ 9].re;
  out[ 3][ 9].im = -in[ 3][ 9].im;
  out[ 6][ 0].re =  in[ 6][ 0].re;
  out[ 6][ 0].im =  in[ 6][ 0].im;
  out[ 6][ 3].re =  in[ 6][ 3].re;
  out[ 6][ 3].im =  in[ 6][ 3].im;
  out[ 6][ 6].re = -in[ 6][ 6].re;
  out[ 6][ 6].im = -in[ 6][ 6].im;
  out[ 6][ 9].re = -in[ 6][ 9].re;
  out[ 6][ 9].im = -in[ 6][ 9].im;
  out[ 9][ 0].re =  in[ 9][ 0].re;
  out[ 9][ 0].im =  in[ 9][ 0].im;
  out[ 9][ 3].re =  in[ 9][ 3].re;
  out[ 9][ 3].im =  in[ 9][ 3].im;
  out[ 9][ 6].re = -in[ 9][ 6].re;
  out[ 9][ 6].im = -in[ 9][ 6].im;
  out[ 9][ 9].re = -in[ 9][ 9].re;
  out[ 9][ 9].im = -in[ 9][ 9].im;

  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 4].re =  in[ 0][ 4].re;
  out[ 0][ 4].im =  in[ 0][ 4].im;
  out[ 0][ 7].re = -in[ 0][ 7].re;
  out[ 0][ 7].im = -in[ 0][ 7].im;
  out[ 0][10].re = -in[ 0][10].re;
  out[ 0][10].im = -in[ 0][10].im;
  out[ 3][ 1].re =  in[ 3][ 1].re;
  out[ 3][ 1].im =  in[ 3][ 1].im;
  out[ 3][ 4].re =  in[ 3][ 4].re;
  out[ 3][ 4].im =  in[ 3][ 4].im;
  out[ 3][ 7].re = -in[ 3][ 7].re;
  out[ 3][ 7].im = -in[ 3][ 7].im;
  out[ 3][10].re = -in[ 3][10].re;
  out[ 3][10].im = -in[ 3][10].im;
  out[ 6][ 1].re =  in[ 6][ 1].re;
  out[ 6][ 1].im =  in[ 6][ 1].im;
  out[ 6][ 4].re =  in[ 6][ 4].re;
  out[ 6][ 4].im =  in[ 6][ 4].im;
  out[ 6][ 7].re = -in[ 6][ 7].re;
  out[ 6][ 7].im = -in[ 6][ 7].im;
  out[ 6][10].re = -in[ 6][10].re;
  out[ 6][10].im = -in[ 6][10].im;
  out[ 9][ 1].re =  in[ 9][ 1].re;
  out[ 9][ 1].im =  in[ 9][ 1].im;
  out[ 9][ 4].re =  in[ 9][ 4].re;
  out[ 9][ 4].im =  in[ 9][ 4].im;
  out[ 9][ 7].re = -in[ 9][ 7].re;
  out[ 9][ 7].im = -in[ 9][ 7].im;
  out[ 9][10].re = -in[ 9][10].re;
  out[ 9][10].im = -in[ 9][10].im;

  out[ 0][ 2].re =  in[ 0][ 2].re;
  out[ 0][ 2].im =  in[ 0][ 2].im;
  out[ 0][ 5].re =  in[ 0][ 5].re;
  out[ 0][ 5].im =  in[ 0][ 5].im;
  out[ 0][ 8].re = -in[ 0][ 8].re;
  out[ 0][ 8].im = -in[ 0][ 8].im;
  out[ 0][11].re = -in[ 0][11].re;
  out[ 0][11].im = -in[ 0][11].im;
  out[ 3][ 2].re =  in[ 3][ 2].re;
  out[ 3][ 2].im =  in[ 3][ 2].im;
  out[ 3][ 5].re =  in[ 3][ 5].re;
  out[ 3][ 5].im =  in[ 3][ 5].im;
  out[ 3][ 8].re = -in[ 3][ 8].re;
  out[ 3][ 8].im = -in[ 3][ 8].im;
  out[ 3][11].re = -in[ 3][11].re;
  out[ 3][11].im = -in[ 3][11].im;
  out[ 6][ 2].re =  in[ 6][ 2].re;
  out[ 6][ 2].im =  in[ 6][ 2].im;
  out[ 6][ 5].re =  in[ 6][ 5].re;
  out[ 6][ 5].im =  in[ 6][ 5].im;
  out[ 6][ 8].re = -in[ 6][ 8].re;
  out[ 6][ 8].im = -in[ 6][ 8].im;
  out[ 6][11].re = -in[ 6][11].re;
  out[ 6][11].im = -in[ 6][11].im;
  out[ 9][ 2].re =  in[ 9][ 2].re;
  out[ 9][ 2].im =  in[ 9][ 2].im;
  out[ 9][ 5].re =  in[ 9][ 5].re;
  out[ 9][ 5].im =  in[ 9][ 5].im;
  out[ 9][ 8].re = -in[ 9][ 8].re;
  out[ 9][ 8].im = -in[ 9][ 8].im;
  out[ 9][11].re = -in[ 9][11].re;
  out[ 9][11].im = -in[ 9][11].im;

  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 3].re =  in[ 1][ 3].re;
  out[ 1][ 3].im =  in[ 1][ 3].im;
  out[ 1][ 6].re = -in[ 1][ 6].re;
  out[ 1][ 6].im = -in[ 1][ 6].im;
  out[ 1][ 9].re = -in[ 1][ 9].re;
  out[ 1][ 9].im = -in[ 1][ 9].im;
  out[ 4][ 0].re =  in[ 4][ 0].re;
  out[ 4][ 0].im =  in[ 4][ 0].im;
  out[ 4][ 3].re =  in[ 4][ 3].re;
  out[ 4][ 3].im =  in[ 4][ 3].im;
  out[ 4][ 6].re = -in[ 4][ 6].re;
  out[ 4][ 6].im = -in[ 4][ 6].im;
  out[ 4][ 9].re = -in[ 4][ 9].re;
  out[ 4][ 9].im = -in[ 4][ 9].im;
  out[ 7][ 0].re =  in[ 7][ 0].re;
  out[ 7][ 0].im =  in[ 7][ 0].im;
  out[ 7][ 3].re =  in[ 7][ 3].re;
  out[ 7][ 3].im =  in[ 7][ 3].im;
  out[ 7][ 6].re = -in[ 7][ 6].re;
  out[ 7][ 6].im = -in[ 7][ 6].im;
  out[ 7][ 9].re = -in[ 7][ 9].re;
  out[ 7][ 9].im = -in[ 7][ 9].im;
  out[10][ 0].re =  in[10][ 0].re;
  out[10][ 0].im =  in[10][ 0].im;
  out[10][ 3].re =  in[10][ 3].re;
  out[10][ 3].im =  in[10][ 3].im;
  out[10][ 6].re = -in[10][ 6].re;
  out[10][ 6].im = -in[10][ 6].im;
  out[10][ 9].re = -in[10][ 9].re;
  out[10][ 9].im = -in[10][ 9].im;

  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 4].re =  in[ 1][ 4].re;
  out[ 1][ 4].im =  in[ 1][ 4].im;
  out[ 1][ 7].re = -in[ 1][ 7].re;
  out[ 1][ 7].im = -in[ 1][ 7].im;
  out[ 1][10].re = -in[ 1][10].re;
  out[ 1][10].im = -in[ 1][10].im;
  out[ 4][ 1].re =  in[ 4][ 1].re;
  out[ 4][ 1].im =  in[ 4][ 1].im;
  out[ 4][ 4].re =  in[ 4][ 4].re;
  out[ 4][ 4].im =  in[ 4][ 4].im;
  out[ 4][ 7].re = -in[ 4][ 7].re;
  out[ 4][ 7].im = -in[ 4][ 7].im;
  out[ 4][10].re = -in[ 4][10].re;
  out[ 4][10].im = -in[ 4][10].im;
  out[ 7][ 1].re =  in[ 7][ 1].re;
  out[ 7][ 1].im =  in[ 7][ 1].im;
  out[ 7][ 4].re =  in[ 7][ 4].re;
  out[ 7][ 4].im =  in[ 7][ 4].im;
  out[ 7][ 7].re = -in[ 7][ 7].re;
  out[ 7][ 7].im = -in[ 7][ 7].im;
  out[ 7][10].re = -in[ 7][10].re;
  out[ 7][10].im = -in[ 7][10].im;
  out[10][ 1].re =  in[10][ 1].re;
  out[10][ 1].im =  in[10][ 1].im;
  out[10][ 4].re =  in[10][ 4].re;
  out[10][ 4].im =  in[10][ 4].im;
  out[10][ 7].re = -in[10][ 7].re;
  out[10][ 7].im = -in[10][ 7].im;
  out[10][10].re = -in[10][10].re;
  out[10][10].im = -in[10][10].im;

  out[ 1][ 2].re =  in[ 1][ 2].re;
  out[ 1][ 2].im =  in[ 1][ 2].im;
  out[ 1][ 5].re =  in[ 1][ 5].re;
  out[ 1][ 5].im =  in[ 1][ 5].im;
  out[ 1][ 8].re = -in[ 1][ 8].re;
  out[ 1][ 8].im = -in[ 1][ 8].im;
  out[ 1][11].re = -in[ 1][11].re;
  out[ 1][11].im = -in[ 1][11].im;
  out[ 4][ 2].re =  in[ 4][ 2].re;
  out[ 4][ 2].im =  in[ 4][ 2].im;
  out[ 4][ 5].re =  in[ 4][ 5].re;
  out[ 4][ 5].im =  in[ 4][ 5].im;
  out[ 4][ 8].re = -in[ 4][ 8].re;
  out[ 4][ 8].im = -in[ 4][ 8].im;
  out[ 4][11].re = -in[ 4][11].re;
  out[ 4][11].im = -in[ 4][11].im;
  out[ 7][ 2].re =  in[ 7][ 2].re;
  out[ 7][ 2].im =  in[ 7][ 2].im;
  out[ 7][ 5].re =  in[ 7][ 5].re;
  out[ 7][ 5].im =  in[ 7][ 5].im;
  out[ 7][ 8].re = -in[ 7][ 8].re;
  out[ 7][ 8].im = -in[ 7][ 8].im;
  out[ 7][11].re = -in[ 7][11].re;
  out[ 7][11].im = -in[ 7][11].im;
  out[10][ 2].re =  in[10][ 2].re;
  out[10][ 2].im =  in[10][ 2].im;
  out[10][ 5].re =  in[10][ 5].re;
  out[10][ 5].im =  in[10][ 5].im;
  out[10][ 8].re = -in[10][ 8].re;
  out[10][ 8].im = -in[10][ 8].im;
  out[10][11].re = -in[10][11].re;
  out[10][11].im = -in[10][11].im;

  out[ 2][ 0].re =  in[ 2][ 0].re;
  out[ 2][ 0].im =  in[ 2][ 0].im;
  out[ 2][ 3].re =  in[ 2][ 3].re;
  out[ 2][ 3].im =  in[ 2][ 3].im;
  out[ 2][ 6].re = -in[ 2][ 6].re;
  out[ 2][ 6].im = -in[ 2][ 6].im;
  out[ 2][ 9].re = -in[ 2][ 9].re;
  out[ 2][ 9].im = -in[ 2][ 9].im;
  out[ 5][ 0].re =  in[ 5][ 0].re;
  out[ 5][ 0].im =  in[ 5][ 0].im;
  out[ 5][ 3].re =  in[ 5][ 3].re;
  out[ 5][ 3].im =  in[ 5][ 3].im;
  out[ 5][ 6].re = -in[ 5][ 6].re;
  out[ 5][ 6].im = -in[ 5][ 6].im;
  out[ 5][ 9].re = -in[ 5][ 9].re;
  out[ 5][ 9].im = -in[ 5][ 9].im;
  out[ 8][ 0].re =  in[ 8][ 0].re;
  out[ 8][ 0].im =  in[ 8][ 0].im;
  out[ 8][ 3].re =  in[ 8][ 3].re;
  out[ 8][ 3].im =  in[ 8][ 3].im;
  out[ 8][ 6].re = -in[ 8][ 6].re;
  out[ 8][ 6].im = -in[ 8][ 6].im;
  out[ 8][ 9].re = -in[ 8][ 9].re;
  out[ 8][ 9].im = -in[ 8][ 9].im;
  out[11][ 0].re =  in[11][ 0].re;
  out[11][ 0].im =  in[11][ 0].im;
  out[11][ 3].re =  in[11][ 3].re;
  out[11][ 3].im =  in[11][ 3].im;
  out[11][ 6].re = -in[11][ 6].re;
  out[11][ 6].im = -in[11][ 6].im;
  out[11][ 9].re = -in[11][ 9].re;
  out[11][ 9].im = -in[11][ 9].im;

  out[ 2][ 1].re =  in[ 2][ 1].re;
  out[ 2][ 1].im =  in[ 2][ 1].im;
  out[ 2][ 4].re =  in[ 2][ 4].re;
  out[ 2][ 4].im =  in[ 2][ 4].im;
  out[ 2][ 7].re = -in[ 2][ 7].re;
  out[ 2][ 7].im = -in[ 2][ 7].im;
  out[ 2][10].re = -in[ 2][10].re;
  out[ 2][10].im = -in[ 2][10].im;
  out[ 5][ 1].re =  in[ 5][ 1].re;
  out[ 5][ 1].im =  in[ 5][ 1].im;
  out[ 5][ 4].re =  in[ 5][ 4].re;
  out[ 5][ 4].im =  in[ 5][ 4].im;
  out[ 5][ 7].re = -in[ 5][ 7].re;
  out[ 5][ 7].im = -in[ 5][ 7].im;
  out[ 5][10].re = -in[ 5][10].re;
  out[ 5][10].im = -in[ 5][10].im;
  out[ 8][ 1].re =  in[ 8][ 1].re;
  out[ 8][ 1].im =  in[ 8][ 1].im;
  out[ 8][ 4].re =  in[ 8][ 4].re;
  out[ 8][ 4].im =  in[ 8][ 4].im;
  out[ 8][ 7].re = -in[ 8][ 7].re;
  out[ 8][ 7].im = -in[ 8][ 7].im;
  out[ 8][10].re = -in[ 8][10].re;
  out[ 8][10].im = -in[ 8][10].im;
  out[11][ 1].re =  in[11][ 1].re;
  out[11][ 1].im =  in[11][ 1].im;
  out[11][ 4].re =  in[11][ 4].re;
  out[11][ 4].im =  in[11][ 4].im;
  out[11][ 7].re = -in[11][ 7].re;
  out[11][ 7].im = -in[11][ 7].im;
  out[11][10].re = -in[11][10].re;
  out[11][10].im = -in[11][10].im;

  out[ 2][ 2].re =  in[ 2][ 2].re;
  out[ 2][ 2].im =  in[ 2][ 2].im;
  out[ 2][ 5].re =  in[ 2][ 5].re;
  out[ 2][ 5].im =  in[ 2][ 5].im;
  out[ 2][ 8].re = -in[ 2][ 8].re;
  out[ 2][ 8].im = -in[ 2][ 8].im;
  out[ 2][11].re = -in[ 2][11].re;
  out[ 2][11].im = -in[ 2][11].im;
  out[ 5][ 2].re =  in[ 5][ 2].re;
  out[ 5][ 2].im =  in[ 5][ 2].im;
  out[ 5][ 5].re =  in[ 5][ 5].re;
  out[ 5][ 5].im =  in[ 5][ 5].im;
  out[ 5][ 8].re = -in[ 5][ 8].re;
  out[ 5][ 8].im = -in[ 5][ 8].im;
  out[ 5][11].re = -in[ 5][11].re;
  out[ 5][11].im = -in[ 5][11].im;
  out[ 8][ 2].re =  in[ 8][ 2].re;
  out[ 8][ 2].im =  in[ 8][ 2].im;
  out[ 8][ 5].re =  in[ 8][ 5].re;
  out[ 8][ 5].im =  in[ 8][ 5].im;
  out[ 8][ 8].re = -in[ 8][ 8].re;
  out[ 8][ 8].im = -in[ 8][ 8].im;
  out[ 8][11].re = -in[ 8][11].re;
  out[ 8][11].im = -in[ 8][11].im;
  out[11][ 2].re =  in[11][ 2].re;
  out[11][ 2].im =  in[11][ 2].im;
  out[11][ 5].re =  in[11][ 5].re;
  out[11][ 5].im =  in[11][ 5].im;
  out[11][ 8].re = -in[11][ 8].re;
  out[11][ 8].im = -in[11][ 8].im;
  out[11][11].re = -in[11][11].re;
  out[11][11].im = -in[11][11].im;


  return;
}

/* multiply prop by ar{\gamma_5} from the right */
__inline__ void
prop_G_gamma_5(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 6].re;
  out[ 0][ 0].im = -in[ 0][ 6].im;
  out[ 0][ 3].re = -in[ 0][ 9].re;
  out[ 0][ 3].im = -in[ 0][ 9].im;
  out[ 0][ 6].re = -in[ 0][ 0].re;
  out[ 0][ 6].im = -in[ 0][ 0].im;
  out[ 0][ 9].re = -in[ 0][ 3].re;
  out[ 0][ 9].im = -in[ 0][ 3].im;
  out[ 3][ 0].re = -in[ 3][ 6].re;
  out[ 3][ 0].im = -in[ 3][ 6].im;
  out[ 3][ 3].re = -in[ 3][ 9].re;
  out[ 3][ 3].im = -in[ 3][ 9].im;
  out[ 3][ 6].re = -in[ 3][ 0].re;
  out[ 3][ 6].im = -in[ 3][ 0].im;
  out[ 3][ 9].re = -in[ 3][ 3].re;
  out[ 3][ 9].im = -in[ 3][ 3].im;
  out[ 6][ 0].re = -in[ 6][ 6].re;
  out[ 6][ 0].im = -in[ 6][ 6].im;
  out[ 6][ 3].re = -in[ 6][ 9].re;
  out[ 6][ 3].im = -in[ 6][ 9].im;
  out[ 6][ 6].re = -in[ 6][ 0].re;
  out[ 6][ 6].im = -in[ 6][ 0].im;
  out[ 6][ 9].re = -in[ 6][ 3].re;
  out[ 6][ 9].im = -in[ 6][ 3].im;
  out[ 9][ 0].re = -in[ 9][ 6].re;
  out[ 9][ 0].im = -in[ 9][ 6].im;
  out[ 9][ 3].re = -in[ 9][ 9].re;
  out[ 9][ 3].im = -in[ 9][ 9].im;
  out[ 9][ 6].re = -in[ 9][ 0].re;
  out[ 9][ 6].im = -in[ 9][ 0].im;
  out[ 9][ 9].re = -in[ 9][ 3].re;
  out[ 9][ 9].im = -in[ 9][ 3].im;

  out[ 0][ 1].re = -in[ 0][ 7].re;
  out[ 0][ 1].im = -in[ 0][ 7].im;
  out[ 0][ 4].re = -in[ 0][10].re;
  out[ 0][ 4].im = -in[ 0][10].im;
  out[ 0][ 7].re = -in[ 0][ 1].re;
  out[ 0][ 7].im = -in[ 0][ 1].im;
  out[ 0][10].re = -in[ 0][ 4].re;
  out[ 0][10].im = -in[ 0][ 4].im;
  out[ 3][ 1].re = -in[ 3][ 7].re;
  out[ 3][ 1].im = -in[ 3][ 7].im;
  out[ 3][ 4].re = -in[ 3][10].re;
  out[ 3][ 4].im = -in[ 3][10].im;
  out[ 3][ 7].re = -in[ 3][ 1].re;
  out[ 3][ 7].im = -in[ 3][ 1].im;
  out[ 3][10].re = -in[ 3][ 4].re;
  out[ 3][10].im = -in[ 3][ 4].im;
  out[ 6][ 1].re = -in[ 6][ 7].re;
  out[ 6][ 1].im = -in[ 6][ 7].im;
  out[ 6][ 4].re = -in[ 6][10].re;
  out[ 6][ 4].im = -in[ 6][10].im;
  out[ 6][ 7].re = -in[ 6][ 1].re;
  out[ 6][ 7].im = -in[ 6][ 1].im;
  out[ 6][10].re = -in[ 6][ 4].re;
  out[ 6][10].im = -in[ 6][ 4].im;
  out[ 9][ 1].re = -in[ 9][ 7].re;
  out[ 9][ 1].im = -in[ 9][ 7].im;
  out[ 9][ 4].re = -in[ 9][10].re;
  out[ 9][ 4].im = -in[ 9][10].im;
  out[ 9][ 7].re = -in[ 9][ 1].re;
  out[ 9][ 7].im = -in[ 9][ 1].im;
  out[ 9][10].re = -in[ 9][ 4].re;
  out[ 9][10].im = -in[ 9][ 4].im;

  out[ 0][ 2].re = -in[ 0][ 8].re;
  out[ 0][ 2].im = -in[ 0][ 8].im;
  out[ 0][ 5].re = -in[ 0][11].re;
  out[ 0][ 5].im = -in[ 0][11].im;
  out[ 0][ 8].re = -in[ 0][ 2].re;
  out[ 0][ 8].im = -in[ 0][ 2].im;
  out[ 0][11].re = -in[ 0][ 5].re;
  out[ 0][11].im = -in[ 0][ 5].im;
  out[ 3][ 2].re = -in[ 3][ 8].re;
  out[ 3][ 2].im = -in[ 3][ 8].im;
  out[ 3][ 5].re = -in[ 3][11].re;
  out[ 3][ 5].im = -in[ 3][11].im;
  out[ 3][ 8].re = -in[ 3][ 2].re;
  out[ 3][ 8].im = -in[ 3][ 2].im;
  out[ 3][11].re = -in[ 3][ 5].re;
  out[ 3][11].im = -in[ 3][ 5].im;
  out[ 6][ 2].re = -in[ 6][ 8].re;
  out[ 6][ 2].im = -in[ 6][ 8].im;
  out[ 6][ 5].re = -in[ 6][11].re;
  out[ 6][ 5].im = -in[ 6][11].im;
  out[ 6][ 8].re = -in[ 6][ 2].re;
  out[ 6][ 8].im = -in[ 6][ 2].im;
  out[ 6][11].re = -in[ 6][ 5].re;
  out[ 6][11].im = -in[ 6][ 5].im;
  out[ 9][ 2].re = -in[ 9][ 8].re;
  out[ 9][ 2].im = -in[ 9][ 8].im;
  out[ 9][ 5].re = -in[ 9][11].re;
  out[ 9][ 5].im = -in[ 9][11].im;
  out[ 9][ 8].re = -in[ 9][ 2].re;
  out[ 9][ 8].im = -in[ 9][ 2].im;
  out[ 9][11].re = -in[ 9][ 5].re;
  out[ 9][11].im = -in[ 9][ 5].im;

  out[ 1][ 0].re = -in[ 1][ 6].re;
  out[ 1][ 0].im = -in[ 1][ 6].im;
  out[ 1][ 3].re = -in[ 1][ 9].re;
  out[ 1][ 3].im = -in[ 1][ 9].im;
  out[ 1][ 6].re = -in[ 1][ 0].re;
  out[ 1][ 6].im = -in[ 1][ 0].im;
  out[ 1][ 9].re = -in[ 1][ 3].re;
  out[ 1][ 9].im = -in[ 1][ 3].im;
  out[ 4][ 0].re = -in[ 4][ 6].re;
  out[ 4][ 0].im = -in[ 4][ 6].im;
  out[ 4][ 3].re = -in[ 4][ 9].re;
  out[ 4][ 3].im = -in[ 4][ 9].im;
  out[ 4][ 6].re = -in[ 4][ 0].re;
  out[ 4][ 6].im = -in[ 4][ 0].im;
  out[ 4][ 9].re = -in[ 4][ 3].re;
  out[ 4][ 9].im = -in[ 4][ 3].im;
  out[ 7][ 0].re = -in[ 7][ 6].re;
  out[ 7][ 0].im = -in[ 7][ 6].im;
  out[ 7][ 3].re = -in[ 7][ 9].re;
  out[ 7][ 3].im = -in[ 7][ 9].im;
  out[ 7][ 6].re = -in[ 7][ 0].re;
  out[ 7][ 6].im = -in[ 7][ 0].im;
  out[ 7][ 9].re = -in[ 7][ 3].re;
  out[ 7][ 9].im = -in[ 7][ 3].im;
  out[10][ 0].re = -in[10][ 6].re;
  out[10][ 0].im = -in[10][ 6].im;
  out[10][ 3].re = -in[10][ 9].re;
  out[10][ 3].im = -in[10][ 9].im;
  out[10][ 6].re = -in[10][ 0].re;
  out[10][ 6].im = -in[10][ 0].im;
  out[10][ 9].re = -in[10][ 3].re;
  out[10][ 9].im = -in[10][ 3].im;

  out[ 1][ 1].re = -in[ 1][ 7].re;
  out[ 1][ 1].im = -in[ 1][ 7].im;
  out[ 1][ 4].re = -in[ 1][10].re;
  out[ 1][ 4].im = -in[ 1][10].im;
  out[ 1][ 7].re = -in[ 1][ 1].re;
  out[ 1][ 7].im = -in[ 1][ 1].im;
  out[ 1][10].re = -in[ 1][ 4].re;
  out[ 1][10].im = -in[ 1][ 4].im;
  out[ 4][ 1].re = -in[ 4][ 7].re;
  out[ 4][ 1].im = -in[ 4][ 7].im;
  out[ 4][ 4].re = -in[ 4][10].re;
  out[ 4][ 4].im = -in[ 4][10].im;
  out[ 4][ 7].re = -in[ 4][ 1].re;
  out[ 4][ 7].im = -in[ 4][ 1].im;
  out[ 4][10].re = -in[ 4][ 4].re;
  out[ 4][10].im = -in[ 4][ 4].im;
  out[ 7][ 1].re = -in[ 7][ 7].re;
  out[ 7][ 1].im = -in[ 7][ 7].im;
  out[ 7][ 4].re = -in[ 7][10].re;
  out[ 7][ 4].im = -in[ 7][10].im;
  out[ 7][ 7].re = -in[ 7][ 1].re;
  out[ 7][ 7].im = -in[ 7][ 1].im;
  out[ 7][10].re = -in[ 7][ 4].re;
  out[ 7][10].im = -in[ 7][ 4].im;
  out[10][ 1].re = -in[10][ 7].re;
  out[10][ 1].im = -in[10][ 7].im;
  out[10][ 4].re = -in[10][10].re;
  out[10][ 4].im = -in[10][10].im;
  out[10][ 7].re = -in[10][ 1].re;
  out[10][ 7].im = -in[10][ 1].im;
  out[10][10].re = -in[10][ 4].re;
  out[10][10].im = -in[10][ 4].im;

  out[ 1][ 2].re = -in[ 1][ 8].re;
  out[ 1][ 2].im = -in[ 1][ 8].im;
  out[ 1][ 5].re = -in[ 1][11].re;
  out[ 1][ 5].im = -in[ 1][11].im;
  out[ 1][ 8].re = -in[ 1][ 2].re;
  out[ 1][ 8].im = -in[ 1][ 2].im;
  out[ 1][11].re = -in[ 1][ 5].re;
  out[ 1][11].im = -in[ 1][ 5].im;
  out[ 4][ 2].re = -in[ 4][ 8].re;
  out[ 4][ 2].im = -in[ 4][ 8].im;
  out[ 4][ 5].re = -in[ 4][11].re;
  out[ 4][ 5].im = -in[ 4][11].im;
  out[ 4][ 8].re = -in[ 4][ 2].re;
  out[ 4][ 8].im = -in[ 4][ 2].im;
  out[ 4][11].re = -in[ 4][ 5].re;
  out[ 4][11].im = -in[ 4][ 5].im;
  out[ 7][ 2].re = -in[ 7][ 8].re;
  out[ 7][ 2].im = -in[ 7][ 8].im;
  out[ 7][ 5].re = -in[ 7][11].re;
  out[ 7][ 5].im = -in[ 7][11].im;
  out[ 7][ 8].re = -in[ 7][ 2].re;
  out[ 7][ 8].im = -in[ 7][ 2].im;
  out[ 7][11].re = -in[ 7][ 5].re;
  out[ 7][11].im = -in[ 7][ 5].im;
  out[10][ 2].re = -in[10][ 8].re;
  out[10][ 2].im = -in[10][ 8].im;
  out[10][ 5].re = -in[10][11].re;
  out[10][ 5].im = -in[10][11].im;
  out[10][ 8].re = -in[10][ 2].re;
  out[10][ 8].im = -in[10][ 2].im;
  out[10][11].re = -in[10][ 5].re;
  out[10][11].im = -in[10][ 5].im;

  out[ 2][ 0].re = -in[ 2][ 6].re;
  out[ 2][ 0].im = -in[ 2][ 6].im;
  out[ 2][ 3].re = -in[ 2][ 9].re;
  out[ 2][ 3].im = -in[ 2][ 9].im;
  out[ 2][ 6].re = -in[ 2][ 0].re;
  out[ 2][ 6].im = -in[ 2][ 0].im;
  out[ 2][ 9].re = -in[ 2][ 3].re;
  out[ 2][ 9].im = -in[ 2][ 3].im;
  out[ 5][ 0].re = -in[ 5][ 6].re;
  out[ 5][ 0].im = -in[ 5][ 6].im;
  out[ 5][ 3].re = -in[ 5][ 9].re;
  out[ 5][ 3].im = -in[ 5][ 9].im;
  out[ 5][ 6].re = -in[ 5][ 0].re;
  out[ 5][ 6].im = -in[ 5][ 0].im;
  out[ 5][ 9].re = -in[ 5][ 3].re;
  out[ 5][ 9].im = -in[ 5][ 3].im;
  out[ 8][ 0].re = -in[ 8][ 6].re;
  out[ 8][ 0].im = -in[ 8][ 6].im;
  out[ 8][ 3].re = -in[ 8][ 9].re;
  out[ 8][ 3].im = -in[ 8][ 9].im;
  out[ 8][ 6].re = -in[ 8][ 0].re;
  out[ 8][ 6].im = -in[ 8][ 0].im;
  out[ 8][ 9].re = -in[ 8][ 3].re;
  out[ 8][ 9].im = -in[ 8][ 3].im;
  out[11][ 0].re = -in[11][ 6].re;
  out[11][ 0].im = -in[11][ 6].im;
  out[11][ 3].re = -in[11][ 9].re;
  out[11][ 3].im = -in[11][ 9].im;
  out[11][ 6].re = -in[11][ 0].re;
  out[11][ 6].im = -in[11][ 0].im;
  out[11][ 9].re = -in[11][ 3].re;
  out[11][ 9].im = -in[11][ 3].im;

  out[ 2][ 1].re = -in[ 2][ 7].re;
  out[ 2][ 1].im = -in[ 2][ 7].im;
  out[ 2][ 4].re = -in[ 2][10].re;
  out[ 2][ 4].im = -in[ 2][10].im;
  out[ 2][ 7].re = -in[ 2][ 1].re;
  out[ 2][ 7].im = -in[ 2][ 1].im;
  out[ 2][10].re = -in[ 2][ 4].re;
  out[ 2][10].im = -in[ 2][ 4].im;
  out[ 5][ 1].re = -in[ 5][ 7].re;
  out[ 5][ 1].im = -in[ 5][ 7].im;
  out[ 5][ 4].re = -in[ 5][10].re;
  out[ 5][ 4].im = -in[ 5][10].im;
  out[ 5][ 7].re = -in[ 5][ 1].re;
  out[ 5][ 7].im = -in[ 5][ 1].im;
  out[ 5][10].re = -in[ 5][ 4].re;
  out[ 5][10].im = -in[ 5][ 4].im;
  out[ 8][ 1].re = -in[ 8][ 7].re;
  out[ 8][ 1].im = -in[ 8][ 7].im;
  out[ 8][ 4].re = -in[ 8][10].re;
  out[ 8][ 4].im = -in[ 8][10].im;
  out[ 8][ 7].re = -in[ 8][ 1].re;
  out[ 8][ 7].im = -in[ 8][ 1].im;
  out[ 8][10].re = -in[ 8][ 4].re;
  out[ 8][10].im = -in[ 8][ 4].im;
  out[11][ 1].re = -in[11][ 7].re;
  out[11][ 1].im = -in[11][ 7].im;
  out[11][ 4].re = -in[11][10].re;
  out[11][ 4].im = -in[11][10].im;
  out[11][ 7].re = -in[11][ 1].re;
  out[11][ 7].im = -in[11][ 1].im;
  out[11][10].re = -in[11][ 4].re;
  out[11][10].im = -in[11][ 4].im;

  out[ 2][ 2].re = -in[ 2][ 8].re;
  out[ 2][ 2].im = -in[ 2][ 8].im;
  out[ 2][ 5].re = -in[ 2][11].re;
  out[ 2][ 5].im = -in[ 2][11].im;
  out[ 2][ 8].re = -in[ 2][ 2].re;
  out[ 2][ 8].im = -in[ 2][ 2].im;
  out[ 2][11].re = -in[ 2][ 5].re;
  out[ 2][11].im = -in[ 2][ 5].im;
  out[ 5][ 2].re = -in[ 5][ 8].re;
  out[ 5][ 2].im = -in[ 5][ 8].im;
  out[ 5][ 5].re = -in[ 5][11].re;
  out[ 5][ 5].im = -in[ 5][11].im;
  out[ 5][ 8].re = -in[ 5][ 2].re;
  out[ 5][ 8].im = -in[ 5][ 2].im;
  out[ 5][11].re = -in[ 5][ 5].re;
  out[ 5][11].im = -in[ 5][ 5].im;
  out[ 8][ 2].re = -in[ 8][ 8].re;
  out[ 8][ 2].im = -in[ 8][ 8].im;
  out[ 8][ 5].re = -in[ 8][11].re;
  out[ 8][ 5].im = -in[ 8][11].im;
  out[ 8][ 8].re = -in[ 8][ 2].re;
  out[ 8][ 8].im = -in[ 8][ 2].im;
  out[ 8][11].re = -in[ 8][ 5].re;
  out[ 8][11].im = -in[ 8][ 5].im;
  out[11][ 2].re = -in[11][ 8].re;
  out[11][ 2].im = -in[11][ 8].im;
  out[11][ 5].re = -in[11][11].re;
  out[11][ 5].im = -in[11][11].im;
  out[11][ 8].re = -in[11][ 2].re;
  out[11][ 8].im = -in[11][ 2].im;
  out[11][11].re = -in[11][ 5].re;
  out[11][11].im = -in[11][ 5].im;


  return;
}

/* multiply prop by ar{C} from the right */
__inline__ void
prop_G_C(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 9].re;
  out[ 0][ 0].im = -in[ 0][ 9].im;
  out[ 0][ 3].re =  in[ 0][ 6].re;
  out[ 0][ 3].im =  in[ 0][ 6].im;
  out[ 0][ 6].re = -in[ 0][ 3].re;
  out[ 0][ 6].im = -in[ 0][ 3].im;
  out[ 0][ 9].re =  in[ 0][ 0].re;
  out[ 0][ 9].im =  in[ 0][ 0].im;
  out[ 3][ 0].re = -in[ 3][ 9].re;
  out[ 3][ 0].im = -in[ 3][ 9].im;
  out[ 3][ 3].re =  in[ 3][ 6].re;
  out[ 3][ 3].im =  in[ 3][ 6].im;
  out[ 3][ 6].re = -in[ 3][ 3].re;
  out[ 3][ 6].im = -in[ 3][ 3].im;
  out[ 3][ 9].re =  in[ 3][ 0].re;
  out[ 3][ 9].im =  in[ 3][ 0].im;
  out[ 6][ 0].re = -in[ 6][ 9].re;
  out[ 6][ 0].im = -in[ 6][ 9].im;
  out[ 6][ 3].re =  in[ 6][ 6].re;
  out[ 6][ 3].im =  in[ 6][ 6].im;
  out[ 6][ 6].re = -in[ 6][ 3].re;
  out[ 6][ 6].im = -in[ 6][ 3].im;
  out[ 6][ 9].re =  in[ 6][ 0].re;
  out[ 6][ 9].im =  in[ 6][ 0].im;
  out[ 9][ 0].re = -in[ 9][ 9].re;
  out[ 9][ 0].im = -in[ 9][ 9].im;
  out[ 9][ 3].re =  in[ 9][ 6].re;
  out[ 9][ 3].im =  in[ 9][ 6].im;
  out[ 9][ 6].re = -in[ 9][ 3].re;
  out[ 9][ 6].im = -in[ 9][ 3].im;
  out[ 9][ 9].re =  in[ 9][ 0].re;
  out[ 9][ 9].im =  in[ 9][ 0].im;

  out[ 0][ 1].re = -in[ 0][10].re;
  out[ 0][ 1].im = -in[ 0][10].im;
  out[ 0][ 4].re =  in[ 0][ 7].re;
  out[ 0][ 4].im =  in[ 0][ 7].im;
  out[ 0][ 7].re = -in[ 0][ 4].re;
  out[ 0][ 7].im = -in[ 0][ 4].im;
  out[ 0][10].re =  in[ 0][ 1].re;
  out[ 0][10].im =  in[ 0][ 1].im;
  out[ 3][ 1].re = -in[ 3][10].re;
  out[ 3][ 1].im = -in[ 3][10].im;
  out[ 3][ 4].re =  in[ 3][ 7].re;
  out[ 3][ 4].im =  in[ 3][ 7].im;
  out[ 3][ 7].re = -in[ 3][ 4].re;
  out[ 3][ 7].im = -in[ 3][ 4].im;
  out[ 3][10].re =  in[ 3][ 1].re;
  out[ 3][10].im =  in[ 3][ 1].im;
  out[ 6][ 1].re = -in[ 6][10].re;
  out[ 6][ 1].im = -in[ 6][10].im;
  out[ 6][ 4].re =  in[ 6][ 7].re;
  out[ 6][ 4].im =  in[ 6][ 7].im;
  out[ 6][ 7].re = -in[ 6][ 4].re;
  out[ 6][ 7].im = -in[ 6][ 4].im;
  out[ 6][10].re =  in[ 6][ 1].re;
  out[ 6][10].im =  in[ 6][ 1].im;
  out[ 9][ 1].re = -in[ 9][10].re;
  out[ 9][ 1].im = -in[ 9][10].im;
  out[ 9][ 4].re =  in[ 9][ 7].re;
  out[ 9][ 4].im =  in[ 9][ 7].im;
  out[ 9][ 7].re = -in[ 9][ 4].re;
  out[ 9][ 7].im = -in[ 9][ 4].im;
  out[ 9][10].re =  in[ 9][ 1].re;
  out[ 9][10].im =  in[ 9][ 1].im;

  out[ 0][ 2].re = -in[ 0][11].re;
  out[ 0][ 2].im = -in[ 0][11].im;
  out[ 0][ 5].re =  in[ 0][ 8].re;
  out[ 0][ 5].im =  in[ 0][ 8].im;
  out[ 0][ 8].re = -in[ 0][ 5].re;
  out[ 0][ 8].im = -in[ 0][ 5].im;
  out[ 0][11].re =  in[ 0][ 2].re;
  out[ 0][11].im =  in[ 0][ 2].im;
  out[ 3][ 2].re = -in[ 3][11].re;
  out[ 3][ 2].im = -in[ 3][11].im;
  out[ 3][ 5].re =  in[ 3][ 8].re;
  out[ 3][ 5].im =  in[ 3][ 8].im;
  out[ 3][ 8].re = -in[ 3][ 5].re;
  out[ 3][ 8].im = -in[ 3][ 5].im;
  out[ 3][11].re =  in[ 3][ 2].re;
  out[ 3][11].im =  in[ 3][ 2].im;
  out[ 6][ 2].re = -in[ 6][11].re;
  out[ 6][ 2].im = -in[ 6][11].im;
  out[ 6][ 5].re =  in[ 6][ 8].re;
  out[ 6][ 5].im =  in[ 6][ 8].im;
  out[ 6][ 8].re = -in[ 6][ 5].re;
  out[ 6][ 8].im = -in[ 6][ 5].im;
  out[ 6][11].re =  in[ 6][ 2].re;
  out[ 6][11].im =  in[ 6][ 2].im;
  out[ 9][ 2].re = -in[ 9][11].re;
  out[ 9][ 2].im = -in[ 9][11].im;
  out[ 9][ 5].re =  in[ 9][ 8].re;
  out[ 9][ 5].im =  in[ 9][ 8].im;
  out[ 9][ 8].re = -in[ 9][ 5].re;
  out[ 9][ 8].im = -in[ 9][ 5].im;
  out[ 9][11].re =  in[ 9][ 2].re;
  out[ 9][11].im =  in[ 9][ 2].im;

  out[ 1][ 0].re = -in[ 1][ 9].re;
  out[ 1][ 0].im = -in[ 1][ 9].im;
  out[ 1][ 3].re =  in[ 1][ 6].re;
  out[ 1][ 3].im =  in[ 1][ 6].im;
  out[ 1][ 6].re = -in[ 1][ 3].re;
  out[ 1][ 6].im = -in[ 1][ 3].im;
  out[ 1][ 9].re =  in[ 1][ 0].re;
  out[ 1][ 9].im =  in[ 1][ 0].im;
  out[ 4][ 0].re = -in[ 4][ 9].re;
  out[ 4][ 0].im = -in[ 4][ 9].im;
  out[ 4][ 3].re =  in[ 4][ 6].re;
  out[ 4][ 3].im =  in[ 4][ 6].im;
  out[ 4][ 6].re = -in[ 4][ 3].re;
  out[ 4][ 6].im = -in[ 4][ 3].im;
  out[ 4][ 9].re =  in[ 4][ 0].re;
  out[ 4][ 9].im =  in[ 4][ 0].im;
  out[ 7][ 0].re = -in[ 7][ 9].re;
  out[ 7][ 0].im = -in[ 7][ 9].im;
  out[ 7][ 3].re =  in[ 7][ 6].re;
  out[ 7][ 3].im =  in[ 7][ 6].im;
  out[ 7][ 6].re = -in[ 7][ 3].re;
  out[ 7][ 6].im = -in[ 7][ 3].im;
  out[ 7][ 9].re =  in[ 7][ 0].re;
  out[ 7][ 9].im =  in[ 7][ 0].im;
  out[10][ 0].re = -in[10][ 9].re;
  out[10][ 0].im = -in[10][ 9].im;
  out[10][ 3].re =  in[10][ 6].re;
  out[10][ 3].im =  in[10][ 6].im;
  out[10][ 6].re = -in[10][ 3].re;
  out[10][ 6].im = -in[10][ 3].im;
  out[10][ 9].re =  in[10][ 0].re;
  out[10][ 9].im =  in[10][ 0].im;

  out[ 1][ 1].re = -in[ 1][10].re;
  out[ 1][ 1].im = -in[ 1][10].im;
  out[ 1][ 4].re =  in[ 1][ 7].re;
  out[ 1][ 4].im =  in[ 1][ 7].im;
  out[ 1][ 7].re = -in[ 1][ 4].re;
  out[ 1][ 7].im = -in[ 1][ 4].im;
  out[ 1][10].re =  in[ 1][ 1].re;
  out[ 1][10].im =  in[ 1][ 1].im;
  out[ 4][ 1].re = -in[ 4][10].re;
  out[ 4][ 1].im = -in[ 4][10].im;
  out[ 4][ 4].re =  in[ 4][ 7].re;
  out[ 4][ 4].im =  in[ 4][ 7].im;
  out[ 4][ 7].re = -in[ 4][ 4].re;
  out[ 4][ 7].im = -in[ 4][ 4].im;
  out[ 4][10].re =  in[ 4][ 1].re;
  out[ 4][10].im =  in[ 4][ 1].im;
  out[ 7][ 1].re = -in[ 7][10].re;
  out[ 7][ 1].im = -in[ 7][10].im;
  out[ 7][ 4].re =  in[ 7][ 7].re;
  out[ 7][ 4].im =  in[ 7][ 7].im;
  out[ 7][ 7].re = -in[ 7][ 4].re;
  out[ 7][ 7].im = -in[ 7][ 4].im;
  out[ 7][10].re =  in[ 7][ 1].re;
  out[ 7][10].im =  in[ 7][ 1].im;
  out[10][ 1].re = -in[10][10].re;
  out[10][ 1].im = -in[10][10].im;
  out[10][ 4].re =  in[10][ 7].re;
  out[10][ 4].im =  in[10][ 7].im;
  out[10][ 7].re = -in[10][ 4].re;
  out[10][ 7].im = -in[10][ 4].im;
  out[10][10].re =  in[10][ 1].re;
  out[10][10].im =  in[10][ 1].im;

  out[ 1][ 2].re = -in[ 1][11].re;
  out[ 1][ 2].im = -in[ 1][11].im;
  out[ 1][ 5].re =  in[ 1][ 8].re;
  out[ 1][ 5].im =  in[ 1][ 8].im;
  out[ 1][ 8].re = -in[ 1][ 5].re;
  out[ 1][ 8].im = -in[ 1][ 5].im;
  out[ 1][11].re =  in[ 1][ 2].re;
  out[ 1][11].im =  in[ 1][ 2].im;
  out[ 4][ 2].re = -in[ 4][11].re;
  out[ 4][ 2].im = -in[ 4][11].im;
  out[ 4][ 5].re =  in[ 4][ 8].re;
  out[ 4][ 5].im =  in[ 4][ 8].im;
  out[ 4][ 8].re = -in[ 4][ 5].re;
  out[ 4][ 8].im = -in[ 4][ 5].im;
  out[ 4][11].re =  in[ 4][ 2].re;
  out[ 4][11].im =  in[ 4][ 2].im;
  out[ 7][ 2].re = -in[ 7][11].re;
  out[ 7][ 2].im = -in[ 7][11].im;
  out[ 7][ 5].re =  in[ 7][ 8].re;
  out[ 7][ 5].im =  in[ 7][ 8].im;
  out[ 7][ 8].re = -in[ 7][ 5].re;
  out[ 7][ 8].im = -in[ 7][ 5].im;
  out[ 7][11].re =  in[ 7][ 2].re;
  out[ 7][11].im =  in[ 7][ 2].im;
  out[10][ 2].re = -in[10][11].re;
  out[10][ 2].im = -in[10][11].im;
  out[10][ 5].re =  in[10][ 8].re;
  out[10][ 5].im =  in[10][ 8].im;
  out[10][ 8].re = -in[10][ 5].re;
  out[10][ 8].im = -in[10][ 5].im;
  out[10][11].re =  in[10][ 2].re;
  out[10][11].im =  in[10][ 2].im;

  out[ 2][ 0].re = -in[ 2][ 9].re;
  out[ 2][ 0].im = -in[ 2][ 9].im;
  out[ 2][ 3].re =  in[ 2][ 6].re;
  out[ 2][ 3].im =  in[ 2][ 6].im;
  out[ 2][ 6].re = -in[ 2][ 3].re;
  out[ 2][ 6].im = -in[ 2][ 3].im;
  out[ 2][ 9].re =  in[ 2][ 0].re;
  out[ 2][ 9].im =  in[ 2][ 0].im;
  out[ 5][ 0].re = -in[ 5][ 9].re;
  out[ 5][ 0].im = -in[ 5][ 9].im;
  out[ 5][ 3].re =  in[ 5][ 6].re;
  out[ 5][ 3].im =  in[ 5][ 6].im;
  out[ 5][ 6].re = -in[ 5][ 3].re;
  out[ 5][ 6].im = -in[ 5][ 3].im;
  out[ 5][ 9].re =  in[ 5][ 0].re;
  out[ 5][ 9].im =  in[ 5][ 0].im;
  out[ 8][ 0].re = -in[ 8][ 9].re;
  out[ 8][ 0].im = -in[ 8][ 9].im;
  out[ 8][ 3].re =  in[ 8][ 6].re;
  out[ 8][ 3].im =  in[ 8][ 6].im;
  out[ 8][ 6].re = -in[ 8][ 3].re;
  out[ 8][ 6].im = -in[ 8][ 3].im;
  out[ 8][ 9].re =  in[ 8][ 0].re;
  out[ 8][ 9].im =  in[ 8][ 0].im;
  out[11][ 0].re = -in[11][ 9].re;
  out[11][ 0].im = -in[11][ 9].im;
  out[11][ 3].re =  in[11][ 6].re;
  out[11][ 3].im =  in[11][ 6].im;
  out[11][ 6].re = -in[11][ 3].re;
  out[11][ 6].im = -in[11][ 3].im;
  out[11][ 9].re =  in[11][ 0].re;
  out[11][ 9].im =  in[11][ 0].im;

  out[ 2][ 1].re = -in[ 2][10].re;
  out[ 2][ 1].im = -in[ 2][10].im;
  out[ 2][ 4].re =  in[ 2][ 7].re;
  out[ 2][ 4].im =  in[ 2][ 7].im;
  out[ 2][ 7].re = -in[ 2][ 4].re;
  out[ 2][ 7].im = -in[ 2][ 4].im;
  out[ 2][10].re =  in[ 2][ 1].re;
  out[ 2][10].im =  in[ 2][ 1].im;
  out[ 5][ 1].re = -in[ 5][10].re;
  out[ 5][ 1].im = -in[ 5][10].im;
  out[ 5][ 4].re =  in[ 5][ 7].re;
  out[ 5][ 4].im =  in[ 5][ 7].im;
  out[ 5][ 7].re = -in[ 5][ 4].re;
  out[ 5][ 7].im = -in[ 5][ 4].im;
  out[ 5][10].re =  in[ 5][ 1].re;
  out[ 5][10].im =  in[ 5][ 1].im;
  out[ 8][ 1].re = -in[ 8][10].re;
  out[ 8][ 1].im = -in[ 8][10].im;
  out[ 8][ 4].re =  in[ 8][ 7].re;
  out[ 8][ 4].im =  in[ 8][ 7].im;
  out[ 8][ 7].re = -in[ 8][ 4].re;
  out[ 8][ 7].im = -in[ 8][ 4].im;
  out[ 8][10].re =  in[ 8][ 1].re;
  out[ 8][10].im =  in[ 8][ 1].im;
  out[11][ 1].re = -in[11][10].re;
  out[11][ 1].im = -in[11][10].im;
  out[11][ 4].re =  in[11][ 7].re;
  out[11][ 4].im =  in[11][ 7].im;
  out[11][ 7].re = -in[11][ 4].re;
  out[11][ 7].im = -in[11][ 4].im;
  out[11][10].re =  in[11][ 1].re;
  out[11][10].im =  in[11][ 1].im;

  out[ 2][ 2].re = -in[ 2][11].re;
  out[ 2][ 2].im = -in[ 2][11].im;
  out[ 2][ 5].re =  in[ 2][ 8].re;
  out[ 2][ 5].im =  in[ 2][ 8].im;
  out[ 2][ 8].re = -in[ 2][ 5].re;
  out[ 2][ 8].im = -in[ 2][ 5].im;
  out[ 2][11].re =  in[ 2][ 2].re;
  out[ 2][11].im =  in[ 2][ 2].im;
  out[ 5][ 2].re = -in[ 5][11].re;
  out[ 5][ 2].im = -in[ 5][11].im;
  out[ 5][ 5].re =  in[ 5][ 8].re;
  out[ 5][ 5].im =  in[ 5][ 8].im;
  out[ 5][ 8].re = -in[ 5][ 5].re;
  out[ 5][ 8].im = -in[ 5][ 5].im;
  out[ 5][11].re =  in[ 5][ 2].re;
  out[ 5][11].im =  in[ 5][ 2].im;
  out[ 8][ 2].re = -in[ 8][11].re;
  out[ 8][ 2].im = -in[ 8][11].im;
  out[ 8][ 5].re =  in[ 8][ 8].re;
  out[ 8][ 5].im =  in[ 8][ 8].im;
  out[ 8][ 8].re = -in[ 8][ 5].re;
  out[ 8][ 8].im = -in[ 8][ 5].im;
  out[ 8][11].re =  in[ 8][ 2].re;
  out[ 8][11].im =  in[ 8][ 2].im;
  out[11][ 2].re = -in[11][11].re;
  out[11][ 2].im = -in[11][11].im;
  out[11][ 5].re =  in[11][ 8].re;
  out[11][ 5].im =  in[11][ 8].im;
  out[11][ 8].re = -in[11][ 5].re;
  out[11][ 8].im = -in[11][ 5].im;
  out[11][11].re =  in[11][ 2].re;
  out[11][11].im =  in[11][ 2].im;


  return;
}

/* multiply prop by ar{C\gamma_5} from the right */
__inline__ void
prop_G_Cg5(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 3].re;
  out[ 0][ 0].im =  in[ 0][ 3].im;
  out[ 0][ 3].re = -in[ 0][ 0].re;
  out[ 0][ 3].im = -in[ 0][ 0].im;
  out[ 0][ 6].re =  in[ 0][ 9].re;
  out[ 0][ 6].im =  in[ 0][ 9].im;
  out[ 0][ 9].re = -in[ 0][ 6].re;
  out[ 0][ 9].im = -in[ 0][ 6].im;
  out[ 3][ 0].re =  in[ 3][ 3].re;
  out[ 3][ 0].im =  in[ 3][ 3].im;
  out[ 3][ 3].re = -in[ 3][ 0].re;
  out[ 3][ 3].im = -in[ 3][ 0].im;
  out[ 3][ 6].re =  in[ 3][ 9].re;
  out[ 3][ 6].im =  in[ 3][ 9].im;
  out[ 3][ 9].re = -in[ 3][ 6].re;
  out[ 3][ 9].im = -in[ 3][ 6].im;
  out[ 6][ 0].re =  in[ 6][ 3].re;
  out[ 6][ 0].im =  in[ 6][ 3].im;
  out[ 6][ 3].re = -in[ 6][ 0].re;
  out[ 6][ 3].im = -in[ 6][ 0].im;
  out[ 6][ 6].re =  in[ 6][ 9].re;
  out[ 6][ 6].im =  in[ 6][ 9].im;
  out[ 6][ 9].re = -in[ 6][ 6].re;
  out[ 6][ 9].im = -in[ 6][ 6].im;
  out[ 9][ 0].re =  in[ 9][ 3].re;
  out[ 9][ 0].im =  in[ 9][ 3].im;
  out[ 9][ 3].re = -in[ 9][ 0].re;
  out[ 9][ 3].im = -in[ 9][ 0].im;
  out[ 9][ 6].re =  in[ 9][ 9].re;
  out[ 9][ 6].im =  in[ 9][ 9].im;
  out[ 9][ 9].re = -in[ 9][ 6].re;
  out[ 9][ 9].im = -in[ 9][ 6].im;

  out[ 0][ 1].re =  in[ 0][ 4].re;
  out[ 0][ 1].im =  in[ 0][ 4].im;
  out[ 0][ 4].re = -in[ 0][ 1].re;
  out[ 0][ 4].im = -in[ 0][ 1].im;
  out[ 0][ 7].re =  in[ 0][10].re;
  out[ 0][ 7].im =  in[ 0][10].im;
  out[ 0][10].re = -in[ 0][ 7].re;
  out[ 0][10].im = -in[ 0][ 7].im;
  out[ 3][ 1].re =  in[ 3][ 4].re;
  out[ 3][ 1].im =  in[ 3][ 4].im;
  out[ 3][ 4].re = -in[ 3][ 1].re;
  out[ 3][ 4].im = -in[ 3][ 1].im;
  out[ 3][ 7].re =  in[ 3][10].re;
  out[ 3][ 7].im =  in[ 3][10].im;
  out[ 3][10].re = -in[ 3][ 7].re;
  out[ 3][10].im = -in[ 3][ 7].im;
  out[ 6][ 1].re =  in[ 6][ 4].re;
  out[ 6][ 1].im =  in[ 6][ 4].im;
  out[ 6][ 4].re = -in[ 6][ 1].re;
  out[ 6][ 4].im = -in[ 6][ 1].im;
  out[ 6][ 7].re =  in[ 6][10].re;
  out[ 6][ 7].im =  in[ 6][10].im;
  out[ 6][10].re = -in[ 6][ 7].re;
  out[ 6][10].im = -in[ 6][ 7].im;
  out[ 9][ 1].re =  in[ 9][ 4].re;
  out[ 9][ 1].im =  in[ 9][ 4].im;
  out[ 9][ 4].re = -in[ 9][ 1].re;
  out[ 9][ 4].im = -in[ 9][ 1].im;
  out[ 9][ 7].re =  in[ 9][10].re;
  out[ 9][ 7].im =  in[ 9][10].im;
  out[ 9][10].re = -in[ 9][ 7].re;
  out[ 9][10].im = -in[ 9][ 7].im;

  out[ 0][ 2].re =  in[ 0][ 5].re;
  out[ 0][ 2].im =  in[ 0][ 5].im;
  out[ 0][ 5].re = -in[ 0][ 2].re;
  out[ 0][ 5].im = -in[ 0][ 2].im;
  out[ 0][ 8].re =  in[ 0][11].re;
  out[ 0][ 8].im =  in[ 0][11].im;
  out[ 0][11].re = -in[ 0][ 8].re;
  out[ 0][11].im = -in[ 0][ 8].im;
  out[ 3][ 2].re =  in[ 3][ 5].re;
  out[ 3][ 2].im =  in[ 3][ 5].im;
  out[ 3][ 5].re = -in[ 3][ 2].re;
  out[ 3][ 5].im = -in[ 3][ 2].im;
  out[ 3][ 8].re =  in[ 3][11].re;
  out[ 3][ 8].im =  in[ 3][11].im;
  out[ 3][11].re = -in[ 3][ 8].re;
  out[ 3][11].im = -in[ 3][ 8].im;
  out[ 6][ 2].re =  in[ 6][ 5].re;
  out[ 6][ 2].im =  in[ 6][ 5].im;
  out[ 6][ 5].re = -in[ 6][ 2].re;
  out[ 6][ 5].im = -in[ 6][ 2].im;
  out[ 6][ 8].re =  in[ 6][11].re;
  out[ 6][ 8].im =  in[ 6][11].im;
  out[ 6][11].re = -in[ 6][ 8].re;
  out[ 6][11].im = -in[ 6][ 8].im;
  out[ 9][ 2].re =  in[ 9][ 5].re;
  out[ 9][ 2].im =  in[ 9][ 5].im;
  out[ 9][ 5].re = -in[ 9][ 2].re;
  out[ 9][ 5].im = -in[ 9][ 2].im;
  out[ 9][ 8].re =  in[ 9][11].re;
  out[ 9][ 8].im =  in[ 9][11].im;
  out[ 9][11].re = -in[ 9][ 8].re;
  out[ 9][11].im = -in[ 9][ 8].im;

  out[ 1][ 0].re =  in[ 1][ 3].re;
  out[ 1][ 0].im =  in[ 1][ 3].im;
  out[ 1][ 3].re = -in[ 1][ 0].re;
  out[ 1][ 3].im = -in[ 1][ 0].im;
  out[ 1][ 6].re =  in[ 1][ 9].re;
  out[ 1][ 6].im =  in[ 1][ 9].im;
  out[ 1][ 9].re = -in[ 1][ 6].re;
  out[ 1][ 9].im = -in[ 1][ 6].im;
  out[ 4][ 0].re =  in[ 4][ 3].re;
  out[ 4][ 0].im =  in[ 4][ 3].im;
  out[ 4][ 3].re = -in[ 4][ 0].re;
  out[ 4][ 3].im = -in[ 4][ 0].im;
  out[ 4][ 6].re =  in[ 4][ 9].re;
  out[ 4][ 6].im =  in[ 4][ 9].im;
  out[ 4][ 9].re = -in[ 4][ 6].re;
  out[ 4][ 9].im = -in[ 4][ 6].im;
  out[ 7][ 0].re =  in[ 7][ 3].re;
  out[ 7][ 0].im =  in[ 7][ 3].im;
  out[ 7][ 3].re = -in[ 7][ 0].re;
  out[ 7][ 3].im = -in[ 7][ 0].im;
  out[ 7][ 6].re =  in[ 7][ 9].re;
  out[ 7][ 6].im =  in[ 7][ 9].im;
  out[ 7][ 9].re = -in[ 7][ 6].re;
  out[ 7][ 9].im = -in[ 7][ 6].im;
  out[10][ 0].re =  in[10][ 3].re;
  out[10][ 0].im =  in[10][ 3].im;
  out[10][ 3].re = -in[10][ 0].re;
  out[10][ 3].im = -in[10][ 0].im;
  out[10][ 6].re =  in[10][ 9].re;
  out[10][ 6].im =  in[10][ 9].im;
  out[10][ 9].re = -in[10][ 6].re;
  out[10][ 9].im = -in[10][ 6].im;

  out[ 1][ 1].re =  in[ 1][ 4].re;
  out[ 1][ 1].im =  in[ 1][ 4].im;
  out[ 1][ 4].re = -in[ 1][ 1].re;
  out[ 1][ 4].im = -in[ 1][ 1].im;
  out[ 1][ 7].re =  in[ 1][10].re;
  out[ 1][ 7].im =  in[ 1][10].im;
  out[ 1][10].re = -in[ 1][ 7].re;
  out[ 1][10].im = -in[ 1][ 7].im;
  out[ 4][ 1].re =  in[ 4][ 4].re;
  out[ 4][ 1].im =  in[ 4][ 4].im;
  out[ 4][ 4].re = -in[ 4][ 1].re;
  out[ 4][ 4].im = -in[ 4][ 1].im;
  out[ 4][ 7].re =  in[ 4][10].re;
  out[ 4][ 7].im =  in[ 4][10].im;
  out[ 4][10].re = -in[ 4][ 7].re;
  out[ 4][10].im = -in[ 4][ 7].im;
  out[ 7][ 1].re =  in[ 7][ 4].re;
  out[ 7][ 1].im =  in[ 7][ 4].im;
  out[ 7][ 4].re = -in[ 7][ 1].re;
  out[ 7][ 4].im = -in[ 7][ 1].im;
  out[ 7][ 7].re =  in[ 7][10].re;
  out[ 7][ 7].im =  in[ 7][10].im;
  out[ 7][10].re = -in[ 7][ 7].re;
  out[ 7][10].im = -in[ 7][ 7].im;
  out[10][ 1].re =  in[10][ 4].re;
  out[10][ 1].im =  in[10][ 4].im;
  out[10][ 4].re = -in[10][ 1].re;
  out[10][ 4].im = -in[10][ 1].im;
  out[10][ 7].re =  in[10][10].re;
  out[10][ 7].im =  in[10][10].im;
  out[10][10].re = -in[10][ 7].re;
  out[10][10].im = -in[10][ 7].im;

  out[ 1][ 2].re =  in[ 1][ 5].re;
  out[ 1][ 2].im =  in[ 1][ 5].im;
  out[ 1][ 5].re = -in[ 1][ 2].re;
  out[ 1][ 5].im = -in[ 1][ 2].im;
  out[ 1][ 8].re =  in[ 1][11].re;
  out[ 1][ 8].im =  in[ 1][11].im;
  out[ 1][11].re = -in[ 1][ 8].re;
  out[ 1][11].im = -in[ 1][ 8].im;
  out[ 4][ 2].re =  in[ 4][ 5].re;
  out[ 4][ 2].im =  in[ 4][ 5].im;
  out[ 4][ 5].re = -in[ 4][ 2].re;
  out[ 4][ 5].im = -in[ 4][ 2].im;
  out[ 4][ 8].re =  in[ 4][11].re;
  out[ 4][ 8].im =  in[ 4][11].im;
  out[ 4][11].re = -in[ 4][ 8].re;
  out[ 4][11].im = -in[ 4][ 8].im;
  out[ 7][ 2].re =  in[ 7][ 5].re;
  out[ 7][ 2].im =  in[ 7][ 5].im;
  out[ 7][ 5].re = -in[ 7][ 2].re;
  out[ 7][ 5].im = -in[ 7][ 2].im;
  out[ 7][ 8].re =  in[ 7][11].re;
  out[ 7][ 8].im =  in[ 7][11].im;
  out[ 7][11].re = -in[ 7][ 8].re;
  out[ 7][11].im = -in[ 7][ 8].im;
  out[10][ 2].re =  in[10][ 5].re;
  out[10][ 2].im =  in[10][ 5].im;
  out[10][ 5].re = -in[10][ 2].re;
  out[10][ 5].im = -in[10][ 2].im;
  out[10][ 8].re =  in[10][11].re;
  out[10][ 8].im =  in[10][11].im;
  out[10][11].re = -in[10][ 8].re;
  out[10][11].im = -in[10][ 8].im;

  out[ 2][ 0].re =  in[ 2][ 3].re;
  out[ 2][ 0].im =  in[ 2][ 3].im;
  out[ 2][ 3].re = -in[ 2][ 0].re;
  out[ 2][ 3].im = -in[ 2][ 0].im;
  out[ 2][ 6].re =  in[ 2][ 9].re;
  out[ 2][ 6].im =  in[ 2][ 9].im;
  out[ 2][ 9].re = -in[ 2][ 6].re;
  out[ 2][ 9].im = -in[ 2][ 6].im;
  out[ 5][ 0].re =  in[ 5][ 3].re;
  out[ 5][ 0].im =  in[ 5][ 3].im;
  out[ 5][ 3].re = -in[ 5][ 0].re;
  out[ 5][ 3].im = -in[ 5][ 0].im;
  out[ 5][ 6].re =  in[ 5][ 9].re;
  out[ 5][ 6].im =  in[ 5][ 9].im;
  out[ 5][ 9].re = -in[ 5][ 6].re;
  out[ 5][ 9].im = -in[ 5][ 6].im;
  out[ 8][ 0].re =  in[ 8][ 3].re;
  out[ 8][ 0].im =  in[ 8][ 3].im;
  out[ 8][ 3].re = -in[ 8][ 0].re;
  out[ 8][ 3].im = -in[ 8][ 0].im;
  out[ 8][ 6].re =  in[ 8][ 9].re;
  out[ 8][ 6].im =  in[ 8][ 9].im;
  out[ 8][ 9].re = -in[ 8][ 6].re;
  out[ 8][ 9].im = -in[ 8][ 6].im;
  out[11][ 0].re =  in[11][ 3].re;
  out[11][ 0].im =  in[11][ 3].im;
  out[11][ 3].re = -in[11][ 0].re;
  out[11][ 3].im = -in[11][ 0].im;
  out[11][ 6].re =  in[11][ 9].re;
  out[11][ 6].im =  in[11][ 9].im;
  out[11][ 9].re = -in[11][ 6].re;
  out[11][ 9].im = -in[11][ 6].im;

  out[ 2][ 1].re =  in[ 2][ 4].re;
  out[ 2][ 1].im =  in[ 2][ 4].im;
  out[ 2][ 4].re = -in[ 2][ 1].re;
  out[ 2][ 4].im = -in[ 2][ 1].im;
  out[ 2][ 7].re =  in[ 2][10].re;
  out[ 2][ 7].im =  in[ 2][10].im;
  out[ 2][10].re = -in[ 2][ 7].re;
  out[ 2][10].im = -in[ 2][ 7].im;
  out[ 5][ 1].re =  in[ 5][ 4].re;
  out[ 5][ 1].im =  in[ 5][ 4].im;
  out[ 5][ 4].re = -in[ 5][ 1].re;
  out[ 5][ 4].im = -in[ 5][ 1].im;
  out[ 5][ 7].re =  in[ 5][10].re;
  out[ 5][ 7].im =  in[ 5][10].im;
  out[ 5][10].re = -in[ 5][ 7].re;
  out[ 5][10].im = -in[ 5][ 7].im;
  out[ 8][ 1].re =  in[ 8][ 4].re;
  out[ 8][ 1].im =  in[ 8][ 4].im;
  out[ 8][ 4].re = -in[ 8][ 1].re;
  out[ 8][ 4].im = -in[ 8][ 1].im;
  out[ 8][ 7].re =  in[ 8][10].re;
  out[ 8][ 7].im =  in[ 8][10].im;
  out[ 8][10].re = -in[ 8][ 7].re;
  out[ 8][10].im = -in[ 8][ 7].im;
  out[11][ 1].re =  in[11][ 4].re;
  out[11][ 1].im =  in[11][ 4].im;
  out[11][ 4].re = -in[11][ 1].re;
  out[11][ 4].im = -in[11][ 1].im;
  out[11][ 7].re =  in[11][10].re;
  out[11][ 7].im =  in[11][10].im;
  out[11][10].re = -in[11][ 7].re;
  out[11][10].im = -in[11][ 7].im;

  out[ 2][ 2].re =  in[ 2][ 5].re;
  out[ 2][ 2].im =  in[ 2][ 5].im;
  out[ 2][ 5].re = -in[ 2][ 2].re;
  out[ 2][ 5].im = -in[ 2][ 2].im;
  out[ 2][ 8].re =  in[ 2][11].re;
  out[ 2][ 8].im =  in[ 2][11].im;
  out[ 2][11].re = -in[ 2][ 8].re;
  out[ 2][11].im = -in[ 2][ 8].im;
  out[ 5][ 2].re =  in[ 5][ 5].re;
  out[ 5][ 2].im =  in[ 5][ 5].im;
  out[ 5][ 5].re = -in[ 5][ 2].re;
  out[ 5][ 5].im = -in[ 5][ 2].im;
  out[ 5][ 8].re =  in[ 5][11].re;
  out[ 5][ 8].im =  in[ 5][11].im;
  out[ 5][11].re = -in[ 5][ 8].re;
  out[ 5][11].im = -in[ 5][ 8].im;
  out[ 8][ 2].re =  in[ 8][ 5].re;
  out[ 8][ 2].im =  in[ 8][ 5].im;
  out[ 8][ 5].re = -in[ 8][ 2].re;
  out[ 8][ 5].im = -in[ 8][ 2].im;
  out[ 8][ 8].re =  in[ 8][11].re;
  out[ 8][ 8].im =  in[ 8][11].im;
  out[ 8][11].re = -in[ 8][ 8].re;
  out[ 8][11].im = -in[ 8][ 8].im;
  out[11][ 2].re =  in[11][ 5].re;
  out[11][ 2].im =  in[11][ 5].im;
  out[11][ 5].re = -in[11][ 2].re;
  out[11][ 5].im = -in[11][ 2].im;
  out[11][ 8].re =  in[11][11].re;
  out[11][ 8].im =  in[11][11].im;
  out[11][11].re = -in[11][ 8].re;
  out[11][11].im = -in[11][ 8].im;


  return;
}

/* multiply prop by ar{C\gamma_x} from the right */
__inline__ void
prop_G_Cgx(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -in[ 0][ 0].im;
  out[ 0][ 0].im =  in[ 0][ 0].re;
  out[ 0][ 3].re =  in[ 0][ 3].im;
  out[ 0][ 3].im = -in[ 0][ 3].re;
  out[ 0][ 6].re =  in[ 0][ 6].im;
  out[ 0][ 6].im = -in[ 0][ 6].re;
  out[ 0][ 9].re = -in[ 0][ 9].im;
  out[ 0][ 9].im =  in[ 0][ 9].re;
  out[ 3][ 0].re = -in[ 3][ 0].im;
  out[ 3][ 0].im =  in[ 3][ 0].re;
  out[ 3][ 3].re =  in[ 3][ 3].im;
  out[ 3][ 3].im = -in[ 3][ 3].re;
  out[ 3][ 6].re =  in[ 3][ 6].im;
  out[ 3][ 6].im = -in[ 3][ 6].re;
  out[ 3][ 9].re = -in[ 3][ 9].im;
  out[ 3][ 9].im =  in[ 3][ 9].re;
  out[ 6][ 0].re = -in[ 6][ 0].im;
  out[ 6][ 0].im =  in[ 6][ 0].re;
  out[ 6][ 3].re =  in[ 6][ 3].im;
  out[ 6][ 3].im = -in[ 6][ 3].re;
  out[ 6][ 6].re =  in[ 6][ 6].im;
  out[ 6][ 6].im = -in[ 6][ 6].re;
  out[ 6][ 9].re = -in[ 6][ 9].im;
  out[ 6][ 9].im =  in[ 6][ 9].re;
  out[ 9][ 0].re = -in[ 9][ 0].im;
  out[ 9][ 0].im =  in[ 9][ 0].re;
  out[ 9][ 3].re =  in[ 9][ 3].im;
  out[ 9][ 3].im = -in[ 9][ 3].re;
  out[ 9][ 6].re =  in[ 9][ 6].im;
  out[ 9][ 6].im = -in[ 9][ 6].re;
  out[ 9][ 9].re = -in[ 9][ 9].im;
  out[ 9][ 9].im =  in[ 9][ 9].re;

  out[ 0][ 1].re = -in[ 0][ 1].im;
  out[ 0][ 1].im =  in[ 0][ 1].re;
  out[ 0][ 4].re =  in[ 0][ 4].im;
  out[ 0][ 4].im = -in[ 0][ 4].re;
  out[ 0][ 7].re =  in[ 0][ 7].im;
  out[ 0][ 7].im = -in[ 0][ 7].re;
  out[ 0][10].re = -in[ 0][10].im;
  out[ 0][10].im =  in[ 0][10].re;
  out[ 3][ 1].re = -in[ 3][ 1].im;
  out[ 3][ 1].im =  in[ 3][ 1].re;
  out[ 3][ 4].re =  in[ 3][ 4].im;
  out[ 3][ 4].im = -in[ 3][ 4].re;
  out[ 3][ 7].re =  in[ 3][ 7].im;
  out[ 3][ 7].im = -in[ 3][ 7].re;
  out[ 3][10].re = -in[ 3][10].im;
  out[ 3][10].im =  in[ 3][10].re;
  out[ 6][ 1].re = -in[ 6][ 1].im;
  out[ 6][ 1].im =  in[ 6][ 1].re;
  out[ 6][ 4].re =  in[ 6][ 4].im;
  out[ 6][ 4].im = -in[ 6][ 4].re;
  out[ 6][ 7].re =  in[ 6][ 7].im;
  out[ 6][ 7].im = -in[ 6][ 7].re;
  out[ 6][10].re = -in[ 6][10].im;
  out[ 6][10].im =  in[ 6][10].re;
  out[ 9][ 1].re = -in[ 9][ 1].im;
  out[ 9][ 1].im =  in[ 9][ 1].re;
  out[ 9][ 4].re =  in[ 9][ 4].im;
  out[ 9][ 4].im = -in[ 9][ 4].re;
  out[ 9][ 7].re =  in[ 9][ 7].im;
  out[ 9][ 7].im = -in[ 9][ 7].re;
  out[ 9][10].re = -in[ 9][10].im;
  out[ 9][10].im =  in[ 9][10].re;

  out[ 0][ 2].re = -in[ 0][ 2].im;
  out[ 0][ 2].im =  in[ 0][ 2].re;
  out[ 0][ 5].re =  in[ 0][ 5].im;
  out[ 0][ 5].im = -in[ 0][ 5].re;
  out[ 0][ 8].re =  in[ 0][ 8].im;
  out[ 0][ 8].im = -in[ 0][ 8].re;
  out[ 0][11].re = -in[ 0][11].im;
  out[ 0][11].im =  in[ 0][11].re;
  out[ 3][ 2].re = -in[ 3][ 2].im;
  out[ 3][ 2].im =  in[ 3][ 2].re;
  out[ 3][ 5].re =  in[ 3][ 5].im;
  out[ 3][ 5].im = -in[ 3][ 5].re;
  out[ 3][ 8].re =  in[ 3][ 8].im;
  out[ 3][ 8].im = -in[ 3][ 8].re;
  out[ 3][11].re = -in[ 3][11].im;
  out[ 3][11].im =  in[ 3][11].re;
  out[ 6][ 2].re = -in[ 6][ 2].im;
  out[ 6][ 2].im =  in[ 6][ 2].re;
  out[ 6][ 5].re =  in[ 6][ 5].im;
  out[ 6][ 5].im = -in[ 6][ 5].re;
  out[ 6][ 8].re =  in[ 6][ 8].im;
  out[ 6][ 8].im = -in[ 6][ 8].re;
  out[ 6][11].re = -in[ 6][11].im;
  out[ 6][11].im =  in[ 6][11].re;
  out[ 9][ 2].re = -in[ 9][ 2].im;
  out[ 9][ 2].im =  in[ 9][ 2].re;
  out[ 9][ 5].re =  in[ 9][ 5].im;
  out[ 9][ 5].im = -in[ 9][ 5].re;
  out[ 9][ 8].re =  in[ 9][ 8].im;
  out[ 9][ 8].im = -in[ 9][ 8].re;
  out[ 9][11].re = -in[ 9][11].im;
  out[ 9][11].im =  in[ 9][11].re;

  out[ 1][ 0].re = -in[ 1][ 0].im;
  out[ 1][ 0].im =  in[ 1][ 0].re;
  out[ 1][ 3].re =  in[ 1][ 3].im;
  out[ 1][ 3].im = -in[ 1][ 3].re;
  out[ 1][ 6].re =  in[ 1][ 6].im;
  out[ 1][ 6].im = -in[ 1][ 6].re;
  out[ 1][ 9].re = -in[ 1][ 9].im;
  out[ 1][ 9].im =  in[ 1][ 9].re;
  out[ 4][ 0].re = -in[ 4][ 0].im;
  out[ 4][ 0].im =  in[ 4][ 0].re;
  out[ 4][ 3].re =  in[ 4][ 3].im;
  out[ 4][ 3].im = -in[ 4][ 3].re;
  out[ 4][ 6].re =  in[ 4][ 6].im;
  out[ 4][ 6].im = -in[ 4][ 6].re;
  out[ 4][ 9].re = -in[ 4][ 9].im;
  out[ 4][ 9].im =  in[ 4][ 9].re;
  out[ 7][ 0].re = -in[ 7][ 0].im;
  out[ 7][ 0].im =  in[ 7][ 0].re;
  out[ 7][ 3].re =  in[ 7][ 3].im;
  out[ 7][ 3].im = -in[ 7][ 3].re;
  out[ 7][ 6].re =  in[ 7][ 6].im;
  out[ 7][ 6].im = -in[ 7][ 6].re;
  out[ 7][ 9].re = -in[ 7][ 9].im;
  out[ 7][ 9].im =  in[ 7][ 9].re;
  out[10][ 0].re = -in[10][ 0].im;
  out[10][ 0].im =  in[10][ 0].re;
  out[10][ 3].re =  in[10][ 3].im;
  out[10][ 3].im = -in[10][ 3].re;
  out[10][ 6].re =  in[10][ 6].im;
  out[10][ 6].im = -in[10][ 6].re;
  out[10][ 9].re = -in[10][ 9].im;
  out[10][ 9].im =  in[10][ 9].re;

  out[ 1][ 1].re = -in[ 1][ 1].im;
  out[ 1][ 1].im =  in[ 1][ 1].re;
  out[ 1][ 4].re =  in[ 1][ 4].im;
  out[ 1][ 4].im = -in[ 1][ 4].re;
  out[ 1][ 7].re =  in[ 1][ 7].im;
  out[ 1][ 7].im = -in[ 1][ 7].re;
  out[ 1][10].re = -in[ 1][10].im;
  out[ 1][10].im =  in[ 1][10].re;
  out[ 4][ 1].re = -in[ 4][ 1].im;
  out[ 4][ 1].im =  in[ 4][ 1].re;
  out[ 4][ 4].re =  in[ 4][ 4].im;
  out[ 4][ 4].im = -in[ 4][ 4].re;
  out[ 4][ 7].re =  in[ 4][ 7].im;
  out[ 4][ 7].im = -in[ 4][ 7].re;
  out[ 4][10].re = -in[ 4][10].im;
  out[ 4][10].im =  in[ 4][10].re;
  out[ 7][ 1].re = -in[ 7][ 1].im;
  out[ 7][ 1].im =  in[ 7][ 1].re;
  out[ 7][ 4].re =  in[ 7][ 4].im;
  out[ 7][ 4].im = -in[ 7][ 4].re;
  out[ 7][ 7].re =  in[ 7][ 7].im;
  out[ 7][ 7].im = -in[ 7][ 7].re;
  out[ 7][10].re = -in[ 7][10].im;
  out[ 7][10].im =  in[ 7][10].re;
  out[10][ 1].re = -in[10][ 1].im;
  out[10][ 1].im =  in[10][ 1].re;
  out[10][ 4].re =  in[10][ 4].im;
  out[10][ 4].im = -in[10][ 4].re;
  out[10][ 7].re =  in[10][ 7].im;
  out[10][ 7].im = -in[10][ 7].re;
  out[10][10].re = -in[10][10].im;
  out[10][10].im =  in[10][10].re;

  out[ 1][ 2].re = -in[ 1][ 2].im;
  out[ 1][ 2].im =  in[ 1][ 2].re;
  out[ 1][ 5].re =  in[ 1][ 5].im;
  out[ 1][ 5].im = -in[ 1][ 5].re;
  out[ 1][ 8].re =  in[ 1][ 8].im;
  out[ 1][ 8].im = -in[ 1][ 8].re;
  out[ 1][11].re = -in[ 1][11].im;
  out[ 1][11].im =  in[ 1][11].re;
  out[ 4][ 2].re = -in[ 4][ 2].im;
  out[ 4][ 2].im =  in[ 4][ 2].re;
  out[ 4][ 5].re =  in[ 4][ 5].im;
  out[ 4][ 5].im = -in[ 4][ 5].re;
  out[ 4][ 8].re =  in[ 4][ 8].im;
  out[ 4][ 8].im = -in[ 4][ 8].re;
  out[ 4][11].re = -in[ 4][11].im;
  out[ 4][11].im =  in[ 4][11].re;
  out[ 7][ 2].re = -in[ 7][ 2].im;
  out[ 7][ 2].im =  in[ 7][ 2].re;
  out[ 7][ 5].re =  in[ 7][ 5].im;
  out[ 7][ 5].im = -in[ 7][ 5].re;
  out[ 7][ 8].re =  in[ 7][ 8].im;
  out[ 7][ 8].im = -in[ 7][ 8].re;
  out[ 7][11].re = -in[ 7][11].im;
  out[ 7][11].im =  in[ 7][11].re;
  out[10][ 2].re = -in[10][ 2].im;
  out[10][ 2].im =  in[10][ 2].re;
  out[10][ 5].re =  in[10][ 5].im;
  out[10][ 5].im = -in[10][ 5].re;
  out[10][ 8].re =  in[10][ 8].im;
  out[10][ 8].im = -in[10][ 8].re;
  out[10][11].re = -in[10][11].im;
  out[10][11].im =  in[10][11].re;

  out[ 2][ 0].re = -in[ 2][ 0].im;
  out[ 2][ 0].im =  in[ 2][ 0].re;
  out[ 2][ 3].re =  in[ 2][ 3].im;
  out[ 2][ 3].im = -in[ 2][ 3].re;
  out[ 2][ 6].re =  in[ 2][ 6].im;
  out[ 2][ 6].im = -in[ 2][ 6].re;
  out[ 2][ 9].re = -in[ 2][ 9].im;
  out[ 2][ 9].im =  in[ 2][ 9].re;
  out[ 5][ 0].re = -in[ 5][ 0].im;
  out[ 5][ 0].im =  in[ 5][ 0].re;
  out[ 5][ 3].re =  in[ 5][ 3].im;
  out[ 5][ 3].im = -in[ 5][ 3].re;
  out[ 5][ 6].re =  in[ 5][ 6].im;
  out[ 5][ 6].im = -in[ 5][ 6].re;
  out[ 5][ 9].re = -in[ 5][ 9].im;
  out[ 5][ 9].im =  in[ 5][ 9].re;
  out[ 8][ 0].re = -in[ 8][ 0].im;
  out[ 8][ 0].im =  in[ 8][ 0].re;
  out[ 8][ 3].re =  in[ 8][ 3].im;
  out[ 8][ 3].im = -in[ 8][ 3].re;
  out[ 8][ 6].re =  in[ 8][ 6].im;
  out[ 8][ 6].im = -in[ 8][ 6].re;
  out[ 8][ 9].re = -in[ 8][ 9].im;
  out[ 8][ 9].im =  in[ 8][ 9].re;
  out[11][ 0].re = -in[11][ 0].im;
  out[11][ 0].im =  in[11][ 0].re;
  out[11][ 3].re =  in[11][ 3].im;
  out[11][ 3].im = -in[11][ 3].re;
  out[11][ 6].re =  in[11][ 6].im;
  out[11][ 6].im = -in[11][ 6].re;
  out[11][ 9].re = -in[11][ 9].im;
  out[11][ 9].im =  in[11][ 9].re;

  out[ 2][ 1].re = -in[ 2][ 1].im;
  out[ 2][ 1].im =  in[ 2][ 1].re;
  out[ 2][ 4].re =  in[ 2][ 4].im;
  out[ 2][ 4].im = -in[ 2][ 4].re;
  out[ 2][ 7].re =  in[ 2][ 7].im;
  out[ 2][ 7].im = -in[ 2][ 7].re;
  out[ 2][10].re = -in[ 2][10].im;
  out[ 2][10].im =  in[ 2][10].re;
  out[ 5][ 1].re = -in[ 5][ 1].im;
  out[ 5][ 1].im =  in[ 5][ 1].re;
  out[ 5][ 4].re =  in[ 5][ 4].im;
  out[ 5][ 4].im = -in[ 5][ 4].re;
  out[ 5][ 7].re =  in[ 5][ 7].im;
  out[ 5][ 7].im = -in[ 5][ 7].re;
  out[ 5][10].re = -in[ 5][10].im;
  out[ 5][10].im =  in[ 5][10].re;
  out[ 8][ 1].re = -in[ 8][ 1].im;
  out[ 8][ 1].im =  in[ 8][ 1].re;
  out[ 8][ 4].re =  in[ 8][ 4].im;
  out[ 8][ 4].im = -in[ 8][ 4].re;
  out[ 8][ 7].re =  in[ 8][ 7].im;
  out[ 8][ 7].im = -in[ 8][ 7].re;
  out[ 8][10].re = -in[ 8][10].im;
  out[ 8][10].im =  in[ 8][10].re;
  out[11][ 1].re = -in[11][ 1].im;
  out[11][ 1].im =  in[11][ 1].re;
  out[11][ 4].re =  in[11][ 4].im;
  out[11][ 4].im = -in[11][ 4].re;
  out[11][ 7].re =  in[11][ 7].im;
  out[11][ 7].im = -in[11][ 7].re;
  out[11][10].re = -in[11][10].im;
  out[11][10].im =  in[11][10].re;

  out[ 2][ 2].re = -in[ 2][ 2].im;
  out[ 2][ 2].im =  in[ 2][ 2].re;
  out[ 2][ 5].re =  in[ 2][ 5].im;
  out[ 2][ 5].im = -in[ 2][ 5].re;
  out[ 2][ 8].re =  in[ 2][ 8].im;
  out[ 2][ 8].im = -in[ 2][ 8].re;
  out[ 2][11].re = -in[ 2][11].im;
  out[ 2][11].im =  in[ 2][11].re;
  out[ 5][ 2].re = -in[ 5][ 2].im;
  out[ 5][ 2].im =  in[ 5][ 2].re;
  out[ 5][ 5].re =  in[ 5][ 5].im;
  out[ 5][ 5].im = -in[ 5][ 5].re;
  out[ 5][ 8].re =  in[ 5][ 8].im;
  out[ 5][ 8].im = -in[ 5][ 8].re;
  out[ 5][11].re = -in[ 5][11].im;
  out[ 5][11].im =  in[ 5][11].re;
  out[ 8][ 2].re = -in[ 8][ 2].im;
  out[ 8][ 2].im =  in[ 8][ 2].re;
  out[ 8][ 5].re =  in[ 8][ 5].im;
  out[ 8][ 5].im = -in[ 8][ 5].re;
  out[ 8][ 8].re =  in[ 8][ 8].im;
  out[ 8][ 8].im = -in[ 8][ 8].re;
  out[ 8][11].re = -in[ 8][11].im;
  out[ 8][11].im =  in[ 8][11].re;
  out[11][ 2].re = -in[11][ 2].im;
  out[11][ 2].im =  in[11][ 2].re;
  out[11][ 5].re =  in[11][ 5].im;
  out[11][ 5].im = -in[11][ 5].re;
  out[11][ 8].re =  in[11][ 8].im;
  out[11][ 8].im = -in[11][ 8].re;
  out[11][11].re = -in[11][11].im;
  out[11][11].im =  in[11][11].re;


  return;
}

/* multiply prop by ar{C\gamma_y} from the right */
__inline__ void
prop_G_Cgy(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 0].re;
  out[ 0][ 0].im =  in[ 0][ 0].im;
  out[ 0][ 3].re =  in[ 0][ 3].re;
  out[ 0][ 3].im =  in[ 0][ 3].im;
  out[ 0][ 6].re = -in[ 0][ 6].re;
  out[ 0][ 6].im = -in[ 0][ 6].im;
  out[ 0][ 9].re = -in[ 0][ 9].re;
  out[ 0][ 9].im = -in[ 0][ 9].im;
  out[ 3][ 0].re =  in[ 3][ 0].re;
  out[ 3][ 0].im =  in[ 3][ 0].im;
  out[ 3][ 3].re =  in[ 3][ 3].re;
  out[ 3][ 3].im =  in[ 3][ 3].im;
  out[ 3][ 6].re = -in[ 3][ 6].re;
  out[ 3][ 6].im = -in[ 3][ 6].im;
  out[ 3][ 9].re = -in[ 3][ 9].re;
  out[ 3][ 9].im = -in[ 3][ 9].im;
  out[ 6][ 0].re =  in[ 6][ 0].re;
  out[ 6][ 0].im =  in[ 6][ 0].im;
  out[ 6][ 3].re =  in[ 6][ 3].re;
  out[ 6][ 3].im =  in[ 6][ 3].im;
  out[ 6][ 6].re = -in[ 6][ 6].re;
  out[ 6][ 6].im = -in[ 6][ 6].im;
  out[ 6][ 9].re = -in[ 6][ 9].re;
  out[ 6][ 9].im = -in[ 6][ 9].im;
  out[ 9][ 0].re =  in[ 9][ 0].re;
  out[ 9][ 0].im =  in[ 9][ 0].im;
  out[ 9][ 3].re =  in[ 9][ 3].re;
  out[ 9][ 3].im =  in[ 9][ 3].im;
  out[ 9][ 6].re = -in[ 9][ 6].re;
  out[ 9][ 6].im = -in[ 9][ 6].im;
  out[ 9][ 9].re = -in[ 9][ 9].re;
  out[ 9][ 9].im = -in[ 9][ 9].im;

  out[ 0][ 1].re =  in[ 0][ 1].re;
  out[ 0][ 1].im =  in[ 0][ 1].im;
  out[ 0][ 4].re =  in[ 0][ 4].re;
  out[ 0][ 4].im =  in[ 0][ 4].im;
  out[ 0][ 7].re = -in[ 0][ 7].re;
  out[ 0][ 7].im = -in[ 0][ 7].im;
  out[ 0][10].re = -in[ 0][10].re;
  out[ 0][10].im = -in[ 0][10].im;
  out[ 3][ 1].re =  in[ 3][ 1].re;
  out[ 3][ 1].im =  in[ 3][ 1].im;
  out[ 3][ 4].re =  in[ 3][ 4].re;
  out[ 3][ 4].im =  in[ 3][ 4].im;
  out[ 3][ 7].re = -in[ 3][ 7].re;
  out[ 3][ 7].im = -in[ 3][ 7].im;
  out[ 3][10].re = -in[ 3][10].re;
  out[ 3][10].im = -in[ 3][10].im;
  out[ 6][ 1].re =  in[ 6][ 1].re;
  out[ 6][ 1].im =  in[ 6][ 1].im;
  out[ 6][ 4].re =  in[ 6][ 4].re;
  out[ 6][ 4].im =  in[ 6][ 4].im;
  out[ 6][ 7].re = -in[ 6][ 7].re;
  out[ 6][ 7].im = -in[ 6][ 7].im;
  out[ 6][10].re = -in[ 6][10].re;
  out[ 6][10].im = -in[ 6][10].im;
  out[ 9][ 1].re =  in[ 9][ 1].re;
  out[ 9][ 1].im =  in[ 9][ 1].im;
  out[ 9][ 4].re =  in[ 9][ 4].re;
  out[ 9][ 4].im =  in[ 9][ 4].im;
  out[ 9][ 7].re = -in[ 9][ 7].re;
  out[ 9][ 7].im = -in[ 9][ 7].im;
  out[ 9][10].re = -in[ 9][10].re;
  out[ 9][10].im = -in[ 9][10].im;

  out[ 0][ 2].re =  in[ 0][ 2].re;
  out[ 0][ 2].im =  in[ 0][ 2].im;
  out[ 0][ 5].re =  in[ 0][ 5].re;
  out[ 0][ 5].im =  in[ 0][ 5].im;
  out[ 0][ 8].re = -in[ 0][ 8].re;
  out[ 0][ 8].im = -in[ 0][ 8].im;
  out[ 0][11].re = -in[ 0][11].re;
  out[ 0][11].im = -in[ 0][11].im;
  out[ 3][ 2].re =  in[ 3][ 2].re;
  out[ 3][ 2].im =  in[ 3][ 2].im;
  out[ 3][ 5].re =  in[ 3][ 5].re;
  out[ 3][ 5].im =  in[ 3][ 5].im;
  out[ 3][ 8].re = -in[ 3][ 8].re;
  out[ 3][ 8].im = -in[ 3][ 8].im;
  out[ 3][11].re = -in[ 3][11].re;
  out[ 3][11].im = -in[ 3][11].im;
  out[ 6][ 2].re =  in[ 6][ 2].re;
  out[ 6][ 2].im =  in[ 6][ 2].im;
  out[ 6][ 5].re =  in[ 6][ 5].re;
  out[ 6][ 5].im =  in[ 6][ 5].im;
  out[ 6][ 8].re = -in[ 6][ 8].re;
  out[ 6][ 8].im = -in[ 6][ 8].im;
  out[ 6][11].re = -in[ 6][11].re;
  out[ 6][11].im = -in[ 6][11].im;
  out[ 9][ 2].re =  in[ 9][ 2].re;
  out[ 9][ 2].im =  in[ 9][ 2].im;
  out[ 9][ 5].re =  in[ 9][ 5].re;
  out[ 9][ 5].im =  in[ 9][ 5].im;
  out[ 9][ 8].re = -in[ 9][ 8].re;
  out[ 9][ 8].im = -in[ 9][ 8].im;
  out[ 9][11].re = -in[ 9][11].re;
  out[ 9][11].im = -in[ 9][11].im;

  out[ 1][ 0].re =  in[ 1][ 0].re;
  out[ 1][ 0].im =  in[ 1][ 0].im;
  out[ 1][ 3].re =  in[ 1][ 3].re;
  out[ 1][ 3].im =  in[ 1][ 3].im;
  out[ 1][ 6].re = -in[ 1][ 6].re;
  out[ 1][ 6].im = -in[ 1][ 6].im;
  out[ 1][ 9].re = -in[ 1][ 9].re;
  out[ 1][ 9].im = -in[ 1][ 9].im;
  out[ 4][ 0].re =  in[ 4][ 0].re;
  out[ 4][ 0].im =  in[ 4][ 0].im;
  out[ 4][ 3].re =  in[ 4][ 3].re;
  out[ 4][ 3].im =  in[ 4][ 3].im;
  out[ 4][ 6].re = -in[ 4][ 6].re;
  out[ 4][ 6].im = -in[ 4][ 6].im;
  out[ 4][ 9].re = -in[ 4][ 9].re;
  out[ 4][ 9].im = -in[ 4][ 9].im;
  out[ 7][ 0].re =  in[ 7][ 0].re;
  out[ 7][ 0].im =  in[ 7][ 0].im;
  out[ 7][ 3].re =  in[ 7][ 3].re;
  out[ 7][ 3].im =  in[ 7][ 3].im;
  out[ 7][ 6].re = -in[ 7][ 6].re;
  out[ 7][ 6].im = -in[ 7][ 6].im;
  out[ 7][ 9].re = -in[ 7][ 9].re;
  out[ 7][ 9].im = -in[ 7][ 9].im;
  out[10][ 0].re =  in[10][ 0].re;
  out[10][ 0].im =  in[10][ 0].im;
  out[10][ 3].re =  in[10][ 3].re;
  out[10][ 3].im =  in[10][ 3].im;
  out[10][ 6].re = -in[10][ 6].re;
  out[10][ 6].im = -in[10][ 6].im;
  out[10][ 9].re = -in[10][ 9].re;
  out[10][ 9].im = -in[10][ 9].im;

  out[ 1][ 1].re =  in[ 1][ 1].re;
  out[ 1][ 1].im =  in[ 1][ 1].im;
  out[ 1][ 4].re =  in[ 1][ 4].re;
  out[ 1][ 4].im =  in[ 1][ 4].im;
  out[ 1][ 7].re = -in[ 1][ 7].re;
  out[ 1][ 7].im = -in[ 1][ 7].im;
  out[ 1][10].re = -in[ 1][10].re;
  out[ 1][10].im = -in[ 1][10].im;
  out[ 4][ 1].re =  in[ 4][ 1].re;
  out[ 4][ 1].im =  in[ 4][ 1].im;
  out[ 4][ 4].re =  in[ 4][ 4].re;
  out[ 4][ 4].im =  in[ 4][ 4].im;
  out[ 4][ 7].re = -in[ 4][ 7].re;
  out[ 4][ 7].im = -in[ 4][ 7].im;
  out[ 4][10].re = -in[ 4][10].re;
  out[ 4][10].im = -in[ 4][10].im;
  out[ 7][ 1].re =  in[ 7][ 1].re;
  out[ 7][ 1].im =  in[ 7][ 1].im;
  out[ 7][ 4].re =  in[ 7][ 4].re;
  out[ 7][ 4].im =  in[ 7][ 4].im;
  out[ 7][ 7].re = -in[ 7][ 7].re;
  out[ 7][ 7].im = -in[ 7][ 7].im;
  out[ 7][10].re = -in[ 7][10].re;
  out[ 7][10].im = -in[ 7][10].im;
  out[10][ 1].re =  in[10][ 1].re;
  out[10][ 1].im =  in[10][ 1].im;
  out[10][ 4].re =  in[10][ 4].re;
  out[10][ 4].im =  in[10][ 4].im;
  out[10][ 7].re = -in[10][ 7].re;
  out[10][ 7].im = -in[10][ 7].im;
  out[10][10].re = -in[10][10].re;
  out[10][10].im = -in[10][10].im;

  out[ 1][ 2].re =  in[ 1][ 2].re;
  out[ 1][ 2].im =  in[ 1][ 2].im;
  out[ 1][ 5].re =  in[ 1][ 5].re;
  out[ 1][ 5].im =  in[ 1][ 5].im;
  out[ 1][ 8].re = -in[ 1][ 8].re;
  out[ 1][ 8].im = -in[ 1][ 8].im;
  out[ 1][11].re = -in[ 1][11].re;
  out[ 1][11].im = -in[ 1][11].im;
  out[ 4][ 2].re =  in[ 4][ 2].re;
  out[ 4][ 2].im =  in[ 4][ 2].im;
  out[ 4][ 5].re =  in[ 4][ 5].re;
  out[ 4][ 5].im =  in[ 4][ 5].im;
  out[ 4][ 8].re = -in[ 4][ 8].re;
  out[ 4][ 8].im = -in[ 4][ 8].im;
  out[ 4][11].re = -in[ 4][11].re;
  out[ 4][11].im = -in[ 4][11].im;
  out[ 7][ 2].re =  in[ 7][ 2].re;
  out[ 7][ 2].im =  in[ 7][ 2].im;
  out[ 7][ 5].re =  in[ 7][ 5].re;
  out[ 7][ 5].im =  in[ 7][ 5].im;
  out[ 7][ 8].re = -in[ 7][ 8].re;
  out[ 7][ 8].im = -in[ 7][ 8].im;
  out[ 7][11].re = -in[ 7][11].re;
  out[ 7][11].im = -in[ 7][11].im;
  out[10][ 2].re =  in[10][ 2].re;
  out[10][ 2].im =  in[10][ 2].im;
  out[10][ 5].re =  in[10][ 5].re;
  out[10][ 5].im =  in[10][ 5].im;
  out[10][ 8].re = -in[10][ 8].re;
  out[10][ 8].im = -in[10][ 8].im;
  out[10][11].re = -in[10][11].re;
  out[10][11].im = -in[10][11].im;

  out[ 2][ 0].re =  in[ 2][ 0].re;
  out[ 2][ 0].im =  in[ 2][ 0].im;
  out[ 2][ 3].re =  in[ 2][ 3].re;
  out[ 2][ 3].im =  in[ 2][ 3].im;
  out[ 2][ 6].re = -in[ 2][ 6].re;
  out[ 2][ 6].im = -in[ 2][ 6].im;
  out[ 2][ 9].re = -in[ 2][ 9].re;
  out[ 2][ 9].im = -in[ 2][ 9].im;
  out[ 5][ 0].re =  in[ 5][ 0].re;
  out[ 5][ 0].im =  in[ 5][ 0].im;
  out[ 5][ 3].re =  in[ 5][ 3].re;
  out[ 5][ 3].im =  in[ 5][ 3].im;
  out[ 5][ 6].re = -in[ 5][ 6].re;
  out[ 5][ 6].im = -in[ 5][ 6].im;
  out[ 5][ 9].re = -in[ 5][ 9].re;
  out[ 5][ 9].im = -in[ 5][ 9].im;
  out[ 8][ 0].re =  in[ 8][ 0].re;
  out[ 8][ 0].im =  in[ 8][ 0].im;
  out[ 8][ 3].re =  in[ 8][ 3].re;
  out[ 8][ 3].im =  in[ 8][ 3].im;
  out[ 8][ 6].re = -in[ 8][ 6].re;
  out[ 8][ 6].im = -in[ 8][ 6].im;
  out[ 8][ 9].re = -in[ 8][ 9].re;
  out[ 8][ 9].im = -in[ 8][ 9].im;
  out[11][ 0].re =  in[11][ 0].re;
  out[11][ 0].im =  in[11][ 0].im;
  out[11][ 3].re =  in[11][ 3].re;
  out[11][ 3].im =  in[11][ 3].im;
  out[11][ 6].re = -in[11][ 6].re;
  out[11][ 6].im = -in[11][ 6].im;
  out[11][ 9].re = -in[11][ 9].re;
  out[11][ 9].im = -in[11][ 9].im;

  out[ 2][ 1].re =  in[ 2][ 1].re;
  out[ 2][ 1].im =  in[ 2][ 1].im;
  out[ 2][ 4].re =  in[ 2][ 4].re;
  out[ 2][ 4].im =  in[ 2][ 4].im;
  out[ 2][ 7].re = -in[ 2][ 7].re;
  out[ 2][ 7].im = -in[ 2][ 7].im;
  out[ 2][10].re = -in[ 2][10].re;
  out[ 2][10].im = -in[ 2][10].im;
  out[ 5][ 1].re =  in[ 5][ 1].re;
  out[ 5][ 1].im =  in[ 5][ 1].im;
  out[ 5][ 4].re =  in[ 5][ 4].re;
  out[ 5][ 4].im =  in[ 5][ 4].im;
  out[ 5][ 7].re = -in[ 5][ 7].re;
  out[ 5][ 7].im = -in[ 5][ 7].im;
  out[ 5][10].re = -in[ 5][10].re;
  out[ 5][10].im = -in[ 5][10].im;
  out[ 8][ 1].re =  in[ 8][ 1].re;
  out[ 8][ 1].im =  in[ 8][ 1].im;
  out[ 8][ 4].re =  in[ 8][ 4].re;
  out[ 8][ 4].im =  in[ 8][ 4].im;
  out[ 8][ 7].re = -in[ 8][ 7].re;
  out[ 8][ 7].im = -in[ 8][ 7].im;
  out[ 8][10].re = -in[ 8][10].re;
  out[ 8][10].im = -in[ 8][10].im;
  out[11][ 1].re =  in[11][ 1].re;
  out[11][ 1].im =  in[11][ 1].im;
  out[11][ 4].re =  in[11][ 4].re;
  out[11][ 4].im =  in[11][ 4].im;
  out[11][ 7].re = -in[11][ 7].re;
  out[11][ 7].im = -in[11][ 7].im;
  out[11][10].re = -in[11][10].re;
  out[11][10].im = -in[11][10].im;

  out[ 2][ 2].re =  in[ 2][ 2].re;
  out[ 2][ 2].im =  in[ 2][ 2].im;
  out[ 2][ 5].re =  in[ 2][ 5].re;
  out[ 2][ 5].im =  in[ 2][ 5].im;
  out[ 2][ 8].re = -in[ 2][ 8].re;
  out[ 2][ 8].im = -in[ 2][ 8].im;
  out[ 2][11].re = -in[ 2][11].re;
  out[ 2][11].im = -in[ 2][11].im;
  out[ 5][ 2].re =  in[ 5][ 2].re;
  out[ 5][ 2].im =  in[ 5][ 2].im;
  out[ 5][ 5].re =  in[ 5][ 5].re;
  out[ 5][ 5].im =  in[ 5][ 5].im;
  out[ 5][ 8].re = -in[ 5][ 8].re;
  out[ 5][ 8].im = -in[ 5][ 8].im;
  out[ 5][11].re = -in[ 5][11].re;
  out[ 5][11].im = -in[ 5][11].im;
  out[ 8][ 2].re =  in[ 8][ 2].re;
  out[ 8][ 2].im =  in[ 8][ 2].im;
  out[ 8][ 5].re =  in[ 8][ 5].re;
  out[ 8][ 5].im =  in[ 8][ 5].im;
  out[ 8][ 8].re = -in[ 8][ 8].re;
  out[ 8][ 8].im = -in[ 8][ 8].im;
  out[ 8][11].re = -in[ 8][11].re;
  out[ 8][11].im = -in[ 8][11].im;
  out[11][ 2].re =  in[11][ 2].re;
  out[11][ 2].im =  in[11][ 2].im;
  out[11][ 5].re =  in[11][ 5].re;
  out[11][ 5].im =  in[11][ 5].im;
  out[11][ 8].re = -in[11][ 8].re;
  out[11][ 8].im = -in[11][ 8].im;
  out[11][11].re = -in[11][11].re;
  out[11][11].im = -in[11][11].im;


  return;
}

/* multiply prop by ar{C\gamma_z} from the right */
__inline__ void
prop_G_Cgz(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 3].im;
  out[ 0][ 0].im = -in[ 0][ 3].re;
  out[ 0][ 3].re =  in[ 0][ 0].im;
  out[ 0][ 3].im = -in[ 0][ 0].re;
  out[ 0][ 6].re = -in[ 0][ 9].im;
  out[ 0][ 6].im =  in[ 0][ 9].re;
  out[ 0][ 9].re = -in[ 0][ 6].im;
  out[ 0][ 9].im =  in[ 0][ 6].re;
  out[ 3][ 0].re =  in[ 3][ 3].im;
  out[ 3][ 0].im = -in[ 3][ 3].re;
  out[ 3][ 3].re =  in[ 3][ 0].im;
  out[ 3][ 3].im = -in[ 3][ 0].re;
  out[ 3][ 6].re = -in[ 3][ 9].im;
  out[ 3][ 6].im =  in[ 3][ 9].re;
  out[ 3][ 9].re = -in[ 3][ 6].im;
  out[ 3][ 9].im =  in[ 3][ 6].re;
  out[ 6][ 0].re =  in[ 6][ 3].im;
  out[ 6][ 0].im = -in[ 6][ 3].re;
  out[ 6][ 3].re =  in[ 6][ 0].im;
  out[ 6][ 3].im = -in[ 6][ 0].re;
  out[ 6][ 6].re = -in[ 6][ 9].im;
  out[ 6][ 6].im =  in[ 6][ 9].re;
  out[ 6][ 9].re = -in[ 6][ 6].im;
  out[ 6][ 9].im =  in[ 6][ 6].re;
  out[ 9][ 0].re =  in[ 9][ 3].im;
  out[ 9][ 0].im = -in[ 9][ 3].re;
  out[ 9][ 3].re =  in[ 9][ 0].im;
  out[ 9][ 3].im = -in[ 9][ 0].re;
  out[ 9][ 6].re = -in[ 9][ 9].im;
  out[ 9][ 6].im =  in[ 9][ 9].re;
  out[ 9][ 9].re = -in[ 9][ 6].im;
  out[ 9][ 9].im =  in[ 9][ 6].re;

  out[ 0][ 1].re =  in[ 0][ 4].im;
  out[ 0][ 1].im = -in[ 0][ 4].re;
  out[ 0][ 4].re =  in[ 0][ 1].im;
  out[ 0][ 4].im = -in[ 0][ 1].re;
  out[ 0][ 7].re = -in[ 0][10].im;
  out[ 0][ 7].im =  in[ 0][10].re;
  out[ 0][10].re = -in[ 0][ 7].im;
  out[ 0][10].im =  in[ 0][ 7].re;
  out[ 3][ 1].re =  in[ 3][ 4].im;
  out[ 3][ 1].im = -in[ 3][ 4].re;
  out[ 3][ 4].re =  in[ 3][ 1].im;
  out[ 3][ 4].im = -in[ 3][ 1].re;
  out[ 3][ 7].re = -in[ 3][10].im;
  out[ 3][ 7].im =  in[ 3][10].re;
  out[ 3][10].re = -in[ 3][ 7].im;
  out[ 3][10].im =  in[ 3][ 7].re;
  out[ 6][ 1].re =  in[ 6][ 4].im;
  out[ 6][ 1].im = -in[ 6][ 4].re;
  out[ 6][ 4].re =  in[ 6][ 1].im;
  out[ 6][ 4].im = -in[ 6][ 1].re;
  out[ 6][ 7].re = -in[ 6][10].im;
  out[ 6][ 7].im =  in[ 6][10].re;
  out[ 6][10].re = -in[ 6][ 7].im;
  out[ 6][10].im =  in[ 6][ 7].re;
  out[ 9][ 1].re =  in[ 9][ 4].im;
  out[ 9][ 1].im = -in[ 9][ 4].re;
  out[ 9][ 4].re =  in[ 9][ 1].im;
  out[ 9][ 4].im = -in[ 9][ 1].re;
  out[ 9][ 7].re = -in[ 9][10].im;
  out[ 9][ 7].im =  in[ 9][10].re;
  out[ 9][10].re = -in[ 9][ 7].im;
  out[ 9][10].im =  in[ 9][ 7].re;

  out[ 0][ 2].re =  in[ 0][ 5].im;
  out[ 0][ 2].im = -in[ 0][ 5].re;
  out[ 0][ 5].re =  in[ 0][ 2].im;
  out[ 0][ 5].im = -in[ 0][ 2].re;
  out[ 0][ 8].re = -in[ 0][11].im;
  out[ 0][ 8].im =  in[ 0][11].re;
  out[ 0][11].re = -in[ 0][ 8].im;
  out[ 0][11].im =  in[ 0][ 8].re;
  out[ 3][ 2].re =  in[ 3][ 5].im;
  out[ 3][ 2].im = -in[ 3][ 5].re;
  out[ 3][ 5].re =  in[ 3][ 2].im;
  out[ 3][ 5].im = -in[ 3][ 2].re;
  out[ 3][ 8].re = -in[ 3][11].im;
  out[ 3][ 8].im =  in[ 3][11].re;
  out[ 3][11].re = -in[ 3][ 8].im;
  out[ 3][11].im =  in[ 3][ 8].re;
  out[ 6][ 2].re =  in[ 6][ 5].im;
  out[ 6][ 2].im = -in[ 6][ 5].re;
  out[ 6][ 5].re =  in[ 6][ 2].im;
  out[ 6][ 5].im = -in[ 6][ 2].re;
  out[ 6][ 8].re = -in[ 6][11].im;
  out[ 6][ 8].im =  in[ 6][11].re;
  out[ 6][11].re = -in[ 6][ 8].im;
  out[ 6][11].im =  in[ 6][ 8].re;
  out[ 9][ 2].re =  in[ 9][ 5].im;
  out[ 9][ 2].im = -in[ 9][ 5].re;
  out[ 9][ 5].re =  in[ 9][ 2].im;
  out[ 9][ 5].im = -in[ 9][ 2].re;
  out[ 9][ 8].re = -in[ 9][11].im;
  out[ 9][ 8].im =  in[ 9][11].re;
  out[ 9][11].re = -in[ 9][ 8].im;
  out[ 9][11].im =  in[ 9][ 8].re;

  out[ 1][ 0].re =  in[ 1][ 3].im;
  out[ 1][ 0].im = -in[ 1][ 3].re;
  out[ 1][ 3].re =  in[ 1][ 0].im;
  out[ 1][ 3].im = -in[ 1][ 0].re;
  out[ 1][ 6].re = -in[ 1][ 9].im;
  out[ 1][ 6].im =  in[ 1][ 9].re;
  out[ 1][ 9].re = -in[ 1][ 6].im;
  out[ 1][ 9].im =  in[ 1][ 6].re;
  out[ 4][ 0].re =  in[ 4][ 3].im;
  out[ 4][ 0].im = -in[ 4][ 3].re;
  out[ 4][ 3].re =  in[ 4][ 0].im;
  out[ 4][ 3].im = -in[ 4][ 0].re;
  out[ 4][ 6].re = -in[ 4][ 9].im;
  out[ 4][ 6].im =  in[ 4][ 9].re;
  out[ 4][ 9].re = -in[ 4][ 6].im;
  out[ 4][ 9].im =  in[ 4][ 6].re;
  out[ 7][ 0].re =  in[ 7][ 3].im;
  out[ 7][ 0].im = -in[ 7][ 3].re;
  out[ 7][ 3].re =  in[ 7][ 0].im;
  out[ 7][ 3].im = -in[ 7][ 0].re;
  out[ 7][ 6].re = -in[ 7][ 9].im;
  out[ 7][ 6].im =  in[ 7][ 9].re;
  out[ 7][ 9].re = -in[ 7][ 6].im;
  out[ 7][ 9].im =  in[ 7][ 6].re;
  out[10][ 0].re =  in[10][ 3].im;
  out[10][ 0].im = -in[10][ 3].re;
  out[10][ 3].re =  in[10][ 0].im;
  out[10][ 3].im = -in[10][ 0].re;
  out[10][ 6].re = -in[10][ 9].im;
  out[10][ 6].im =  in[10][ 9].re;
  out[10][ 9].re = -in[10][ 6].im;
  out[10][ 9].im =  in[10][ 6].re;

  out[ 1][ 1].re =  in[ 1][ 4].im;
  out[ 1][ 1].im = -in[ 1][ 4].re;
  out[ 1][ 4].re =  in[ 1][ 1].im;
  out[ 1][ 4].im = -in[ 1][ 1].re;
  out[ 1][ 7].re = -in[ 1][10].im;
  out[ 1][ 7].im =  in[ 1][10].re;
  out[ 1][10].re = -in[ 1][ 7].im;
  out[ 1][10].im =  in[ 1][ 7].re;
  out[ 4][ 1].re =  in[ 4][ 4].im;
  out[ 4][ 1].im = -in[ 4][ 4].re;
  out[ 4][ 4].re =  in[ 4][ 1].im;
  out[ 4][ 4].im = -in[ 4][ 1].re;
  out[ 4][ 7].re = -in[ 4][10].im;
  out[ 4][ 7].im =  in[ 4][10].re;
  out[ 4][10].re = -in[ 4][ 7].im;
  out[ 4][10].im =  in[ 4][ 7].re;
  out[ 7][ 1].re =  in[ 7][ 4].im;
  out[ 7][ 1].im = -in[ 7][ 4].re;
  out[ 7][ 4].re =  in[ 7][ 1].im;
  out[ 7][ 4].im = -in[ 7][ 1].re;
  out[ 7][ 7].re = -in[ 7][10].im;
  out[ 7][ 7].im =  in[ 7][10].re;
  out[ 7][10].re = -in[ 7][ 7].im;
  out[ 7][10].im =  in[ 7][ 7].re;
  out[10][ 1].re =  in[10][ 4].im;
  out[10][ 1].im = -in[10][ 4].re;
  out[10][ 4].re =  in[10][ 1].im;
  out[10][ 4].im = -in[10][ 1].re;
  out[10][ 7].re = -in[10][10].im;
  out[10][ 7].im =  in[10][10].re;
  out[10][10].re = -in[10][ 7].im;
  out[10][10].im =  in[10][ 7].re;

  out[ 1][ 2].re =  in[ 1][ 5].im;
  out[ 1][ 2].im = -in[ 1][ 5].re;
  out[ 1][ 5].re =  in[ 1][ 2].im;
  out[ 1][ 5].im = -in[ 1][ 2].re;
  out[ 1][ 8].re = -in[ 1][11].im;
  out[ 1][ 8].im =  in[ 1][11].re;
  out[ 1][11].re = -in[ 1][ 8].im;
  out[ 1][11].im =  in[ 1][ 8].re;
  out[ 4][ 2].re =  in[ 4][ 5].im;
  out[ 4][ 2].im = -in[ 4][ 5].re;
  out[ 4][ 5].re =  in[ 4][ 2].im;
  out[ 4][ 5].im = -in[ 4][ 2].re;
  out[ 4][ 8].re = -in[ 4][11].im;
  out[ 4][ 8].im =  in[ 4][11].re;
  out[ 4][11].re = -in[ 4][ 8].im;
  out[ 4][11].im =  in[ 4][ 8].re;
  out[ 7][ 2].re =  in[ 7][ 5].im;
  out[ 7][ 2].im = -in[ 7][ 5].re;
  out[ 7][ 5].re =  in[ 7][ 2].im;
  out[ 7][ 5].im = -in[ 7][ 2].re;
  out[ 7][ 8].re = -in[ 7][11].im;
  out[ 7][ 8].im =  in[ 7][11].re;
  out[ 7][11].re = -in[ 7][ 8].im;
  out[ 7][11].im =  in[ 7][ 8].re;
  out[10][ 2].re =  in[10][ 5].im;
  out[10][ 2].im = -in[10][ 5].re;
  out[10][ 5].re =  in[10][ 2].im;
  out[10][ 5].im = -in[10][ 2].re;
  out[10][ 8].re = -in[10][11].im;
  out[10][ 8].im =  in[10][11].re;
  out[10][11].re = -in[10][ 8].im;
  out[10][11].im =  in[10][ 8].re;

  out[ 2][ 0].re =  in[ 2][ 3].im;
  out[ 2][ 0].im = -in[ 2][ 3].re;
  out[ 2][ 3].re =  in[ 2][ 0].im;
  out[ 2][ 3].im = -in[ 2][ 0].re;
  out[ 2][ 6].re = -in[ 2][ 9].im;
  out[ 2][ 6].im =  in[ 2][ 9].re;
  out[ 2][ 9].re = -in[ 2][ 6].im;
  out[ 2][ 9].im =  in[ 2][ 6].re;
  out[ 5][ 0].re =  in[ 5][ 3].im;
  out[ 5][ 0].im = -in[ 5][ 3].re;
  out[ 5][ 3].re =  in[ 5][ 0].im;
  out[ 5][ 3].im = -in[ 5][ 0].re;
  out[ 5][ 6].re = -in[ 5][ 9].im;
  out[ 5][ 6].im =  in[ 5][ 9].re;
  out[ 5][ 9].re = -in[ 5][ 6].im;
  out[ 5][ 9].im =  in[ 5][ 6].re;
  out[ 8][ 0].re =  in[ 8][ 3].im;
  out[ 8][ 0].im = -in[ 8][ 3].re;
  out[ 8][ 3].re =  in[ 8][ 0].im;
  out[ 8][ 3].im = -in[ 8][ 0].re;
  out[ 8][ 6].re = -in[ 8][ 9].im;
  out[ 8][ 6].im =  in[ 8][ 9].re;
  out[ 8][ 9].re = -in[ 8][ 6].im;
  out[ 8][ 9].im =  in[ 8][ 6].re;
  out[11][ 0].re =  in[11][ 3].im;
  out[11][ 0].im = -in[11][ 3].re;
  out[11][ 3].re =  in[11][ 0].im;
  out[11][ 3].im = -in[11][ 0].re;
  out[11][ 6].re = -in[11][ 9].im;
  out[11][ 6].im =  in[11][ 9].re;
  out[11][ 9].re = -in[11][ 6].im;
  out[11][ 9].im =  in[11][ 6].re;

  out[ 2][ 1].re =  in[ 2][ 4].im;
  out[ 2][ 1].im = -in[ 2][ 4].re;
  out[ 2][ 4].re =  in[ 2][ 1].im;
  out[ 2][ 4].im = -in[ 2][ 1].re;
  out[ 2][ 7].re = -in[ 2][10].im;
  out[ 2][ 7].im =  in[ 2][10].re;
  out[ 2][10].re = -in[ 2][ 7].im;
  out[ 2][10].im =  in[ 2][ 7].re;
  out[ 5][ 1].re =  in[ 5][ 4].im;
  out[ 5][ 1].im = -in[ 5][ 4].re;
  out[ 5][ 4].re =  in[ 5][ 1].im;
  out[ 5][ 4].im = -in[ 5][ 1].re;
  out[ 5][ 7].re = -in[ 5][10].im;
  out[ 5][ 7].im =  in[ 5][10].re;
  out[ 5][10].re = -in[ 5][ 7].im;
  out[ 5][10].im =  in[ 5][ 7].re;
  out[ 8][ 1].re =  in[ 8][ 4].im;
  out[ 8][ 1].im = -in[ 8][ 4].re;
  out[ 8][ 4].re =  in[ 8][ 1].im;
  out[ 8][ 4].im = -in[ 8][ 1].re;
  out[ 8][ 7].re = -in[ 8][10].im;
  out[ 8][ 7].im =  in[ 8][10].re;
  out[ 8][10].re = -in[ 8][ 7].im;
  out[ 8][10].im =  in[ 8][ 7].re;
  out[11][ 1].re =  in[11][ 4].im;
  out[11][ 1].im = -in[11][ 4].re;
  out[11][ 4].re =  in[11][ 1].im;
  out[11][ 4].im = -in[11][ 1].re;
  out[11][ 7].re = -in[11][10].im;
  out[11][ 7].im =  in[11][10].re;
  out[11][10].re = -in[11][ 7].im;
  out[11][10].im =  in[11][ 7].re;

  out[ 2][ 2].re =  in[ 2][ 5].im;
  out[ 2][ 2].im = -in[ 2][ 5].re;
  out[ 2][ 5].re =  in[ 2][ 2].im;
  out[ 2][ 5].im = -in[ 2][ 2].re;
  out[ 2][ 8].re = -in[ 2][11].im;
  out[ 2][ 8].im =  in[ 2][11].re;
  out[ 2][11].re = -in[ 2][ 8].im;
  out[ 2][11].im =  in[ 2][ 8].re;
  out[ 5][ 2].re =  in[ 5][ 5].im;
  out[ 5][ 2].im = -in[ 5][ 5].re;
  out[ 5][ 5].re =  in[ 5][ 2].im;
  out[ 5][ 5].im = -in[ 5][ 2].re;
  out[ 5][ 8].re = -in[ 5][11].im;
  out[ 5][ 8].im =  in[ 5][11].re;
  out[ 5][11].re = -in[ 5][ 8].im;
  out[ 5][11].im =  in[ 5][ 8].re;
  out[ 8][ 2].re =  in[ 8][ 5].im;
  out[ 8][ 2].im = -in[ 8][ 5].re;
  out[ 8][ 5].re =  in[ 8][ 2].im;
  out[ 8][ 5].im = -in[ 8][ 2].re;
  out[ 8][ 8].re = -in[ 8][11].im;
  out[ 8][ 8].im =  in[ 8][11].re;
  out[ 8][11].re = -in[ 8][ 8].im;
  out[ 8][11].im =  in[ 8][ 8].re;
  out[11][ 2].re =  in[11][ 5].im;
  out[11][ 2].im = -in[11][ 5].re;
  out[11][ 5].re =  in[11][ 2].im;
  out[11][ 5].im = -in[11][ 2].re;
  out[11][ 8].re = -in[11][11].im;
  out[11][ 8].im =  in[11][11].re;
  out[11][11].re = -in[11][ 8].im;
  out[11][11].im =  in[11][ 8].re;


  return;
}

/* multiply prop by ar{C\gamma_t} from the right */
__inline__ void
prop_G_Cgt(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  in[ 0][ 9].re;
  out[ 0][ 0].im =  in[ 0][ 9].im;
  out[ 0][ 3].re = -in[ 0][ 6].re;
  out[ 0][ 3].im = -in[ 0][ 6].im;
  out[ 0][ 6].re = -in[ 0][ 3].re;
  out[ 0][ 6].im = -in[ 0][ 3].im;
  out[ 0][ 9].re =  in[ 0][ 0].re;
  out[ 0][ 9].im =  in[ 0][ 0].im;
  out[ 3][ 0].re =  in[ 3][ 9].re;
  out[ 3][ 0].im =  in[ 3][ 9].im;
  out[ 3][ 3].re = -in[ 3][ 6].re;
  out[ 3][ 3].im = -in[ 3][ 6].im;
  out[ 3][ 6].re = -in[ 3][ 3].re;
  out[ 3][ 6].im = -in[ 3][ 3].im;
  out[ 3][ 9].re =  in[ 3][ 0].re;
  out[ 3][ 9].im =  in[ 3][ 0].im;
  out[ 6][ 0].re =  in[ 6][ 9].re;
  out[ 6][ 0].im =  in[ 6][ 9].im;
  out[ 6][ 3].re = -in[ 6][ 6].re;
  out[ 6][ 3].im = -in[ 6][ 6].im;
  out[ 6][ 6].re = -in[ 6][ 3].re;
  out[ 6][ 6].im = -in[ 6][ 3].im;
  out[ 6][ 9].re =  in[ 6][ 0].re;
  out[ 6][ 9].im =  in[ 6][ 0].im;
  out[ 9][ 0].re =  in[ 9][ 9].re;
  out[ 9][ 0].im =  in[ 9][ 9].im;
  out[ 9][ 3].re = -in[ 9][ 6].re;
  out[ 9][ 3].im = -in[ 9][ 6].im;
  out[ 9][ 6].re = -in[ 9][ 3].re;
  out[ 9][ 6].im = -in[ 9][ 3].im;
  out[ 9][ 9].re =  in[ 9][ 0].re;
  out[ 9][ 9].im =  in[ 9][ 0].im;

  out[ 0][ 1].re =  in[ 0][10].re;
  out[ 0][ 1].im =  in[ 0][10].im;
  out[ 0][ 4].re = -in[ 0][ 7].re;
  out[ 0][ 4].im = -in[ 0][ 7].im;
  out[ 0][ 7].re = -in[ 0][ 4].re;
  out[ 0][ 7].im = -in[ 0][ 4].im;
  out[ 0][10].re =  in[ 0][ 1].re;
  out[ 0][10].im =  in[ 0][ 1].im;
  out[ 3][ 1].re =  in[ 3][10].re;
  out[ 3][ 1].im =  in[ 3][10].im;
  out[ 3][ 4].re = -in[ 3][ 7].re;
  out[ 3][ 4].im = -in[ 3][ 7].im;
  out[ 3][ 7].re = -in[ 3][ 4].re;
  out[ 3][ 7].im = -in[ 3][ 4].im;
  out[ 3][10].re =  in[ 3][ 1].re;
  out[ 3][10].im =  in[ 3][ 1].im;
  out[ 6][ 1].re =  in[ 6][10].re;
  out[ 6][ 1].im =  in[ 6][10].im;
  out[ 6][ 4].re = -in[ 6][ 7].re;
  out[ 6][ 4].im = -in[ 6][ 7].im;
  out[ 6][ 7].re = -in[ 6][ 4].re;
  out[ 6][ 7].im = -in[ 6][ 4].im;
  out[ 6][10].re =  in[ 6][ 1].re;
  out[ 6][10].im =  in[ 6][ 1].im;
  out[ 9][ 1].re =  in[ 9][10].re;
  out[ 9][ 1].im =  in[ 9][10].im;
  out[ 9][ 4].re = -in[ 9][ 7].re;
  out[ 9][ 4].im = -in[ 9][ 7].im;
  out[ 9][ 7].re = -in[ 9][ 4].re;
  out[ 9][ 7].im = -in[ 9][ 4].im;
  out[ 9][10].re =  in[ 9][ 1].re;
  out[ 9][10].im =  in[ 9][ 1].im;

  out[ 0][ 2].re =  in[ 0][11].re;
  out[ 0][ 2].im =  in[ 0][11].im;
  out[ 0][ 5].re = -in[ 0][ 8].re;
  out[ 0][ 5].im = -in[ 0][ 8].im;
  out[ 0][ 8].re = -in[ 0][ 5].re;
  out[ 0][ 8].im = -in[ 0][ 5].im;
  out[ 0][11].re =  in[ 0][ 2].re;
  out[ 0][11].im =  in[ 0][ 2].im;
  out[ 3][ 2].re =  in[ 3][11].re;
  out[ 3][ 2].im =  in[ 3][11].im;
  out[ 3][ 5].re = -in[ 3][ 8].re;
  out[ 3][ 5].im = -in[ 3][ 8].im;
  out[ 3][ 8].re = -in[ 3][ 5].re;
  out[ 3][ 8].im = -in[ 3][ 5].im;
  out[ 3][11].re =  in[ 3][ 2].re;
  out[ 3][11].im =  in[ 3][ 2].im;
  out[ 6][ 2].re =  in[ 6][11].re;
  out[ 6][ 2].im =  in[ 6][11].im;
  out[ 6][ 5].re = -in[ 6][ 8].re;
  out[ 6][ 5].im = -in[ 6][ 8].im;
  out[ 6][ 8].re = -in[ 6][ 5].re;
  out[ 6][ 8].im = -in[ 6][ 5].im;
  out[ 6][11].re =  in[ 6][ 2].re;
  out[ 6][11].im =  in[ 6][ 2].im;
  out[ 9][ 2].re =  in[ 9][11].re;
  out[ 9][ 2].im =  in[ 9][11].im;
  out[ 9][ 5].re = -in[ 9][ 8].re;
  out[ 9][ 5].im = -in[ 9][ 8].im;
  out[ 9][ 8].re = -in[ 9][ 5].re;
  out[ 9][ 8].im = -in[ 9][ 5].im;
  out[ 9][11].re =  in[ 9][ 2].re;
  out[ 9][11].im =  in[ 9][ 2].im;

  out[ 1][ 0].re =  in[ 1][ 9].re;
  out[ 1][ 0].im =  in[ 1][ 9].im;
  out[ 1][ 3].re = -in[ 1][ 6].re;
  out[ 1][ 3].im = -in[ 1][ 6].im;
  out[ 1][ 6].re = -in[ 1][ 3].re;
  out[ 1][ 6].im = -in[ 1][ 3].im;
  out[ 1][ 9].re =  in[ 1][ 0].re;
  out[ 1][ 9].im =  in[ 1][ 0].im;
  out[ 4][ 0].re =  in[ 4][ 9].re;
  out[ 4][ 0].im =  in[ 4][ 9].im;
  out[ 4][ 3].re = -in[ 4][ 6].re;
  out[ 4][ 3].im = -in[ 4][ 6].im;
  out[ 4][ 6].re = -in[ 4][ 3].re;
  out[ 4][ 6].im = -in[ 4][ 3].im;
  out[ 4][ 9].re =  in[ 4][ 0].re;
  out[ 4][ 9].im =  in[ 4][ 0].im;
  out[ 7][ 0].re =  in[ 7][ 9].re;
  out[ 7][ 0].im =  in[ 7][ 9].im;
  out[ 7][ 3].re = -in[ 7][ 6].re;
  out[ 7][ 3].im = -in[ 7][ 6].im;
  out[ 7][ 6].re = -in[ 7][ 3].re;
  out[ 7][ 6].im = -in[ 7][ 3].im;
  out[ 7][ 9].re =  in[ 7][ 0].re;
  out[ 7][ 9].im =  in[ 7][ 0].im;
  out[10][ 0].re =  in[10][ 9].re;
  out[10][ 0].im =  in[10][ 9].im;
  out[10][ 3].re = -in[10][ 6].re;
  out[10][ 3].im = -in[10][ 6].im;
  out[10][ 6].re = -in[10][ 3].re;
  out[10][ 6].im = -in[10][ 3].im;
  out[10][ 9].re =  in[10][ 0].re;
  out[10][ 9].im =  in[10][ 0].im;

  out[ 1][ 1].re =  in[ 1][10].re;
  out[ 1][ 1].im =  in[ 1][10].im;
  out[ 1][ 4].re = -in[ 1][ 7].re;
  out[ 1][ 4].im = -in[ 1][ 7].im;
  out[ 1][ 7].re = -in[ 1][ 4].re;
  out[ 1][ 7].im = -in[ 1][ 4].im;
  out[ 1][10].re =  in[ 1][ 1].re;
  out[ 1][10].im =  in[ 1][ 1].im;
  out[ 4][ 1].re =  in[ 4][10].re;
  out[ 4][ 1].im =  in[ 4][10].im;
  out[ 4][ 4].re = -in[ 4][ 7].re;
  out[ 4][ 4].im = -in[ 4][ 7].im;
  out[ 4][ 7].re = -in[ 4][ 4].re;
  out[ 4][ 7].im = -in[ 4][ 4].im;
  out[ 4][10].re =  in[ 4][ 1].re;
  out[ 4][10].im =  in[ 4][ 1].im;
  out[ 7][ 1].re =  in[ 7][10].re;
  out[ 7][ 1].im =  in[ 7][10].im;
  out[ 7][ 4].re = -in[ 7][ 7].re;
  out[ 7][ 4].im = -in[ 7][ 7].im;
  out[ 7][ 7].re = -in[ 7][ 4].re;
  out[ 7][ 7].im = -in[ 7][ 4].im;
  out[ 7][10].re =  in[ 7][ 1].re;
  out[ 7][10].im =  in[ 7][ 1].im;
  out[10][ 1].re =  in[10][10].re;
  out[10][ 1].im =  in[10][10].im;
  out[10][ 4].re = -in[10][ 7].re;
  out[10][ 4].im = -in[10][ 7].im;
  out[10][ 7].re = -in[10][ 4].re;
  out[10][ 7].im = -in[10][ 4].im;
  out[10][10].re =  in[10][ 1].re;
  out[10][10].im =  in[10][ 1].im;

  out[ 1][ 2].re =  in[ 1][11].re;
  out[ 1][ 2].im =  in[ 1][11].im;
  out[ 1][ 5].re = -in[ 1][ 8].re;
  out[ 1][ 5].im = -in[ 1][ 8].im;
  out[ 1][ 8].re = -in[ 1][ 5].re;
  out[ 1][ 8].im = -in[ 1][ 5].im;
  out[ 1][11].re =  in[ 1][ 2].re;
  out[ 1][11].im =  in[ 1][ 2].im;
  out[ 4][ 2].re =  in[ 4][11].re;
  out[ 4][ 2].im =  in[ 4][11].im;
  out[ 4][ 5].re = -in[ 4][ 8].re;
  out[ 4][ 5].im = -in[ 4][ 8].im;
  out[ 4][ 8].re = -in[ 4][ 5].re;
  out[ 4][ 8].im = -in[ 4][ 5].im;
  out[ 4][11].re =  in[ 4][ 2].re;
  out[ 4][11].im =  in[ 4][ 2].im;
  out[ 7][ 2].re =  in[ 7][11].re;
  out[ 7][ 2].im =  in[ 7][11].im;
  out[ 7][ 5].re = -in[ 7][ 8].re;
  out[ 7][ 5].im = -in[ 7][ 8].im;
  out[ 7][ 8].re = -in[ 7][ 5].re;
  out[ 7][ 8].im = -in[ 7][ 5].im;
  out[ 7][11].re =  in[ 7][ 2].re;
  out[ 7][11].im =  in[ 7][ 2].im;
  out[10][ 2].re =  in[10][11].re;
  out[10][ 2].im =  in[10][11].im;
  out[10][ 5].re = -in[10][ 8].re;
  out[10][ 5].im = -in[10][ 8].im;
  out[10][ 8].re = -in[10][ 5].re;
  out[10][ 8].im = -in[10][ 5].im;
  out[10][11].re =  in[10][ 2].re;
  out[10][11].im =  in[10][ 2].im;

  out[ 2][ 0].re =  in[ 2][ 9].re;
  out[ 2][ 0].im =  in[ 2][ 9].im;
  out[ 2][ 3].re = -in[ 2][ 6].re;
  out[ 2][ 3].im = -in[ 2][ 6].im;
  out[ 2][ 6].re = -in[ 2][ 3].re;
  out[ 2][ 6].im = -in[ 2][ 3].im;
  out[ 2][ 9].re =  in[ 2][ 0].re;
  out[ 2][ 9].im =  in[ 2][ 0].im;
  out[ 5][ 0].re =  in[ 5][ 9].re;
  out[ 5][ 0].im =  in[ 5][ 9].im;
  out[ 5][ 3].re = -in[ 5][ 6].re;
  out[ 5][ 3].im = -in[ 5][ 6].im;
  out[ 5][ 6].re = -in[ 5][ 3].re;
  out[ 5][ 6].im = -in[ 5][ 3].im;
  out[ 5][ 9].re =  in[ 5][ 0].re;
  out[ 5][ 9].im =  in[ 5][ 0].im;
  out[ 8][ 0].re =  in[ 8][ 9].re;
  out[ 8][ 0].im =  in[ 8][ 9].im;
  out[ 8][ 3].re = -in[ 8][ 6].re;
  out[ 8][ 3].im = -in[ 8][ 6].im;
  out[ 8][ 6].re = -in[ 8][ 3].re;
  out[ 8][ 6].im = -in[ 8][ 3].im;
  out[ 8][ 9].re =  in[ 8][ 0].re;
  out[ 8][ 9].im =  in[ 8][ 0].im;
  out[11][ 0].re =  in[11][ 9].re;
  out[11][ 0].im =  in[11][ 9].im;
  out[11][ 3].re = -in[11][ 6].re;
  out[11][ 3].im = -in[11][ 6].im;
  out[11][ 6].re = -in[11][ 3].re;
  out[11][ 6].im = -in[11][ 3].im;
  out[11][ 9].re =  in[11][ 0].re;
  out[11][ 9].im =  in[11][ 0].im;

  out[ 2][ 1].re =  in[ 2][10].re;
  out[ 2][ 1].im =  in[ 2][10].im;
  out[ 2][ 4].re = -in[ 2][ 7].re;
  out[ 2][ 4].im = -in[ 2][ 7].im;
  out[ 2][ 7].re = -in[ 2][ 4].re;
  out[ 2][ 7].im = -in[ 2][ 4].im;
  out[ 2][10].re =  in[ 2][ 1].re;
  out[ 2][10].im =  in[ 2][ 1].im;
  out[ 5][ 1].re =  in[ 5][10].re;
  out[ 5][ 1].im =  in[ 5][10].im;
  out[ 5][ 4].re = -in[ 5][ 7].re;
  out[ 5][ 4].im = -in[ 5][ 7].im;
  out[ 5][ 7].re = -in[ 5][ 4].re;
  out[ 5][ 7].im = -in[ 5][ 4].im;
  out[ 5][10].re =  in[ 5][ 1].re;
  out[ 5][10].im =  in[ 5][ 1].im;
  out[ 8][ 1].re =  in[ 8][10].re;
  out[ 8][ 1].im =  in[ 8][10].im;
  out[ 8][ 4].re = -in[ 8][ 7].re;
  out[ 8][ 4].im = -in[ 8][ 7].im;
  out[ 8][ 7].re = -in[ 8][ 4].re;
  out[ 8][ 7].im = -in[ 8][ 4].im;
  out[ 8][10].re =  in[ 8][ 1].re;
  out[ 8][10].im =  in[ 8][ 1].im;
  out[11][ 1].re =  in[11][10].re;
  out[11][ 1].im =  in[11][10].im;
  out[11][ 4].re = -in[11][ 7].re;
  out[11][ 4].im = -in[11][ 7].im;
  out[11][ 7].re = -in[11][ 4].re;
  out[11][ 7].im = -in[11][ 4].im;
  out[11][10].re =  in[11][ 1].re;
  out[11][10].im =  in[11][ 1].im;

  out[ 2][ 2].re =  in[ 2][11].re;
  out[ 2][ 2].im =  in[ 2][11].im;
  out[ 2][ 5].re = -in[ 2][ 8].re;
  out[ 2][ 5].im = -in[ 2][ 8].im;
  out[ 2][ 8].re = -in[ 2][ 5].re;
  out[ 2][ 8].im = -in[ 2][ 5].im;
  out[ 2][11].re =  in[ 2][ 2].re;
  out[ 2][11].im =  in[ 2][ 2].im;
  out[ 5][ 2].re =  in[ 5][11].re;
  out[ 5][ 2].im =  in[ 5][11].im;
  out[ 5][ 5].re = -in[ 5][ 8].re;
  out[ 5][ 5].im = -in[ 5][ 8].im;
  out[ 5][ 8].re = -in[ 5][ 5].re;
  out[ 5][ 8].im = -in[ 5][ 5].im;
  out[ 5][11].re =  in[ 5][ 2].re;
  out[ 5][11].im =  in[ 5][ 2].im;
  out[ 8][ 2].re =  in[ 8][11].re;
  out[ 8][ 2].im =  in[ 8][11].im;
  out[ 8][ 5].re = -in[ 8][ 8].re;
  out[ 8][ 5].im = -in[ 8][ 8].im;
  out[ 8][ 8].re = -in[ 8][ 5].re;
  out[ 8][ 8].im = -in[ 8][ 5].im;
  out[ 8][11].re =  in[ 8][ 2].re;
  out[ 8][11].im =  in[ 8][ 2].im;
  out[11][ 2].re =  in[11][11].re;
  out[11][ 2].im =  in[11][11].im;
  out[11][ 5].re = -in[11][ 8].re;
  out[11][ 5].im = -in[11][ 8].im;
  out[11][ 8].re = -in[11][ 5].re;
  out[11][ 8].im = -in[11][ 5].im;
  out[11][11].re =  in[11][ 2].re;
  out[11][11].im =  in[11][ 2].im;


  return;
}

/* multiply prop by \Gamma^+ = (1+\gamma_t)/4 from the left */
__inline__ void
prop_ProjTp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 0][ 6].re =  0.5*in[ 0][ 6].re;
  out[ 0][ 6].im =  0.5*in[ 0][ 6].im;
  out[ 0][ 9].re =  0.5*in[ 0][ 9].re;
  out[ 0][ 9].im =  0.5*in[ 0][ 9].im;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 3].im;
  out[ 3][ 6].re =  0.5*in[ 3][ 6].re;
  out[ 3][ 6].im =  0.5*in[ 3][ 6].im;
  out[ 3][ 9].re =  0.5*in[ 3][ 9].re;
  out[ 3][ 9].im =  0.5*in[ 3][ 9].im;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 4].re =  0.5*in[ 0][ 4].re;
  out[ 0][ 4].im =  0.5*in[ 0][ 4].im;
  out[ 0][ 7].re =  0.5*in[ 0][ 7].re;
  out[ 0][ 7].im =  0.5*in[ 0][ 7].im;
  out[ 0][10].re =  0.5*in[ 0][10].re;
  out[ 0][10].im =  0.5*in[ 0][10].im;
  out[ 3][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 4].re =  0.5*in[ 3][ 4].re;
  out[ 3][ 4].im =  0.5*in[ 3][ 4].im;
  out[ 3][ 7].re =  0.5*in[ 3][ 7].re;
  out[ 3][ 7].im =  0.5*in[ 3][ 7].im;
  out[ 3][10].re =  0.5*in[ 3][10].re;
  out[ 3][10].im =  0.5*in[ 3][10].im;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 5].re =  0.5*in[ 0][ 5].re;
  out[ 0][ 5].im =  0.5*in[ 0][ 5].im;
  out[ 0][ 8].re =  0.5*in[ 0][ 8].re;
  out[ 0][ 8].im =  0.5*in[ 0][ 8].im;
  out[ 0][11].re =  0.5*in[ 0][11].re;
  out[ 0][11].im =  0.5*in[ 0][11].im;
  out[ 3][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 5].re =  0.5*in[ 3][ 5].re;
  out[ 3][ 5].im =  0.5*in[ 3][ 5].im;
  out[ 3][ 8].re =  0.5*in[ 3][ 8].re;
  out[ 3][ 8].im =  0.5*in[ 3][ 8].im;
  out[ 3][11].re =  0.5*in[ 3][11].re;
  out[ 3][11].im =  0.5*in[ 3][11].im;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 1][ 6].re =  0.5*in[ 1][ 6].re;
  out[ 1][ 6].im =  0.5*in[ 1][ 6].im;
  out[ 1][ 9].re =  0.5*in[ 1][ 9].re;
  out[ 1][ 9].im =  0.5*in[ 1][ 9].im;
  out[ 4][ 0].re =  0.5*in[ 4][ 0].re;
  out[ 4][ 0].im =  0.5*in[ 4][ 0].im;
  out[ 4][ 3].re =  0.5*in[ 4][ 3].re;
  out[ 4][ 3].im =  0.5*in[ 4][ 3].im;
  out[ 4][ 6].re =  0.5*in[ 4][ 6].re;
  out[ 4][ 6].im =  0.5*in[ 4][ 6].im;
  out[ 4][ 9].re =  0.5*in[ 4][ 9].re;
  out[ 4][ 9].im =  0.5*in[ 4][ 9].im;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 4].re =  0.5*in[ 1][ 4].re;
  out[ 1][ 4].im =  0.5*in[ 1][ 4].im;
  out[ 1][ 7].re =  0.5*in[ 1][ 7].re;
  out[ 1][ 7].im =  0.5*in[ 1][ 7].im;
  out[ 1][10].re =  0.5*in[ 1][10].re;
  out[ 1][10].im =  0.5*in[ 1][10].im;
  out[ 4][ 1].re =  0.5*in[ 4][ 1].re;
  out[ 4][ 1].im =  0.5*in[ 4][ 1].im;
  out[ 4][ 4].re =  0.5*in[ 4][ 4].re;
  out[ 4][ 4].im =  0.5*in[ 4][ 4].im;
  out[ 4][ 7].re =  0.5*in[ 4][ 7].re;
  out[ 4][ 7].im =  0.5*in[ 4][ 7].im;
  out[ 4][10].re =  0.5*in[ 4][10].re;
  out[ 4][10].im =  0.5*in[ 4][10].im;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 5].re =  0.5*in[ 1][ 5].re;
  out[ 1][ 5].im =  0.5*in[ 1][ 5].im;
  out[ 1][ 8].re =  0.5*in[ 1][ 8].re;
  out[ 1][ 8].im =  0.5*in[ 1][ 8].im;
  out[ 1][11].re =  0.5*in[ 1][11].re;
  out[ 1][11].im =  0.5*in[ 1][11].im;
  out[ 4][ 2].re =  0.5*in[ 4][ 2].re;
  out[ 4][ 2].im =  0.5*in[ 4][ 2].im;
  out[ 4][ 5].re =  0.5*in[ 4][ 5].re;
  out[ 4][ 5].im =  0.5*in[ 4][ 5].im;
  out[ 4][ 8].re =  0.5*in[ 4][ 8].re;
  out[ 4][ 8].im =  0.5*in[ 4][ 8].im;
  out[ 4][11].re =  0.5*in[ 4][11].re;
  out[ 4][11].im =  0.5*in[ 4][11].im;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 2][ 6].re =  0.5*in[ 2][ 6].re;
  out[ 2][ 6].im =  0.5*in[ 2][ 6].im;
  out[ 2][ 9].re =  0.5*in[ 2][ 9].re;
  out[ 2][ 9].im =  0.5*in[ 2][ 9].im;
  out[ 5][ 0].re =  0.5*in[ 5][ 0].re;
  out[ 5][ 0].im =  0.5*in[ 5][ 0].im;
  out[ 5][ 3].re =  0.5*in[ 5][ 3].re;
  out[ 5][ 3].im =  0.5*in[ 5][ 3].im;
  out[ 5][ 6].re =  0.5*in[ 5][ 6].re;
  out[ 5][ 6].im =  0.5*in[ 5][ 6].im;
  out[ 5][ 9].re =  0.5*in[ 5][ 9].re;
  out[ 5][ 9].im =  0.5*in[ 5][ 9].im;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 4].re =  0.5*in[ 2][ 4].re;
  out[ 2][ 4].im =  0.5*in[ 2][ 4].im;
  out[ 2][ 7].re =  0.5*in[ 2][ 7].re;
  out[ 2][ 7].im =  0.5*in[ 2][ 7].im;
  out[ 2][10].re =  0.5*in[ 2][10].re;
  out[ 2][10].im =  0.5*in[ 2][10].im;
  out[ 5][ 1].re =  0.5*in[ 5][ 1].re;
  out[ 5][ 1].im =  0.5*in[ 5][ 1].im;
  out[ 5][ 4].re =  0.5*in[ 5][ 4].re;
  out[ 5][ 4].im =  0.5*in[ 5][ 4].im;
  out[ 5][ 7].re =  0.5*in[ 5][ 7].re;
  out[ 5][ 7].im =  0.5*in[ 5][ 7].im;
  out[ 5][10].re =  0.5*in[ 5][10].re;
  out[ 5][10].im =  0.5*in[ 5][10].im;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 5].re =  0.5*in[ 2][ 5].re;
  out[ 2][ 5].im =  0.5*in[ 2][ 5].im;
  out[ 2][ 8].re =  0.5*in[ 2][ 8].re;
  out[ 2][ 8].im =  0.5*in[ 2][ 8].im;
  out[ 2][11].re =  0.5*in[ 2][11].re;
  out[ 2][11].im =  0.5*in[ 2][11].im;
  out[ 5][ 2].re =  0.5*in[ 5][ 2].re;
  out[ 5][ 2].im =  0.5*in[ 5][ 2].im;
  out[ 5][ 5].re =  0.5*in[ 5][ 5].re;
  out[ 5][ 5].im =  0.5*in[ 5][ 5].im;
  out[ 5][ 8].re =  0.5*in[ 5][ 8].re;
  out[ 5][ 8].im =  0.5*in[ 5][ 8].im;
  out[ 5][11].re =  0.5*in[ 5][11].re;
  out[ 5][11].im =  0.5*in[ 5][11].im;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by \Gamma^- = (1-\gamma_t)/4 from the left */
__inline__ void
prop_ProjTm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re =  0.5*in[ 6][ 0].re;
  out[ 6][ 0].im =  0.5*in[ 6][ 0].im;
  out[ 6][ 3].re =  0.5*in[ 6][ 3].re;
  out[ 6][ 3].im =  0.5*in[ 6][ 3].im;
  out[ 6][ 6].re =  0.5*in[ 6][ 6].re;
  out[ 6][ 6].im =  0.5*in[ 6][ 6].im;
  out[ 6][ 9].re =  0.5*in[ 6][ 9].re;
  out[ 6][ 9].im =  0.5*in[ 6][ 9].im;
  out[ 9][ 0].re =  0.5*in[ 9][ 0].re;
  out[ 9][ 0].im =  0.5*in[ 9][ 0].im;
  out[ 9][ 3].re =  0.5*in[ 9][ 3].re;
  out[ 9][ 3].im =  0.5*in[ 9][ 3].im;
  out[ 9][ 6].re =  0.5*in[ 9][ 6].re;
  out[ 9][ 6].im =  0.5*in[ 9][ 6].im;
  out[ 9][ 9].re =  0.5*in[ 9][ 9].re;
  out[ 9][ 9].im =  0.5*in[ 9][ 9].im;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re =  0.5*in[ 6][ 1].re;
  out[ 6][ 1].im =  0.5*in[ 6][ 1].im;
  out[ 6][ 4].re =  0.5*in[ 6][ 4].re;
  out[ 6][ 4].im =  0.5*in[ 6][ 4].im;
  out[ 6][ 7].re =  0.5*in[ 6][ 7].re;
  out[ 6][ 7].im =  0.5*in[ 6][ 7].im;
  out[ 6][10].re =  0.5*in[ 6][10].re;
  out[ 6][10].im =  0.5*in[ 6][10].im;
  out[ 9][ 1].re =  0.5*in[ 9][ 1].re;
  out[ 9][ 1].im =  0.5*in[ 9][ 1].im;
  out[ 9][ 4].re =  0.5*in[ 9][ 4].re;
  out[ 9][ 4].im =  0.5*in[ 9][ 4].im;
  out[ 9][ 7].re =  0.5*in[ 9][ 7].re;
  out[ 9][ 7].im =  0.5*in[ 9][ 7].im;
  out[ 9][10].re =  0.5*in[ 9][10].re;
  out[ 9][10].im =  0.5*in[ 9][10].im;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re =  0.5*in[ 6][ 2].re;
  out[ 6][ 2].im =  0.5*in[ 6][ 2].im;
  out[ 6][ 5].re =  0.5*in[ 6][ 5].re;
  out[ 6][ 5].im =  0.5*in[ 6][ 5].im;
  out[ 6][ 8].re =  0.5*in[ 6][ 8].re;
  out[ 6][ 8].im =  0.5*in[ 6][ 8].im;
  out[ 6][11].re =  0.5*in[ 6][11].re;
  out[ 6][11].im =  0.5*in[ 6][11].im;
  out[ 9][ 2].re =  0.5*in[ 9][ 2].re;
  out[ 9][ 2].im =  0.5*in[ 9][ 2].im;
  out[ 9][ 5].re =  0.5*in[ 9][ 5].re;
  out[ 9][ 5].im =  0.5*in[ 9][ 5].im;
  out[ 9][ 8].re =  0.5*in[ 9][ 8].re;
  out[ 9][ 8].im =  0.5*in[ 9][ 8].im;
  out[ 9][11].re =  0.5*in[ 9][11].re;
  out[ 9][11].im =  0.5*in[ 9][11].im;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re =  0.5*in[ 7][ 0].re;
  out[ 7][ 0].im =  0.5*in[ 7][ 0].im;
  out[ 7][ 3].re =  0.5*in[ 7][ 3].re;
  out[ 7][ 3].im =  0.5*in[ 7][ 3].im;
  out[ 7][ 6].re =  0.5*in[ 7][ 6].re;
  out[ 7][ 6].im =  0.5*in[ 7][ 6].im;
  out[ 7][ 9].re =  0.5*in[ 7][ 9].re;
  out[ 7][ 9].im =  0.5*in[ 7][ 9].im;
  out[10][ 0].re =  0.5*in[10][ 0].re;
  out[10][ 0].im =  0.5*in[10][ 0].im;
  out[10][ 3].re =  0.5*in[10][ 3].re;
  out[10][ 3].im =  0.5*in[10][ 3].im;
  out[10][ 6].re =  0.5*in[10][ 6].re;
  out[10][ 6].im =  0.5*in[10][ 6].im;
  out[10][ 9].re =  0.5*in[10][ 9].re;
  out[10][ 9].im =  0.5*in[10][ 9].im;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re =  0.5*in[ 7][ 1].re;
  out[ 7][ 1].im =  0.5*in[ 7][ 1].im;
  out[ 7][ 4].re =  0.5*in[ 7][ 4].re;
  out[ 7][ 4].im =  0.5*in[ 7][ 4].im;
  out[ 7][ 7].re =  0.5*in[ 7][ 7].re;
  out[ 7][ 7].im =  0.5*in[ 7][ 7].im;
  out[ 7][10].re =  0.5*in[ 7][10].re;
  out[ 7][10].im =  0.5*in[ 7][10].im;
  out[10][ 1].re =  0.5*in[10][ 1].re;
  out[10][ 1].im =  0.5*in[10][ 1].im;
  out[10][ 4].re =  0.5*in[10][ 4].re;
  out[10][ 4].im =  0.5*in[10][ 4].im;
  out[10][ 7].re =  0.5*in[10][ 7].re;
  out[10][ 7].im =  0.5*in[10][ 7].im;
  out[10][10].re =  0.5*in[10][10].re;
  out[10][10].im =  0.5*in[10][10].im;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re =  0.5*in[ 7][ 2].re;
  out[ 7][ 2].im =  0.5*in[ 7][ 2].im;
  out[ 7][ 5].re =  0.5*in[ 7][ 5].re;
  out[ 7][ 5].im =  0.5*in[ 7][ 5].im;
  out[ 7][ 8].re =  0.5*in[ 7][ 8].re;
  out[ 7][ 8].im =  0.5*in[ 7][ 8].im;
  out[ 7][11].re =  0.5*in[ 7][11].re;
  out[ 7][11].im =  0.5*in[ 7][11].im;
  out[10][ 2].re =  0.5*in[10][ 2].re;
  out[10][ 2].im =  0.5*in[10][ 2].im;
  out[10][ 5].re =  0.5*in[10][ 5].re;
  out[10][ 5].im =  0.5*in[10][ 5].im;
  out[10][ 8].re =  0.5*in[10][ 8].re;
  out[10][ 8].im =  0.5*in[10][ 8].im;
  out[10][11].re =  0.5*in[10][11].re;
  out[10][11].im =  0.5*in[10][11].im;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re =  0.5*in[ 8][ 0].re;
  out[ 8][ 0].im =  0.5*in[ 8][ 0].im;
  out[ 8][ 3].re =  0.5*in[ 8][ 3].re;
  out[ 8][ 3].im =  0.5*in[ 8][ 3].im;
  out[ 8][ 6].re =  0.5*in[ 8][ 6].re;
  out[ 8][ 6].im =  0.5*in[ 8][ 6].im;
  out[ 8][ 9].re =  0.5*in[ 8][ 9].re;
  out[ 8][ 9].im =  0.5*in[ 8][ 9].im;
  out[11][ 0].re =  0.5*in[11][ 0].re;
  out[11][ 0].im =  0.5*in[11][ 0].im;
  out[11][ 3].re =  0.5*in[11][ 3].re;
  out[11][ 3].im =  0.5*in[11][ 3].im;
  out[11][ 6].re =  0.5*in[11][ 6].re;
  out[11][ 6].im =  0.5*in[11][ 6].im;
  out[11][ 9].re =  0.5*in[11][ 9].re;
  out[11][ 9].im =  0.5*in[11][ 9].im;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re =  0.5*in[ 8][ 1].re;
  out[ 8][ 1].im =  0.5*in[ 8][ 1].im;
  out[ 8][ 4].re =  0.5*in[ 8][ 4].re;
  out[ 8][ 4].im =  0.5*in[ 8][ 4].im;
  out[ 8][ 7].re =  0.5*in[ 8][ 7].re;
  out[ 8][ 7].im =  0.5*in[ 8][ 7].im;
  out[ 8][10].re =  0.5*in[ 8][10].re;
  out[ 8][10].im =  0.5*in[ 8][10].im;
  out[11][ 1].re =  0.5*in[11][ 1].re;
  out[11][ 1].im =  0.5*in[11][ 1].im;
  out[11][ 4].re =  0.5*in[11][ 4].re;
  out[11][ 4].im =  0.5*in[11][ 4].im;
  out[11][ 7].re =  0.5*in[11][ 7].re;
  out[11][ 7].im =  0.5*in[11][ 7].im;
  out[11][10].re =  0.5*in[11][10].re;
  out[11][10].im =  0.5*in[11][10].im;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re =  0.5*in[ 8][ 2].re;
  out[ 8][ 2].im =  0.5*in[ 8][ 2].im;
  out[ 8][ 5].re =  0.5*in[ 8][ 5].re;
  out[ 8][ 5].im =  0.5*in[ 8][ 5].im;
  out[ 8][ 8].re =  0.5*in[ 8][ 8].re;
  out[ 8][ 8].im =  0.5*in[ 8][ 8].im;
  out[ 8][11].re =  0.5*in[ 8][11].re;
  out[ 8][11].im =  0.5*in[ 8][11].im;
  out[11][ 2].re =  0.5*in[11][ 2].re;
  out[11][ 2].im =  0.5*in[11][ 2].im;
  out[11][ 5].re =  0.5*in[11][ 5].re;
  out[11][ 5].im =  0.5*in[11][ 5].im;
  out[11][ 8].re =  0.5*in[11][ 8].re;
  out[11][ 8].im =  0.5*in[11][ 8].im;
  out[11][11].re =  0.5*in[11][11].re;
  out[11][11].im =  0.5*in[11][11].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_x from the left */
__inline__ void
prop_ProjXp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 0][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 3][ 3].im;
  out[ 0][ 6].re =  0.5*in[ 3][ 6].re;
  out[ 0][ 6].im =  0.5*in[ 3][ 6].im;
  out[ 0][ 9].re =  0.5*in[ 3][ 9].re;
  out[ 0][ 9].im =  0.5*in[ 3][ 9].im;
  out[ 3][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 3][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 3][ 6].re =  0.5*in[ 0][ 6].re;
  out[ 3][ 6].im =  0.5*in[ 0][ 6].im;
  out[ 3][ 9].re =  0.5*in[ 0][ 9].re;
  out[ 3][ 9].im =  0.5*in[ 0][ 9].im;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 0][ 4].re =  0.5*in[ 3][ 4].re;
  out[ 0][ 4].im =  0.5*in[ 3][ 4].im;
  out[ 0][ 7].re =  0.5*in[ 3][ 7].re;
  out[ 0][ 7].im =  0.5*in[ 3][ 7].im;
  out[ 0][10].re =  0.5*in[ 3][10].re;
  out[ 0][10].im =  0.5*in[ 3][10].im;
  out[ 3][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 3][ 4].re =  0.5*in[ 0][ 4].re;
  out[ 3][ 4].im =  0.5*in[ 0][ 4].im;
  out[ 3][ 7].re =  0.5*in[ 0][ 7].re;
  out[ 3][ 7].im =  0.5*in[ 0][ 7].im;
  out[ 3][10].re =  0.5*in[ 0][10].re;
  out[ 3][10].im =  0.5*in[ 0][10].im;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 0][ 5].re =  0.5*in[ 3][ 5].re;
  out[ 0][ 5].im =  0.5*in[ 3][ 5].im;
  out[ 0][ 8].re =  0.5*in[ 3][ 8].re;
  out[ 0][ 8].im =  0.5*in[ 3][ 8].im;
  out[ 0][11].re =  0.5*in[ 3][11].re;
  out[ 0][11].im =  0.5*in[ 3][11].im;
  out[ 3][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 3][ 5].re =  0.5*in[ 0][ 5].re;
  out[ 3][ 5].im =  0.5*in[ 0][ 5].im;
  out[ 3][ 8].re =  0.5*in[ 0][ 8].re;
  out[ 3][ 8].im =  0.5*in[ 0][ 8].im;
  out[ 3][11].re =  0.5*in[ 0][11].re;
  out[ 3][11].im =  0.5*in[ 0][11].im;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 4][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 4][ 0].im;
  out[ 1][ 3].re =  0.5*in[ 4][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 4][ 3].im;
  out[ 1][ 6].re =  0.5*in[ 4][ 6].re;
  out[ 1][ 6].im =  0.5*in[ 4][ 6].im;
  out[ 1][ 9].re =  0.5*in[ 4][ 9].re;
  out[ 1][ 9].im =  0.5*in[ 4][ 9].im;
  out[ 4][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 4][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 4][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 4][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 4][ 6].re =  0.5*in[ 1][ 6].re;
  out[ 4][ 6].im =  0.5*in[ 1][ 6].im;
  out[ 4][ 9].re =  0.5*in[ 1][ 9].re;
  out[ 4][ 9].im =  0.5*in[ 1][ 9].im;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 4][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 4][ 1].im;
  out[ 1][ 4].re =  0.5*in[ 4][ 4].re;
  out[ 1][ 4].im =  0.5*in[ 4][ 4].im;
  out[ 1][ 7].re =  0.5*in[ 4][ 7].re;
  out[ 1][ 7].im =  0.5*in[ 4][ 7].im;
  out[ 1][10].re =  0.5*in[ 4][10].re;
  out[ 1][10].im =  0.5*in[ 4][10].im;
  out[ 4][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 4][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 4][ 4].re =  0.5*in[ 1][ 4].re;
  out[ 4][ 4].im =  0.5*in[ 1][ 4].im;
  out[ 4][ 7].re =  0.5*in[ 1][ 7].re;
  out[ 4][ 7].im =  0.5*in[ 1][ 7].im;
  out[ 4][10].re =  0.5*in[ 1][10].re;
  out[ 4][10].im =  0.5*in[ 1][10].im;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 4][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 4][ 2].im;
  out[ 1][ 5].re =  0.5*in[ 4][ 5].re;
  out[ 1][ 5].im =  0.5*in[ 4][ 5].im;
  out[ 1][ 8].re =  0.5*in[ 4][ 8].re;
  out[ 1][ 8].im =  0.5*in[ 4][ 8].im;
  out[ 1][11].re =  0.5*in[ 4][11].re;
  out[ 1][11].im =  0.5*in[ 4][11].im;
  out[ 4][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 4][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 4][ 5].re =  0.5*in[ 1][ 5].re;
  out[ 4][ 5].im =  0.5*in[ 1][ 5].im;
  out[ 4][ 8].re =  0.5*in[ 1][ 8].re;
  out[ 4][ 8].im =  0.5*in[ 1][ 8].im;
  out[ 4][11].re =  0.5*in[ 1][11].re;
  out[ 4][11].im =  0.5*in[ 1][11].im;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 5][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 5][ 0].im;
  out[ 2][ 3].re =  0.5*in[ 5][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 5][ 3].im;
  out[ 2][ 6].re =  0.5*in[ 5][ 6].re;
  out[ 2][ 6].im =  0.5*in[ 5][ 6].im;
  out[ 2][ 9].re =  0.5*in[ 5][ 9].re;
  out[ 2][ 9].im =  0.5*in[ 5][ 9].im;
  out[ 5][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 5][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 5][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 5][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 5][ 6].re =  0.5*in[ 2][ 6].re;
  out[ 5][ 6].im =  0.5*in[ 2][ 6].im;
  out[ 5][ 9].re =  0.5*in[ 2][ 9].re;
  out[ 5][ 9].im =  0.5*in[ 2][ 9].im;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 5][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 5][ 1].im;
  out[ 2][ 4].re =  0.5*in[ 5][ 4].re;
  out[ 2][ 4].im =  0.5*in[ 5][ 4].im;
  out[ 2][ 7].re =  0.5*in[ 5][ 7].re;
  out[ 2][ 7].im =  0.5*in[ 5][ 7].im;
  out[ 2][10].re =  0.5*in[ 5][10].re;
  out[ 2][10].im =  0.5*in[ 5][10].im;
  out[ 5][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 5][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 5][ 4].re =  0.5*in[ 2][ 4].re;
  out[ 5][ 4].im =  0.5*in[ 2][ 4].im;
  out[ 5][ 7].re =  0.5*in[ 2][ 7].re;
  out[ 5][ 7].im =  0.5*in[ 2][ 7].im;
  out[ 5][10].re =  0.5*in[ 2][10].re;
  out[ 5][10].im =  0.5*in[ 2][10].im;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 5][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 5][ 2].im;
  out[ 2][ 5].re =  0.5*in[ 5][ 5].re;
  out[ 2][ 5].im =  0.5*in[ 5][ 5].im;
  out[ 2][ 8].re =  0.5*in[ 5][ 8].re;
  out[ 2][ 8].im =  0.5*in[ 5][ 8].im;
  out[ 2][11].re =  0.5*in[ 5][11].re;
  out[ 2][11].im =  0.5*in[ 5][11].im;
  out[ 5][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 5][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 5][ 5].re =  0.5*in[ 2][ 5].re;
  out[ 5][ 5].im =  0.5*in[ 2][ 5].im;
  out[ 5][ 8].re =  0.5*in[ 2][ 8].re;
  out[ 5][ 8].im =  0.5*in[ 2][ 8].im;
  out[ 5][11].re =  0.5*in[ 2][11].re;
  out[ 5][11].im =  0.5*in[ 2][11].im;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_x from the left */
__inline__ void
prop_ProjXm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re = -0.5*in[ 9][ 0].re;
  out[ 6][ 0].im = -0.5*in[ 9][ 0].im;
  out[ 6][ 3].re = -0.5*in[ 9][ 3].re;
  out[ 6][ 3].im = -0.5*in[ 9][ 3].im;
  out[ 6][ 6].re = -0.5*in[ 9][ 6].re;
  out[ 6][ 6].im = -0.5*in[ 9][ 6].im;
  out[ 6][ 9].re = -0.5*in[ 9][ 9].re;
  out[ 6][ 9].im = -0.5*in[ 9][ 9].im;
  out[ 9][ 0].re = -0.5*in[ 6][ 0].re;
  out[ 9][ 0].im = -0.5*in[ 6][ 0].im;
  out[ 9][ 3].re = -0.5*in[ 6][ 3].re;
  out[ 9][ 3].im = -0.5*in[ 6][ 3].im;
  out[ 9][ 6].re = -0.5*in[ 6][ 6].re;
  out[ 9][ 6].im = -0.5*in[ 6][ 6].im;
  out[ 9][ 9].re = -0.5*in[ 6][ 9].re;
  out[ 9][ 9].im = -0.5*in[ 6][ 9].im;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re = -0.5*in[ 9][ 1].re;
  out[ 6][ 1].im = -0.5*in[ 9][ 1].im;
  out[ 6][ 4].re = -0.5*in[ 9][ 4].re;
  out[ 6][ 4].im = -0.5*in[ 9][ 4].im;
  out[ 6][ 7].re = -0.5*in[ 9][ 7].re;
  out[ 6][ 7].im = -0.5*in[ 9][ 7].im;
  out[ 6][10].re = -0.5*in[ 9][10].re;
  out[ 6][10].im = -0.5*in[ 9][10].im;
  out[ 9][ 1].re = -0.5*in[ 6][ 1].re;
  out[ 9][ 1].im = -0.5*in[ 6][ 1].im;
  out[ 9][ 4].re = -0.5*in[ 6][ 4].re;
  out[ 9][ 4].im = -0.5*in[ 6][ 4].im;
  out[ 9][ 7].re = -0.5*in[ 6][ 7].re;
  out[ 9][ 7].im = -0.5*in[ 6][ 7].im;
  out[ 9][10].re = -0.5*in[ 6][10].re;
  out[ 9][10].im = -0.5*in[ 6][10].im;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re = -0.5*in[ 9][ 2].re;
  out[ 6][ 2].im = -0.5*in[ 9][ 2].im;
  out[ 6][ 5].re = -0.5*in[ 9][ 5].re;
  out[ 6][ 5].im = -0.5*in[ 9][ 5].im;
  out[ 6][ 8].re = -0.5*in[ 9][ 8].re;
  out[ 6][ 8].im = -0.5*in[ 9][ 8].im;
  out[ 6][11].re = -0.5*in[ 9][11].re;
  out[ 6][11].im = -0.5*in[ 9][11].im;
  out[ 9][ 2].re = -0.5*in[ 6][ 2].re;
  out[ 9][ 2].im = -0.5*in[ 6][ 2].im;
  out[ 9][ 5].re = -0.5*in[ 6][ 5].re;
  out[ 9][ 5].im = -0.5*in[ 6][ 5].im;
  out[ 9][ 8].re = -0.5*in[ 6][ 8].re;
  out[ 9][ 8].im = -0.5*in[ 6][ 8].im;
  out[ 9][11].re = -0.5*in[ 6][11].re;
  out[ 9][11].im = -0.5*in[ 6][11].im;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re = -0.5*in[10][ 0].re;
  out[ 7][ 0].im = -0.5*in[10][ 0].im;
  out[ 7][ 3].re = -0.5*in[10][ 3].re;
  out[ 7][ 3].im = -0.5*in[10][ 3].im;
  out[ 7][ 6].re = -0.5*in[10][ 6].re;
  out[ 7][ 6].im = -0.5*in[10][ 6].im;
  out[ 7][ 9].re = -0.5*in[10][ 9].re;
  out[ 7][ 9].im = -0.5*in[10][ 9].im;
  out[10][ 0].re = -0.5*in[ 7][ 0].re;
  out[10][ 0].im = -0.5*in[ 7][ 0].im;
  out[10][ 3].re = -0.5*in[ 7][ 3].re;
  out[10][ 3].im = -0.5*in[ 7][ 3].im;
  out[10][ 6].re = -0.5*in[ 7][ 6].re;
  out[10][ 6].im = -0.5*in[ 7][ 6].im;
  out[10][ 9].re = -0.5*in[ 7][ 9].re;
  out[10][ 9].im = -0.5*in[ 7][ 9].im;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re = -0.5*in[10][ 1].re;
  out[ 7][ 1].im = -0.5*in[10][ 1].im;
  out[ 7][ 4].re = -0.5*in[10][ 4].re;
  out[ 7][ 4].im = -0.5*in[10][ 4].im;
  out[ 7][ 7].re = -0.5*in[10][ 7].re;
  out[ 7][ 7].im = -0.5*in[10][ 7].im;
  out[ 7][10].re = -0.5*in[10][10].re;
  out[ 7][10].im = -0.5*in[10][10].im;
  out[10][ 1].re = -0.5*in[ 7][ 1].re;
  out[10][ 1].im = -0.5*in[ 7][ 1].im;
  out[10][ 4].re = -0.5*in[ 7][ 4].re;
  out[10][ 4].im = -0.5*in[ 7][ 4].im;
  out[10][ 7].re = -0.5*in[ 7][ 7].re;
  out[10][ 7].im = -0.5*in[ 7][ 7].im;
  out[10][10].re = -0.5*in[ 7][10].re;
  out[10][10].im = -0.5*in[ 7][10].im;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re = -0.5*in[10][ 2].re;
  out[ 7][ 2].im = -0.5*in[10][ 2].im;
  out[ 7][ 5].re = -0.5*in[10][ 5].re;
  out[ 7][ 5].im = -0.5*in[10][ 5].im;
  out[ 7][ 8].re = -0.5*in[10][ 8].re;
  out[ 7][ 8].im = -0.5*in[10][ 8].im;
  out[ 7][11].re = -0.5*in[10][11].re;
  out[ 7][11].im = -0.5*in[10][11].im;
  out[10][ 2].re = -0.5*in[ 7][ 2].re;
  out[10][ 2].im = -0.5*in[ 7][ 2].im;
  out[10][ 5].re = -0.5*in[ 7][ 5].re;
  out[10][ 5].im = -0.5*in[ 7][ 5].im;
  out[10][ 8].re = -0.5*in[ 7][ 8].re;
  out[10][ 8].im = -0.5*in[ 7][ 8].im;
  out[10][11].re = -0.5*in[ 7][11].re;
  out[10][11].im = -0.5*in[ 7][11].im;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re = -0.5*in[11][ 0].re;
  out[ 8][ 0].im = -0.5*in[11][ 0].im;
  out[ 8][ 3].re = -0.5*in[11][ 3].re;
  out[ 8][ 3].im = -0.5*in[11][ 3].im;
  out[ 8][ 6].re = -0.5*in[11][ 6].re;
  out[ 8][ 6].im = -0.5*in[11][ 6].im;
  out[ 8][ 9].re = -0.5*in[11][ 9].re;
  out[ 8][ 9].im = -0.5*in[11][ 9].im;
  out[11][ 0].re = -0.5*in[ 8][ 0].re;
  out[11][ 0].im = -0.5*in[ 8][ 0].im;
  out[11][ 3].re = -0.5*in[ 8][ 3].re;
  out[11][ 3].im = -0.5*in[ 8][ 3].im;
  out[11][ 6].re = -0.5*in[ 8][ 6].re;
  out[11][ 6].im = -0.5*in[ 8][ 6].im;
  out[11][ 9].re = -0.5*in[ 8][ 9].re;
  out[11][ 9].im = -0.5*in[ 8][ 9].im;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re = -0.5*in[11][ 1].re;
  out[ 8][ 1].im = -0.5*in[11][ 1].im;
  out[ 8][ 4].re = -0.5*in[11][ 4].re;
  out[ 8][ 4].im = -0.5*in[11][ 4].im;
  out[ 8][ 7].re = -0.5*in[11][ 7].re;
  out[ 8][ 7].im = -0.5*in[11][ 7].im;
  out[ 8][10].re = -0.5*in[11][10].re;
  out[ 8][10].im = -0.5*in[11][10].im;
  out[11][ 1].re = -0.5*in[ 8][ 1].re;
  out[11][ 1].im = -0.5*in[ 8][ 1].im;
  out[11][ 4].re = -0.5*in[ 8][ 4].re;
  out[11][ 4].im = -0.5*in[ 8][ 4].im;
  out[11][ 7].re = -0.5*in[ 8][ 7].re;
  out[11][ 7].im = -0.5*in[ 8][ 7].im;
  out[11][10].re = -0.5*in[ 8][10].re;
  out[11][10].im = -0.5*in[ 8][10].im;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re = -0.5*in[11][ 2].re;
  out[ 8][ 2].im = -0.5*in[11][ 2].im;
  out[ 8][ 5].re = -0.5*in[11][ 5].re;
  out[ 8][ 5].im = -0.5*in[11][ 5].im;
  out[ 8][ 8].re = -0.5*in[11][ 8].re;
  out[ 8][ 8].im = -0.5*in[11][ 8].im;
  out[ 8][11].re = -0.5*in[11][11].re;
  out[ 8][11].im = -0.5*in[11][11].im;
  out[11][ 2].re = -0.5*in[ 8][ 2].re;
  out[11][ 2].im = -0.5*in[ 8][ 2].im;
  out[11][ 5].re = -0.5*in[ 8][ 5].re;
  out[11][ 5].im = -0.5*in[ 8][ 5].im;
  out[11][ 8].re = -0.5*in[ 8][ 8].re;
  out[11][ 8].im = -0.5*in[ 8][ 8].im;
  out[11][11].re = -0.5*in[ 8][11].re;
  out[11][11].im = -0.5*in[ 8][11].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_y from the left */
__inline__ void
prop_ProjYp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 3][ 0].im;
  out[ 0][ 0].im = -0.5*in[ 3][ 0].re;
  out[ 0][ 3].re =  0.5*in[ 3][ 3].im;
  out[ 0][ 3].im = -0.5*in[ 3][ 3].re;
  out[ 0][ 6].re =  0.5*in[ 3][ 6].im;
  out[ 0][ 6].im = -0.5*in[ 3][ 6].re;
  out[ 0][ 9].re =  0.5*in[ 3][ 9].im;
  out[ 0][ 9].im = -0.5*in[ 3][ 9].re;
  out[ 3][ 0].re = -0.5*in[ 0][ 0].im;
  out[ 3][ 0].im =  0.5*in[ 0][ 0].re;
  out[ 3][ 3].re = -0.5*in[ 0][ 3].im;
  out[ 3][ 3].im =  0.5*in[ 0][ 3].re;
  out[ 3][ 6].re = -0.5*in[ 0][ 6].im;
  out[ 3][ 6].im =  0.5*in[ 0][ 6].re;
  out[ 3][ 9].re = -0.5*in[ 0][ 9].im;
  out[ 3][ 9].im =  0.5*in[ 0][ 9].re;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 3][ 1].im;
  out[ 0][ 1].im = -0.5*in[ 3][ 1].re;
  out[ 0][ 4].re =  0.5*in[ 3][ 4].im;
  out[ 0][ 4].im = -0.5*in[ 3][ 4].re;
  out[ 0][ 7].re =  0.5*in[ 3][ 7].im;
  out[ 0][ 7].im = -0.5*in[ 3][ 7].re;
  out[ 0][10].re =  0.5*in[ 3][10].im;
  out[ 0][10].im = -0.5*in[ 3][10].re;
  out[ 3][ 1].re = -0.5*in[ 0][ 1].im;
  out[ 3][ 1].im =  0.5*in[ 0][ 1].re;
  out[ 3][ 4].re = -0.5*in[ 0][ 4].im;
  out[ 3][ 4].im =  0.5*in[ 0][ 4].re;
  out[ 3][ 7].re = -0.5*in[ 0][ 7].im;
  out[ 3][ 7].im =  0.5*in[ 0][ 7].re;
  out[ 3][10].re = -0.5*in[ 0][10].im;
  out[ 3][10].im =  0.5*in[ 0][10].re;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 3][ 2].im;
  out[ 0][ 2].im = -0.5*in[ 3][ 2].re;
  out[ 0][ 5].re =  0.5*in[ 3][ 5].im;
  out[ 0][ 5].im = -0.5*in[ 3][ 5].re;
  out[ 0][ 8].re =  0.5*in[ 3][ 8].im;
  out[ 0][ 8].im = -0.5*in[ 3][ 8].re;
  out[ 0][11].re =  0.5*in[ 3][11].im;
  out[ 0][11].im = -0.5*in[ 3][11].re;
  out[ 3][ 2].re = -0.5*in[ 0][ 2].im;
  out[ 3][ 2].im =  0.5*in[ 0][ 2].re;
  out[ 3][ 5].re = -0.5*in[ 0][ 5].im;
  out[ 3][ 5].im =  0.5*in[ 0][ 5].re;
  out[ 3][ 8].re = -0.5*in[ 0][ 8].im;
  out[ 3][ 8].im =  0.5*in[ 0][ 8].re;
  out[ 3][11].re = -0.5*in[ 0][11].im;
  out[ 3][11].im =  0.5*in[ 0][11].re;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 4][ 0].im;
  out[ 1][ 0].im = -0.5*in[ 4][ 0].re;
  out[ 1][ 3].re =  0.5*in[ 4][ 3].im;
  out[ 1][ 3].im = -0.5*in[ 4][ 3].re;
  out[ 1][ 6].re =  0.5*in[ 4][ 6].im;
  out[ 1][ 6].im = -0.5*in[ 4][ 6].re;
  out[ 1][ 9].re =  0.5*in[ 4][ 9].im;
  out[ 1][ 9].im = -0.5*in[ 4][ 9].re;
  out[ 4][ 0].re = -0.5*in[ 1][ 0].im;
  out[ 4][ 0].im =  0.5*in[ 1][ 0].re;
  out[ 4][ 3].re = -0.5*in[ 1][ 3].im;
  out[ 4][ 3].im =  0.5*in[ 1][ 3].re;
  out[ 4][ 6].re = -0.5*in[ 1][ 6].im;
  out[ 4][ 6].im =  0.5*in[ 1][ 6].re;
  out[ 4][ 9].re = -0.5*in[ 1][ 9].im;
  out[ 4][ 9].im =  0.5*in[ 1][ 9].re;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 4][ 1].im;
  out[ 1][ 1].im = -0.5*in[ 4][ 1].re;
  out[ 1][ 4].re =  0.5*in[ 4][ 4].im;
  out[ 1][ 4].im = -0.5*in[ 4][ 4].re;
  out[ 1][ 7].re =  0.5*in[ 4][ 7].im;
  out[ 1][ 7].im = -0.5*in[ 4][ 7].re;
  out[ 1][10].re =  0.5*in[ 4][10].im;
  out[ 1][10].im = -0.5*in[ 4][10].re;
  out[ 4][ 1].re = -0.5*in[ 1][ 1].im;
  out[ 4][ 1].im =  0.5*in[ 1][ 1].re;
  out[ 4][ 4].re = -0.5*in[ 1][ 4].im;
  out[ 4][ 4].im =  0.5*in[ 1][ 4].re;
  out[ 4][ 7].re = -0.5*in[ 1][ 7].im;
  out[ 4][ 7].im =  0.5*in[ 1][ 7].re;
  out[ 4][10].re = -0.5*in[ 1][10].im;
  out[ 4][10].im =  0.5*in[ 1][10].re;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 4][ 2].im;
  out[ 1][ 2].im = -0.5*in[ 4][ 2].re;
  out[ 1][ 5].re =  0.5*in[ 4][ 5].im;
  out[ 1][ 5].im = -0.5*in[ 4][ 5].re;
  out[ 1][ 8].re =  0.5*in[ 4][ 8].im;
  out[ 1][ 8].im = -0.5*in[ 4][ 8].re;
  out[ 1][11].re =  0.5*in[ 4][11].im;
  out[ 1][11].im = -0.5*in[ 4][11].re;
  out[ 4][ 2].re = -0.5*in[ 1][ 2].im;
  out[ 4][ 2].im =  0.5*in[ 1][ 2].re;
  out[ 4][ 5].re = -0.5*in[ 1][ 5].im;
  out[ 4][ 5].im =  0.5*in[ 1][ 5].re;
  out[ 4][ 8].re = -0.5*in[ 1][ 8].im;
  out[ 4][ 8].im =  0.5*in[ 1][ 8].re;
  out[ 4][11].re = -0.5*in[ 1][11].im;
  out[ 4][11].im =  0.5*in[ 1][11].re;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 5][ 0].im;
  out[ 2][ 0].im = -0.5*in[ 5][ 0].re;
  out[ 2][ 3].re =  0.5*in[ 5][ 3].im;
  out[ 2][ 3].im = -0.5*in[ 5][ 3].re;
  out[ 2][ 6].re =  0.5*in[ 5][ 6].im;
  out[ 2][ 6].im = -0.5*in[ 5][ 6].re;
  out[ 2][ 9].re =  0.5*in[ 5][ 9].im;
  out[ 2][ 9].im = -0.5*in[ 5][ 9].re;
  out[ 5][ 0].re = -0.5*in[ 2][ 0].im;
  out[ 5][ 0].im =  0.5*in[ 2][ 0].re;
  out[ 5][ 3].re = -0.5*in[ 2][ 3].im;
  out[ 5][ 3].im =  0.5*in[ 2][ 3].re;
  out[ 5][ 6].re = -0.5*in[ 2][ 6].im;
  out[ 5][ 6].im =  0.5*in[ 2][ 6].re;
  out[ 5][ 9].re = -0.5*in[ 2][ 9].im;
  out[ 5][ 9].im =  0.5*in[ 2][ 9].re;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 5][ 1].im;
  out[ 2][ 1].im = -0.5*in[ 5][ 1].re;
  out[ 2][ 4].re =  0.5*in[ 5][ 4].im;
  out[ 2][ 4].im = -0.5*in[ 5][ 4].re;
  out[ 2][ 7].re =  0.5*in[ 5][ 7].im;
  out[ 2][ 7].im = -0.5*in[ 5][ 7].re;
  out[ 2][10].re =  0.5*in[ 5][10].im;
  out[ 2][10].im = -0.5*in[ 5][10].re;
  out[ 5][ 1].re = -0.5*in[ 2][ 1].im;
  out[ 5][ 1].im =  0.5*in[ 2][ 1].re;
  out[ 5][ 4].re = -0.5*in[ 2][ 4].im;
  out[ 5][ 4].im =  0.5*in[ 2][ 4].re;
  out[ 5][ 7].re = -0.5*in[ 2][ 7].im;
  out[ 5][ 7].im =  0.5*in[ 2][ 7].re;
  out[ 5][10].re = -0.5*in[ 2][10].im;
  out[ 5][10].im =  0.5*in[ 2][10].re;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 5][ 2].im;
  out[ 2][ 2].im = -0.5*in[ 5][ 2].re;
  out[ 2][ 5].re =  0.5*in[ 5][ 5].im;
  out[ 2][ 5].im = -0.5*in[ 5][ 5].re;
  out[ 2][ 8].re =  0.5*in[ 5][ 8].im;
  out[ 2][ 8].im = -0.5*in[ 5][ 8].re;
  out[ 2][11].re =  0.5*in[ 5][11].im;
  out[ 2][11].im = -0.5*in[ 5][11].re;
  out[ 5][ 2].re = -0.5*in[ 2][ 2].im;
  out[ 5][ 2].im =  0.5*in[ 2][ 2].re;
  out[ 5][ 5].re = -0.5*in[ 2][ 5].im;
  out[ 5][ 5].im =  0.5*in[ 2][ 5].re;
  out[ 5][ 8].re = -0.5*in[ 2][ 8].im;
  out[ 5][ 8].im =  0.5*in[ 2][ 8].re;
  out[ 5][11].re = -0.5*in[ 2][11].im;
  out[ 5][11].im =  0.5*in[ 2][11].re;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_y from the left */
__inline__ void
prop_ProjYm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re = -0.5*in[ 9][ 0].im;
  out[ 6][ 0].im =  0.5*in[ 9][ 0].re;
  out[ 6][ 3].re = -0.5*in[ 9][ 3].im;
  out[ 6][ 3].im =  0.5*in[ 9][ 3].re;
  out[ 6][ 6].re = -0.5*in[ 9][ 6].im;
  out[ 6][ 6].im =  0.5*in[ 9][ 6].re;
  out[ 6][ 9].re = -0.5*in[ 9][ 9].im;
  out[ 6][ 9].im =  0.5*in[ 9][ 9].re;
  out[ 9][ 0].re =  0.5*in[ 6][ 0].im;
  out[ 9][ 0].im = -0.5*in[ 6][ 0].re;
  out[ 9][ 3].re =  0.5*in[ 6][ 3].im;
  out[ 9][ 3].im = -0.5*in[ 6][ 3].re;
  out[ 9][ 6].re =  0.5*in[ 6][ 6].im;
  out[ 9][ 6].im = -0.5*in[ 6][ 6].re;
  out[ 9][ 9].re =  0.5*in[ 6][ 9].im;
  out[ 9][ 9].im = -0.5*in[ 6][ 9].re;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re = -0.5*in[ 9][ 1].im;
  out[ 6][ 1].im =  0.5*in[ 9][ 1].re;
  out[ 6][ 4].re = -0.5*in[ 9][ 4].im;
  out[ 6][ 4].im =  0.5*in[ 9][ 4].re;
  out[ 6][ 7].re = -0.5*in[ 9][ 7].im;
  out[ 6][ 7].im =  0.5*in[ 9][ 7].re;
  out[ 6][10].re = -0.5*in[ 9][10].im;
  out[ 6][10].im =  0.5*in[ 9][10].re;
  out[ 9][ 1].re =  0.5*in[ 6][ 1].im;
  out[ 9][ 1].im = -0.5*in[ 6][ 1].re;
  out[ 9][ 4].re =  0.5*in[ 6][ 4].im;
  out[ 9][ 4].im = -0.5*in[ 6][ 4].re;
  out[ 9][ 7].re =  0.5*in[ 6][ 7].im;
  out[ 9][ 7].im = -0.5*in[ 6][ 7].re;
  out[ 9][10].re =  0.5*in[ 6][10].im;
  out[ 9][10].im = -0.5*in[ 6][10].re;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re = -0.5*in[ 9][ 2].im;
  out[ 6][ 2].im =  0.5*in[ 9][ 2].re;
  out[ 6][ 5].re = -0.5*in[ 9][ 5].im;
  out[ 6][ 5].im =  0.5*in[ 9][ 5].re;
  out[ 6][ 8].re = -0.5*in[ 9][ 8].im;
  out[ 6][ 8].im =  0.5*in[ 9][ 8].re;
  out[ 6][11].re = -0.5*in[ 9][11].im;
  out[ 6][11].im =  0.5*in[ 9][11].re;
  out[ 9][ 2].re =  0.5*in[ 6][ 2].im;
  out[ 9][ 2].im = -0.5*in[ 6][ 2].re;
  out[ 9][ 5].re =  0.5*in[ 6][ 5].im;
  out[ 9][ 5].im = -0.5*in[ 6][ 5].re;
  out[ 9][ 8].re =  0.5*in[ 6][ 8].im;
  out[ 9][ 8].im = -0.5*in[ 6][ 8].re;
  out[ 9][11].re =  0.5*in[ 6][11].im;
  out[ 9][11].im = -0.5*in[ 6][11].re;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re = -0.5*in[10][ 0].im;
  out[ 7][ 0].im =  0.5*in[10][ 0].re;
  out[ 7][ 3].re = -0.5*in[10][ 3].im;
  out[ 7][ 3].im =  0.5*in[10][ 3].re;
  out[ 7][ 6].re = -0.5*in[10][ 6].im;
  out[ 7][ 6].im =  0.5*in[10][ 6].re;
  out[ 7][ 9].re = -0.5*in[10][ 9].im;
  out[ 7][ 9].im =  0.5*in[10][ 9].re;
  out[10][ 0].re =  0.5*in[ 7][ 0].im;
  out[10][ 0].im = -0.5*in[ 7][ 0].re;
  out[10][ 3].re =  0.5*in[ 7][ 3].im;
  out[10][ 3].im = -0.5*in[ 7][ 3].re;
  out[10][ 6].re =  0.5*in[ 7][ 6].im;
  out[10][ 6].im = -0.5*in[ 7][ 6].re;
  out[10][ 9].re =  0.5*in[ 7][ 9].im;
  out[10][ 9].im = -0.5*in[ 7][ 9].re;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re = -0.5*in[10][ 1].im;
  out[ 7][ 1].im =  0.5*in[10][ 1].re;
  out[ 7][ 4].re = -0.5*in[10][ 4].im;
  out[ 7][ 4].im =  0.5*in[10][ 4].re;
  out[ 7][ 7].re = -0.5*in[10][ 7].im;
  out[ 7][ 7].im =  0.5*in[10][ 7].re;
  out[ 7][10].re = -0.5*in[10][10].im;
  out[ 7][10].im =  0.5*in[10][10].re;
  out[10][ 1].re =  0.5*in[ 7][ 1].im;
  out[10][ 1].im = -0.5*in[ 7][ 1].re;
  out[10][ 4].re =  0.5*in[ 7][ 4].im;
  out[10][ 4].im = -0.5*in[ 7][ 4].re;
  out[10][ 7].re =  0.5*in[ 7][ 7].im;
  out[10][ 7].im = -0.5*in[ 7][ 7].re;
  out[10][10].re =  0.5*in[ 7][10].im;
  out[10][10].im = -0.5*in[ 7][10].re;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re = -0.5*in[10][ 2].im;
  out[ 7][ 2].im =  0.5*in[10][ 2].re;
  out[ 7][ 5].re = -0.5*in[10][ 5].im;
  out[ 7][ 5].im =  0.5*in[10][ 5].re;
  out[ 7][ 8].re = -0.5*in[10][ 8].im;
  out[ 7][ 8].im =  0.5*in[10][ 8].re;
  out[ 7][11].re = -0.5*in[10][11].im;
  out[ 7][11].im =  0.5*in[10][11].re;
  out[10][ 2].re =  0.5*in[ 7][ 2].im;
  out[10][ 2].im = -0.5*in[ 7][ 2].re;
  out[10][ 5].re =  0.5*in[ 7][ 5].im;
  out[10][ 5].im = -0.5*in[ 7][ 5].re;
  out[10][ 8].re =  0.5*in[ 7][ 8].im;
  out[10][ 8].im = -0.5*in[ 7][ 8].re;
  out[10][11].re =  0.5*in[ 7][11].im;
  out[10][11].im = -0.5*in[ 7][11].re;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re = -0.5*in[11][ 0].im;
  out[ 8][ 0].im =  0.5*in[11][ 0].re;
  out[ 8][ 3].re = -0.5*in[11][ 3].im;
  out[ 8][ 3].im =  0.5*in[11][ 3].re;
  out[ 8][ 6].re = -0.5*in[11][ 6].im;
  out[ 8][ 6].im =  0.5*in[11][ 6].re;
  out[ 8][ 9].re = -0.5*in[11][ 9].im;
  out[ 8][ 9].im =  0.5*in[11][ 9].re;
  out[11][ 0].re =  0.5*in[ 8][ 0].im;
  out[11][ 0].im = -0.5*in[ 8][ 0].re;
  out[11][ 3].re =  0.5*in[ 8][ 3].im;
  out[11][ 3].im = -0.5*in[ 8][ 3].re;
  out[11][ 6].re =  0.5*in[ 8][ 6].im;
  out[11][ 6].im = -0.5*in[ 8][ 6].re;
  out[11][ 9].re =  0.5*in[ 8][ 9].im;
  out[11][ 9].im = -0.5*in[ 8][ 9].re;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re = -0.5*in[11][ 1].im;
  out[ 8][ 1].im =  0.5*in[11][ 1].re;
  out[ 8][ 4].re = -0.5*in[11][ 4].im;
  out[ 8][ 4].im =  0.5*in[11][ 4].re;
  out[ 8][ 7].re = -0.5*in[11][ 7].im;
  out[ 8][ 7].im =  0.5*in[11][ 7].re;
  out[ 8][10].re = -0.5*in[11][10].im;
  out[ 8][10].im =  0.5*in[11][10].re;
  out[11][ 1].re =  0.5*in[ 8][ 1].im;
  out[11][ 1].im = -0.5*in[ 8][ 1].re;
  out[11][ 4].re =  0.5*in[ 8][ 4].im;
  out[11][ 4].im = -0.5*in[ 8][ 4].re;
  out[11][ 7].re =  0.5*in[ 8][ 7].im;
  out[11][ 7].im = -0.5*in[ 8][ 7].re;
  out[11][10].re =  0.5*in[ 8][10].im;
  out[11][10].im = -0.5*in[ 8][10].re;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re = -0.5*in[11][ 2].im;
  out[ 8][ 2].im =  0.5*in[11][ 2].re;
  out[ 8][ 5].re = -0.5*in[11][ 5].im;
  out[ 8][ 5].im =  0.5*in[11][ 5].re;
  out[ 8][ 8].re = -0.5*in[11][ 8].im;
  out[ 8][ 8].im =  0.5*in[11][ 8].re;
  out[ 8][11].re = -0.5*in[11][11].im;
  out[ 8][11].im =  0.5*in[11][11].re;
  out[11][ 2].re =  0.5*in[ 8][ 2].im;
  out[11][ 2].im = -0.5*in[ 8][ 2].re;
  out[11][ 5].re =  0.5*in[ 8][ 5].im;
  out[11][ 5].im = -0.5*in[ 8][ 5].re;
  out[11][ 8].re =  0.5*in[ 8][ 8].im;
  out[11][ 8].im = -0.5*in[ 8][ 8].re;
  out[11][11].re =  0.5*in[ 8][11].im;
  out[11][11].im = -0.5*in[ 8][11].re;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_z from the left */
__inline__ void
prop_ProjZp_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 0][ 6].re =  0.5*in[ 0][ 6].re;
  out[ 0][ 6].im =  0.5*in[ 0][ 6].im;
  out[ 0][ 9].re =  0.5*in[ 0][ 9].re;
  out[ 0][ 9].im =  0.5*in[ 0][ 9].im;
  out[ 3][ 0].re = -0.5*in[ 3][ 0].re;
  out[ 3][ 0].im = -0.5*in[ 3][ 0].im;
  out[ 3][ 3].re = -0.5*in[ 3][ 3].re;
  out[ 3][ 3].im = -0.5*in[ 3][ 3].im;
  out[ 3][ 6].re = -0.5*in[ 3][ 6].re;
  out[ 3][ 6].im = -0.5*in[ 3][ 6].im;
  out[ 3][ 9].re = -0.5*in[ 3][ 9].re;
  out[ 3][ 9].im = -0.5*in[ 3][ 9].im;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 4].re =  0.5*in[ 0][ 4].re;
  out[ 0][ 4].im =  0.5*in[ 0][ 4].im;
  out[ 0][ 7].re =  0.5*in[ 0][ 7].re;
  out[ 0][ 7].im =  0.5*in[ 0][ 7].im;
  out[ 0][10].re =  0.5*in[ 0][10].re;
  out[ 0][10].im =  0.5*in[ 0][10].im;
  out[ 3][ 1].re = -0.5*in[ 3][ 1].re;
  out[ 3][ 1].im = -0.5*in[ 3][ 1].im;
  out[ 3][ 4].re = -0.5*in[ 3][ 4].re;
  out[ 3][ 4].im = -0.5*in[ 3][ 4].im;
  out[ 3][ 7].re = -0.5*in[ 3][ 7].re;
  out[ 3][ 7].im = -0.5*in[ 3][ 7].im;
  out[ 3][10].re = -0.5*in[ 3][10].re;
  out[ 3][10].im = -0.5*in[ 3][10].im;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 5].re =  0.5*in[ 0][ 5].re;
  out[ 0][ 5].im =  0.5*in[ 0][ 5].im;
  out[ 0][ 8].re =  0.5*in[ 0][ 8].re;
  out[ 0][ 8].im =  0.5*in[ 0][ 8].im;
  out[ 0][11].re =  0.5*in[ 0][11].re;
  out[ 0][11].im =  0.5*in[ 0][11].im;
  out[ 3][ 2].re = -0.5*in[ 3][ 2].re;
  out[ 3][ 2].im = -0.5*in[ 3][ 2].im;
  out[ 3][ 5].re = -0.5*in[ 3][ 5].re;
  out[ 3][ 5].im = -0.5*in[ 3][ 5].im;
  out[ 3][ 8].re = -0.5*in[ 3][ 8].re;
  out[ 3][ 8].im = -0.5*in[ 3][ 8].im;
  out[ 3][11].re = -0.5*in[ 3][11].re;
  out[ 3][11].im = -0.5*in[ 3][11].im;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 1][ 6].re =  0.5*in[ 1][ 6].re;
  out[ 1][ 6].im =  0.5*in[ 1][ 6].im;
  out[ 1][ 9].re =  0.5*in[ 1][ 9].re;
  out[ 1][ 9].im =  0.5*in[ 1][ 9].im;
  out[ 4][ 0].re = -0.5*in[ 4][ 0].re;
  out[ 4][ 0].im = -0.5*in[ 4][ 0].im;
  out[ 4][ 3].re = -0.5*in[ 4][ 3].re;
  out[ 4][ 3].im = -0.5*in[ 4][ 3].im;
  out[ 4][ 6].re = -0.5*in[ 4][ 6].re;
  out[ 4][ 6].im = -0.5*in[ 4][ 6].im;
  out[ 4][ 9].re = -0.5*in[ 4][ 9].re;
  out[ 4][ 9].im = -0.5*in[ 4][ 9].im;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 4].re =  0.5*in[ 1][ 4].re;
  out[ 1][ 4].im =  0.5*in[ 1][ 4].im;
  out[ 1][ 7].re =  0.5*in[ 1][ 7].re;
  out[ 1][ 7].im =  0.5*in[ 1][ 7].im;
  out[ 1][10].re =  0.5*in[ 1][10].re;
  out[ 1][10].im =  0.5*in[ 1][10].im;
  out[ 4][ 1].re = -0.5*in[ 4][ 1].re;
  out[ 4][ 1].im = -0.5*in[ 4][ 1].im;
  out[ 4][ 4].re = -0.5*in[ 4][ 4].re;
  out[ 4][ 4].im = -0.5*in[ 4][ 4].im;
  out[ 4][ 7].re = -0.5*in[ 4][ 7].re;
  out[ 4][ 7].im = -0.5*in[ 4][ 7].im;
  out[ 4][10].re = -0.5*in[ 4][10].re;
  out[ 4][10].im = -0.5*in[ 4][10].im;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 5].re =  0.5*in[ 1][ 5].re;
  out[ 1][ 5].im =  0.5*in[ 1][ 5].im;
  out[ 1][ 8].re =  0.5*in[ 1][ 8].re;
  out[ 1][ 8].im =  0.5*in[ 1][ 8].im;
  out[ 1][11].re =  0.5*in[ 1][11].re;
  out[ 1][11].im =  0.5*in[ 1][11].im;
  out[ 4][ 2].re = -0.5*in[ 4][ 2].re;
  out[ 4][ 2].im = -0.5*in[ 4][ 2].im;
  out[ 4][ 5].re = -0.5*in[ 4][ 5].re;
  out[ 4][ 5].im = -0.5*in[ 4][ 5].im;
  out[ 4][ 8].re = -0.5*in[ 4][ 8].re;
  out[ 4][ 8].im = -0.5*in[ 4][ 8].im;
  out[ 4][11].re = -0.5*in[ 4][11].re;
  out[ 4][11].im = -0.5*in[ 4][11].im;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 2][ 6].re =  0.5*in[ 2][ 6].re;
  out[ 2][ 6].im =  0.5*in[ 2][ 6].im;
  out[ 2][ 9].re =  0.5*in[ 2][ 9].re;
  out[ 2][ 9].im =  0.5*in[ 2][ 9].im;
  out[ 5][ 0].re = -0.5*in[ 5][ 0].re;
  out[ 5][ 0].im = -0.5*in[ 5][ 0].im;
  out[ 5][ 3].re = -0.5*in[ 5][ 3].re;
  out[ 5][ 3].im = -0.5*in[ 5][ 3].im;
  out[ 5][ 6].re = -0.5*in[ 5][ 6].re;
  out[ 5][ 6].im = -0.5*in[ 5][ 6].im;
  out[ 5][ 9].re = -0.5*in[ 5][ 9].re;
  out[ 5][ 9].im = -0.5*in[ 5][ 9].im;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 4].re =  0.5*in[ 2][ 4].re;
  out[ 2][ 4].im =  0.5*in[ 2][ 4].im;
  out[ 2][ 7].re =  0.5*in[ 2][ 7].re;
  out[ 2][ 7].im =  0.5*in[ 2][ 7].im;
  out[ 2][10].re =  0.5*in[ 2][10].re;
  out[ 2][10].im =  0.5*in[ 2][10].im;
  out[ 5][ 1].re = -0.5*in[ 5][ 1].re;
  out[ 5][ 1].im = -0.5*in[ 5][ 1].im;
  out[ 5][ 4].re = -0.5*in[ 5][ 4].re;
  out[ 5][ 4].im = -0.5*in[ 5][ 4].im;
  out[ 5][ 7].re = -0.5*in[ 5][ 7].re;
  out[ 5][ 7].im = -0.5*in[ 5][ 7].im;
  out[ 5][10].re = -0.5*in[ 5][10].re;
  out[ 5][10].im = -0.5*in[ 5][10].im;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 5].re =  0.5*in[ 2][ 5].re;
  out[ 2][ 5].im =  0.5*in[ 2][ 5].im;
  out[ 2][ 8].re =  0.5*in[ 2][ 8].re;
  out[ 2][ 8].im =  0.5*in[ 2][ 8].im;
  out[ 2][11].re =  0.5*in[ 2][11].re;
  out[ 2][11].im =  0.5*in[ 2][11].im;
  out[ 5][ 2].re = -0.5*in[ 5][ 2].re;
  out[ 5][ 2].im = -0.5*in[ 5][ 2].im;
  out[ 5][ 5].re = -0.5*in[ 5][ 5].re;
  out[ 5][ 5].im = -0.5*in[ 5][ 5].im;
  out[ 5][ 8].re = -0.5*in[ 5][ 8].re;
  out[ 5][ 8].im = -0.5*in[ 5][ 8].im;
  out[ 5][11].re = -0.5*in[ 5][11].re;
  out[ 5][11].im = -0.5*in[ 5][11].im;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_z from the left */
__inline__ void
prop_ProjZm_G(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re = -0.5*in[ 6][ 0].re;
  out[ 6][ 0].im = -0.5*in[ 6][ 0].im;
  out[ 6][ 3].re = -0.5*in[ 6][ 3].re;
  out[ 6][ 3].im = -0.5*in[ 6][ 3].im;
  out[ 6][ 6].re = -0.5*in[ 6][ 6].re;
  out[ 6][ 6].im = -0.5*in[ 6][ 6].im;
  out[ 6][ 9].re = -0.5*in[ 6][ 9].re;
  out[ 6][ 9].im = -0.5*in[ 6][ 9].im;
  out[ 9][ 0].re =  0.5*in[ 9][ 0].re;
  out[ 9][ 0].im =  0.5*in[ 9][ 0].im;
  out[ 9][ 3].re =  0.5*in[ 9][ 3].re;
  out[ 9][ 3].im =  0.5*in[ 9][ 3].im;
  out[ 9][ 6].re =  0.5*in[ 9][ 6].re;
  out[ 9][ 6].im =  0.5*in[ 9][ 6].im;
  out[ 9][ 9].re =  0.5*in[ 9][ 9].re;
  out[ 9][ 9].im =  0.5*in[ 9][ 9].im;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re = -0.5*in[ 6][ 1].re;
  out[ 6][ 1].im = -0.5*in[ 6][ 1].im;
  out[ 6][ 4].re = -0.5*in[ 6][ 4].re;
  out[ 6][ 4].im = -0.5*in[ 6][ 4].im;
  out[ 6][ 7].re = -0.5*in[ 6][ 7].re;
  out[ 6][ 7].im = -0.5*in[ 6][ 7].im;
  out[ 6][10].re = -0.5*in[ 6][10].re;
  out[ 6][10].im = -0.5*in[ 6][10].im;
  out[ 9][ 1].re =  0.5*in[ 9][ 1].re;
  out[ 9][ 1].im =  0.5*in[ 9][ 1].im;
  out[ 9][ 4].re =  0.5*in[ 9][ 4].re;
  out[ 9][ 4].im =  0.5*in[ 9][ 4].im;
  out[ 9][ 7].re =  0.5*in[ 9][ 7].re;
  out[ 9][ 7].im =  0.5*in[ 9][ 7].im;
  out[ 9][10].re =  0.5*in[ 9][10].re;
  out[ 9][10].im =  0.5*in[ 9][10].im;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re = -0.5*in[ 6][ 2].re;
  out[ 6][ 2].im = -0.5*in[ 6][ 2].im;
  out[ 6][ 5].re = -0.5*in[ 6][ 5].re;
  out[ 6][ 5].im = -0.5*in[ 6][ 5].im;
  out[ 6][ 8].re = -0.5*in[ 6][ 8].re;
  out[ 6][ 8].im = -0.5*in[ 6][ 8].im;
  out[ 6][11].re = -0.5*in[ 6][11].re;
  out[ 6][11].im = -0.5*in[ 6][11].im;
  out[ 9][ 2].re =  0.5*in[ 9][ 2].re;
  out[ 9][ 2].im =  0.5*in[ 9][ 2].im;
  out[ 9][ 5].re =  0.5*in[ 9][ 5].re;
  out[ 9][ 5].im =  0.5*in[ 9][ 5].im;
  out[ 9][ 8].re =  0.5*in[ 9][ 8].re;
  out[ 9][ 8].im =  0.5*in[ 9][ 8].im;
  out[ 9][11].re =  0.5*in[ 9][11].re;
  out[ 9][11].im =  0.5*in[ 9][11].im;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re = -0.5*in[ 7][ 0].re;
  out[ 7][ 0].im = -0.5*in[ 7][ 0].im;
  out[ 7][ 3].re = -0.5*in[ 7][ 3].re;
  out[ 7][ 3].im = -0.5*in[ 7][ 3].im;
  out[ 7][ 6].re = -0.5*in[ 7][ 6].re;
  out[ 7][ 6].im = -0.5*in[ 7][ 6].im;
  out[ 7][ 9].re = -0.5*in[ 7][ 9].re;
  out[ 7][ 9].im = -0.5*in[ 7][ 9].im;
  out[10][ 0].re =  0.5*in[10][ 0].re;
  out[10][ 0].im =  0.5*in[10][ 0].im;
  out[10][ 3].re =  0.5*in[10][ 3].re;
  out[10][ 3].im =  0.5*in[10][ 3].im;
  out[10][ 6].re =  0.5*in[10][ 6].re;
  out[10][ 6].im =  0.5*in[10][ 6].im;
  out[10][ 9].re =  0.5*in[10][ 9].re;
  out[10][ 9].im =  0.5*in[10][ 9].im;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re = -0.5*in[ 7][ 1].re;
  out[ 7][ 1].im = -0.5*in[ 7][ 1].im;
  out[ 7][ 4].re = -0.5*in[ 7][ 4].re;
  out[ 7][ 4].im = -0.5*in[ 7][ 4].im;
  out[ 7][ 7].re = -0.5*in[ 7][ 7].re;
  out[ 7][ 7].im = -0.5*in[ 7][ 7].im;
  out[ 7][10].re = -0.5*in[ 7][10].re;
  out[ 7][10].im = -0.5*in[ 7][10].im;
  out[10][ 1].re =  0.5*in[10][ 1].re;
  out[10][ 1].im =  0.5*in[10][ 1].im;
  out[10][ 4].re =  0.5*in[10][ 4].re;
  out[10][ 4].im =  0.5*in[10][ 4].im;
  out[10][ 7].re =  0.5*in[10][ 7].re;
  out[10][ 7].im =  0.5*in[10][ 7].im;
  out[10][10].re =  0.5*in[10][10].re;
  out[10][10].im =  0.5*in[10][10].im;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re = -0.5*in[ 7][ 2].re;
  out[ 7][ 2].im = -0.5*in[ 7][ 2].im;
  out[ 7][ 5].re = -0.5*in[ 7][ 5].re;
  out[ 7][ 5].im = -0.5*in[ 7][ 5].im;
  out[ 7][ 8].re = -0.5*in[ 7][ 8].re;
  out[ 7][ 8].im = -0.5*in[ 7][ 8].im;
  out[ 7][11].re = -0.5*in[ 7][11].re;
  out[ 7][11].im = -0.5*in[ 7][11].im;
  out[10][ 2].re =  0.5*in[10][ 2].re;
  out[10][ 2].im =  0.5*in[10][ 2].im;
  out[10][ 5].re =  0.5*in[10][ 5].re;
  out[10][ 5].im =  0.5*in[10][ 5].im;
  out[10][ 8].re =  0.5*in[10][ 8].re;
  out[10][ 8].im =  0.5*in[10][ 8].im;
  out[10][11].re =  0.5*in[10][11].re;
  out[10][11].im =  0.5*in[10][11].im;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re = -0.5*in[ 8][ 0].re;
  out[ 8][ 0].im = -0.5*in[ 8][ 0].im;
  out[ 8][ 3].re = -0.5*in[ 8][ 3].re;
  out[ 8][ 3].im = -0.5*in[ 8][ 3].im;
  out[ 8][ 6].re = -0.5*in[ 8][ 6].re;
  out[ 8][ 6].im = -0.5*in[ 8][ 6].im;
  out[ 8][ 9].re = -0.5*in[ 8][ 9].re;
  out[ 8][ 9].im = -0.5*in[ 8][ 9].im;
  out[11][ 0].re =  0.5*in[11][ 0].re;
  out[11][ 0].im =  0.5*in[11][ 0].im;
  out[11][ 3].re =  0.5*in[11][ 3].re;
  out[11][ 3].im =  0.5*in[11][ 3].im;
  out[11][ 6].re =  0.5*in[11][ 6].re;
  out[11][ 6].im =  0.5*in[11][ 6].im;
  out[11][ 9].re =  0.5*in[11][ 9].re;
  out[11][ 9].im =  0.5*in[11][ 9].im;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re = -0.5*in[ 8][ 1].re;
  out[ 8][ 1].im = -0.5*in[ 8][ 1].im;
  out[ 8][ 4].re = -0.5*in[ 8][ 4].re;
  out[ 8][ 4].im = -0.5*in[ 8][ 4].im;
  out[ 8][ 7].re = -0.5*in[ 8][ 7].re;
  out[ 8][ 7].im = -0.5*in[ 8][ 7].im;
  out[ 8][10].re = -0.5*in[ 8][10].re;
  out[ 8][10].im = -0.5*in[ 8][10].im;
  out[11][ 1].re =  0.5*in[11][ 1].re;
  out[11][ 1].im =  0.5*in[11][ 1].im;
  out[11][ 4].re =  0.5*in[11][ 4].re;
  out[11][ 4].im =  0.5*in[11][ 4].im;
  out[11][ 7].re =  0.5*in[11][ 7].re;
  out[11][ 7].im =  0.5*in[11][ 7].im;
  out[11][10].re =  0.5*in[11][10].re;
  out[11][10].im =  0.5*in[11][10].im;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re = -0.5*in[ 8][ 2].re;
  out[ 8][ 2].im = -0.5*in[ 8][ 2].im;
  out[ 8][ 5].re = -0.5*in[ 8][ 5].re;
  out[ 8][ 5].im = -0.5*in[ 8][ 5].im;
  out[ 8][ 8].re = -0.5*in[ 8][ 8].re;
  out[ 8][ 8].im = -0.5*in[ 8][ 8].im;
  out[ 8][11].re = -0.5*in[ 8][11].re;
  out[ 8][11].im = -0.5*in[ 8][11].im;
  out[11][ 2].re =  0.5*in[11][ 2].re;
  out[11][ 2].im =  0.5*in[11][ 2].im;
  out[11][ 5].re =  0.5*in[11][ 5].re;
  out[11][ 5].im =  0.5*in[11][ 5].im;
  out[11][ 8].re =  0.5*in[11][ 8].re;
  out[11][ 8].im =  0.5*in[11][ 8].im;
  out[11][11].re =  0.5*in[11][11].re;
  out[11][11].im =  0.5*in[11][11].im;


  return;
}

/* multiply prop by \Gamma^+ = (1+\gamma_t)/4 from the right */
__inline__ void
prop_G_ProjTp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 3].im;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 3].im;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re =  0.5*in[ 6][ 0].re;
  out[ 6][ 0].im =  0.5*in[ 6][ 0].im;
  out[ 6][ 3].re =  0.5*in[ 6][ 3].re;
  out[ 6][ 3].im =  0.5*in[ 6][ 3].im;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0.5*in[ 9][ 0].re;
  out[ 9][ 0].im =  0.5*in[ 9][ 0].im;
  out[ 9][ 3].re =  0.5*in[ 9][ 3].re;
  out[ 9][ 3].im =  0.5*in[ 9][ 3].im;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 4].re =  0.5*in[ 0][ 4].re;
  out[ 0][ 4].im =  0.5*in[ 0][ 4].im;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 4].re =  0.5*in[ 3][ 4].re;
  out[ 3][ 4].im =  0.5*in[ 3][ 4].im;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re =  0.5*in[ 6][ 1].re;
  out[ 6][ 1].im =  0.5*in[ 6][ 1].im;
  out[ 6][ 4].re =  0.5*in[ 6][ 4].re;
  out[ 6][ 4].im =  0.5*in[ 6][ 4].im;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0.5*in[ 9][ 1].re;
  out[ 9][ 1].im =  0.5*in[ 9][ 1].im;
  out[ 9][ 4].re =  0.5*in[ 9][ 4].re;
  out[ 9][ 4].im =  0.5*in[ 9][ 4].im;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 5].re =  0.5*in[ 0][ 5].re;
  out[ 0][ 5].im =  0.5*in[ 0][ 5].im;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 5].re =  0.5*in[ 3][ 5].re;
  out[ 3][ 5].im =  0.5*in[ 3][ 5].im;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re =  0.5*in[ 6][ 2].re;
  out[ 6][ 2].im =  0.5*in[ 6][ 2].im;
  out[ 6][ 5].re =  0.5*in[ 6][ 5].re;
  out[ 6][ 5].im =  0.5*in[ 6][ 5].im;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0.5*in[ 9][ 2].re;
  out[ 9][ 2].im =  0.5*in[ 9][ 2].im;
  out[ 9][ 5].re =  0.5*in[ 9][ 5].re;
  out[ 9][ 5].im =  0.5*in[ 9][ 5].im;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 3].im;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0.5*in[ 4][ 0].re;
  out[ 4][ 0].im =  0.5*in[ 4][ 0].im;
  out[ 4][ 3].re =  0.5*in[ 4][ 3].re;
  out[ 4][ 3].im =  0.5*in[ 4][ 3].im;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re =  0.5*in[ 7][ 0].re;
  out[ 7][ 0].im =  0.5*in[ 7][ 0].im;
  out[ 7][ 3].re =  0.5*in[ 7][ 3].re;
  out[ 7][ 3].im =  0.5*in[ 7][ 3].im;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0.5*in[10][ 0].re;
  out[10][ 0].im =  0.5*in[10][ 0].im;
  out[10][ 3].re =  0.5*in[10][ 3].re;
  out[10][ 3].im =  0.5*in[10][ 3].im;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 4].re =  0.5*in[ 1][ 4].re;
  out[ 1][ 4].im =  0.5*in[ 1][ 4].im;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0.5*in[ 4][ 1].re;
  out[ 4][ 1].im =  0.5*in[ 4][ 1].im;
  out[ 4][ 4].re =  0.5*in[ 4][ 4].re;
  out[ 4][ 4].im =  0.5*in[ 4][ 4].im;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re =  0.5*in[ 7][ 1].re;
  out[ 7][ 1].im =  0.5*in[ 7][ 1].im;
  out[ 7][ 4].re =  0.5*in[ 7][ 4].re;
  out[ 7][ 4].im =  0.5*in[ 7][ 4].im;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0.5*in[10][ 1].re;
  out[10][ 1].im =  0.5*in[10][ 1].im;
  out[10][ 4].re =  0.5*in[10][ 4].re;
  out[10][ 4].im =  0.5*in[10][ 4].im;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 5].re =  0.5*in[ 1][ 5].re;
  out[ 1][ 5].im =  0.5*in[ 1][ 5].im;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0.5*in[ 4][ 2].re;
  out[ 4][ 2].im =  0.5*in[ 4][ 2].im;
  out[ 4][ 5].re =  0.5*in[ 4][ 5].re;
  out[ 4][ 5].im =  0.5*in[ 4][ 5].im;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re =  0.5*in[ 7][ 2].re;
  out[ 7][ 2].im =  0.5*in[ 7][ 2].im;
  out[ 7][ 5].re =  0.5*in[ 7][ 5].re;
  out[ 7][ 5].im =  0.5*in[ 7][ 5].im;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0.5*in[10][ 2].re;
  out[10][ 2].im =  0.5*in[10][ 2].im;
  out[10][ 5].re =  0.5*in[10][ 5].re;
  out[10][ 5].im =  0.5*in[10][ 5].im;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 3].im;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0.5*in[ 5][ 0].re;
  out[ 5][ 0].im =  0.5*in[ 5][ 0].im;
  out[ 5][ 3].re =  0.5*in[ 5][ 3].re;
  out[ 5][ 3].im =  0.5*in[ 5][ 3].im;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re =  0.5*in[ 8][ 0].re;
  out[ 8][ 0].im =  0.5*in[ 8][ 0].im;
  out[ 8][ 3].re =  0.5*in[ 8][ 3].re;
  out[ 8][ 3].im =  0.5*in[ 8][ 3].im;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0.5*in[11][ 0].re;
  out[11][ 0].im =  0.5*in[11][ 0].im;
  out[11][ 3].re =  0.5*in[11][ 3].re;
  out[11][ 3].im =  0.5*in[11][ 3].im;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 4].re =  0.5*in[ 2][ 4].re;
  out[ 2][ 4].im =  0.5*in[ 2][ 4].im;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0.5*in[ 5][ 1].re;
  out[ 5][ 1].im =  0.5*in[ 5][ 1].im;
  out[ 5][ 4].re =  0.5*in[ 5][ 4].re;
  out[ 5][ 4].im =  0.5*in[ 5][ 4].im;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re =  0.5*in[ 8][ 1].re;
  out[ 8][ 1].im =  0.5*in[ 8][ 1].im;
  out[ 8][ 4].re =  0.5*in[ 8][ 4].re;
  out[ 8][ 4].im =  0.5*in[ 8][ 4].im;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0.5*in[11][ 1].re;
  out[11][ 1].im =  0.5*in[11][ 1].im;
  out[11][ 4].re =  0.5*in[11][ 4].re;
  out[11][ 4].im =  0.5*in[11][ 4].im;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 5].re =  0.5*in[ 2][ 5].re;
  out[ 2][ 5].im =  0.5*in[ 2][ 5].im;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0.5*in[ 5][ 2].re;
  out[ 5][ 2].im =  0.5*in[ 5][ 2].im;
  out[ 5][ 5].re =  0.5*in[ 5][ 5].re;
  out[ 5][ 5].im =  0.5*in[ 5][ 5].im;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re =  0.5*in[ 8][ 2].re;
  out[ 8][ 2].im =  0.5*in[ 8][ 2].im;
  out[ 8][ 5].re =  0.5*in[ 8][ 5].re;
  out[ 8][ 5].im =  0.5*in[ 8][ 5].im;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0.5*in[11][ 2].re;
  out[11][ 2].im =  0.5*in[11][ 2].im;
  out[11][ 5].re =  0.5*in[11][ 5].re;
  out[11][ 5].im =  0.5*in[11][ 5].im;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by \Gamma^- = (1-\gamma_t)/4 from the right */
__inline__ void
prop_G_ProjTm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re =  0.5*in[ 0][ 6].re;
  out[ 0][ 6].im =  0.5*in[ 0][ 6].im;
  out[ 0][ 9].re =  0.5*in[ 0][ 9].re;
  out[ 0][ 9].im =  0.5*in[ 0][ 9].im;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re =  0.5*in[ 3][ 6].re;
  out[ 3][ 6].im =  0.5*in[ 3][ 6].im;
  out[ 3][ 9].re =  0.5*in[ 3][ 9].re;
  out[ 3][ 9].im =  0.5*in[ 3][ 9].im;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re =  0.5*in[ 6][ 6].re;
  out[ 6][ 6].im =  0.5*in[ 6][ 6].im;
  out[ 6][ 9].re =  0.5*in[ 6][ 9].re;
  out[ 6][ 9].im =  0.5*in[ 6][ 9].im;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re =  0.5*in[ 9][ 6].re;
  out[ 9][ 6].im =  0.5*in[ 9][ 6].im;
  out[ 9][ 9].re =  0.5*in[ 9][ 9].re;
  out[ 9][ 9].im =  0.5*in[ 9][ 9].im;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re =  0.5*in[ 0][ 7].re;
  out[ 0][ 7].im =  0.5*in[ 0][ 7].im;
  out[ 0][10].re =  0.5*in[ 0][10].re;
  out[ 0][10].im =  0.5*in[ 0][10].im;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re =  0.5*in[ 3][ 7].re;
  out[ 3][ 7].im =  0.5*in[ 3][ 7].im;
  out[ 3][10].re =  0.5*in[ 3][10].re;
  out[ 3][10].im =  0.5*in[ 3][10].im;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re =  0.5*in[ 6][ 7].re;
  out[ 6][ 7].im =  0.5*in[ 6][ 7].im;
  out[ 6][10].re =  0.5*in[ 6][10].re;
  out[ 6][10].im =  0.5*in[ 6][10].im;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re =  0.5*in[ 9][ 7].re;
  out[ 9][ 7].im =  0.5*in[ 9][ 7].im;
  out[ 9][10].re =  0.5*in[ 9][10].re;
  out[ 9][10].im =  0.5*in[ 9][10].im;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re =  0.5*in[ 0][ 8].re;
  out[ 0][ 8].im =  0.5*in[ 0][ 8].im;
  out[ 0][11].re =  0.5*in[ 0][11].re;
  out[ 0][11].im =  0.5*in[ 0][11].im;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re =  0.5*in[ 3][ 8].re;
  out[ 3][ 8].im =  0.5*in[ 3][ 8].im;
  out[ 3][11].re =  0.5*in[ 3][11].re;
  out[ 3][11].im =  0.5*in[ 3][11].im;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re =  0.5*in[ 6][ 8].re;
  out[ 6][ 8].im =  0.5*in[ 6][ 8].im;
  out[ 6][11].re =  0.5*in[ 6][11].re;
  out[ 6][11].im =  0.5*in[ 6][11].im;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re =  0.5*in[ 9][ 8].re;
  out[ 9][ 8].im =  0.5*in[ 9][ 8].im;
  out[ 9][11].re =  0.5*in[ 9][11].re;
  out[ 9][11].im =  0.5*in[ 9][11].im;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re =  0.5*in[ 1][ 6].re;
  out[ 1][ 6].im =  0.5*in[ 1][ 6].im;
  out[ 1][ 9].re =  0.5*in[ 1][ 9].re;
  out[ 1][ 9].im =  0.5*in[ 1][ 9].im;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re =  0.5*in[ 4][ 6].re;
  out[ 4][ 6].im =  0.5*in[ 4][ 6].im;
  out[ 4][ 9].re =  0.5*in[ 4][ 9].re;
  out[ 4][ 9].im =  0.5*in[ 4][ 9].im;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re =  0.5*in[ 7][ 6].re;
  out[ 7][ 6].im =  0.5*in[ 7][ 6].im;
  out[ 7][ 9].re =  0.5*in[ 7][ 9].re;
  out[ 7][ 9].im =  0.5*in[ 7][ 9].im;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re =  0.5*in[10][ 6].re;
  out[10][ 6].im =  0.5*in[10][ 6].im;
  out[10][ 9].re =  0.5*in[10][ 9].re;
  out[10][ 9].im =  0.5*in[10][ 9].im;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re =  0.5*in[ 1][ 7].re;
  out[ 1][ 7].im =  0.5*in[ 1][ 7].im;
  out[ 1][10].re =  0.5*in[ 1][10].re;
  out[ 1][10].im =  0.5*in[ 1][10].im;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re =  0.5*in[ 4][ 7].re;
  out[ 4][ 7].im =  0.5*in[ 4][ 7].im;
  out[ 4][10].re =  0.5*in[ 4][10].re;
  out[ 4][10].im =  0.5*in[ 4][10].im;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re =  0.5*in[ 7][ 7].re;
  out[ 7][ 7].im =  0.5*in[ 7][ 7].im;
  out[ 7][10].re =  0.5*in[ 7][10].re;
  out[ 7][10].im =  0.5*in[ 7][10].im;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re =  0.5*in[10][ 7].re;
  out[10][ 7].im =  0.5*in[10][ 7].im;
  out[10][10].re =  0.5*in[10][10].re;
  out[10][10].im =  0.5*in[10][10].im;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re =  0.5*in[ 1][ 8].re;
  out[ 1][ 8].im =  0.5*in[ 1][ 8].im;
  out[ 1][11].re =  0.5*in[ 1][11].re;
  out[ 1][11].im =  0.5*in[ 1][11].im;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re =  0.5*in[ 4][ 8].re;
  out[ 4][ 8].im =  0.5*in[ 4][ 8].im;
  out[ 4][11].re =  0.5*in[ 4][11].re;
  out[ 4][11].im =  0.5*in[ 4][11].im;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re =  0.5*in[ 7][ 8].re;
  out[ 7][ 8].im =  0.5*in[ 7][ 8].im;
  out[ 7][11].re =  0.5*in[ 7][11].re;
  out[ 7][11].im =  0.5*in[ 7][11].im;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re =  0.5*in[10][ 8].re;
  out[10][ 8].im =  0.5*in[10][ 8].im;
  out[10][11].re =  0.5*in[10][11].re;
  out[10][11].im =  0.5*in[10][11].im;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re =  0.5*in[ 2][ 6].re;
  out[ 2][ 6].im =  0.5*in[ 2][ 6].im;
  out[ 2][ 9].re =  0.5*in[ 2][ 9].re;
  out[ 2][ 9].im =  0.5*in[ 2][ 9].im;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re =  0.5*in[ 5][ 6].re;
  out[ 5][ 6].im =  0.5*in[ 5][ 6].im;
  out[ 5][ 9].re =  0.5*in[ 5][ 9].re;
  out[ 5][ 9].im =  0.5*in[ 5][ 9].im;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re =  0.5*in[ 8][ 6].re;
  out[ 8][ 6].im =  0.5*in[ 8][ 6].im;
  out[ 8][ 9].re =  0.5*in[ 8][ 9].re;
  out[ 8][ 9].im =  0.5*in[ 8][ 9].im;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re =  0.5*in[11][ 6].re;
  out[11][ 6].im =  0.5*in[11][ 6].im;
  out[11][ 9].re =  0.5*in[11][ 9].re;
  out[11][ 9].im =  0.5*in[11][ 9].im;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re =  0.5*in[ 2][ 7].re;
  out[ 2][ 7].im =  0.5*in[ 2][ 7].im;
  out[ 2][10].re =  0.5*in[ 2][10].re;
  out[ 2][10].im =  0.5*in[ 2][10].im;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re =  0.5*in[ 5][ 7].re;
  out[ 5][ 7].im =  0.5*in[ 5][ 7].im;
  out[ 5][10].re =  0.5*in[ 5][10].re;
  out[ 5][10].im =  0.5*in[ 5][10].im;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re =  0.5*in[ 8][ 7].re;
  out[ 8][ 7].im =  0.5*in[ 8][ 7].im;
  out[ 8][10].re =  0.5*in[ 8][10].re;
  out[ 8][10].im =  0.5*in[ 8][10].im;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re =  0.5*in[11][ 7].re;
  out[11][ 7].im =  0.5*in[11][ 7].im;
  out[11][10].re =  0.5*in[11][10].re;
  out[11][10].im =  0.5*in[11][10].im;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re =  0.5*in[ 2][ 8].re;
  out[ 2][ 8].im =  0.5*in[ 2][ 8].im;
  out[ 2][11].re =  0.5*in[ 2][11].re;
  out[ 2][11].im =  0.5*in[ 2][11].im;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re =  0.5*in[ 5][ 8].re;
  out[ 5][ 8].im =  0.5*in[ 5][ 8].im;
  out[ 5][11].re =  0.5*in[ 5][11].re;
  out[ 5][11].im =  0.5*in[ 5][11].im;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re =  0.5*in[ 8][ 8].re;
  out[ 8][ 8].im =  0.5*in[ 8][ 8].im;
  out[ 8][11].re =  0.5*in[ 8][11].re;
  out[ 8][11].im =  0.5*in[ 8][11].im;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re =  0.5*in[11][ 8].re;
  out[11][ 8].im =  0.5*in[11][ 8].im;
  out[11][11].re =  0.5*in[11][11].re;
  out[11][11].im =  0.5*in[11][11].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_x from the right */
__inline__ void
prop_G_ProjXp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 3].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 3].im;
  out[ 0][ 3].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 3].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0.5*in[ 3][ 3].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 3].im;
  out[ 3][ 3].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 3].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re =  0.5*in[ 6][ 3].re;
  out[ 6][ 0].im =  0.5*in[ 6][ 3].im;
  out[ 6][ 3].re =  0.5*in[ 6][ 0].re;
  out[ 6][ 3].im =  0.5*in[ 6][ 0].im;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0.5*in[ 9][ 3].re;
  out[ 9][ 0].im =  0.5*in[ 9][ 3].im;
  out[ 9][ 3].re =  0.5*in[ 9][ 0].re;
  out[ 9][ 3].im =  0.5*in[ 9][ 0].im;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 0][ 4].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 4].im;
  out[ 0][ 4].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 4].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0.5*in[ 3][ 4].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 4].im;
  out[ 3][ 4].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 4].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re =  0.5*in[ 6][ 4].re;
  out[ 6][ 1].im =  0.5*in[ 6][ 4].im;
  out[ 6][ 4].re =  0.5*in[ 6][ 1].re;
  out[ 6][ 4].im =  0.5*in[ 6][ 1].im;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0.5*in[ 9][ 4].re;
  out[ 9][ 1].im =  0.5*in[ 9][ 4].im;
  out[ 9][ 4].re =  0.5*in[ 9][ 1].re;
  out[ 9][ 4].im =  0.5*in[ 9][ 1].im;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 0][ 5].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 5].im;
  out[ 0][ 5].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 5].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0.5*in[ 3][ 5].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 5].im;
  out[ 3][ 5].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 5].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re =  0.5*in[ 6][ 5].re;
  out[ 6][ 2].im =  0.5*in[ 6][ 5].im;
  out[ 6][ 5].re =  0.5*in[ 6][ 2].re;
  out[ 6][ 5].im =  0.5*in[ 6][ 2].im;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0.5*in[ 9][ 5].re;
  out[ 9][ 2].im =  0.5*in[ 9][ 5].im;
  out[ 9][ 5].re =  0.5*in[ 9][ 2].re;
  out[ 9][ 5].im =  0.5*in[ 9][ 2].im;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 1][ 3].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 3].im;
  out[ 1][ 3].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 3].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0.5*in[ 4][ 3].re;
  out[ 4][ 0].im =  0.5*in[ 4][ 3].im;
  out[ 4][ 3].re =  0.5*in[ 4][ 0].re;
  out[ 4][ 3].im =  0.5*in[ 4][ 0].im;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re =  0.5*in[ 7][ 3].re;
  out[ 7][ 0].im =  0.5*in[ 7][ 3].im;
  out[ 7][ 3].re =  0.5*in[ 7][ 0].re;
  out[ 7][ 3].im =  0.5*in[ 7][ 0].im;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0.5*in[10][ 3].re;
  out[10][ 0].im =  0.5*in[10][ 3].im;
  out[10][ 3].re =  0.5*in[10][ 0].re;
  out[10][ 3].im =  0.5*in[10][ 0].im;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 1][ 4].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 4].im;
  out[ 1][ 4].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 4].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0.5*in[ 4][ 4].re;
  out[ 4][ 1].im =  0.5*in[ 4][ 4].im;
  out[ 4][ 4].re =  0.5*in[ 4][ 1].re;
  out[ 4][ 4].im =  0.5*in[ 4][ 1].im;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re =  0.5*in[ 7][ 4].re;
  out[ 7][ 1].im =  0.5*in[ 7][ 4].im;
  out[ 7][ 4].re =  0.5*in[ 7][ 1].re;
  out[ 7][ 4].im =  0.5*in[ 7][ 1].im;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0.5*in[10][ 4].re;
  out[10][ 1].im =  0.5*in[10][ 4].im;
  out[10][ 4].re =  0.5*in[10][ 1].re;
  out[10][ 4].im =  0.5*in[10][ 1].im;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 1][ 5].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 5].im;
  out[ 1][ 5].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 5].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0.5*in[ 4][ 5].re;
  out[ 4][ 2].im =  0.5*in[ 4][ 5].im;
  out[ 4][ 5].re =  0.5*in[ 4][ 2].re;
  out[ 4][ 5].im =  0.5*in[ 4][ 2].im;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re =  0.5*in[ 7][ 5].re;
  out[ 7][ 2].im =  0.5*in[ 7][ 5].im;
  out[ 7][ 5].re =  0.5*in[ 7][ 2].re;
  out[ 7][ 5].im =  0.5*in[ 7][ 2].im;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0.5*in[10][ 5].re;
  out[10][ 2].im =  0.5*in[10][ 5].im;
  out[10][ 5].re =  0.5*in[10][ 2].re;
  out[10][ 5].im =  0.5*in[10][ 2].im;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 2][ 3].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 3].im;
  out[ 2][ 3].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 3].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0.5*in[ 5][ 3].re;
  out[ 5][ 0].im =  0.5*in[ 5][ 3].im;
  out[ 5][ 3].re =  0.5*in[ 5][ 0].re;
  out[ 5][ 3].im =  0.5*in[ 5][ 0].im;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re =  0.5*in[ 8][ 3].re;
  out[ 8][ 0].im =  0.5*in[ 8][ 3].im;
  out[ 8][ 3].re =  0.5*in[ 8][ 0].re;
  out[ 8][ 3].im =  0.5*in[ 8][ 0].im;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0.5*in[11][ 3].re;
  out[11][ 0].im =  0.5*in[11][ 3].im;
  out[11][ 3].re =  0.5*in[11][ 0].re;
  out[11][ 3].im =  0.5*in[11][ 0].im;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 2][ 4].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 4].im;
  out[ 2][ 4].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 4].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0.5*in[ 5][ 4].re;
  out[ 5][ 1].im =  0.5*in[ 5][ 4].im;
  out[ 5][ 4].re =  0.5*in[ 5][ 1].re;
  out[ 5][ 4].im =  0.5*in[ 5][ 1].im;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re =  0.5*in[ 8][ 4].re;
  out[ 8][ 1].im =  0.5*in[ 8][ 4].im;
  out[ 8][ 4].re =  0.5*in[ 8][ 1].re;
  out[ 8][ 4].im =  0.5*in[ 8][ 1].im;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0.5*in[11][ 4].re;
  out[11][ 1].im =  0.5*in[11][ 4].im;
  out[11][ 4].re =  0.5*in[11][ 1].re;
  out[11][ 4].im =  0.5*in[11][ 1].im;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 2][ 5].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 5].im;
  out[ 2][ 5].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 5].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0.5*in[ 5][ 5].re;
  out[ 5][ 2].im =  0.5*in[ 5][ 5].im;
  out[ 5][ 5].re =  0.5*in[ 5][ 2].re;
  out[ 5][ 5].im =  0.5*in[ 5][ 2].im;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re =  0.5*in[ 8][ 5].re;
  out[ 8][ 2].im =  0.5*in[ 8][ 5].im;
  out[ 8][ 5].re =  0.5*in[ 8][ 2].re;
  out[ 8][ 5].im =  0.5*in[ 8][ 2].im;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0.5*in[11][ 5].re;
  out[11][ 2].im =  0.5*in[11][ 5].im;
  out[11][ 5].re =  0.5*in[11][ 2].re;
  out[11][ 5].im =  0.5*in[11][ 2].im;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_x from the right */
__inline__ void
prop_G_ProjXm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re = -0.5*in[ 0][ 9].re;
  out[ 0][ 6].im = -0.5*in[ 0][ 9].im;
  out[ 0][ 9].re = -0.5*in[ 0][ 6].re;
  out[ 0][ 9].im = -0.5*in[ 0][ 6].im;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re = -0.5*in[ 3][ 9].re;
  out[ 3][ 6].im = -0.5*in[ 3][ 9].im;
  out[ 3][ 9].re = -0.5*in[ 3][ 6].re;
  out[ 3][ 9].im = -0.5*in[ 3][ 6].im;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re = -0.5*in[ 6][ 9].re;
  out[ 6][ 6].im = -0.5*in[ 6][ 9].im;
  out[ 6][ 9].re = -0.5*in[ 6][ 6].re;
  out[ 6][ 9].im = -0.5*in[ 6][ 6].im;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re = -0.5*in[ 9][ 9].re;
  out[ 9][ 6].im = -0.5*in[ 9][ 9].im;
  out[ 9][ 9].re = -0.5*in[ 9][ 6].re;
  out[ 9][ 9].im = -0.5*in[ 9][ 6].im;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re = -0.5*in[ 0][10].re;
  out[ 0][ 7].im = -0.5*in[ 0][10].im;
  out[ 0][10].re = -0.5*in[ 0][ 7].re;
  out[ 0][10].im = -0.5*in[ 0][ 7].im;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re = -0.5*in[ 3][10].re;
  out[ 3][ 7].im = -0.5*in[ 3][10].im;
  out[ 3][10].re = -0.5*in[ 3][ 7].re;
  out[ 3][10].im = -0.5*in[ 3][ 7].im;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re = -0.5*in[ 6][10].re;
  out[ 6][ 7].im = -0.5*in[ 6][10].im;
  out[ 6][10].re = -0.5*in[ 6][ 7].re;
  out[ 6][10].im = -0.5*in[ 6][ 7].im;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re = -0.5*in[ 9][10].re;
  out[ 9][ 7].im = -0.5*in[ 9][10].im;
  out[ 9][10].re = -0.5*in[ 9][ 7].re;
  out[ 9][10].im = -0.5*in[ 9][ 7].im;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re = -0.5*in[ 0][11].re;
  out[ 0][ 8].im = -0.5*in[ 0][11].im;
  out[ 0][11].re = -0.5*in[ 0][ 8].re;
  out[ 0][11].im = -0.5*in[ 0][ 8].im;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re = -0.5*in[ 3][11].re;
  out[ 3][ 8].im = -0.5*in[ 3][11].im;
  out[ 3][11].re = -0.5*in[ 3][ 8].re;
  out[ 3][11].im = -0.5*in[ 3][ 8].im;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re = -0.5*in[ 6][11].re;
  out[ 6][ 8].im = -0.5*in[ 6][11].im;
  out[ 6][11].re = -0.5*in[ 6][ 8].re;
  out[ 6][11].im = -0.5*in[ 6][ 8].im;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re = -0.5*in[ 9][11].re;
  out[ 9][ 8].im = -0.5*in[ 9][11].im;
  out[ 9][11].re = -0.5*in[ 9][ 8].re;
  out[ 9][11].im = -0.5*in[ 9][ 8].im;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re = -0.5*in[ 1][ 9].re;
  out[ 1][ 6].im = -0.5*in[ 1][ 9].im;
  out[ 1][ 9].re = -0.5*in[ 1][ 6].re;
  out[ 1][ 9].im = -0.5*in[ 1][ 6].im;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re = -0.5*in[ 4][ 9].re;
  out[ 4][ 6].im = -0.5*in[ 4][ 9].im;
  out[ 4][ 9].re = -0.5*in[ 4][ 6].re;
  out[ 4][ 9].im = -0.5*in[ 4][ 6].im;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re = -0.5*in[ 7][ 9].re;
  out[ 7][ 6].im = -0.5*in[ 7][ 9].im;
  out[ 7][ 9].re = -0.5*in[ 7][ 6].re;
  out[ 7][ 9].im = -0.5*in[ 7][ 6].im;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re = -0.5*in[10][ 9].re;
  out[10][ 6].im = -0.5*in[10][ 9].im;
  out[10][ 9].re = -0.5*in[10][ 6].re;
  out[10][ 9].im = -0.5*in[10][ 6].im;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re = -0.5*in[ 1][10].re;
  out[ 1][ 7].im = -0.5*in[ 1][10].im;
  out[ 1][10].re = -0.5*in[ 1][ 7].re;
  out[ 1][10].im = -0.5*in[ 1][ 7].im;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re = -0.5*in[ 4][10].re;
  out[ 4][ 7].im = -0.5*in[ 4][10].im;
  out[ 4][10].re = -0.5*in[ 4][ 7].re;
  out[ 4][10].im = -0.5*in[ 4][ 7].im;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re = -0.5*in[ 7][10].re;
  out[ 7][ 7].im = -0.5*in[ 7][10].im;
  out[ 7][10].re = -0.5*in[ 7][ 7].re;
  out[ 7][10].im = -0.5*in[ 7][ 7].im;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re = -0.5*in[10][10].re;
  out[10][ 7].im = -0.5*in[10][10].im;
  out[10][10].re = -0.5*in[10][ 7].re;
  out[10][10].im = -0.5*in[10][ 7].im;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re = -0.5*in[ 1][11].re;
  out[ 1][ 8].im = -0.5*in[ 1][11].im;
  out[ 1][11].re = -0.5*in[ 1][ 8].re;
  out[ 1][11].im = -0.5*in[ 1][ 8].im;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re = -0.5*in[ 4][11].re;
  out[ 4][ 8].im = -0.5*in[ 4][11].im;
  out[ 4][11].re = -0.5*in[ 4][ 8].re;
  out[ 4][11].im = -0.5*in[ 4][ 8].im;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re = -0.5*in[ 7][11].re;
  out[ 7][ 8].im = -0.5*in[ 7][11].im;
  out[ 7][11].re = -0.5*in[ 7][ 8].re;
  out[ 7][11].im = -0.5*in[ 7][ 8].im;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re = -0.5*in[10][11].re;
  out[10][ 8].im = -0.5*in[10][11].im;
  out[10][11].re = -0.5*in[10][ 8].re;
  out[10][11].im = -0.5*in[10][ 8].im;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re = -0.5*in[ 2][ 9].re;
  out[ 2][ 6].im = -0.5*in[ 2][ 9].im;
  out[ 2][ 9].re = -0.5*in[ 2][ 6].re;
  out[ 2][ 9].im = -0.5*in[ 2][ 6].im;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re = -0.5*in[ 5][ 9].re;
  out[ 5][ 6].im = -0.5*in[ 5][ 9].im;
  out[ 5][ 9].re = -0.5*in[ 5][ 6].re;
  out[ 5][ 9].im = -0.5*in[ 5][ 6].im;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re = -0.5*in[ 8][ 9].re;
  out[ 8][ 6].im = -0.5*in[ 8][ 9].im;
  out[ 8][ 9].re = -0.5*in[ 8][ 6].re;
  out[ 8][ 9].im = -0.5*in[ 8][ 6].im;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re = -0.5*in[11][ 9].re;
  out[11][ 6].im = -0.5*in[11][ 9].im;
  out[11][ 9].re = -0.5*in[11][ 6].re;
  out[11][ 9].im = -0.5*in[11][ 6].im;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re = -0.5*in[ 2][10].re;
  out[ 2][ 7].im = -0.5*in[ 2][10].im;
  out[ 2][10].re = -0.5*in[ 2][ 7].re;
  out[ 2][10].im = -0.5*in[ 2][ 7].im;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re = -0.5*in[ 5][10].re;
  out[ 5][ 7].im = -0.5*in[ 5][10].im;
  out[ 5][10].re = -0.5*in[ 5][ 7].re;
  out[ 5][10].im = -0.5*in[ 5][ 7].im;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re = -0.5*in[ 8][10].re;
  out[ 8][ 7].im = -0.5*in[ 8][10].im;
  out[ 8][10].re = -0.5*in[ 8][ 7].re;
  out[ 8][10].im = -0.5*in[ 8][ 7].im;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re = -0.5*in[11][10].re;
  out[11][ 7].im = -0.5*in[11][10].im;
  out[11][10].re = -0.5*in[11][ 7].re;
  out[11][10].im = -0.5*in[11][ 7].im;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re = -0.5*in[ 2][11].re;
  out[ 2][ 8].im = -0.5*in[ 2][11].im;
  out[ 2][11].re = -0.5*in[ 2][ 8].re;
  out[ 2][11].im = -0.5*in[ 2][ 8].im;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re = -0.5*in[ 5][11].re;
  out[ 5][ 8].im = -0.5*in[ 5][11].im;
  out[ 5][11].re = -0.5*in[ 5][ 8].re;
  out[ 5][11].im = -0.5*in[ 5][ 8].im;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re = -0.5*in[ 8][11].re;
  out[ 8][ 8].im = -0.5*in[ 8][11].im;
  out[ 8][11].re = -0.5*in[ 8][ 8].re;
  out[ 8][11].im = -0.5*in[ 8][ 8].im;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re = -0.5*in[11][11].re;
  out[11][ 8].im = -0.5*in[11][11].im;
  out[11][11].re = -0.5*in[11][ 8].re;
  out[11][11].im = -0.5*in[11][ 8].im;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_y from the right */
__inline__ void
prop_G_ProjYp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re = -0.5*in[ 0][ 3].im;
  out[ 0][ 0].im =  0.5*in[ 0][ 3].re;
  out[ 0][ 3].re =  0.5*in[ 0][ 0].im;
  out[ 0][ 3].im = -0.5*in[ 0][ 0].re;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re = -0.5*in[ 3][ 3].im;
  out[ 3][ 0].im =  0.5*in[ 3][ 3].re;
  out[ 3][ 3].re =  0.5*in[ 3][ 0].im;
  out[ 3][ 3].im = -0.5*in[ 3][ 0].re;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re = -0.5*in[ 6][ 3].im;
  out[ 6][ 0].im =  0.5*in[ 6][ 3].re;
  out[ 6][ 3].re =  0.5*in[ 6][ 0].im;
  out[ 6][ 3].im = -0.5*in[ 6][ 0].re;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re = -0.5*in[ 9][ 3].im;
  out[ 9][ 0].im =  0.5*in[ 9][ 3].re;
  out[ 9][ 3].re =  0.5*in[ 9][ 0].im;
  out[ 9][ 3].im = -0.5*in[ 9][ 0].re;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re = -0.5*in[ 0][ 4].im;
  out[ 0][ 1].im =  0.5*in[ 0][ 4].re;
  out[ 0][ 4].re =  0.5*in[ 0][ 1].im;
  out[ 0][ 4].im = -0.5*in[ 0][ 1].re;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re = -0.5*in[ 3][ 4].im;
  out[ 3][ 1].im =  0.5*in[ 3][ 4].re;
  out[ 3][ 4].re =  0.5*in[ 3][ 1].im;
  out[ 3][ 4].im = -0.5*in[ 3][ 1].re;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re = -0.5*in[ 6][ 4].im;
  out[ 6][ 1].im =  0.5*in[ 6][ 4].re;
  out[ 6][ 4].re =  0.5*in[ 6][ 1].im;
  out[ 6][ 4].im = -0.5*in[ 6][ 1].re;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re = -0.5*in[ 9][ 4].im;
  out[ 9][ 1].im =  0.5*in[ 9][ 4].re;
  out[ 9][ 4].re =  0.5*in[ 9][ 1].im;
  out[ 9][ 4].im = -0.5*in[ 9][ 1].re;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re = -0.5*in[ 0][ 5].im;
  out[ 0][ 2].im =  0.5*in[ 0][ 5].re;
  out[ 0][ 5].re =  0.5*in[ 0][ 2].im;
  out[ 0][ 5].im = -0.5*in[ 0][ 2].re;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re = -0.5*in[ 3][ 5].im;
  out[ 3][ 2].im =  0.5*in[ 3][ 5].re;
  out[ 3][ 5].re =  0.5*in[ 3][ 2].im;
  out[ 3][ 5].im = -0.5*in[ 3][ 2].re;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re = -0.5*in[ 6][ 5].im;
  out[ 6][ 2].im =  0.5*in[ 6][ 5].re;
  out[ 6][ 5].re =  0.5*in[ 6][ 2].im;
  out[ 6][ 5].im = -0.5*in[ 6][ 2].re;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re = -0.5*in[ 9][ 5].im;
  out[ 9][ 2].im =  0.5*in[ 9][ 5].re;
  out[ 9][ 5].re =  0.5*in[ 9][ 2].im;
  out[ 9][ 5].im = -0.5*in[ 9][ 2].re;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re = -0.5*in[ 1][ 3].im;
  out[ 1][ 0].im =  0.5*in[ 1][ 3].re;
  out[ 1][ 3].re =  0.5*in[ 1][ 0].im;
  out[ 1][ 3].im = -0.5*in[ 1][ 0].re;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re = -0.5*in[ 4][ 3].im;
  out[ 4][ 0].im =  0.5*in[ 4][ 3].re;
  out[ 4][ 3].re =  0.5*in[ 4][ 0].im;
  out[ 4][ 3].im = -0.5*in[ 4][ 0].re;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re = -0.5*in[ 7][ 3].im;
  out[ 7][ 0].im =  0.5*in[ 7][ 3].re;
  out[ 7][ 3].re =  0.5*in[ 7][ 0].im;
  out[ 7][ 3].im = -0.5*in[ 7][ 0].re;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re = -0.5*in[10][ 3].im;
  out[10][ 0].im =  0.5*in[10][ 3].re;
  out[10][ 3].re =  0.5*in[10][ 0].im;
  out[10][ 3].im = -0.5*in[10][ 0].re;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re = -0.5*in[ 1][ 4].im;
  out[ 1][ 1].im =  0.5*in[ 1][ 4].re;
  out[ 1][ 4].re =  0.5*in[ 1][ 1].im;
  out[ 1][ 4].im = -0.5*in[ 1][ 1].re;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re = -0.5*in[ 4][ 4].im;
  out[ 4][ 1].im =  0.5*in[ 4][ 4].re;
  out[ 4][ 4].re =  0.5*in[ 4][ 1].im;
  out[ 4][ 4].im = -0.5*in[ 4][ 1].re;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re = -0.5*in[ 7][ 4].im;
  out[ 7][ 1].im =  0.5*in[ 7][ 4].re;
  out[ 7][ 4].re =  0.5*in[ 7][ 1].im;
  out[ 7][ 4].im = -0.5*in[ 7][ 1].re;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re = -0.5*in[10][ 4].im;
  out[10][ 1].im =  0.5*in[10][ 4].re;
  out[10][ 4].re =  0.5*in[10][ 1].im;
  out[10][ 4].im = -0.5*in[10][ 1].re;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re = -0.5*in[ 1][ 5].im;
  out[ 1][ 2].im =  0.5*in[ 1][ 5].re;
  out[ 1][ 5].re =  0.5*in[ 1][ 2].im;
  out[ 1][ 5].im = -0.5*in[ 1][ 2].re;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re = -0.5*in[ 4][ 5].im;
  out[ 4][ 2].im =  0.5*in[ 4][ 5].re;
  out[ 4][ 5].re =  0.5*in[ 4][ 2].im;
  out[ 4][ 5].im = -0.5*in[ 4][ 2].re;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re = -0.5*in[ 7][ 5].im;
  out[ 7][ 2].im =  0.5*in[ 7][ 5].re;
  out[ 7][ 5].re =  0.5*in[ 7][ 2].im;
  out[ 7][ 5].im = -0.5*in[ 7][ 2].re;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re = -0.5*in[10][ 5].im;
  out[10][ 2].im =  0.5*in[10][ 5].re;
  out[10][ 5].re =  0.5*in[10][ 2].im;
  out[10][ 5].im = -0.5*in[10][ 2].re;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re = -0.5*in[ 2][ 3].im;
  out[ 2][ 0].im =  0.5*in[ 2][ 3].re;
  out[ 2][ 3].re =  0.5*in[ 2][ 0].im;
  out[ 2][ 3].im = -0.5*in[ 2][ 0].re;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re = -0.5*in[ 5][ 3].im;
  out[ 5][ 0].im =  0.5*in[ 5][ 3].re;
  out[ 5][ 3].re =  0.5*in[ 5][ 0].im;
  out[ 5][ 3].im = -0.5*in[ 5][ 0].re;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re = -0.5*in[ 8][ 3].im;
  out[ 8][ 0].im =  0.5*in[ 8][ 3].re;
  out[ 8][ 3].re =  0.5*in[ 8][ 0].im;
  out[ 8][ 3].im = -0.5*in[ 8][ 0].re;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re = -0.5*in[11][ 3].im;
  out[11][ 0].im =  0.5*in[11][ 3].re;
  out[11][ 3].re =  0.5*in[11][ 0].im;
  out[11][ 3].im = -0.5*in[11][ 0].re;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re = -0.5*in[ 2][ 4].im;
  out[ 2][ 1].im =  0.5*in[ 2][ 4].re;
  out[ 2][ 4].re =  0.5*in[ 2][ 1].im;
  out[ 2][ 4].im = -0.5*in[ 2][ 1].re;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re = -0.5*in[ 5][ 4].im;
  out[ 5][ 1].im =  0.5*in[ 5][ 4].re;
  out[ 5][ 4].re =  0.5*in[ 5][ 1].im;
  out[ 5][ 4].im = -0.5*in[ 5][ 1].re;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re = -0.5*in[ 8][ 4].im;
  out[ 8][ 1].im =  0.5*in[ 8][ 4].re;
  out[ 8][ 4].re =  0.5*in[ 8][ 1].im;
  out[ 8][ 4].im = -0.5*in[ 8][ 1].re;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re = -0.5*in[11][ 4].im;
  out[11][ 1].im =  0.5*in[11][ 4].re;
  out[11][ 4].re =  0.5*in[11][ 1].im;
  out[11][ 4].im = -0.5*in[11][ 1].re;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re = -0.5*in[ 2][ 5].im;
  out[ 2][ 2].im =  0.5*in[ 2][ 5].re;
  out[ 2][ 5].re =  0.5*in[ 2][ 2].im;
  out[ 2][ 5].im = -0.5*in[ 2][ 2].re;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re = -0.5*in[ 5][ 5].im;
  out[ 5][ 2].im =  0.5*in[ 5][ 5].re;
  out[ 5][ 5].re =  0.5*in[ 5][ 2].im;
  out[ 5][ 5].im = -0.5*in[ 5][ 2].re;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re = -0.5*in[ 8][ 5].im;
  out[ 8][ 2].im =  0.5*in[ 8][ 5].re;
  out[ 8][ 5].re =  0.5*in[ 8][ 2].im;
  out[ 8][ 5].im = -0.5*in[ 8][ 2].re;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re = -0.5*in[11][ 5].im;
  out[11][ 2].im =  0.5*in[11][ 5].re;
  out[11][ 5].re =  0.5*in[11][ 2].im;
  out[11][ 5].im = -0.5*in[11][ 2].re;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_y from the right */
__inline__ void
prop_G_ProjYm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re =  0.5*in[ 0][ 9].im;
  out[ 0][ 6].im = -0.5*in[ 0][ 9].re;
  out[ 0][ 9].re = -0.5*in[ 0][ 6].im;
  out[ 0][ 9].im =  0.5*in[ 0][ 6].re;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re =  0.5*in[ 3][ 9].im;
  out[ 3][ 6].im = -0.5*in[ 3][ 9].re;
  out[ 3][ 9].re = -0.5*in[ 3][ 6].im;
  out[ 3][ 9].im =  0.5*in[ 3][ 6].re;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re =  0.5*in[ 6][ 9].im;
  out[ 6][ 6].im = -0.5*in[ 6][ 9].re;
  out[ 6][ 9].re = -0.5*in[ 6][ 6].im;
  out[ 6][ 9].im =  0.5*in[ 6][ 6].re;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re =  0.5*in[ 9][ 9].im;
  out[ 9][ 6].im = -0.5*in[ 9][ 9].re;
  out[ 9][ 9].re = -0.5*in[ 9][ 6].im;
  out[ 9][ 9].im =  0.5*in[ 9][ 6].re;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re =  0.5*in[ 0][10].im;
  out[ 0][ 7].im = -0.5*in[ 0][10].re;
  out[ 0][10].re = -0.5*in[ 0][ 7].im;
  out[ 0][10].im =  0.5*in[ 0][ 7].re;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re =  0.5*in[ 3][10].im;
  out[ 3][ 7].im = -0.5*in[ 3][10].re;
  out[ 3][10].re = -0.5*in[ 3][ 7].im;
  out[ 3][10].im =  0.5*in[ 3][ 7].re;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re =  0.5*in[ 6][10].im;
  out[ 6][ 7].im = -0.5*in[ 6][10].re;
  out[ 6][10].re = -0.5*in[ 6][ 7].im;
  out[ 6][10].im =  0.5*in[ 6][ 7].re;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re =  0.5*in[ 9][10].im;
  out[ 9][ 7].im = -0.5*in[ 9][10].re;
  out[ 9][10].re = -0.5*in[ 9][ 7].im;
  out[ 9][10].im =  0.5*in[ 9][ 7].re;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re =  0.5*in[ 0][11].im;
  out[ 0][ 8].im = -0.5*in[ 0][11].re;
  out[ 0][11].re = -0.5*in[ 0][ 8].im;
  out[ 0][11].im =  0.5*in[ 0][ 8].re;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re =  0.5*in[ 3][11].im;
  out[ 3][ 8].im = -0.5*in[ 3][11].re;
  out[ 3][11].re = -0.5*in[ 3][ 8].im;
  out[ 3][11].im =  0.5*in[ 3][ 8].re;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re =  0.5*in[ 6][11].im;
  out[ 6][ 8].im = -0.5*in[ 6][11].re;
  out[ 6][11].re = -0.5*in[ 6][ 8].im;
  out[ 6][11].im =  0.5*in[ 6][ 8].re;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re =  0.5*in[ 9][11].im;
  out[ 9][ 8].im = -0.5*in[ 9][11].re;
  out[ 9][11].re = -0.5*in[ 9][ 8].im;
  out[ 9][11].im =  0.5*in[ 9][ 8].re;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re =  0.5*in[ 1][ 9].im;
  out[ 1][ 6].im = -0.5*in[ 1][ 9].re;
  out[ 1][ 9].re = -0.5*in[ 1][ 6].im;
  out[ 1][ 9].im =  0.5*in[ 1][ 6].re;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re =  0.5*in[ 4][ 9].im;
  out[ 4][ 6].im = -0.5*in[ 4][ 9].re;
  out[ 4][ 9].re = -0.5*in[ 4][ 6].im;
  out[ 4][ 9].im =  0.5*in[ 4][ 6].re;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re =  0.5*in[ 7][ 9].im;
  out[ 7][ 6].im = -0.5*in[ 7][ 9].re;
  out[ 7][ 9].re = -0.5*in[ 7][ 6].im;
  out[ 7][ 9].im =  0.5*in[ 7][ 6].re;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re =  0.5*in[10][ 9].im;
  out[10][ 6].im = -0.5*in[10][ 9].re;
  out[10][ 9].re = -0.5*in[10][ 6].im;
  out[10][ 9].im =  0.5*in[10][ 6].re;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re =  0.5*in[ 1][10].im;
  out[ 1][ 7].im = -0.5*in[ 1][10].re;
  out[ 1][10].re = -0.5*in[ 1][ 7].im;
  out[ 1][10].im =  0.5*in[ 1][ 7].re;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re =  0.5*in[ 4][10].im;
  out[ 4][ 7].im = -0.5*in[ 4][10].re;
  out[ 4][10].re = -0.5*in[ 4][ 7].im;
  out[ 4][10].im =  0.5*in[ 4][ 7].re;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re =  0.5*in[ 7][10].im;
  out[ 7][ 7].im = -0.5*in[ 7][10].re;
  out[ 7][10].re = -0.5*in[ 7][ 7].im;
  out[ 7][10].im =  0.5*in[ 7][ 7].re;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re =  0.5*in[10][10].im;
  out[10][ 7].im = -0.5*in[10][10].re;
  out[10][10].re = -0.5*in[10][ 7].im;
  out[10][10].im =  0.5*in[10][ 7].re;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re =  0.5*in[ 1][11].im;
  out[ 1][ 8].im = -0.5*in[ 1][11].re;
  out[ 1][11].re = -0.5*in[ 1][ 8].im;
  out[ 1][11].im =  0.5*in[ 1][ 8].re;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re =  0.5*in[ 4][11].im;
  out[ 4][ 8].im = -0.5*in[ 4][11].re;
  out[ 4][11].re = -0.5*in[ 4][ 8].im;
  out[ 4][11].im =  0.5*in[ 4][ 8].re;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re =  0.5*in[ 7][11].im;
  out[ 7][ 8].im = -0.5*in[ 7][11].re;
  out[ 7][11].re = -0.5*in[ 7][ 8].im;
  out[ 7][11].im =  0.5*in[ 7][ 8].re;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re =  0.5*in[10][11].im;
  out[10][ 8].im = -0.5*in[10][11].re;
  out[10][11].re = -0.5*in[10][ 8].im;
  out[10][11].im =  0.5*in[10][ 8].re;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re =  0.5*in[ 2][ 9].im;
  out[ 2][ 6].im = -0.5*in[ 2][ 9].re;
  out[ 2][ 9].re = -0.5*in[ 2][ 6].im;
  out[ 2][ 9].im =  0.5*in[ 2][ 6].re;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re =  0.5*in[ 5][ 9].im;
  out[ 5][ 6].im = -0.5*in[ 5][ 9].re;
  out[ 5][ 9].re = -0.5*in[ 5][ 6].im;
  out[ 5][ 9].im =  0.5*in[ 5][ 6].re;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re =  0.5*in[ 8][ 9].im;
  out[ 8][ 6].im = -0.5*in[ 8][ 9].re;
  out[ 8][ 9].re = -0.5*in[ 8][ 6].im;
  out[ 8][ 9].im =  0.5*in[ 8][ 6].re;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re =  0.5*in[11][ 9].im;
  out[11][ 6].im = -0.5*in[11][ 9].re;
  out[11][ 9].re = -0.5*in[11][ 6].im;
  out[11][ 9].im =  0.5*in[11][ 6].re;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re =  0.5*in[ 2][10].im;
  out[ 2][ 7].im = -0.5*in[ 2][10].re;
  out[ 2][10].re = -0.5*in[ 2][ 7].im;
  out[ 2][10].im =  0.5*in[ 2][ 7].re;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re =  0.5*in[ 5][10].im;
  out[ 5][ 7].im = -0.5*in[ 5][10].re;
  out[ 5][10].re = -0.5*in[ 5][ 7].im;
  out[ 5][10].im =  0.5*in[ 5][ 7].re;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re =  0.5*in[ 8][10].im;
  out[ 8][ 7].im = -0.5*in[ 8][10].re;
  out[ 8][10].re = -0.5*in[ 8][ 7].im;
  out[ 8][10].im =  0.5*in[ 8][ 7].re;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re =  0.5*in[11][10].im;
  out[11][ 7].im = -0.5*in[11][10].re;
  out[11][10].re = -0.5*in[11][ 7].im;
  out[11][10].im =  0.5*in[11][ 7].re;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re =  0.5*in[ 2][11].im;
  out[ 2][ 8].im = -0.5*in[ 2][11].re;
  out[ 2][11].re = -0.5*in[ 2][ 8].im;
  out[ 2][11].im =  0.5*in[ 2][ 8].re;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re =  0.5*in[ 5][11].im;
  out[ 5][ 8].im = -0.5*in[ 5][11].re;
  out[ 5][11].re = -0.5*in[ 5][ 8].im;
  out[ 5][11].im =  0.5*in[ 5][ 8].re;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re =  0.5*in[ 8][11].im;
  out[ 8][ 8].im = -0.5*in[ 8][11].re;
  out[ 8][11].re = -0.5*in[ 8][ 8].im;
  out[ 8][11].im =  0.5*in[ 8][ 8].re;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re =  0.5*in[11][11].im;
  out[11][ 8].im = -0.5*in[11][11].re;
  out[11][11].re = -0.5*in[11][ 8].im;
  out[11][11].im =  0.5*in[11][ 8].re;


  return;
}

/* multiply prop by i\Gamma^+\gamma_5\gamma_z from the right */
__inline__ void
prop_G_ProjZp(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0.5*in[ 0][ 0].re;
  out[ 0][ 0].im =  0.5*in[ 0][ 0].im;
  out[ 0][ 3].re = -0.5*in[ 0][ 3].re;
  out[ 0][ 3].im = -0.5*in[ 0][ 3].im;
  out[ 0][ 6].re =  0;
  out[ 0][ 6].im =  0;
  out[ 0][ 9].re =  0;
  out[ 0][ 9].im =  0;
  out[ 3][ 0].re =  0.5*in[ 3][ 0].re;
  out[ 3][ 0].im =  0.5*in[ 3][ 0].im;
  out[ 3][ 3].re = -0.5*in[ 3][ 3].re;
  out[ 3][ 3].im = -0.5*in[ 3][ 3].im;
  out[ 3][ 6].re =  0;
  out[ 3][ 6].im =  0;
  out[ 3][ 9].re =  0;
  out[ 3][ 9].im =  0;
  out[ 6][ 0].re =  0.5*in[ 6][ 0].re;
  out[ 6][ 0].im =  0.5*in[ 6][ 0].im;
  out[ 6][ 3].re = -0.5*in[ 6][ 3].re;
  out[ 6][ 3].im = -0.5*in[ 6][ 3].im;
  out[ 6][ 6].re =  0;
  out[ 6][ 6].im =  0;
  out[ 6][ 9].re =  0;
  out[ 6][ 9].im =  0;
  out[ 9][ 0].re =  0.5*in[ 9][ 0].re;
  out[ 9][ 0].im =  0.5*in[ 9][ 0].im;
  out[ 9][ 3].re = -0.5*in[ 9][ 3].re;
  out[ 9][ 3].im = -0.5*in[ 9][ 3].im;
  out[ 9][ 6].re =  0;
  out[ 9][ 6].im =  0;
  out[ 9][ 9].re =  0;
  out[ 9][ 9].im =  0;

  out[ 0][ 1].re =  0.5*in[ 0][ 1].re;
  out[ 0][ 1].im =  0.5*in[ 0][ 1].im;
  out[ 0][ 4].re = -0.5*in[ 0][ 4].re;
  out[ 0][ 4].im = -0.5*in[ 0][ 4].im;
  out[ 0][ 7].re =  0;
  out[ 0][ 7].im =  0;
  out[ 0][10].re =  0;
  out[ 0][10].im =  0;
  out[ 3][ 1].re =  0.5*in[ 3][ 1].re;
  out[ 3][ 1].im =  0.5*in[ 3][ 1].im;
  out[ 3][ 4].re = -0.5*in[ 3][ 4].re;
  out[ 3][ 4].im = -0.5*in[ 3][ 4].im;
  out[ 3][ 7].re =  0;
  out[ 3][ 7].im =  0;
  out[ 3][10].re =  0;
  out[ 3][10].im =  0;
  out[ 6][ 1].re =  0.5*in[ 6][ 1].re;
  out[ 6][ 1].im =  0.5*in[ 6][ 1].im;
  out[ 6][ 4].re = -0.5*in[ 6][ 4].re;
  out[ 6][ 4].im = -0.5*in[ 6][ 4].im;
  out[ 6][ 7].re =  0;
  out[ 6][ 7].im =  0;
  out[ 6][10].re =  0;
  out[ 6][10].im =  0;
  out[ 9][ 1].re =  0.5*in[ 9][ 1].re;
  out[ 9][ 1].im =  0.5*in[ 9][ 1].im;
  out[ 9][ 4].re = -0.5*in[ 9][ 4].re;
  out[ 9][ 4].im = -0.5*in[ 9][ 4].im;
  out[ 9][ 7].re =  0;
  out[ 9][ 7].im =  0;
  out[ 9][10].re =  0;
  out[ 9][10].im =  0;

  out[ 0][ 2].re =  0.5*in[ 0][ 2].re;
  out[ 0][ 2].im =  0.5*in[ 0][ 2].im;
  out[ 0][ 5].re = -0.5*in[ 0][ 5].re;
  out[ 0][ 5].im = -0.5*in[ 0][ 5].im;
  out[ 0][ 8].re =  0;
  out[ 0][ 8].im =  0;
  out[ 0][11].re =  0;
  out[ 0][11].im =  0;
  out[ 3][ 2].re =  0.5*in[ 3][ 2].re;
  out[ 3][ 2].im =  0.5*in[ 3][ 2].im;
  out[ 3][ 5].re = -0.5*in[ 3][ 5].re;
  out[ 3][ 5].im = -0.5*in[ 3][ 5].im;
  out[ 3][ 8].re =  0;
  out[ 3][ 8].im =  0;
  out[ 3][11].re =  0;
  out[ 3][11].im =  0;
  out[ 6][ 2].re =  0.5*in[ 6][ 2].re;
  out[ 6][ 2].im =  0.5*in[ 6][ 2].im;
  out[ 6][ 5].re = -0.5*in[ 6][ 5].re;
  out[ 6][ 5].im = -0.5*in[ 6][ 5].im;
  out[ 6][ 8].re =  0;
  out[ 6][ 8].im =  0;
  out[ 6][11].re =  0;
  out[ 6][11].im =  0;
  out[ 9][ 2].re =  0.5*in[ 9][ 2].re;
  out[ 9][ 2].im =  0.5*in[ 9][ 2].im;
  out[ 9][ 5].re = -0.5*in[ 9][ 5].re;
  out[ 9][ 5].im = -0.5*in[ 9][ 5].im;
  out[ 9][ 8].re =  0;
  out[ 9][ 8].im =  0;
  out[ 9][11].re =  0;
  out[ 9][11].im =  0;

  out[ 1][ 0].re =  0.5*in[ 1][ 0].re;
  out[ 1][ 0].im =  0.5*in[ 1][ 0].im;
  out[ 1][ 3].re = -0.5*in[ 1][ 3].re;
  out[ 1][ 3].im = -0.5*in[ 1][ 3].im;
  out[ 1][ 6].re =  0;
  out[ 1][ 6].im =  0;
  out[ 1][ 9].re =  0;
  out[ 1][ 9].im =  0;
  out[ 4][ 0].re =  0.5*in[ 4][ 0].re;
  out[ 4][ 0].im =  0.5*in[ 4][ 0].im;
  out[ 4][ 3].re = -0.5*in[ 4][ 3].re;
  out[ 4][ 3].im = -0.5*in[ 4][ 3].im;
  out[ 4][ 6].re =  0;
  out[ 4][ 6].im =  0;
  out[ 4][ 9].re =  0;
  out[ 4][ 9].im =  0;
  out[ 7][ 0].re =  0.5*in[ 7][ 0].re;
  out[ 7][ 0].im =  0.5*in[ 7][ 0].im;
  out[ 7][ 3].re = -0.5*in[ 7][ 3].re;
  out[ 7][ 3].im = -0.5*in[ 7][ 3].im;
  out[ 7][ 6].re =  0;
  out[ 7][ 6].im =  0;
  out[ 7][ 9].re =  0;
  out[ 7][ 9].im =  0;
  out[10][ 0].re =  0.5*in[10][ 0].re;
  out[10][ 0].im =  0.5*in[10][ 0].im;
  out[10][ 3].re = -0.5*in[10][ 3].re;
  out[10][ 3].im = -0.5*in[10][ 3].im;
  out[10][ 6].re =  0;
  out[10][ 6].im =  0;
  out[10][ 9].re =  0;
  out[10][ 9].im =  0;

  out[ 1][ 1].re =  0.5*in[ 1][ 1].re;
  out[ 1][ 1].im =  0.5*in[ 1][ 1].im;
  out[ 1][ 4].re = -0.5*in[ 1][ 4].re;
  out[ 1][ 4].im = -0.5*in[ 1][ 4].im;
  out[ 1][ 7].re =  0;
  out[ 1][ 7].im =  0;
  out[ 1][10].re =  0;
  out[ 1][10].im =  0;
  out[ 4][ 1].re =  0.5*in[ 4][ 1].re;
  out[ 4][ 1].im =  0.5*in[ 4][ 1].im;
  out[ 4][ 4].re = -0.5*in[ 4][ 4].re;
  out[ 4][ 4].im = -0.5*in[ 4][ 4].im;
  out[ 4][ 7].re =  0;
  out[ 4][ 7].im =  0;
  out[ 4][10].re =  0;
  out[ 4][10].im =  0;
  out[ 7][ 1].re =  0.5*in[ 7][ 1].re;
  out[ 7][ 1].im =  0.5*in[ 7][ 1].im;
  out[ 7][ 4].re = -0.5*in[ 7][ 4].re;
  out[ 7][ 4].im = -0.5*in[ 7][ 4].im;
  out[ 7][ 7].re =  0;
  out[ 7][ 7].im =  0;
  out[ 7][10].re =  0;
  out[ 7][10].im =  0;
  out[10][ 1].re =  0.5*in[10][ 1].re;
  out[10][ 1].im =  0.5*in[10][ 1].im;
  out[10][ 4].re = -0.5*in[10][ 4].re;
  out[10][ 4].im = -0.5*in[10][ 4].im;
  out[10][ 7].re =  0;
  out[10][ 7].im =  0;
  out[10][10].re =  0;
  out[10][10].im =  0;

  out[ 1][ 2].re =  0.5*in[ 1][ 2].re;
  out[ 1][ 2].im =  0.5*in[ 1][ 2].im;
  out[ 1][ 5].re = -0.5*in[ 1][ 5].re;
  out[ 1][ 5].im = -0.5*in[ 1][ 5].im;
  out[ 1][ 8].re =  0;
  out[ 1][ 8].im =  0;
  out[ 1][11].re =  0;
  out[ 1][11].im =  0;
  out[ 4][ 2].re =  0.5*in[ 4][ 2].re;
  out[ 4][ 2].im =  0.5*in[ 4][ 2].im;
  out[ 4][ 5].re = -0.5*in[ 4][ 5].re;
  out[ 4][ 5].im = -0.5*in[ 4][ 5].im;
  out[ 4][ 8].re =  0;
  out[ 4][ 8].im =  0;
  out[ 4][11].re =  0;
  out[ 4][11].im =  0;
  out[ 7][ 2].re =  0.5*in[ 7][ 2].re;
  out[ 7][ 2].im =  0.5*in[ 7][ 2].im;
  out[ 7][ 5].re = -0.5*in[ 7][ 5].re;
  out[ 7][ 5].im = -0.5*in[ 7][ 5].im;
  out[ 7][ 8].re =  0;
  out[ 7][ 8].im =  0;
  out[ 7][11].re =  0;
  out[ 7][11].im =  0;
  out[10][ 2].re =  0.5*in[10][ 2].re;
  out[10][ 2].im =  0.5*in[10][ 2].im;
  out[10][ 5].re = -0.5*in[10][ 5].re;
  out[10][ 5].im = -0.5*in[10][ 5].im;
  out[10][ 8].re =  0;
  out[10][ 8].im =  0;
  out[10][11].re =  0;
  out[10][11].im =  0;

  out[ 2][ 0].re =  0.5*in[ 2][ 0].re;
  out[ 2][ 0].im =  0.5*in[ 2][ 0].im;
  out[ 2][ 3].re = -0.5*in[ 2][ 3].re;
  out[ 2][ 3].im = -0.5*in[ 2][ 3].im;
  out[ 2][ 6].re =  0;
  out[ 2][ 6].im =  0;
  out[ 2][ 9].re =  0;
  out[ 2][ 9].im =  0;
  out[ 5][ 0].re =  0.5*in[ 5][ 0].re;
  out[ 5][ 0].im =  0.5*in[ 5][ 0].im;
  out[ 5][ 3].re = -0.5*in[ 5][ 3].re;
  out[ 5][ 3].im = -0.5*in[ 5][ 3].im;
  out[ 5][ 6].re =  0;
  out[ 5][ 6].im =  0;
  out[ 5][ 9].re =  0;
  out[ 5][ 9].im =  0;
  out[ 8][ 0].re =  0.5*in[ 8][ 0].re;
  out[ 8][ 0].im =  0.5*in[ 8][ 0].im;
  out[ 8][ 3].re = -0.5*in[ 8][ 3].re;
  out[ 8][ 3].im = -0.5*in[ 8][ 3].im;
  out[ 8][ 6].re =  0;
  out[ 8][ 6].im =  0;
  out[ 8][ 9].re =  0;
  out[ 8][ 9].im =  0;
  out[11][ 0].re =  0.5*in[11][ 0].re;
  out[11][ 0].im =  0.5*in[11][ 0].im;
  out[11][ 3].re = -0.5*in[11][ 3].re;
  out[11][ 3].im = -0.5*in[11][ 3].im;
  out[11][ 6].re =  0;
  out[11][ 6].im =  0;
  out[11][ 9].re =  0;
  out[11][ 9].im =  0;

  out[ 2][ 1].re =  0.5*in[ 2][ 1].re;
  out[ 2][ 1].im =  0.5*in[ 2][ 1].im;
  out[ 2][ 4].re = -0.5*in[ 2][ 4].re;
  out[ 2][ 4].im = -0.5*in[ 2][ 4].im;
  out[ 2][ 7].re =  0;
  out[ 2][ 7].im =  0;
  out[ 2][10].re =  0;
  out[ 2][10].im =  0;
  out[ 5][ 1].re =  0.5*in[ 5][ 1].re;
  out[ 5][ 1].im =  0.5*in[ 5][ 1].im;
  out[ 5][ 4].re = -0.5*in[ 5][ 4].re;
  out[ 5][ 4].im = -0.5*in[ 5][ 4].im;
  out[ 5][ 7].re =  0;
  out[ 5][ 7].im =  0;
  out[ 5][10].re =  0;
  out[ 5][10].im =  0;
  out[ 8][ 1].re =  0.5*in[ 8][ 1].re;
  out[ 8][ 1].im =  0.5*in[ 8][ 1].im;
  out[ 8][ 4].re = -0.5*in[ 8][ 4].re;
  out[ 8][ 4].im = -0.5*in[ 8][ 4].im;
  out[ 8][ 7].re =  0;
  out[ 8][ 7].im =  0;
  out[ 8][10].re =  0;
  out[ 8][10].im =  0;
  out[11][ 1].re =  0.5*in[11][ 1].re;
  out[11][ 1].im =  0.5*in[11][ 1].im;
  out[11][ 4].re = -0.5*in[11][ 4].re;
  out[11][ 4].im = -0.5*in[11][ 4].im;
  out[11][ 7].re =  0;
  out[11][ 7].im =  0;
  out[11][10].re =  0;
  out[11][10].im =  0;

  out[ 2][ 2].re =  0.5*in[ 2][ 2].re;
  out[ 2][ 2].im =  0.5*in[ 2][ 2].im;
  out[ 2][ 5].re = -0.5*in[ 2][ 5].re;
  out[ 2][ 5].im = -0.5*in[ 2][ 5].im;
  out[ 2][ 8].re =  0;
  out[ 2][ 8].im =  0;
  out[ 2][11].re =  0;
  out[ 2][11].im =  0;
  out[ 5][ 2].re =  0.5*in[ 5][ 2].re;
  out[ 5][ 2].im =  0.5*in[ 5][ 2].im;
  out[ 5][ 5].re = -0.5*in[ 5][ 5].re;
  out[ 5][ 5].im = -0.5*in[ 5][ 5].im;
  out[ 5][ 8].re =  0;
  out[ 5][ 8].im =  0;
  out[ 5][11].re =  0;
  out[ 5][11].im =  0;
  out[ 8][ 2].re =  0.5*in[ 8][ 2].re;
  out[ 8][ 2].im =  0.5*in[ 8][ 2].im;
  out[ 8][ 5].re = -0.5*in[ 8][ 5].re;
  out[ 8][ 5].im = -0.5*in[ 8][ 5].im;
  out[ 8][ 8].re =  0;
  out[ 8][ 8].im =  0;
  out[ 8][11].re =  0;
  out[ 8][11].im =  0;
  out[11][ 2].re =  0.5*in[11][ 2].re;
  out[11][ 2].im =  0.5*in[11][ 2].im;
  out[11][ 5].re = -0.5*in[11][ 5].re;
  out[11][ 5].im = -0.5*in[11][ 5].im;
  out[11][ 8].re =  0;
  out[11][ 8].im =  0;
  out[11][11].re =  0;
  out[11][11].im =  0;


  return;
}

/* multiply prop by i\Gamma^-\gamma_5\gamma_z from the right */
__inline__ void
prop_G_ProjZm(qpb_complex out[NS*NC][NS*NC], qpb_complex in[NS*NC][NS*NC])
{
  out[ 0][ 0].re =  0;
  out[ 0][ 0].im =  0;
  out[ 0][ 3].re =  0;
  out[ 0][ 3].im =  0;
  out[ 0][ 6].re = -0.5*in[ 0][ 6].re;
  out[ 0][ 6].im = -0.5*in[ 0][ 6].im;
  out[ 0][ 9].re =  0.5*in[ 0][ 9].re;
  out[ 0][ 9].im =  0.5*in[ 0][ 9].im;
  out[ 3][ 0].re =  0;
  out[ 3][ 0].im =  0;
  out[ 3][ 3].re =  0;
  out[ 3][ 3].im =  0;
  out[ 3][ 6].re = -0.5*in[ 3][ 6].re;
  out[ 3][ 6].im = -0.5*in[ 3][ 6].im;
  out[ 3][ 9].re =  0.5*in[ 3][ 9].re;
  out[ 3][ 9].im =  0.5*in[ 3][ 9].im;
  out[ 6][ 0].re =  0;
  out[ 6][ 0].im =  0;
  out[ 6][ 3].re =  0;
  out[ 6][ 3].im =  0;
  out[ 6][ 6].re = -0.5*in[ 6][ 6].re;
  out[ 6][ 6].im = -0.5*in[ 6][ 6].im;
  out[ 6][ 9].re =  0.5*in[ 6][ 9].re;
  out[ 6][ 9].im =  0.5*in[ 6][ 9].im;
  out[ 9][ 0].re =  0;
  out[ 9][ 0].im =  0;
  out[ 9][ 3].re =  0;
  out[ 9][ 3].im =  0;
  out[ 9][ 6].re = -0.5*in[ 9][ 6].re;
  out[ 9][ 6].im = -0.5*in[ 9][ 6].im;
  out[ 9][ 9].re =  0.5*in[ 9][ 9].re;
  out[ 9][ 9].im =  0.5*in[ 9][ 9].im;

  out[ 0][ 1].re =  0;
  out[ 0][ 1].im =  0;
  out[ 0][ 4].re =  0;
  out[ 0][ 4].im =  0;
  out[ 0][ 7].re = -0.5*in[ 0][ 7].re;
  out[ 0][ 7].im = -0.5*in[ 0][ 7].im;
  out[ 0][10].re =  0.5*in[ 0][10].re;
  out[ 0][10].im =  0.5*in[ 0][10].im;
  out[ 3][ 1].re =  0;
  out[ 3][ 1].im =  0;
  out[ 3][ 4].re =  0;
  out[ 3][ 4].im =  0;
  out[ 3][ 7].re = -0.5*in[ 3][ 7].re;
  out[ 3][ 7].im = -0.5*in[ 3][ 7].im;
  out[ 3][10].re =  0.5*in[ 3][10].re;
  out[ 3][10].im =  0.5*in[ 3][10].im;
  out[ 6][ 1].re =  0;
  out[ 6][ 1].im =  0;
  out[ 6][ 4].re =  0;
  out[ 6][ 4].im =  0;
  out[ 6][ 7].re = -0.5*in[ 6][ 7].re;
  out[ 6][ 7].im = -0.5*in[ 6][ 7].im;
  out[ 6][10].re =  0.5*in[ 6][10].re;
  out[ 6][10].im =  0.5*in[ 6][10].im;
  out[ 9][ 1].re =  0;
  out[ 9][ 1].im =  0;
  out[ 9][ 4].re =  0;
  out[ 9][ 4].im =  0;
  out[ 9][ 7].re = -0.5*in[ 9][ 7].re;
  out[ 9][ 7].im = -0.5*in[ 9][ 7].im;
  out[ 9][10].re =  0.5*in[ 9][10].re;
  out[ 9][10].im =  0.5*in[ 9][10].im;

  out[ 0][ 2].re =  0;
  out[ 0][ 2].im =  0;
  out[ 0][ 5].re =  0;
  out[ 0][ 5].im =  0;
  out[ 0][ 8].re = -0.5*in[ 0][ 8].re;
  out[ 0][ 8].im = -0.5*in[ 0][ 8].im;
  out[ 0][11].re =  0.5*in[ 0][11].re;
  out[ 0][11].im =  0.5*in[ 0][11].im;
  out[ 3][ 2].re =  0;
  out[ 3][ 2].im =  0;
  out[ 3][ 5].re =  0;
  out[ 3][ 5].im =  0;
  out[ 3][ 8].re = -0.5*in[ 3][ 8].re;
  out[ 3][ 8].im = -0.5*in[ 3][ 8].im;
  out[ 3][11].re =  0.5*in[ 3][11].re;
  out[ 3][11].im =  0.5*in[ 3][11].im;
  out[ 6][ 2].re =  0;
  out[ 6][ 2].im =  0;
  out[ 6][ 5].re =  0;
  out[ 6][ 5].im =  0;
  out[ 6][ 8].re = -0.5*in[ 6][ 8].re;
  out[ 6][ 8].im = -0.5*in[ 6][ 8].im;
  out[ 6][11].re =  0.5*in[ 6][11].re;
  out[ 6][11].im =  0.5*in[ 6][11].im;
  out[ 9][ 2].re =  0;
  out[ 9][ 2].im =  0;
  out[ 9][ 5].re =  0;
  out[ 9][ 5].im =  0;
  out[ 9][ 8].re = -0.5*in[ 9][ 8].re;
  out[ 9][ 8].im = -0.5*in[ 9][ 8].im;
  out[ 9][11].re =  0.5*in[ 9][11].re;
  out[ 9][11].im =  0.5*in[ 9][11].im;

  out[ 1][ 0].re =  0;
  out[ 1][ 0].im =  0;
  out[ 1][ 3].re =  0;
  out[ 1][ 3].im =  0;
  out[ 1][ 6].re = -0.5*in[ 1][ 6].re;
  out[ 1][ 6].im = -0.5*in[ 1][ 6].im;
  out[ 1][ 9].re =  0.5*in[ 1][ 9].re;
  out[ 1][ 9].im =  0.5*in[ 1][ 9].im;
  out[ 4][ 0].re =  0;
  out[ 4][ 0].im =  0;
  out[ 4][ 3].re =  0;
  out[ 4][ 3].im =  0;
  out[ 4][ 6].re = -0.5*in[ 4][ 6].re;
  out[ 4][ 6].im = -0.5*in[ 4][ 6].im;
  out[ 4][ 9].re =  0.5*in[ 4][ 9].re;
  out[ 4][ 9].im =  0.5*in[ 4][ 9].im;
  out[ 7][ 0].re =  0;
  out[ 7][ 0].im =  0;
  out[ 7][ 3].re =  0;
  out[ 7][ 3].im =  0;
  out[ 7][ 6].re = -0.5*in[ 7][ 6].re;
  out[ 7][ 6].im = -0.5*in[ 7][ 6].im;
  out[ 7][ 9].re =  0.5*in[ 7][ 9].re;
  out[ 7][ 9].im =  0.5*in[ 7][ 9].im;
  out[10][ 0].re =  0;
  out[10][ 0].im =  0;
  out[10][ 3].re =  0;
  out[10][ 3].im =  0;
  out[10][ 6].re = -0.5*in[10][ 6].re;
  out[10][ 6].im = -0.5*in[10][ 6].im;
  out[10][ 9].re =  0.5*in[10][ 9].re;
  out[10][ 9].im =  0.5*in[10][ 9].im;

  out[ 1][ 1].re =  0;
  out[ 1][ 1].im =  0;
  out[ 1][ 4].re =  0;
  out[ 1][ 4].im =  0;
  out[ 1][ 7].re = -0.5*in[ 1][ 7].re;
  out[ 1][ 7].im = -0.5*in[ 1][ 7].im;
  out[ 1][10].re =  0.5*in[ 1][10].re;
  out[ 1][10].im =  0.5*in[ 1][10].im;
  out[ 4][ 1].re =  0;
  out[ 4][ 1].im =  0;
  out[ 4][ 4].re =  0;
  out[ 4][ 4].im =  0;
  out[ 4][ 7].re = -0.5*in[ 4][ 7].re;
  out[ 4][ 7].im = -0.5*in[ 4][ 7].im;
  out[ 4][10].re =  0.5*in[ 4][10].re;
  out[ 4][10].im =  0.5*in[ 4][10].im;
  out[ 7][ 1].re =  0;
  out[ 7][ 1].im =  0;
  out[ 7][ 4].re =  0;
  out[ 7][ 4].im =  0;
  out[ 7][ 7].re = -0.5*in[ 7][ 7].re;
  out[ 7][ 7].im = -0.5*in[ 7][ 7].im;
  out[ 7][10].re =  0.5*in[ 7][10].re;
  out[ 7][10].im =  0.5*in[ 7][10].im;
  out[10][ 1].re =  0;
  out[10][ 1].im =  0;
  out[10][ 4].re =  0;
  out[10][ 4].im =  0;
  out[10][ 7].re = -0.5*in[10][ 7].re;
  out[10][ 7].im = -0.5*in[10][ 7].im;
  out[10][10].re =  0.5*in[10][10].re;
  out[10][10].im =  0.5*in[10][10].im;

  out[ 1][ 2].re =  0;
  out[ 1][ 2].im =  0;
  out[ 1][ 5].re =  0;
  out[ 1][ 5].im =  0;
  out[ 1][ 8].re = -0.5*in[ 1][ 8].re;
  out[ 1][ 8].im = -0.5*in[ 1][ 8].im;
  out[ 1][11].re =  0.5*in[ 1][11].re;
  out[ 1][11].im =  0.5*in[ 1][11].im;
  out[ 4][ 2].re =  0;
  out[ 4][ 2].im =  0;
  out[ 4][ 5].re =  0;
  out[ 4][ 5].im =  0;
  out[ 4][ 8].re = -0.5*in[ 4][ 8].re;
  out[ 4][ 8].im = -0.5*in[ 4][ 8].im;
  out[ 4][11].re =  0.5*in[ 4][11].re;
  out[ 4][11].im =  0.5*in[ 4][11].im;
  out[ 7][ 2].re =  0;
  out[ 7][ 2].im =  0;
  out[ 7][ 5].re =  0;
  out[ 7][ 5].im =  0;
  out[ 7][ 8].re = -0.5*in[ 7][ 8].re;
  out[ 7][ 8].im = -0.5*in[ 7][ 8].im;
  out[ 7][11].re =  0.5*in[ 7][11].re;
  out[ 7][11].im =  0.5*in[ 7][11].im;
  out[10][ 2].re =  0;
  out[10][ 2].im =  0;
  out[10][ 5].re =  0;
  out[10][ 5].im =  0;
  out[10][ 8].re = -0.5*in[10][ 8].re;
  out[10][ 8].im = -0.5*in[10][ 8].im;
  out[10][11].re =  0.5*in[10][11].re;
  out[10][11].im =  0.5*in[10][11].im;

  out[ 2][ 0].re =  0;
  out[ 2][ 0].im =  0;
  out[ 2][ 3].re =  0;
  out[ 2][ 3].im =  0;
  out[ 2][ 6].re = -0.5*in[ 2][ 6].re;
  out[ 2][ 6].im = -0.5*in[ 2][ 6].im;
  out[ 2][ 9].re =  0.5*in[ 2][ 9].re;
  out[ 2][ 9].im =  0.5*in[ 2][ 9].im;
  out[ 5][ 0].re =  0;
  out[ 5][ 0].im =  0;
  out[ 5][ 3].re =  0;
  out[ 5][ 3].im =  0;
  out[ 5][ 6].re = -0.5*in[ 5][ 6].re;
  out[ 5][ 6].im = -0.5*in[ 5][ 6].im;
  out[ 5][ 9].re =  0.5*in[ 5][ 9].re;
  out[ 5][ 9].im =  0.5*in[ 5][ 9].im;
  out[ 8][ 0].re =  0;
  out[ 8][ 0].im =  0;
  out[ 8][ 3].re =  0;
  out[ 8][ 3].im =  0;
  out[ 8][ 6].re = -0.5*in[ 8][ 6].re;
  out[ 8][ 6].im = -0.5*in[ 8][ 6].im;
  out[ 8][ 9].re =  0.5*in[ 8][ 9].re;
  out[ 8][ 9].im =  0.5*in[ 8][ 9].im;
  out[11][ 0].re =  0;
  out[11][ 0].im =  0;
  out[11][ 3].re =  0;
  out[11][ 3].im =  0;
  out[11][ 6].re = -0.5*in[11][ 6].re;
  out[11][ 6].im = -0.5*in[11][ 6].im;
  out[11][ 9].re =  0.5*in[11][ 9].re;
  out[11][ 9].im =  0.5*in[11][ 9].im;

  out[ 2][ 1].re =  0;
  out[ 2][ 1].im =  0;
  out[ 2][ 4].re =  0;
  out[ 2][ 4].im =  0;
  out[ 2][ 7].re = -0.5*in[ 2][ 7].re;
  out[ 2][ 7].im = -0.5*in[ 2][ 7].im;
  out[ 2][10].re =  0.5*in[ 2][10].re;
  out[ 2][10].im =  0.5*in[ 2][10].im;
  out[ 5][ 1].re =  0;
  out[ 5][ 1].im =  0;
  out[ 5][ 4].re =  0;
  out[ 5][ 4].im =  0;
  out[ 5][ 7].re = -0.5*in[ 5][ 7].re;
  out[ 5][ 7].im = -0.5*in[ 5][ 7].im;
  out[ 5][10].re =  0.5*in[ 5][10].re;
  out[ 5][10].im =  0.5*in[ 5][10].im;
  out[ 8][ 1].re =  0;
  out[ 8][ 1].im =  0;
  out[ 8][ 4].re =  0;
  out[ 8][ 4].im =  0;
  out[ 8][ 7].re = -0.5*in[ 8][ 7].re;
  out[ 8][ 7].im = -0.5*in[ 8][ 7].im;
  out[ 8][10].re =  0.5*in[ 8][10].re;
  out[ 8][10].im =  0.5*in[ 8][10].im;
  out[11][ 1].re =  0;
  out[11][ 1].im =  0;
  out[11][ 4].re =  0;
  out[11][ 4].im =  0;
  out[11][ 7].re = -0.5*in[11][ 7].re;
  out[11][ 7].im = -0.5*in[11][ 7].im;
  out[11][10].re =  0.5*in[11][10].re;
  out[11][10].im =  0.5*in[11][10].im;

  out[ 2][ 2].re =  0;
  out[ 2][ 2].im =  0;
  out[ 2][ 5].re =  0;
  out[ 2][ 5].im =  0;
  out[ 2][ 8].re = -0.5*in[ 2][ 8].re;
  out[ 2][ 8].im = -0.5*in[ 2][ 8].im;
  out[ 2][11].re =  0.5*in[ 2][11].re;
  out[ 2][11].im =  0.5*in[ 2][11].im;
  out[ 5][ 2].re =  0;
  out[ 5][ 2].im =  0;
  out[ 5][ 5].re =  0;
  out[ 5][ 5].im =  0;
  out[ 5][ 8].re = -0.5*in[ 5][ 8].re;
  out[ 5][ 8].im = -0.5*in[ 5][ 8].im;
  out[ 5][11].re =  0.5*in[ 5][11].re;
  out[ 5][11].im =  0.5*in[ 5][11].im;
  out[ 8][ 2].re =  0;
  out[ 8][ 2].im =  0;
  out[ 8][ 5].re =  0;
  out[ 8][ 5].im =  0;
  out[ 8][ 8].re = -0.5*in[ 8][ 8].re;
  out[ 8][ 8].im = -0.5*in[ 8][ 8].im;
  out[ 8][11].re =  0.5*in[ 8][11].re;
  out[ 8][11].im =  0.5*in[ 8][11].im;
  out[11][ 2].re =  0;
  out[11][ 2].im =  0;
  out[11][ 5].re =  0;
  out[11][ 5].im =  0;
  out[11][ 8].re = -0.5*in[11][ 8].re;
  out[11][ 8].im = -0.5*in[11][ 8].im;
  out[11][11].re =  0.5*in[11][11].re;
  out[11][11].im =  0.5*in[11][11].im;


  return;
}

__inline__ void
prop_G_dag(qpb_complex B[NC*NS][NC*NS], qpb_complex A[NC*NS][NC*NS])
{

  B[ 0][ 0].re = A[ 0][ 0].re;

  B[ 0][ 0].im = -A[ 0][ 0].im;

  B[ 0][ 1].re = A[ 1][ 0].re;

  B[ 0][ 1].im = -A[ 1][ 0].im;

  B[ 0][ 2].re = A[ 2][ 0].re;

  B[ 0][ 2].im = -A[ 2][ 0].im;

  B[ 0][ 3].re = A[ 3][ 0].re;

  B[ 0][ 3].im = -A[ 3][ 0].im;

  B[ 0][ 4].re = A[ 4][ 0].re;

  B[ 0][ 4].im = -A[ 4][ 0].im;

  B[ 0][ 5].re = A[ 5][ 0].re;

  B[ 0][ 5].im = -A[ 5][ 0].im;

  B[ 0][ 6].re = A[ 6][ 0].re;

  B[ 0][ 6].im = -A[ 6][ 0].im;

  B[ 0][ 7].re = A[ 7][ 0].re;

  B[ 0][ 7].im = -A[ 7][ 0].im;

  B[ 0][ 8].re = A[ 8][ 0].re;

  B[ 0][ 8].im = -A[ 8][ 0].im;

  B[ 0][ 9].re = A[ 9][ 0].re;

  B[ 0][ 9].im = -A[ 9][ 0].im;

  B[ 0][10].re = A[10][ 0].re;

  B[ 0][10].im = -A[10][ 0].im;

  B[ 0][11].re = A[11][ 0].re;

  B[ 0][11].im = -A[11][ 0].im;

  B[ 1][ 0].re = A[ 0][ 1].re;

  B[ 1][ 0].im = -A[ 0][ 1].im;

  B[ 1][ 1].re = A[ 1][ 1].re;

  B[ 1][ 1].im = -A[ 1][ 1].im;

  B[ 1][ 2].re = A[ 2][ 1].re;

  B[ 1][ 2].im = -A[ 2][ 1].im;

  B[ 1][ 3].re = A[ 3][ 1].re;

  B[ 1][ 3].im = -A[ 3][ 1].im;

  B[ 1][ 4].re = A[ 4][ 1].re;

  B[ 1][ 4].im = -A[ 4][ 1].im;

  B[ 1][ 5].re = A[ 5][ 1].re;

  B[ 1][ 5].im = -A[ 5][ 1].im;

  B[ 1][ 6].re = A[ 6][ 1].re;

  B[ 1][ 6].im = -A[ 6][ 1].im;

  B[ 1][ 7].re = A[ 7][ 1].re;

  B[ 1][ 7].im = -A[ 7][ 1].im;

  B[ 1][ 8].re = A[ 8][ 1].re;

  B[ 1][ 8].im = -A[ 8][ 1].im;

  B[ 1][ 9].re = A[ 9][ 1].re;

  B[ 1][ 9].im = -A[ 9][ 1].im;

  B[ 1][10].re = A[10][ 1].re;

  B[ 1][10].im = -A[10][ 1].im;

  B[ 1][11].re = A[11][ 1].re;

  B[ 1][11].im = -A[11][ 1].im;

  B[ 2][ 0].re = A[ 0][ 2].re;

  B[ 2][ 0].im = -A[ 0][ 2].im;

  B[ 2][ 1].re = A[ 1][ 2].re;

  B[ 2][ 1].im = -A[ 1][ 2].im;

  B[ 2][ 2].re = A[ 2][ 2].re;

  B[ 2][ 2].im = -A[ 2][ 2].im;

  B[ 2][ 3].re = A[ 3][ 2].re;

  B[ 2][ 3].im = -A[ 3][ 2].im;

  B[ 2][ 4].re = A[ 4][ 2].re;

  B[ 2][ 4].im = -A[ 4][ 2].im;

  B[ 2][ 5].re = A[ 5][ 2].re;

  B[ 2][ 5].im = -A[ 5][ 2].im;

  B[ 2][ 6].re = A[ 6][ 2].re;

  B[ 2][ 6].im = -A[ 6][ 2].im;

  B[ 2][ 7].re = A[ 7][ 2].re;

  B[ 2][ 7].im = -A[ 7][ 2].im;

  B[ 2][ 8].re = A[ 8][ 2].re;

  B[ 2][ 8].im = -A[ 8][ 2].im;

  B[ 2][ 9].re = A[ 9][ 2].re;

  B[ 2][ 9].im = -A[ 9][ 2].im;

  B[ 2][10].re = A[10][ 2].re;

  B[ 2][10].im = -A[10][ 2].im;

  B[ 2][11].re = A[11][ 2].re;

  B[ 2][11].im = -A[11][ 2].im;

  B[ 3][ 0].re = A[ 0][ 3].re;

  B[ 3][ 0].im = -A[ 0][ 3].im;

  B[ 3][ 1].re = A[ 1][ 3].re;

  B[ 3][ 1].im = -A[ 1][ 3].im;

  B[ 3][ 2].re = A[ 2][ 3].re;

  B[ 3][ 2].im = -A[ 2][ 3].im;

  B[ 3][ 3].re = A[ 3][ 3].re;

  B[ 3][ 3].im = -A[ 3][ 3].im;

  B[ 3][ 4].re = A[ 4][ 3].re;

  B[ 3][ 4].im = -A[ 4][ 3].im;

  B[ 3][ 5].re = A[ 5][ 3].re;

  B[ 3][ 5].im = -A[ 5][ 3].im;

  B[ 3][ 6].re = A[ 6][ 3].re;

  B[ 3][ 6].im = -A[ 6][ 3].im;

  B[ 3][ 7].re = A[ 7][ 3].re;

  B[ 3][ 7].im = -A[ 7][ 3].im;

  B[ 3][ 8].re = A[ 8][ 3].re;

  B[ 3][ 8].im = -A[ 8][ 3].im;

  B[ 3][ 9].re = A[ 9][ 3].re;

  B[ 3][ 9].im = -A[ 9][ 3].im;

  B[ 3][10].re = A[10][ 3].re;

  B[ 3][10].im = -A[10][ 3].im;

  B[ 3][11].re = A[11][ 3].re;

  B[ 3][11].im = -A[11][ 3].im;

  B[ 4][ 0].re = A[ 0][ 4].re;

  B[ 4][ 0].im = -A[ 0][ 4].im;

  B[ 4][ 1].re = A[ 1][ 4].re;

  B[ 4][ 1].im = -A[ 1][ 4].im;

  B[ 4][ 2].re = A[ 2][ 4].re;

  B[ 4][ 2].im = -A[ 2][ 4].im;

  B[ 4][ 3].re = A[ 3][ 4].re;

  B[ 4][ 3].im = -A[ 3][ 4].im;

  B[ 4][ 4].re = A[ 4][ 4].re;

  B[ 4][ 4].im = -A[ 4][ 4].im;

  B[ 4][ 5].re = A[ 5][ 4].re;

  B[ 4][ 5].im = -A[ 5][ 4].im;

  B[ 4][ 6].re = A[ 6][ 4].re;

  B[ 4][ 6].im = -A[ 6][ 4].im;

  B[ 4][ 7].re = A[ 7][ 4].re;

  B[ 4][ 7].im = -A[ 7][ 4].im;

  B[ 4][ 8].re = A[ 8][ 4].re;

  B[ 4][ 8].im = -A[ 8][ 4].im;

  B[ 4][ 9].re = A[ 9][ 4].re;

  B[ 4][ 9].im = -A[ 9][ 4].im;

  B[ 4][10].re = A[10][ 4].re;

  B[ 4][10].im = -A[10][ 4].im;

  B[ 4][11].re = A[11][ 4].re;

  B[ 4][11].im = -A[11][ 4].im;

  B[ 5][ 0].re = A[ 0][ 5].re;

  B[ 5][ 0].im = -A[ 0][ 5].im;

  B[ 5][ 1].re = A[ 1][ 5].re;

  B[ 5][ 1].im = -A[ 1][ 5].im;

  B[ 5][ 2].re = A[ 2][ 5].re;

  B[ 5][ 2].im = -A[ 2][ 5].im;

  B[ 5][ 3].re = A[ 3][ 5].re;

  B[ 5][ 3].im = -A[ 3][ 5].im;

  B[ 5][ 4].re = A[ 4][ 5].re;

  B[ 5][ 4].im = -A[ 4][ 5].im;

  B[ 5][ 5].re = A[ 5][ 5].re;

  B[ 5][ 5].im = -A[ 5][ 5].im;

  B[ 5][ 6].re = A[ 6][ 5].re;

  B[ 5][ 6].im = -A[ 6][ 5].im;

  B[ 5][ 7].re = A[ 7][ 5].re;

  B[ 5][ 7].im = -A[ 7][ 5].im;

  B[ 5][ 8].re = A[ 8][ 5].re;

  B[ 5][ 8].im = -A[ 8][ 5].im;

  B[ 5][ 9].re = A[ 9][ 5].re;

  B[ 5][ 9].im = -A[ 9][ 5].im;

  B[ 5][10].re = A[10][ 5].re;

  B[ 5][10].im = -A[10][ 5].im;

  B[ 5][11].re = A[11][ 5].re;

  B[ 5][11].im = -A[11][ 5].im;

  B[ 6][ 0].re = A[ 0][ 6].re;

  B[ 6][ 0].im = -A[ 0][ 6].im;

  B[ 6][ 1].re = A[ 1][ 6].re;

  B[ 6][ 1].im = -A[ 1][ 6].im;

  B[ 6][ 2].re = A[ 2][ 6].re;

  B[ 6][ 2].im = -A[ 2][ 6].im;

  B[ 6][ 3].re = A[ 3][ 6].re;

  B[ 6][ 3].im = -A[ 3][ 6].im;

  B[ 6][ 4].re = A[ 4][ 6].re;

  B[ 6][ 4].im = -A[ 4][ 6].im;

  B[ 6][ 5].re = A[ 5][ 6].re;

  B[ 6][ 5].im = -A[ 5][ 6].im;

  B[ 6][ 6].re = A[ 6][ 6].re;

  B[ 6][ 6].im = -A[ 6][ 6].im;

  B[ 6][ 7].re = A[ 7][ 6].re;

  B[ 6][ 7].im = -A[ 7][ 6].im;

  B[ 6][ 8].re = A[ 8][ 6].re;

  B[ 6][ 8].im = -A[ 8][ 6].im;

  B[ 6][ 9].re = A[ 9][ 6].re;

  B[ 6][ 9].im = -A[ 9][ 6].im;

  B[ 6][10].re = A[10][ 6].re;

  B[ 6][10].im = -A[10][ 6].im;

  B[ 6][11].re = A[11][ 6].re;

  B[ 6][11].im = -A[11][ 6].im;

  B[ 7][ 0].re = A[ 0][ 7].re;

  B[ 7][ 0].im = -A[ 0][ 7].im;

  B[ 7][ 1].re = A[ 1][ 7].re;

  B[ 7][ 1].im = -A[ 1][ 7].im;

  B[ 7][ 2].re = A[ 2][ 7].re;

  B[ 7][ 2].im = -A[ 2][ 7].im;

  B[ 7][ 3].re = A[ 3][ 7].re;

  B[ 7][ 3].im = -A[ 3][ 7].im;

  B[ 7][ 4].re = A[ 4][ 7].re;

  B[ 7][ 4].im = -A[ 4][ 7].im;

  B[ 7][ 5].re = A[ 5][ 7].re;

  B[ 7][ 5].im = -A[ 5][ 7].im;

  B[ 7][ 6].re = A[ 6][ 7].re;

  B[ 7][ 6].im = -A[ 6][ 7].im;

  B[ 7][ 7].re = A[ 7][ 7].re;

  B[ 7][ 7].im = -A[ 7][ 7].im;

  B[ 7][ 8].re = A[ 8][ 7].re;

  B[ 7][ 8].im = -A[ 8][ 7].im;

  B[ 7][ 9].re = A[ 9][ 7].re;

  B[ 7][ 9].im = -A[ 9][ 7].im;

  B[ 7][10].re = A[10][ 7].re;

  B[ 7][10].im = -A[10][ 7].im;

  B[ 7][11].re = A[11][ 7].re;

  B[ 7][11].im = -A[11][ 7].im;

  B[ 8][ 0].re = A[ 0][ 8].re;

  B[ 8][ 0].im = -A[ 0][ 8].im;

  B[ 8][ 1].re = A[ 1][ 8].re;

  B[ 8][ 1].im = -A[ 1][ 8].im;

  B[ 8][ 2].re = A[ 2][ 8].re;

  B[ 8][ 2].im = -A[ 2][ 8].im;

  B[ 8][ 3].re = A[ 3][ 8].re;

  B[ 8][ 3].im = -A[ 3][ 8].im;

  B[ 8][ 4].re = A[ 4][ 8].re;

  B[ 8][ 4].im = -A[ 4][ 8].im;

  B[ 8][ 5].re = A[ 5][ 8].re;

  B[ 8][ 5].im = -A[ 5][ 8].im;

  B[ 8][ 6].re = A[ 6][ 8].re;

  B[ 8][ 6].im = -A[ 6][ 8].im;

  B[ 8][ 7].re = A[ 7][ 8].re;

  B[ 8][ 7].im = -A[ 7][ 8].im;

  B[ 8][ 8].re = A[ 8][ 8].re;

  B[ 8][ 8].im = -A[ 8][ 8].im;

  B[ 8][ 9].re = A[ 9][ 8].re;

  B[ 8][ 9].im = -A[ 9][ 8].im;

  B[ 8][10].re = A[10][ 8].re;

  B[ 8][10].im = -A[10][ 8].im;

  B[ 8][11].re = A[11][ 8].re;

  B[ 8][11].im = -A[11][ 8].im;

  B[ 9][ 0].re = A[ 0][ 9].re;

  B[ 9][ 0].im = -A[ 0][ 9].im;

  B[ 9][ 1].re = A[ 1][ 9].re;

  B[ 9][ 1].im = -A[ 1][ 9].im;

  B[ 9][ 2].re = A[ 2][ 9].re;

  B[ 9][ 2].im = -A[ 2][ 9].im;

  B[ 9][ 3].re = A[ 3][ 9].re;

  B[ 9][ 3].im = -A[ 3][ 9].im;

  B[ 9][ 4].re = A[ 4][ 9].re;

  B[ 9][ 4].im = -A[ 4][ 9].im;

  B[ 9][ 5].re = A[ 5][ 9].re;

  B[ 9][ 5].im = -A[ 5][ 9].im;

  B[ 9][ 6].re = A[ 6][ 9].re;

  B[ 9][ 6].im = -A[ 6][ 9].im;

  B[ 9][ 7].re = A[ 7][ 9].re;

  B[ 9][ 7].im = -A[ 7][ 9].im;

  B[ 9][ 8].re = A[ 8][ 9].re;

  B[ 9][ 8].im = -A[ 8][ 9].im;

  B[ 9][ 9].re = A[ 9][ 9].re;

  B[ 9][ 9].im = -A[ 9][ 9].im;

  B[ 9][10].re = A[10][ 9].re;

  B[ 9][10].im = -A[10][ 9].im;

  B[ 9][11].re = A[11][ 9].re;

  B[ 9][11].im = -A[11][ 9].im;

  B[10][ 0].re = A[ 0][10].re;

  B[10][ 0].im = -A[ 0][10].im;

  B[10][ 1].re = A[ 1][10].re;

  B[10][ 1].im = -A[ 1][10].im;

  B[10][ 2].re = A[ 2][10].re;

  B[10][ 2].im = -A[ 2][10].im;

  B[10][ 3].re = A[ 3][10].re;

  B[10][ 3].im = -A[ 3][10].im;

  B[10][ 4].re = A[ 4][10].re;

  B[10][ 4].im = -A[ 4][10].im;

  B[10][ 5].re = A[ 5][10].re;

  B[10][ 5].im = -A[ 5][10].im;

  B[10][ 6].re = A[ 6][10].re;

  B[10][ 6].im = -A[ 6][10].im;

  B[10][ 7].re = A[ 7][10].re;

  B[10][ 7].im = -A[ 7][10].im;

  B[10][ 8].re = A[ 8][10].re;

  B[10][ 8].im = -A[ 8][10].im;

  B[10][ 9].re = A[ 9][10].re;

  B[10][ 9].im = -A[ 9][10].im;

  B[10][10].re = A[10][10].re;

  B[10][10].im = -A[10][10].im;

  B[10][11].re = A[11][10].re;

  B[10][11].im = -A[11][10].im;

  B[11][ 0].re = A[ 0][11].re;

  B[11][ 0].im = -A[ 0][11].im;

  B[11][ 1].re = A[ 1][11].re;

  B[11][ 1].im = -A[ 1][11].im;

  B[11][ 2].re = A[ 2][11].re;

  B[11][ 2].im = -A[ 2][11].im;

  B[11][ 3].re = A[ 3][11].re;

  B[11][ 3].im = -A[ 3][11].im;

  B[11][ 4].re = A[ 4][11].re;

  B[11][ 4].im = -A[ 4][11].im;

  B[11][ 5].re = A[ 5][11].re;

  B[11][ 5].im = -A[ 5][11].im;

  B[11][ 6].re = A[ 6][11].re;

  B[11][ 6].im = -A[ 6][11].im;

  B[11][ 7].re = A[ 7][11].re;

  B[11][ 7].im = -A[ 7][11].im;

  B[11][ 8].re = A[ 8][11].re;

  B[11][ 8].im = -A[ 8][11].im;

  B[11][ 9].re = A[ 9][11].re;

  B[11][ 9].im = -A[ 9][11].im;

  B[11][10].re = A[10][11].re;

  B[11][10].im = -A[10][11].im;

  B[11][11].re = A[11][11].re;

  B[11][11].im = -A[11][11].im;

  return;
}

__inline__ void
prop_G_G(qpb_complex C[NC*NS][NC*NS], qpb_complex A[NC*NS][NC*NS], qpb_complex B[NC*NS][NC*NS])
{

  C[ 0][ 0].re = 
	-A[ 0][ 0].im*B[ 0][ 0].im 
	+A[ 0][ 0].re*B[ 0][ 0].re 
	-A[ 0][ 1].im*B[ 1][ 0].im 
	+A[ 0][ 1].re*B[ 1][ 0].re 
	-A[ 0][ 2].im*B[ 2][ 0].im 
	+A[ 0][ 2].re*B[ 2][ 0].re 
	-A[ 0][ 3].im*B[ 3][ 0].im 
	+A[ 0][ 3].re*B[ 3][ 0].re 
	-A[ 0][ 4].im*B[ 4][ 0].im 
	+A[ 0][ 4].re*B[ 4][ 0].re 
	-A[ 0][ 5].im*B[ 5][ 0].im 
	+A[ 0][ 5].re*B[ 5][ 0].re 
	-A[ 0][ 6].im*B[ 6][ 0].im 
	+A[ 0][ 6].re*B[ 6][ 0].re 
	-A[ 0][ 7].im*B[ 7][ 0].im 
	+A[ 0][ 7].re*B[ 7][ 0].re 
	-A[ 0][ 8].im*B[ 8][ 0].im 
	+A[ 0][ 8].re*B[ 8][ 0].re 
	-A[ 0][ 9].im*B[ 9][ 0].im 
	+A[ 0][ 9].re*B[ 9][ 0].re 
	-A[ 0][10].im*B[10][ 0].im 
	+A[ 0][10].re*B[10][ 0].re 
	-A[ 0][11].im*B[11][ 0].im 
	+A[ 0][11].re*B[11][ 0].re;

  C[ 0][ 0].im = 
	 A[ 0][ 0].im*B[ 0][ 0].re 
	+A[ 0][ 0].re*B[ 0][ 0].im 
	+A[ 0][ 1].im*B[ 1][ 0].re 
	+A[ 0][ 1].re*B[ 1][ 0].im 
	+A[ 0][ 2].im*B[ 2][ 0].re 
	+A[ 0][ 2].re*B[ 2][ 0].im 
	+A[ 0][ 3].im*B[ 3][ 0].re 
	+A[ 0][ 3].re*B[ 3][ 0].im 
	+A[ 0][ 4].im*B[ 4][ 0].re 
	+A[ 0][ 4].re*B[ 4][ 0].im 
	+A[ 0][ 5].im*B[ 5][ 0].re 
	+A[ 0][ 5].re*B[ 5][ 0].im 
	+A[ 0][ 6].im*B[ 6][ 0].re 
	+A[ 0][ 6].re*B[ 6][ 0].im 
	+A[ 0][ 7].im*B[ 7][ 0].re 
	+A[ 0][ 7].re*B[ 7][ 0].im 
	+A[ 0][ 8].im*B[ 8][ 0].re 
	+A[ 0][ 8].re*B[ 8][ 0].im 
	+A[ 0][ 9].im*B[ 9][ 0].re 
	+A[ 0][ 9].re*B[ 9][ 0].im 
	+A[ 0][10].im*B[10][ 0].re 
	+A[ 0][10].re*B[10][ 0].im 
	+A[ 0][11].im*B[11][ 0].re 
	+A[ 0][11].re*B[11][ 0].im;

  C[ 0][ 1].re = 
	-A[ 0][ 0].im*B[ 0][ 1].im 
	+A[ 0][ 0].re*B[ 0][ 1].re 
	-A[ 0][ 1].im*B[ 1][ 1].im 
	+A[ 0][ 1].re*B[ 1][ 1].re 
	-A[ 0][ 2].im*B[ 2][ 1].im 
	+A[ 0][ 2].re*B[ 2][ 1].re 
	-A[ 0][ 3].im*B[ 3][ 1].im 
	+A[ 0][ 3].re*B[ 3][ 1].re 
	-A[ 0][ 4].im*B[ 4][ 1].im 
	+A[ 0][ 4].re*B[ 4][ 1].re 
	-A[ 0][ 5].im*B[ 5][ 1].im 
	+A[ 0][ 5].re*B[ 5][ 1].re 
	-A[ 0][ 6].im*B[ 6][ 1].im 
	+A[ 0][ 6].re*B[ 6][ 1].re 
	-A[ 0][ 7].im*B[ 7][ 1].im 
	+A[ 0][ 7].re*B[ 7][ 1].re 
	-A[ 0][ 8].im*B[ 8][ 1].im 
	+A[ 0][ 8].re*B[ 8][ 1].re 
	-A[ 0][ 9].im*B[ 9][ 1].im 
	+A[ 0][ 9].re*B[ 9][ 1].re 
	-A[ 0][10].im*B[10][ 1].im 
	+A[ 0][10].re*B[10][ 1].re 
	-A[ 0][11].im*B[11][ 1].im 
	+A[ 0][11].re*B[11][ 1].re;

  C[ 0][ 1].im = 
	 A[ 0][ 0].im*B[ 0][ 1].re 
	+A[ 0][ 0].re*B[ 0][ 1].im 
	+A[ 0][ 1].im*B[ 1][ 1].re 
	+A[ 0][ 1].re*B[ 1][ 1].im 
	+A[ 0][ 2].im*B[ 2][ 1].re 
	+A[ 0][ 2].re*B[ 2][ 1].im 
	+A[ 0][ 3].im*B[ 3][ 1].re 
	+A[ 0][ 3].re*B[ 3][ 1].im 
	+A[ 0][ 4].im*B[ 4][ 1].re 
	+A[ 0][ 4].re*B[ 4][ 1].im 
	+A[ 0][ 5].im*B[ 5][ 1].re 
	+A[ 0][ 5].re*B[ 5][ 1].im 
	+A[ 0][ 6].im*B[ 6][ 1].re 
	+A[ 0][ 6].re*B[ 6][ 1].im 
	+A[ 0][ 7].im*B[ 7][ 1].re 
	+A[ 0][ 7].re*B[ 7][ 1].im 
	+A[ 0][ 8].im*B[ 8][ 1].re 
	+A[ 0][ 8].re*B[ 8][ 1].im 
	+A[ 0][ 9].im*B[ 9][ 1].re 
	+A[ 0][ 9].re*B[ 9][ 1].im 
	+A[ 0][10].im*B[10][ 1].re 
	+A[ 0][10].re*B[10][ 1].im 
	+A[ 0][11].im*B[11][ 1].re 
	+A[ 0][11].re*B[11][ 1].im;

  C[ 0][ 2].re = 
	-A[ 0][ 0].im*B[ 0][ 2].im 
	+A[ 0][ 0].re*B[ 0][ 2].re 
	-A[ 0][ 1].im*B[ 1][ 2].im 
	+A[ 0][ 1].re*B[ 1][ 2].re 
	-A[ 0][ 2].im*B[ 2][ 2].im 
	+A[ 0][ 2].re*B[ 2][ 2].re 
	-A[ 0][ 3].im*B[ 3][ 2].im 
	+A[ 0][ 3].re*B[ 3][ 2].re 
	-A[ 0][ 4].im*B[ 4][ 2].im 
	+A[ 0][ 4].re*B[ 4][ 2].re 
	-A[ 0][ 5].im*B[ 5][ 2].im 
	+A[ 0][ 5].re*B[ 5][ 2].re 
	-A[ 0][ 6].im*B[ 6][ 2].im 
	+A[ 0][ 6].re*B[ 6][ 2].re 
	-A[ 0][ 7].im*B[ 7][ 2].im 
	+A[ 0][ 7].re*B[ 7][ 2].re 
	-A[ 0][ 8].im*B[ 8][ 2].im 
	+A[ 0][ 8].re*B[ 8][ 2].re 
	-A[ 0][ 9].im*B[ 9][ 2].im 
	+A[ 0][ 9].re*B[ 9][ 2].re 
	-A[ 0][10].im*B[10][ 2].im 
	+A[ 0][10].re*B[10][ 2].re 
	-A[ 0][11].im*B[11][ 2].im 
	+A[ 0][11].re*B[11][ 2].re;

  C[ 0][ 2].im = 
	 A[ 0][ 0].im*B[ 0][ 2].re 
	+A[ 0][ 0].re*B[ 0][ 2].im 
	+A[ 0][ 1].im*B[ 1][ 2].re 
	+A[ 0][ 1].re*B[ 1][ 2].im 
	+A[ 0][ 2].im*B[ 2][ 2].re 
	+A[ 0][ 2].re*B[ 2][ 2].im 
	+A[ 0][ 3].im*B[ 3][ 2].re 
	+A[ 0][ 3].re*B[ 3][ 2].im 
	+A[ 0][ 4].im*B[ 4][ 2].re 
	+A[ 0][ 4].re*B[ 4][ 2].im 
	+A[ 0][ 5].im*B[ 5][ 2].re 
	+A[ 0][ 5].re*B[ 5][ 2].im 
	+A[ 0][ 6].im*B[ 6][ 2].re 
	+A[ 0][ 6].re*B[ 6][ 2].im 
	+A[ 0][ 7].im*B[ 7][ 2].re 
	+A[ 0][ 7].re*B[ 7][ 2].im 
	+A[ 0][ 8].im*B[ 8][ 2].re 
	+A[ 0][ 8].re*B[ 8][ 2].im 
	+A[ 0][ 9].im*B[ 9][ 2].re 
	+A[ 0][ 9].re*B[ 9][ 2].im 
	+A[ 0][10].im*B[10][ 2].re 
	+A[ 0][10].re*B[10][ 2].im 
	+A[ 0][11].im*B[11][ 2].re 
	+A[ 0][11].re*B[11][ 2].im;

  C[ 0][ 3].re = 
	-A[ 0][ 0].im*B[ 0][ 3].im 
	+A[ 0][ 0].re*B[ 0][ 3].re 
	-A[ 0][ 1].im*B[ 1][ 3].im 
	+A[ 0][ 1].re*B[ 1][ 3].re 
	-A[ 0][ 2].im*B[ 2][ 3].im 
	+A[ 0][ 2].re*B[ 2][ 3].re 
	-A[ 0][ 3].im*B[ 3][ 3].im 
	+A[ 0][ 3].re*B[ 3][ 3].re 
	-A[ 0][ 4].im*B[ 4][ 3].im 
	+A[ 0][ 4].re*B[ 4][ 3].re 
	-A[ 0][ 5].im*B[ 5][ 3].im 
	+A[ 0][ 5].re*B[ 5][ 3].re 
	-A[ 0][ 6].im*B[ 6][ 3].im 
	+A[ 0][ 6].re*B[ 6][ 3].re 
	-A[ 0][ 7].im*B[ 7][ 3].im 
	+A[ 0][ 7].re*B[ 7][ 3].re 
	-A[ 0][ 8].im*B[ 8][ 3].im 
	+A[ 0][ 8].re*B[ 8][ 3].re 
	-A[ 0][ 9].im*B[ 9][ 3].im 
	+A[ 0][ 9].re*B[ 9][ 3].re 
	-A[ 0][10].im*B[10][ 3].im 
	+A[ 0][10].re*B[10][ 3].re 
	-A[ 0][11].im*B[11][ 3].im 
	+A[ 0][11].re*B[11][ 3].re;

  C[ 0][ 3].im = 
	 A[ 0][ 0].im*B[ 0][ 3].re 
	+A[ 0][ 0].re*B[ 0][ 3].im 
	+A[ 0][ 1].im*B[ 1][ 3].re 
	+A[ 0][ 1].re*B[ 1][ 3].im 
	+A[ 0][ 2].im*B[ 2][ 3].re 
	+A[ 0][ 2].re*B[ 2][ 3].im 
	+A[ 0][ 3].im*B[ 3][ 3].re 
	+A[ 0][ 3].re*B[ 3][ 3].im 
	+A[ 0][ 4].im*B[ 4][ 3].re 
	+A[ 0][ 4].re*B[ 4][ 3].im 
	+A[ 0][ 5].im*B[ 5][ 3].re 
	+A[ 0][ 5].re*B[ 5][ 3].im 
	+A[ 0][ 6].im*B[ 6][ 3].re 
	+A[ 0][ 6].re*B[ 6][ 3].im 
	+A[ 0][ 7].im*B[ 7][ 3].re 
	+A[ 0][ 7].re*B[ 7][ 3].im 
	+A[ 0][ 8].im*B[ 8][ 3].re 
	+A[ 0][ 8].re*B[ 8][ 3].im 
	+A[ 0][ 9].im*B[ 9][ 3].re 
	+A[ 0][ 9].re*B[ 9][ 3].im 
	+A[ 0][10].im*B[10][ 3].re 
	+A[ 0][10].re*B[10][ 3].im 
	+A[ 0][11].im*B[11][ 3].re 
	+A[ 0][11].re*B[11][ 3].im;

  C[ 0][ 4].re = 
	-A[ 0][ 0].im*B[ 0][ 4].im 
	+A[ 0][ 0].re*B[ 0][ 4].re 
	-A[ 0][ 1].im*B[ 1][ 4].im 
	+A[ 0][ 1].re*B[ 1][ 4].re 
	-A[ 0][ 2].im*B[ 2][ 4].im 
	+A[ 0][ 2].re*B[ 2][ 4].re 
	-A[ 0][ 3].im*B[ 3][ 4].im 
	+A[ 0][ 3].re*B[ 3][ 4].re 
	-A[ 0][ 4].im*B[ 4][ 4].im 
	+A[ 0][ 4].re*B[ 4][ 4].re 
	-A[ 0][ 5].im*B[ 5][ 4].im 
	+A[ 0][ 5].re*B[ 5][ 4].re 
	-A[ 0][ 6].im*B[ 6][ 4].im 
	+A[ 0][ 6].re*B[ 6][ 4].re 
	-A[ 0][ 7].im*B[ 7][ 4].im 
	+A[ 0][ 7].re*B[ 7][ 4].re 
	-A[ 0][ 8].im*B[ 8][ 4].im 
	+A[ 0][ 8].re*B[ 8][ 4].re 
	-A[ 0][ 9].im*B[ 9][ 4].im 
	+A[ 0][ 9].re*B[ 9][ 4].re 
	-A[ 0][10].im*B[10][ 4].im 
	+A[ 0][10].re*B[10][ 4].re 
	-A[ 0][11].im*B[11][ 4].im 
	+A[ 0][11].re*B[11][ 4].re;

  C[ 0][ 4].im = 
	 A[ 0][ 0].im*B[ 0][ 4].re 
	+A[ 0][ 0].re*B[ 0][ 4].im 
	+A[ 0][ 1].im*B[ 1][ 4].re 
	+A[ 0][ 1].re*B[ 1][ 4].im 
	+A[ 0][ 2].im*B[ 2][ 4].re 
	+A[ 0][ 2].re*B[ 2][ 4].im 
	+A[ 0][ 3].im*B[ 3][ 4].re 
	+A[ 0][ 3].re*B[ 3][ 4].im 
	+A[ 0][ 4].im*B[ 4][ 4].re 
	+A[ 0][ 4].re*B[ 4][ 4].im 
	+A[ 0][ 5].im*B[ 5][ 4].re 
	+A[ 0][ 5].re*B[ 5][ 4].im 
	+A[ 0][ 6].im*B[ 6][ 4].re 
	+A[ 0][ 6].re*B[ 6][ 4].im 
	+A[ 0][ 7].im*B[ 7][ 4].re 
	+A[ 0][ 7].re*B[ 7][ 4].im 
	+A[ 0][ 8].im*B[ 8][ 4].re 
	+A[ 0][ 8].re*B[ 8][ 4].im 
	+A[ 0][ 9].im*B[ 9][ 4].re 
	+A[ 0][ 9].re*B[ 9][ 4].im 
	+A[ 0][10].im*B[10][ 4].re 
	+A[ 0][10].re*B[10][ 4].im 
	+A[ 0][11].im*B[11][ 4].re 
	+A[ 0][11].re*B[11][ 4].im;

  C[ 0][ 5].re = 
	-A[ 0][ 0].im*B[ 0][ 5].im 
	+A[ 0][ 0].re*B[ 0][ 5].re 
	-A[ 0][ 1].im*B[ 1][ 5].im 
	+A[ 0][ 1].re*B[ 1][ 5].re 
	-A[ 0][ 2].im*B[ 2][ 5].im 
	+A[ 0][ 2].re*B[ 2][ 5].re 
	-A[ 0][ 3].im*B[ 3][ 5].im 
	+A[ 0][ 3].re*B[ 3][ 5].re 
	-A[ 0][ 4].im*B[ 4][ 5].im 
	+A[ 0][ 4].re*B[ 4][ 5].re 
	-A[ 0][ 5].im*B[ 5][ 5].im 
	+A[ 0][ 5].re*B[ 5][ 5].re 
	-A[ 0][ 6].im*B[ 6][ 5].im 
	+A[ 0][ 6].re*B[ 6][ 5].re 
	-A[ 0][ 7].im*B[ 7][ 5].im 
	+A[ 0][ 7].re*B[ 7][ 5].re 
	-A[ 0][ 8].im*B[ 8][ 5].im 
	+A[ 0][ 8].re*B[ 8][ 5].re 
	-A[ 0][ 9].im*B[ 9][ 5].im 
	+A[ 0][ 9].re*B[ 9][ 5].re 
	-A[ 0][10].im*B[10][ 5].im 
	+A[ 0][10].re*B[10][ 5].re 
	-A[ 0][11].im*B[11][ 5].im 
	+A[ 0][11].re*B[11][ 5].re;

  C[ 0][ 5].im = 
	 A[ 0][ 0].im*B[ 0][ 5].re 
	+A[ 0][ 0].re*B[ 0][ 5].im 
	+A[ 0][ 1].im*B[ 1][ 5].re 
	+A[ 0][ 1].re*B[ 1][ 5].im 
	+A[ 0][ 2].im*B[ 2][ 5].re 
	+A[ 0][ 2].re*B[ 2][ 5].im 
	+A[ 0][ 3].im*B[ 3][ 5].re 
	+A[ 0][ 3].re*B[ 3][ 5].im 
	+A[ 0][ 4].im*B[ 4][ 5].re 
	+A[ 0][ 4].re*B[ 4][ 5].im 
	+A[ 0][ 5].im*B[ 5][ 5].re 
	+A[ 0][ 5].re*B[ 5][ 5].im 
	+A[ 0][ 6].im*B[ 6][ 5].re 
	+A[ 0][ 6].re*B[ 6][ 5].im 
	+A[ 0][ 7].im*B[ 7][ 5].re 
	+A[ 0][ 7].re*B[ 7][ 5].im 
	+A[ 0][ 8].im*B[ 8][ 5].re 
	+A[ 0][ 8].re*B[ 8][ 5].im 
	+A[ 0][ 9].im*B[ 9][ 5].re 
	+A[ 0][ 9].re*B[ 9][ 5].im 
	+A[ 0][10].im*B[10][ 5].re 
	+A[ 0][10].re*B[10][ 5].im 
	+A[ 0][11].im*B[11][ 5].re 
	+A[ 0][11].re*B[11][ 5].im;

  C[ 0][ 6].re = 
	-A[ 0][ 0].im*B[ 0][ 6].im 
	+A[ 0][ 0].re*B[ 0][ 6].re 
	-A[ 0][ 1].im*B[ 1][ 6].im 
	+A[ 0][ 1].re*B[ 1][ 6].re 
	-A[ 0][ 2].im*B[ 2][ 6].im 
	+A[ 0][ 2].re*B[ 2][ 6].re 
	-A[ 0][ 3].im*B[ 3][ 6].im 
	+A[ 0][ 3].re*B[ 3][ 6].re 
	-A[ 0][ 4].im*B[ 4][ 6].im 
	+A[ 0][ 4].re*B[ 4][ 6].re 
	-A[ 0][ 5].im*B[ 5][ 6].im 
	+A[ 0][ 5].re*B[ 5][ 6].re 
	-A[ 0][ 6].im*B[ 6][ 6].im 
	+A[ 0][ 6].re*B[ 6][ 6].re 
	-A[ 0][ 7].im*B[ 7][ 6].im 
	+A[ 0][ 7].re*B[ 7][ 6].re 
	-A[ 0][ 8].im*B[ 8][ 6].im 
	+A[ 0][ 8].re*B[ 8][ 6].re 
	-A[ 0][ 9].im*B[ 9][ 6].im 
	+A[ 0][ 9].re*B[ 9][ 6].re 
	-A[ 0][10].im*B[10][ 6].im 
	+A[ 0][10].re*B[10][ 6].re 
	-A[ 0][11].im*B[11][ 6].im 
	+A[ 0][11].re*B[11][ 6].re;

  C[ 0][ 6].im = 
	 A[ 0][ 0].im*B[ 0][ 6].re 
	+A[ 0][ 0].re*B[ 0][ 6].im 
	+A[ 0][ 1].im*B[ 1][ 6].re 
	+A[ 0][ 1].re*B[ 1][ 6].im 
	+A[ 0][ 2].im*B[ 2][ 6].re 
	+A[ 0][ 2].re*B[ 2][ 6].im 
	+A[ 0][ 3].im*B[ 3][ 6].re 
	+A[ 0][ 3].re*B[ 3][ 6].im 
	+A[ 0][ 4].im*B[ 4][ 6].re 
	+A[ 0][ 4].re*B[ 4][ 6].im 
	+A[ 0][ 5].im*B[ 5][ 6].re 
	+A[ 0][ 5].re*B[ 5][ 6].im 
	+A[ 0][ 6].im*B[ 6][ 6].re 
	+A[ 0][ 6].re*B[ 6][ 6].im 
	+A[ 0][ 7].im*B[ 7][ 6].re 
	+A[ 0][ 7].re*B[ 7][ 6].im 
	+A[ 0][ 8].im*B[ 8][ 6].re 
	+A[ 0][ 8].re*B[ 8][ 6].im 
	+A[ 0][ 9].im*B[ 9][ 6].re 
	+A[ 0][ 9].re*B[ 9][ 6].im 
	+A[ 0][10].im*B[10][ 6].re 
	+A[ 0][10].re*B[10][ 6].im 
	+A[ 0][11].im*B[11][ 6].re 
	+A[ 0][11].re*B[11][ 6].im;

  C[ 0][ 7].re = 
	-A[ 0][ 0].im*B[ 0][ 7].im 
	+A[ 0][ 0].re*B[ 0][ 7].re 
	-A[ 0][ 1].im*B[ 1][ 7].im 
	+A[ 0][ 1].re*B[ 1][ 7].re 
	-A[ 0][ 2].im*B[ 2][ 7].im 
	+A[ 0][ 2].re*B[ 2][ 7].re 
	-A[ 0][ 3].im*B[ 3][ 7].im 
	+A[ 0][ 3].re*B[ 3][ 7].re 
	-A[ 0][ 4].im*B[ 4][ 7].im 
	+A[ 0][ 4].re*B[ 4][ 7].re 
	-A[ 0][ 5].im*B[ 5][ 7].im 
	+A[ 0][ 5].re*B[ 5][ 7].re 
	-A[ 0][ 6].im*B[ 6][ 7].im 
	+A[ 0][ 6].re*B[ 6][ 7].re 
	-A[ 0][ 7].im*B[ 7][ 7].im 
	+A[ 0][ 7].re*B[ 7][ 7].re 
	-A[ 0][ 8].im*B[ 8][ 7].im 
	+A[ 0][ 8].re*B[ 8][ 7].re 
	-A[ 0][ 9].im*B[ 9][ 7].im 
	+A[ 0][ 9].re*B[ 9][ 7].re 
	-A[ 0][10].im*B[10][ 7].im 
	+A[ 0][10].re*B[10][ 7].re 
	-A[ 0][11].im*B[11][ 7].im 
	+A[ 0][11].re*B[11][ 7].re;

  C[ 0][ 7].im = 
	 A[ 0][ 0].im*B[ 0][ 7].re 
	+A[ 0][ 0].re*B[ 0][ 7].im 
	+A[ 0][ 1].im*B[ 1][ 7].re 
	+A[ 0][ 1].re*B[ 1][ 7].im 
	+A[ 0][ 2].im*B[ 2][ 7].re 
	+A[ 0][ 2].re*B[ 2][ 7].im 
	+A[ 0][ 3].im*B[ 3][ 7].re 
	+A[ 0][ 3].re*B[ 3][ 7].im 
	+A[ 0][ 4].im*B[ 4][ 7].re 
	+A[ 0][ 4].re*B[ 4][ 7].im 
	+A[ 0][ 5].im*B[ 5][ 7].re 
	+A[ 0][ 5].re*B[ 5][ 7].im 
	+A[ 0][ 6].im*B[ 6][ 7].re 
	+A[ 0][ 6].re*B[ 6][ 7].im 
	+A[ 0][ 7].im*B[ 7][ 7].re 
	+A[ 0][ 7].re*B[ 7][ 7].im 
	+A[ 0][ 8].im*B[ 8][ 7].re 
	+A[ 0][ 8].re*B[ 8][ 7].im 
	+A[ 0][ 9].im*B[ 9][ 7].re 
	+A[ 0][ 9].re*B[ 9][ 7].im 
	+A[ 0][10].im*B[10][ 7].re 
	+A[ 0][10].re*B[10][ 7].im 
	+A[ 0][11].im*B[11][ 7].re 
	+A[ 0][11].re*B[11][ 7].im;

  C[ 0][ 8].re = 
	-A[ 0][ 0].im*B[ 0][ 8].im 
	+A[ 0][ 0].re*B[ 0][ 8].re 
	-A[ 0][ 1].im*B[ 1][ 8].im 
	+A[ 0][ 1].re*B[ 1][ 8].re 
	-A[ 0][ 2].im*B[ 2][ 8].im 
	+A[ 0][ 2].re*B[ 2][ 8].re 
	-A[ 0][ 3].im*B[ 3][ 8].im 
	+A[ 0][ 3].re*B[ 3][ 8].re 
	-A[ 0][ 4].im*B[ 4][ 8].im 
	+A[ 0][ 4].re*B[ 4][ 8].re 
	-A[ 0][ 5].im*B[ 5][ 8].im 
	+A[ 0][ 5].re*B[ 5][ 8].re 
	-A[ 0][ 6].im*B[ 6][ 8].im 
	+A[ 0][ 6].re*B[ 6][ 8].re 
	-A[ 0][ 7].im*B[ 7][ 8].im 
	+A[ 0][ 7].re*B[ 7][ 8].re 
	-A[ 0][ 8].im*B[ 8][ 8].im 
	+A[ 0][ 8].re*B[ 8][ 8].re 
	-A[ 0][ 9].im*B[ 9][ 8].im 
	+A[ 0][ 9].re*B[ 9][ 8].re 
	-A[ 0][10].im*B[10][ 8].im 
	+A[ 0][10].re*B[10][ 8].re 
	-A[ 0][11].im*B[11][ 8].im 
	+A[ 0][11].re*B[11][ 8].re;

  C[ 0][ 8].im = 
	 A[ 0][ 0].im*B[ 0][ 8].re 
	+A[ 0][ 0].re*B[ 0][ 8].im 
	+A[ 0][ 1].im*B[ 1][ 8].re 
	+A[ 0][ 1].re*B[ 1][ 8].im 
	+A[ 0][ 2].im*B[ 2][ 8].re 
	+A[ 0][ 2].re*B[ 2][ 8].im 
	+A[ 0][ 3].im*B[ 3][ 8].re 
	+A[ 0][ 3].re*B[ 3][ 8].im 
	+A[ 0][ 4].im*B[ 4][ 8].re 
	+A[ 0][ 4].re*B[ 4][ 8].im 
	+A[ 0][ 5].im*B[ 5][ 8].re 
	+A[ 0][ 5].re*B[ 5][ 8].im 
	+A[ 0][ 6].im*B[ 6][ 8].re 
	+A[ 0][ 6].re*B[ 6][ 8].im 
	+A[ 0][ 7].im*B[ 7][ 8].re 
	+A[ 0][ 7].re*B[ 7][ 8].im 
	+A[ 0][ 8].im*B[ 8][ 8].re 
	+A[ 0][ 8].re*B[ 8][ 8].im 
	+A[ 0][ 9].im*B[ 9][ 8].re 
	+A[ 0][ 9].re*B[ 9][ 8].im 
	+A[ 0][10].im*B[10][ 8].re 
	+A[ 0][10].re*B[10][ 8].im 
	+A[ 0][11].im*B[11][ 8].re 
	+A[ 0][11].re*B[11][ 8].im;

  C[ 0][ 9].re = 
	-A[ 0][ 0].im*B[ 0][ 9].im 
	+A[ 0][ 0].re*B[ 0][ 9].re 
	-A[ 0][ 1].im*B[ 1][ 9].im 
	+A[ 0][ 1].re*B[ 1][ 9].re 
	-A[ 0][ 2].im*B[ 2][ 9].im 
	+A[ 0][ 2].re*B[ 2][ 9].re 
	-A[ 0][ 3].im*B[ 3][ 9].im 
	+A[ 0][ 3].re*B[ 3][ 9].re 
	-A[ 0][ 4].im*B[ 4][ 9].im 
	+A[ 0][ 4].re*B[ 4][ 9].re 
	-A[ 0][ 5].im*B[ 5][ 9].im 
	+A[ 0][ 5].re*B[ 5][ 9].re 
	-A[ 0][ 6].im*B[ 6][ 9].im 
	+A[ 0][ 6].re*B[ 6][ 9].re 
	-A[ 0][ 7].im*B[ 7][ 9].im 
	+A[ 0][ 7].re*B[ 7][ 9].re 
	-A[ 0][ 8].im*B[ 8][ 9].im 
	+A[ 0][ 8].re*B[ 8][ 9].re 
	-A[ 0][ 9].im*B[ 9][ 9].im 
	+A[ 0][ 9].re*B[ 9][ 9].re 
	-A[ 0][10].im*B[10][ 9].im 
	+A[ 0][10].re*B[10][ 9].re 
	-A[ 0][11].im*B[11][ 9].im 
	+A[ 0][11].re*B[11][ 9].re;

  C[ 0][ 9].im = 
	 A[ 0][ 0].im*B[ 0][ 9].re 
	+A[ 0][ 0].re*B[ 0][ 9].im 
	+A[ 0][ 1].im*B[ 1][ 9].re 
	+A[ 0][ 1].re*B[ 1][ 9].im 
	+A[ 0][ 2].im*B[ 2][ 9].re 
	+A[ 0][ 2].re*B[ 2][ 9].im 
	+A[ 0][ 3].im*B[ 3][ 9].re 
	+A[ 0][ 3].re*B[ 3][ 9].im 
	+A[ 0][ 4].im*B[ 4][ 9].re 
	+A[ 0][ 4].re*B[ 4][ 9].im 
	+A[ 0][ 5].im*B[ 5][ 9].re 
	+A[ 0][ 5].re*B[ 5][ 9].im 
	+A[ 0][ 6].im*B[ 6][ 9].re 
	+A[ 0][ 6].re*B[ 6][ 9].im 
	+A[ 0][ 7].im*B[ 7][ 9].re 
	+A[ 0][ 7].re*B[ 7][ 9].im 
	+A[ 0][ 8].im*B[ 8][ 9].re 
	+A[ 0][ 8].re*B[ 8][ 9].im 
	+A[ 0][ 9].im*B[ 9][ 9].re 
	+A[ 0][ 9].re*B[ 9][ 9].im 
	+A[ 0][10].im*B[10][ 9].re 
	+A[ 0][10].re*B[10][ 9].im 
	+A[ 0][11].im*B[11][ 9].re 
	+A[ 0][11].re*B[11][ 9].im;

  C[ 0][10].re = 
	-A[ 0][ 0].im*B[ 0][10].im 
	+A[ 0][ 0].re*B[ 0][10].re 
	-A[ 0][ 1].im*B[ 1][10].im 
	+A[ 0][ 1].re*B[ 1][10].re 
	-A[ 0][ 2].im*B[ 2][10].im 
	+A[ 0][ 2].re*B[ 2][10].re 
	-A[ 0][ 3].im*B[ 3][10].im 
	+A[ 0][ 3].re*B[ 3][10].re 
	-A[ 0][ 4].im*B[ 4][10].im 
	+A[ 0][ 4].re*B[ 4][10].re 
	-A[ 0][ 5].im*B[ 5][10].im 
	+A[ 0][ 5].re*B[ 5][10].re 
	-A[ 0][ 6].im*B[ 6][10].im 
	+A[ 0][ 6].re*B[ 6][10].re 
	-A[ 0][ 7].im*B[ 7][10].im 
	+A[ 0][ 7].re*B[ 7][10].re 
	-A[ 0][ 8].im*B[ 8][10].im 
	+A[ 0][ 8].re*B[ 8][10].re 
	-A[ 0][ 9].im*B[ 9][10].im 
	+A[ 0][ 9].re*B[ 9][10].re 
	-A[ 0][10].im*B[10][10].im 
	+A[ 0][10].re*B[10][10].re 
	-A[ 0][11].im*B[11][10].im 
	+A[ 0][11].re*B[11][10].re;

  C[ 0][10].im = 
	 A[ 0][ 0].im*B[ 0][10].re 
	+A[ 0][ 0].re*B[ 0][10].im 
	+A[ 0][ 1].im*B[ 1][10].re 
	+A[ 0][ 1].re*B[ 1][10].im 
	+A[ 0][ 2].im*B[ 2][10].re 
	+A[ 0][ 2].re*B[ 2][10].im 
	+A[ 0][ 3].im*B[ 3][10].re 
	+A[ 0][ 3].re*B[ 3][10].im 
	+A[ 0][ 4].im*B[ 4][10].re 
	+A[ 0][ 4].re*B[ 4][10].im 
	+A[ 0][ 5].im*B[ 5][10].re 
	+A[ 0][ 5].re*B[ 5][10].im 
	+A[ 0][ 6].im*B[ 6][10].re 
	+A[ 0][ 6].re*B[ 6][10].im 
	+A[ 0][ 7].im*B[ 7][10].re 
	+A[ 0][ 7].re*B[ 7][10].im 
	+A[ 0][ 8].im*B[ 8][10].re 
	+A[ 0][ 8].re*B[ 8][10].im 
	+A[ 0][ 9].im*B[ 9][10].re 
	+A[ 0][ 9].re*B[ 9][10].im 
	+A[ 0][10].im*B[10][10].re 
	+A[ 0][10].re*B[10][10].im 
	+A[ 0][11].im*B[11][10].re 
	+A[ 0][11].re*B[11][10].im;

  C[ 0][11].re = 
	-A[ 0][ 0].im*B[ 0][11].im 
	+A[ 0][ 0].re*B[ 0][11].re 
	-A[ 0][ 1].im*B[ 1][11].im 
	+A[ 0][ 1].re*B[ 1][11].re 
	-A[ 0][ 2].im*B[ 2][11].im 
	+A[ 0][ 2].re*B[ 2][11].re 
	-A[ 0][ 3].im*B[ 3][11].im 
	+A[ 0][ 3].re*B[ 3][11].re 
	-A[ 0][ 4].im*B[ 4][11].im 
	+A[ 0][ 4].re*B[ 4][11].re 
	-A[ 0][ 5].im*B[ 5][11].im 
	+A[ 0][ 5].re*B[ 5][11].re 
	-A[ 0][ 6].im*B[ 6][11].im 
	+A[ 0][ 6].re*B[ 6][11].re 
	-A[ 0][ 7].im*B[ 7][11].im 
	+A[ 0][ 7].re*B[ 7][11].re 
	-A[ 0][ 8].im*B[ 8][11].im 
	+A[ 0][ 8].re*B[ 8][11].re 
	-A[ 0][ 9].im*B[ 9][11].im 
	+A[ 0][ 9].re*B[ 9][11].re 
	-A[ 0][10].im*B[10][11].im 
	+A[ 0][10].re*B[10][11].re 
	-A[ 0][11].im*B[11][11].im 
	+A[ 0][11].re*B[11][11].re;

  C[ 0][11].im = 
	 A[ 0][ 0].im*B[ 0][11].re 
	+A[ 0][ 0].re*B[ 0][11].im 
	+A[ 0][ 1].im*B[ 1][11].re 
	+A[ 0][ 1].re*B[ 1][11].im 
	+A[ 0][ 2].im*B[ 2][11].re 
	+A[ 0][ 2].re*B[ 2][11].im 
	+A[ 0][ 3].im*B[ 3][11].re 
	+A[ 0][ 3].re*B[ 3][11].im 
	+A[ 0][ 4].im*B[ 4][11].re 
	+A[ 0][ 4].re*B[ 4][11].im 
	+A[ 0][ 5].im*B[ 5][11].re 
	+A[ 0][ 5].re*B[ 5][11].im 
	+A[ 0][ 6].im*B[ 6][11].re 
	+A[ 0][ 6].re*B[ 6][11].im 
	+A[ 0][ 7].im*B[ 7][11].re 
	+A[ 0][ 7].re*B[ 7][11].im 
	+A[ 0][ 8].im*B[ 8][11].re 
	+A[ 0][ 8].re*B[ 8][11].im 
	+A[ 0][ 9].im*B[ 9][11].re 
	+A[ 0][ 9].re*B[ 9][11].im 
	+A[ 0][10].im*B[10][11].re 
	+A[ 0][10].re*B[10][11].im 
	+A[ 0][11].im*B[11][11].re 
	+A[ 0][11].re*B[11][11].im;

  C[ 1][ 0].re = 
	-A[ 1][ 0].im*B[ 0][ 0].im 
	+A[ 1][ 0].re*B[ 0][ 0].re 
	-A[ 1][ 1].im*B[ 1][ 0].im 
	+A[ 1][ 1].re*B[ 1][ 0].re 
	-A[ 1][ 2].im*B[ 2][ 0].im 
	+A[ 1][ 2].re*B[ 2][ 0].re 
	-A[ 1][ 3].im*B[ 3][ 0].im 
	+A[ 1][ 3].re*B[ 3][ 0].re 
	-A[ 1][ 4].im*B[ 4][ 0].im 
	+A[ 1][ 4].re*B[ 4][ 0].re 
	-A[ 1][ 5].im*B[ 5][ 0].im 
	+A[ 1][ 5].re*B[ 5][ 0].re 
	-A[ 1][ 6].im*B[ 6][ 0].im 
	+A[ 1][ 6].re*B[ 6][ 0].re 
	-A[ 1][ 7].im*B[ 7][ 0].im 
	+A[ 1][ 7].re*B[ 7][ 0].re 
	-A[ 1][ 8].im*B[ 8][ 0].im 
	+A[ 1][ 8].re*B[ 8][ 0].re 
	-A[ 1][ 9].im*B[ 9][ 0].im 
	+A[ 1][ 9].re*B[ 9][ 0].re 
	-A[ 1][10].im*B[10][ 0].im 
	+A[ 1][10].re*B[10][ 0].re 
	-A[ 1][11].im*B[11][ 0].im 
	+A[ 1][11].re*B[11][ 0].re;

  C[ 1][ 0].im = 
	 A[ 1][ 0].im*B[ 0][ 0].re 
	+A[ 1][ 0].re*B[ 0][ 0].im 
	+A[ 1][ 1].im*B[ 1][ 0].re 
	+A[ 1][ 1].re*B[ 1][ 0].im 
	+A[ 1][ 2].im*B[ 2][ 0].re 
	+A[ 1][ 2].re*B[ 2][ 0].im 
	+A[ 1][ 3].im*B[ 3][ 0].re 
	+A[ 1][ 3].re*B[ 3][ 0].im 
	+A[ 1][ 4].im*B[ 4][ 0].re 
	+A[ 1][ 4].re*B[ 4][ 0].im 
	+A[ 1][ 5].im*B[ 5][ 0].re 
	+A[ 1][ 5].re*B[ 5][ 0].im 
	+A[ 1][ 6].im*B[ 6][ 0].re 
	+A[ 1][ 6].re*B[ 6][ 0].im 
	+A[ 1][ 7].im*B[ 7][ 0].re 
	+A[ 1][ 7].re*B[ 7][ 0].im 
	+A[ 1][ 8].im*B[ 8][ 0].re 
	+A[ 1][ 8].re*B[ 8][ 0].im 
	+A[ 1][ 9].im*B[ 9][ 0].re 
	+A[ 1][ 9].re*B[ 9][ 0].im 
	+A[ 1][10].im*B[10][ 0].re 
	+A[ 1][10].re*B[10][ 0].im 
	+A[ 1][11].im*B[11][ 0].re 
	+A[ 1][11].re*B[11][ 0].im;

  C[ 1][ 1].re = 
	-A[ 1][ 0].im*B[ 0][ 1].im 
	+A[ 1][ 0].re*B[ 0][ 1].re 
	-A[ 1][ 1].im*B[ 1][ 1].im 
	+A[ 1][ 1].re*B[ 1][ 1].re 
	-A[ 1][ 2].im*B[ 2][ 1].im 
	+A[ 1][ 2].re*B[ 2][ 1].re 
	-A[ 1][ 3].im*B[ 3][ 1].im 
	+A[ 1][ 3].re*B[ 3][ 1].re 
	-A[ 1][ 4].im*B[ 4][ 1].im 
	+A[ 1][ 4].re*B[ 4][ 1].re 
	-A[ 1][ 5].im*B[ 5][ 1].im 
	+A[ 1][ 5].re*B[ 5][ 1].re 
	-A[ 1][ 6].im*B[ 6][ 1].im 
	+A[ 1][ 6].re*B[ 6][ 1].re 
	-A[ 1][ 7].im*B[ 7][ 1].im 
	+A[ 1][ 7].re*B[ 7][ 1].re 
	-A[ 1][ 8].im*B[ 8][ 1].im 
	+A[ 1][ 8].re*B[ 8][ 1].re 
	-A[ 1][ 9].im*B[ 9][ 1].im 
	+A[ 1][ 9].re*B[ 9][ 1].re 
	-A[ 1][10].im*B[10][ 1].im 
	+A[ 1][10].re*B[10][ 1].re 
	-A[ 1][11].im*B[11][ 1].im 
	+A[ 1][11].re*B[11][ 1].re;

  C[ 1][ 1].im = 
	 A[ 1][ 0].im*B[ 0][ 1].re 
	+A[ 1][ 0].re*B[ 0][ 1].im 
	+A[ 1][ 1].im*B[ 1][ 1].re 
	+A[ 1][ 1].re*B[ 1][ 1].im 
	+A[ 1][ 2].im*B[ 2][ 1].re 
	+A[ 1][ 2].re*B[ 2][ 1].im 
	+A[ 1][ 3].im*B[ 3][ 1].re 
	+A[ 1][ 3].re*B[ 3][ 1].im 
	+A[ 1][ 4].im*B[ 4][ 1].re 
	+A[ 1][ 4].re*B[ 4][ 1].im 
	+A[ 1][ 5].im*B[ 5][ 1].re 
	+A[ 1][ 5].re*B[ 5][ 1].im 
	+A[ 1][ 6].im*B[ 6][ 1].re 
	+A[ 1][ 6].re*B[ 6][ 1].im 
	+A[ 1][ 7].im*B[ 7][ 1].re 
	+A[ 1][ 7].re*B[ 7][ 1].im 
	+A[ 1][ 8].im*B[ 8][ 1].re 
	+A[ 1][ 8].re*B[ 8][ 1].im 
	+A[ 1][ 9].im*B[ 9][ 1].re 
	+A[ 1][ 9].re*B[ 9][ 1].im 
	+A[ 1][10].im*B[10][ 1].re 
	+A[ 1][10].re*B[10][ 1].im 
	+A[ 1][11].im*B[11][ 1].re 
	+A[ 1][11].re*B[11][ 1].im;

  C[ 1][ 2].re = 
	-A[ 1][ 0].im*B[ 0][ 2].im 
	+A[ 1][ 0].re*B[ 0][ 2].re 
	-A[ 1][ 1].im*B[ 1][ 2].im 
	+A[ 1][ 1].re*B[ 1][ 2].re 
	-A[ 1][ 2].im*B[ 2][ 2].im 
	+A[ 1][ 2].re*B[ 2][ 2].re 
	-A[ 1][ 3].im*B[ 3][ 2].im 
	+A[ 1][ 3].re*B[ 3][ 2].re 
	-A[ 1][ 4].im*B[ 4][ 2].im 
	+A[ 1][ 4].re*B[ 4][ 2].re 
	-A[ 1][ 5].im*B[ 5][ 2].im 
	+A[ 1][ 5].re*B[ 5][ 2].re 
	-A[ 1][ 6].im*B[ 6][ 2].im 
	+A[ 1][ 6].re*B[ 6][ 2].re 
	-A[ 1][ 7].im*B[ 7][ 2].im 
	+A[ 1][ 7].re*B[ 7][ 2].re 
	-A[ 1][ 8].im*B[ 8][ 2].im 
	+A[ 1][ 8].re*B[ 8][ 2].re 
	-A[ 1][ 9].im*B[ 9][ 2].im 
	+A[ 1][ 9].re*B[ 9][ 2].re 
	-A[ 1][10].im*B[10][ 2].im 
	+A[ 1][10].re*B[10][ 2].re 
	-A[ 1][11].im*B[11][ 2].im 
	+A[ 1][11].re*B[11][ 2].re;

  C[ 1][ 2].im = 
	 A[ 1][ 0].im*B[ 0][ 2].re 
	+A[ 1][ 0].re*B[ 0][ 2].im 
	+A[ 1][ 1].im*B[ 1][ 2].re 
	+A[ 1][ 1].re*B[ 1][ 2].im 
	+A[ 1][ 2].im*B[ 2][ 2].re 
	+A[ 1][ 2].re*B[ 2][ 2].im 
	+A[ 1][ 3].im*B[ 3][ 2].re 
	+A[ 1][ 3].re*B[ 3][ 2].im 
	+A[ 1][ 4].im*B[ 4][ 2].re 
	+A[ 1][ 4].re*B[ 4][ 2].im 
	+A[ 1][ 5].im*B[ 5][ 2].re 
	+A[ 1][ 5].re*B[ 5][ 2].im 
	+A[ 1][ 6].im*B[ 6][ 2].re 
	+A[ 1][ 6].re*B[ 6][ 2].im 
	+A[ 1][ 7].im*B[ 7][ 2].re 
	+A[ 1][ 7].re*B[ 7][ 2].im 
	+A[ 1][ 8].im*B[ 8][ 2].re 
	+A[ 1][ 8].re*B[ 8][ 2].im 
	+A[ 1][ 9].im*B[ 9][ 2].re 
	+A[ 1][ 9].re*B[ 9][ 2].im 
	+A[ 1][10].im*B[10][ 2].re 
	+A[ 1][10].re*B[10][ 2].im 
	+A[ 1][11].im*B[11][ 2].re 
	+A[ 1][11].re*B[11][ 2].im;

  C[ 1][ 3].re = 
	-A[ 1][ 0].im*B[ 0][ 3].im 
	+A[ 1][ 0].re*B[ 0][ 3].re 
	-A[ 1][ 1].im*B[ 1][ 3].im 
	+A[ 1][ 1].re*B[ 1][ 3].re 
	-A[ 1][ 2].im*B[ 2][ 3].im 
	+A[ 1][ 2].re*B[ 2][ 3].re 
	-A[ 1][ 3].im*B[ 3][ 3].im 
	+A[ 1][ 3].re*B[ 3][ 3].re 
	-A[ 1][ 4].im*B[ 4][ 3].im 
	+A[ 1][ 4].re*B[ 4][ 3].re 
	-A[ 1][ 5].im*B[ 5][ 3].im 
	+A[ 1][ 5].re*B[ 5][ 3].re 
	-A[ 1][ 6].im*B[ 6][ 3].im 
	+A[ 1][ 6].re*B[ 6][ 3].re 
	-A[ 1][ 7].im*B[ 7][ 3].im 
	+A[ 1][ 7].re*B[ 7][ 3].re 
	-A[ 1][ 8].im*B[ 8][ 3].im 
	+A[ 1][ 8].re*B[ 8][ 3].re 
	-A[ 1][ 9].im*B[ 9][ 3].im 
	+A[ 1][ 9].re*B[ 9][ 3].re 
	-A[ 1][10].im*B[10][ 3].im 
	+A[ 1][10].re*B[10][ 3].re 
	-A[ 1][11].im*B[11][ 3].im 
	+A[ 1][11].re*B[11][ 3].re;

  C[ 1][ 3].im = 
	 A[ 1][ 0].im*B[ 0][ 3].re 
	+A[ 1][ 0].re*B[ 0][ 3].im 
	+A[ 1][ 1].im*B[ 1][ 3].re 
	+A[ 1][ 1].re*B[ 1][ 3].im 
	+A[ 1][ 2].im*B[ 2][ 3].re 
	+A[ 1][ 2].re*B[ 2][ 3].im 
	+A[ 1][ 3].im*B[ 3][ 3].re 
	+A[ 1][ 3].re*B[ 3][ 3].im 
	+A[ 1][ 4].im*B[ 4][ 3].re 
	+A[ 1][ 4].re*B[ 4][ 3].im 
	+A[ 1][ 5].im*B[ 5][ 3].re 
	+A[ 1][ 5].re*B[ 5][ 3].im 
	+A[ 1][ 6].im*B[ 6][ 3].re 
	+A[ 1][ 6].re*B[ 6][ 3].im 
	+A[ 1][ 7].im*B[ 7][ 3].re 
	+A[ 1][ 7].re*B[ 7][ 3].im 
	+A[ 1][ 8].im*B[ 8][ 3].re 
	+A[ 1][ 8].re*B[ 8][ 3].im 
	+A[ 1][ 9].im*B[ 9][ 3].re 
	+A[ 1][ 9].re*B[ 9][ 3].im 
	+A[ 1][10].im*B[10][ 3].re 
	+A[ 1][10].re*B[10][ 3].im 
	+A[ 1][11].im*B[11][ 3].re 
	+A[ 1][11].re*B[11][ 3].im;

  C[ 1][ 4].re = 
	-A[ 1][ 0].im*B[ 0][ 4].im 
	+A[ 1][ 0].re*B[ 0][ 4].re 
	-A[ 1][ 1].im*B[ 1][ 4].im 
	+A[ 1][ 1].re*B[ 1][ 4].re 
	-A[ 1][ 2].im*B[ 2][ 4].im 
	+A[ 1][ 2].re*B[ 2][ 4].re 
	-A[ 1][ 3].im*B[ 3][ 4].im 
	+A[ 1][ 3].re*B[ 3][ 4].re 
	-A[ 1][ 4].im*B[ 4][ 4].im 
	+A[ 1][ 4].re*B[ 4][ 4].re 
	-A[ 1][ 5].im*B[ 5][ 4].im 
	+A[ 1][ 5].re*B[ 5][ 4].re 
	-A[ 1][ 6].im*B[ 6][ 4].im 
	+A[ 1][ 6].re*B[ 6][ 4].re 
	-A[ 1][ 7].im*B[ 7][ 4].im 
	+A[ 1][ 7].re*B[ 7][ 4].re 
	-A[ 1][ 8].im*B[ 8][ 4].im 
	+A[ 1][ 8].re*B[ 8][ 4].re 
	-A[ 1][ 9].im*B[ 9][ 4].im 
	+A[ 1][ 9].re*B[ 9][ 4].re 
	-A[ 1][10].im*B[10][ 4].im 
	+A[ 1][10].re*B[10][ 4].re 
	-A[ 1][11].im*B[11][ 4].im 
	+A[ 1][11].re*B[11][ 4].re;

  C[ 1][ 4].im = 
	 A[ 1][ 0].im*B[ 0][ 4].re 
	+A[ 1][ 0].re*B[ 0][ 4].im 
	+A[ 1][ 1].im*B[ 1][ 4].re 
	+A[ 1][ 1].re*B[ 1][ 4].im 
	+A[ 1][ 2].im*B[ 2][ 4].re 
	+A[ 1][ 2].re*B[ 2][ 4].im 
	+A[ 1][ 3].im*B[ 3][ 4].re 
	+A[ 1][ 3].re*B[ 3][ 4].im 
	+A[ 1][ 4].im*B[ 4][ 4].re 
	+A[ 1][ 4].re*B[ 4][ 4].im 
	+A[ 1][ 5].im*B[ 5][ 4].re 
	+A[ 1][ 5].re*B[ 5][ 4].im 
	+A[ 1][ 6].im*B[ 6][ 4].re 
	+A[ 1][ 6].re*B[ 6][ 4].im 
	+A[ 1][ 7].im*B[ 7][ 4].re 
	+A[ 1][ 7].re*B[ 7][ 4].im 
	+A[ 1][ 8].im*B[ 8][ 4].re 
	+A[ 1][ 8].re*B[ 8][ 4].im 
	+A[ 1][ 9].im*B[ 9][ 4].re 
	+A[ 1][ 9].re*B[ 9][ 4].im 
	+A[ 1][10].im*B[10][ 4].re 
	+A[ 1][10].re*B[10][ 4].im 
	+A[ 1][11].im*B[11][ 4].re 
	+A[ 1][11].re*B[11][ 4].im;

  C[ 1][ 5].re = 
	-A[ 1][ 0].im*B[ 0][ 5].im 
	+A[ 1][ 0].re*B[ 0][ 5].re 
	-A[ 1][ 1].im*B[ 1][ 5].im 
	+A[ 1][ 1].re*B[ 1][ 5].re 
	-A[ 1][ 2].im*B[ 2][ 5].im 
	+A[ 1][ 2].re*B[ 2][ 5].re 
	-A[ 1][ 3].im*B[ 3][ 5].im 
	+A[ 1][ 3].re*B[ 3][ 5].re 
	-A[ 1][ 4].im*B[ 4][ 5].im 
	+A[ 1][ 4].re*B[ 4][ 5].re 
	-A[ 1][ 5].im*B[ 5][ 5].im 
	+A[ 1][ 5].re*B[ 5][ 5].re 
	-A[ 1][ 6].im*B[ 6][ 5].im 
	+A[ 1][ 6].re*B[ 6][ 5].re 
	-A[ 1][ 7].im*B[ 7][ 5].im 
	+A[ 1][ 7].re*B[ 7][ 5].re 
	-A[ 1][ 8].im*B[ 8][ 5].im 
	+A[ 1][ 8].re*B[ 8][ 5].re 
	-A[ 1][ 9].im*B[ 9][ 5].im 
	+A[ 1][ 9].re*B[ 9][ 5].re 
	-A[ 1][10].im*B[10][ 5].im 
	+A[ 1][10].re*B[10][ 5].re 
	-A[ 1][11].im*B[11][ 5].im 
	+A[ 1][11].re*B[11][ 5].re;

  C[ 1][ 5].im = 
	 A[ 1][ 0].im*B[ 0][ 5].re 
	+A[ 1][ 0].re*B[ 0][ 5].im 
	+A[ 1][ 1].im*B[ 1][ 5].re 
	+A[ 1][ 1].re*B[ 1][ 5].im 
	+A[ 1][ 2].im*B[ 2][ 5].re 
	+A[ 1][ 2].re*B[ 2][ 5].im 
	+A[ 1][ 3].im*B[ 3][ 5].re 
	+A[ 1][ 3].re*B[ 3][ 5].im 
	+A[ 1][ 4].im*B[ 4][ 5].re 
	+A[ 1][ 4].re*B[ 4][ 5].im 
	+A[ 1][ 5].im*B[ 5][ 5].re 
	+A[ 1][ 5].re*B[ 5][ 5].im 
	+A[ 1][ 6].im*B[ 6][ 5].re 
	+A[ 1][ 6].re*B[ 6][ 5].im 
	+A[ 1][ 7].im*B[ 7][ 5].re 
	+A[ 1][ 7].re*B[ 7][ 5].im 
	+A[ 1][ 8].im*B[ 8][ 5].re 
	+A[ 1][ 8].re*B[ 8][ 5].im 
	+A[ 1][ 9].im*B[ 9][ 5].re 
	+A[ 1][ 9].re*B[ 9][ 5].im 
	+A[ 1][10].im*B[10][ 5].re 
	+A[ 1][10].re*B[10][ 5].im 
	+A[ 1][11].im*B[11][ 5].re 
	+A[ 1][11].re*B[11][ 5].im;

  C[ 1][ 6].re = 
	-A[ 1][ 0].im*B[ 0][ 6].im 
	+A[ 1][ 0].re*B[ 0][ 6].re 
	-A[ 1][ 1].im*B[ 1][ 6].im 
	+A[ 1][ 1].re*B[ 1][ 6].re 
	-A[ 1][ 2].im*B[ 2][ 6].im 
	+A[ 1][ 2].re*B[ 2][ 6].re 
	-A[ 1][ 3].im*B[ 3][ 6].im 
	+A[ 1][ 3].re*B[ 3][ 6].re 
	-A[ 1][ 4].im*B[ 4][ 6].im 
	+A[ 1][ 4].re*B[ 4][ 6].re 
	-A[ 1][ 5].im*B[ 5][ 6].im 
	+A[ 1][ 5].re*B[ 5][ 6].re 
	-A[ 1][ 6].im*B[ 6][ 6].im 
	+A[ 1][ 6].re*B[ 6][ 6].re 
	-A[ 1][ 7].im*B[ 7][ 6].im 
	+A[ 1][ 7].re*B[ 7][ 6].re 
	-A[ 1][ 8].im*B[ 8][ 6].im 
	+A[ 1][ 8].re*B[ 8][ 6].re 
	-A[ 1][ 9].im*B[ 9][ 6].im 
	+A[ 1][ 9].re*B[ 9][ 6].re 
	-A[ 1][10].im*B[10][ 6].im 
	+A[ 1][10].re*B[10][ 6].re 
	-A[ 1][11].im*B[11][ 6].im 
	+A[ 1][11].re*B[11][ 6].re;

  C[ 1][ 6].im = 
	 A[ 1][ 0].im*B[ 0][ 6].re 
	+A[ 1][ 0].re*B[ 0][ 6].im 
	+A[ 1][ 1].im*B[ 1][ 6].re 
	+A[ 1][ 1].re*B[ 1][ 6].im 
	+A[ 1][ 2].im*B[ 2][ 6].re 
	+A[ 1][ 2].re*B[ 2][ 6].im 
	+A[ 1][ 3].im*B[ 3][ 6].re 
	+A[ 1][ 3].re*B[ 3][ 6].im 
	+A[ 1][ 4].im*B[ 4][ 6].re 
	+A[ 1][ 4].re*B[ 4][ 6].im 
	+A[ 1][ 5].im*B[ 5][ 6].re 
	+A[ 1][ 5].re*B[ 5][ 6].im 
	+A[ 1][ 6].im*B[ 6][ 6].re 
	+A[ 1][ 6].re*B[ 6][ 6].im 
	+A[ 1][ 7].im*B[ 7][ 6].re 
	+A[ 1][ 7].re*B[ 7][ 6].im 
	+A[ 1][ 8].im*B[ 8][ 6].re 
	+A[ 1][ 8].re*B[ 8][ 6].im 
	+A[ 1][ 9].im*B[ 9][ 6].re 
	+A[ 1][ 9].re*B[ 9][ 6].im 
	+A[ 1][10].im*B[10][ 6].re 
	+A[ 1][10].re*B[10][ 6].im 
	+A[ 1][11].im*B[11][ 6].re 
	+A[ 1][11].re*B[11][ 6].im;

  C[ 1][ 7].re = 
	-A[ 1][ 0].im*B[ 0][ 7].im 
	+A[ 1][ 0].re*B[ 0][ 7].re 
	-A[ 1][ 1].im*B[ 1][ 7].im 
	+A[ 1][ 1].re*B[ 1][ 7].re 
	-A[ 1][ 2].im*B[ 2][ 7].im 
	+A[ 1][ 2].re*B[ 2][ 7].re 
	-A[ 1][ 3].im*B[ 3][ 7].im 
	+A[ 1][ 3].re*B[ 3][ 7].re 
	-A[ 1][ 4].im*B[ 4][ 7].im 
	+A[ 1][ 4].re*B[ 4][ 7].re 
	-A[ 1][ 5].im*B[ 5][ 7].im 
	+A[ 1][ 5].re*B[ 5][ 7].re 
	-A[ 1][ 6].im*B[ 6][ 7].im 
	+A[ 1][ 6].re*B[ 6][ 7].re 
	-A[ 1][ 7].im*B[ 7][ 7].im 
	+A[ 1][ 7].re*B[ 7][ 7].re 
	-A[ 1][ 8].im*B[ 8][ 7].im 
	+A[ 1][ 8].re*B[ 8][ 7].re 
	-A[ 1][ 9].im*B[ 9][ 7].im 
	+A[ 1][ 9].re*B[ 9][ 7].re 
	-A[ 1][10].im*B[10][ 7].im 
	+A[ 1][10].re*B[10][ 7].re 
	-A[ 1][11].im*B[11][ 7].im 
	+A[ 1][11].re*B[11][ 7].re;

  C[ 1][ 7].im = 
	 A[ 1][ 0].im*B[ 0][ 7].re 
	+A[ 1][ 0].re*B[ 0][ 7].im 
	+A[ 1][ 1].im*B[ 1][ 7].re 
	+A[ 1][ 1].re*B[ 1][ 7].im 
	+A[ 1][ 2].im*B[ 2][ 7].re 
	+A[ 1][ 2].re*B[ 2][ 7].im 
	+A[ 1][ 3].im*B[ 3][ 7].re 
	+A[ 1][ 3].re*B[ 3][ 7].im 
	+A[ 1][ 4].im*B[ 4][ 7].re 
	+A[ 1][ 4].re*B[ 4][ 7].im 
	+A[ 1][ 5].im*B[ 5][ 7].re 
	+A[ 1][ 5].re*B[ 5][ 7].im 
	+A[ 1][ 6].im*B[ 6][ 7].re 
	+A[ 1][ 6].re*B[ 6][ 7].im 
	+A[ 1][ 7].im*B[ 7][ 7].re 
	+A[ 1][ 7].re*B[ 7][ 7].im 
	+A[ 1][ 8].im*B[ 8][ 7].re 
	+A[ 1][ 8].re*B[ 8][ 7].im 
	+A[ 1][ 9].im*B[ 9][ 7].re 
	+A[ 1][ 9].re*B[ 9][ 7].im 
	+A[ 1][10].im*B[10][ 7].re 
	+A[ 1][10].re*B[10][ 7].im 
	+A[ 1][11].im*B[11][ 7].re 
	+A[ 1][11].re*B[11][ 7].im;

  C[ 1][ 8].re = 
	-A[ 1][ 0].im*B[ 0][ 8].im 
	+A[ 1][ 0].re*B[ 0][ 8].re 
	-A[ 1][ 1].im*B[ 1][ 8].im 
	+A[ 1][ 1].re*B[ 1][ 8].re 
	-A[ 1][ 2].im*B[ 2][ 8].im 
	+A[ 1][ 2].re*B[ 2][ 8].re 
	-A[ 1][ 3].im*B[ 3][ 8].im 
	+A[ 1][ 3].re*B[ 3][ 8].re 
	-A[ 1][ 4].im*B[ 4][ 8].im 
	+A[ 1][ 4].re*B[ 4][ 8].re 
	-A[ 1][ 5].im*B[ 5][ 8].im 
	+A[ 1][ 5].re*B[ 5][ 8].re 
	-A[ 1][ 6].im*B[ 6][ 8].im 
	+A[ 1][ 6].re*B[ 6][ 8].re 
	-A[ 1][ 7].im*B[ 7][ 8].im 
	+A[ 1][ 7].re*B[ 7][ 8].re 
	-A[ 1][ 8].im*B[ 8][ 8].im 
	+A[ 1][ 8].re*B[ 8][ 8].re 
	-A[ 1][ 9].im*B[ 9][ 8].im 
	+A[ 1][ 9].re*B[ 9][ 8].re 
	-A[ 1][10].im*B[10][ 8].im 
	+A[ 1][10].re*B[10][ 8].re 
	-A[ 1][11].im*B[11][ 8].im 
	+A[ 1][11].re*B[11][ 8].re;

  C[ 1][ 8].im = 
	 A[ 1][ 0].im*B[ 0][ 8].re 
	+A[ 1][ 0].re*B[ 0][ 8].im 
	+A[ 1][ 1].im*B[ 1][ 8].re 
	+A[ 1][ 1].re*B[ 1][ 8].im 
	+A[ 1][ 2].im*B[ 2][ 8].re 
	+A[ 1][ 2].re*B[ 2][ 8].im 
	+A[ 1][ 3].im*B[ 3][ 8].re 
	+A[ 1][ 3].re*B[ 3][ 8].im 
	+A[ 1][ 4].im*B[ 4][ 8].re 
	+A[ 1][ 4].re*B[ 4][ 8].im 
	+A[ 1][ 5].im*B[ 5][ 8].re 
	+A[ 1][ 5].re*B[ 5][ 8].im 
	+A[ 1][ 6].im*B[ 6][ 8].re 
	+A[ 1][ 6].re*B[ 6][ 8].im 
	+A[ 1][ 7].im*B[ 7][ 8].re 
	+A[ 1][ 7].re*B[ 7][ 8].im 
	+A[ 1][ 8].im*B[ 8][ 8].re 
	+A[ 1][ 8].re*B[ 8][ 8].im 
	+A[ 1][ 9].im*B[ 9][ 8].re 
	+A[ 1][ 9].re*B[ 9][ 8].im 
	+A[ 1][10].im*B[10][ 8].re 
	+A[ 1][10].re*B[10][ 8].im 
	+A[ 1][11].im*B[11][ 8].re 
	+A[ 1][11].re*B[11][ 8].im;

  C[ 1][ 9].re = 
	-A[ 1][ 0].im*B[ 0][ 9].im 
	+A[ 1][ 0].re*B[ 0][ 9].re 
	-A[ 1][ 1].im*B[ 1][ 9].im 
	+A[ 1][ 1].re*B[ 1][ 9].re 
	-A[ 1][ 2].im*B[ 2][ 9].im 
	+A[ 1][ 2].re*B[ 2][ 9].re 
	-A[ 1][ 3].im*B[ 3][ 9].im 
	+A[ 1][ 3].re*B[ 3][ 9].re 
	-A[ 1][ 4].im*B[ 4][ 9].im 
	+A[ 1][ 4].re*B[ 4][ 9].re 
	-A[ 1][ 5].im*B[ 5][ 9].im 
	+A[ 1][ 5].re*B[ 5][ 9].re 
	-A[ 1][ 6].im*B[ 6][ 9].im 
	+A[ 1][ 6].re*B[ 6][ 9].re 
	-A[ 1][ 7].im*B[ 7][ 9].im 
	+A[ 1][ 7].re*B[ 7][ 9].re 
	-A[ 1][ 8].im*B[ 8][ 9].im 
	+A[ 1][ 8].re*B[ 8][ 9].re 
	-A[ 1][ 9].im*B[ 9][ 9].im 
	+A[ 1][ 9].re*B[ 9][ 9].re 
	-A[ 1][10].im*B[10][ 9].im 
	+A[ 1][10].re*B[10][ 9].re 
	-A[ 1][11].im*B[11][ 9].im 
	+A[ 1][11].re*B[11][ 9].re;

  C[ 1][ 9].im = 
	 A[ 1][ 0].im*B[ 0][ 9].re 
	+A[ 1][ 0].re*B[ 0][ 9].im 
	+A[ 1][ 1].im*B[ 1][ 9].re 
	+A[ 1][ 1].re*B[ 1][ 9].im 
	+A[ 1][ 2].im*B[ 2][ 9].re 
	+A[ 1][ 2].re*B[ 2][ 9].im 
	+A[ 1][ 3].im*B[ 3][ 9].re 
	+A[ 1][ 3].re*B[ 3][ 9].im 
	+A[ 1][ 4].im*B[ 4][ 9].re 
	+A[ 1][ 4].re*B[ 4][ 9].im 
	+A[ 1][ 5].im*B[ 5][ 9].re 
	+A[ 1][ 5].re*B[ 5][ 9].im 
	+A[ 1][ 6].im*B[ 6][ 9].re 
	+A[ 1][ 6].re*B[ 6][ 9].im 
	+A[ 1][ 7].im*B[ 7][ 9].re 
	+A[ 1][ 7].re*B[ 7][ 9].im 
	+A[ 1][ 8].im*B[ 8][ 9].re 
	+A[ 1][ 8].re*B[ 8][ 9].im 
	+A[ 1][ 9].im*B[ 9][ 9].re 
	+A[ 1][ 9].re*B[ 9][ 9].im 
	+A[ 1][10].im*B[10][ 9].re 
	+A[ 1][10].re*B[10][ 9].im 
	+A[ 1][11].im*B[11][ 9].re 
	+A[ 1][11].re*B[11][ 9].im;

  C[ 1][10].re = 
	-A[ 1][ 0].im*B[ 0][10].im 
	+A[ 1][ 0].re*B[ 0][10].re 
	-A[ 1][ 1].im*B[ 1][10].im 
	+A[ 1][ 1].re*B[ 1][10].re 
	-A[ 1][ 2].im*B[ 2][10].im 
	+A[ 1][ 2].re*B[ 2][10].re 
	-A[ 1][ 3].im*B[ 3][10].im 
	+A[ 1][ 3].re*B[ 3][10].re 
	-A[ 1][ 4].im*B[ 4][10].im 
	+A[ 1][ 4].re*B[ 4][10].re 
	-A[ 1][ 5].im*B[ 5][10].im 
	+A[ 1][ 5].re*B[ 5][10].re 
	-A[ 1][ 6].im*B[ 6][10].im 
	+A[ 1][ 6].re*B[ 6][10].re 
	-A[ 1][ 7].im*B[ 7][10].im 
	+A[ 1][ 7].re*B[ 7][10].re 
	-A[ 1][ 8].im*B[ 8][10].im 
	+A[ 1][ 8].re*B[ 8][10].re 
	-A[ 1][ 9].im*B[ 9][10].im 
	+A[ 1][ 9].re*B[ 9][10].re 
	-A[ 1][10].im*B[10][10].im 
	+A[ 1][10].re*B[10][10].re 
	-A[ 1][11].im*B[11][10].im 
	+A[ 1][11].re*B[11][10].re;

  C[ 1][10].im = 
	 A[ 1][ 0].im*B[ 0][10].re 
	+A[ 1][ 0].re*B[ 0][10].im 
	+A[ 1][ 1].im*B[ 1][10].re 
	+A[ 1][ 1].re*B[ 1][10].im 
	+A[ 1][ 2].im*B[ 2][10].re 
	+A[ 1][ 2].re*B[ 2][10].im 
	+A[ 1][ 3].im*B[ 3][10].re 
	+A[ 1][ 3].re*B[ 3][10].im 
	+A[ 1][ 4].im*B[ 4][10].re 
	+A[ 1][ 4].re*B[ 4][10].im 
	+A[ 1][ 5].im*B[ 5][10].re 
	+A[ 1][ 5].re*B[ 5][10].im 
	+A[ 1][ 6].im*B[ 6][10].re 
	+A[ 1][ 6].re*B[ 6][10].im 
	+A[ 1][ 7].im*B[ 7][10].re 
	+A[ 1][ 7].re*B[ 7][10].im 
	+A[ 1][ 8].im*B[ 8][10].re 
	+A[ 1][ 8].re*B[ 8][10].im 
	+A[ 1][ 9].im*B[ 9][10].re 
	+A[ 1][ 9].re*B[ 9][10].im 
	+A[ 1][10].im*B[10][10].re 
	+A[ 1][10].re*B[10][10].im 
	+A[ 1][11].im*B[11][10].re 
	+A[ 1][11].re*B[11][10].im;

  C[ 1][11].re = 
	-A[ 1][ 0].im*B[ 0][11].im 
	+A[ 1][ 0].re*B[ 0][11].re 
	-A[ 1][ 1].im*B[ 1][11].im 
	+A[ 1][ 1].re*B[ 1][11].re 
	-A[ 1][ 2].im*B[ 2][11].im 
	+A[ 1][ 2].re*B[ 2][11].re 
	-A[ 1][ 3].im*B[ 3][11].im 
	+A[ 1][ 3].re*B[ 3][11].re 
	-A[ 1][ 4].im*B[ 4][11].im 
	+A[ 1][ 4].re*B[ 4][11].re 
	-A[ 1][ 5].im*B[ 5][11].im 
	+A[ 1][ 5].re*B[ 5][11].re 
	-A[ 1][ 6].im*B[ 6][11].im 
	+A[ 1][ 6].re*B[ 6][11].re 
	-A[ 1][ 7].im*B[ 7][11].im 
	+A[ 1][ 7].re*B[ 7][11].re 
	-A[ 1][ 8].im*B[ 8][11].im 
	+A[ 1][ 8].re*B[ 8][11].re 
	-A[ 1][ 9].im*B[ 9][11].im 
	+A[ 1][ 9].re*B[ 9][11].re 
	-A[ 1][10].im*B[10][11].im 
	+A[ 1][10].re*B[10][11].re 
	-A[ 1][11].im*B[11][11].im 
	+A[ 1][11].re*B[11][11].re;

  C[ 1][11].im = 
	 A[ 1][ 0].im*B[ 0][11].re 
	+A[ 1][ 0].re*B[ 0][11].im 
	+A[ 1][ 1].im*B[ 1][11].re 
	+A[ 1][ 1].re*B[ 1][11].im 
	+A[ 1][ 2].im*B[ 2][11].re 
	+A[ 1][ 2].re*B[ 2][11].im 
	+A[ 1][ 3].im*B[ 3][11].re 
	+A[ 1][ 3].re*B[ 3][11].im 
	+A[ 1][ 4].im*B[ 4][11].re 
	+A[ 1][ 4].re*B[ 4][11].im 
	+A[ 1][ 5].im*B[ 5][11].re 
	+A[ 1][ 5].re*B[ 5][11].im 
	+A[ 1][ 6].im*B[ 6][11].re 
	+A[ 1][ 6].re*B[ 6][11].im 
	+A[ 1][ 7].im*B[ 7][11].re 
	+A[ 1][ 7].re*B[ 7][11].im 
	+A[ 1][ 8].im*B[ 8][11].re 
	+A[ 1][ 8].re*B[ 8][11].im 
	+A[ 1][ 9].im*B[ 9][11].re 
	+A[ 1][ 9].re*B[ 9][11].im 
	+A[ 1][10].im*B[10][11].re 
	+A[ 1][10].re*B[10][11].im 
	+A[ 1][11].im*B[11][11].re 
	+A[ 1][11].re*B[11][11].im;

  C[ 2][ 0].re = 
	-A[ 2][ 0].im*B[ 0][ 0].im 
	+A[ 2][ 0].re*B[ 0][ 0].re 
	-A[ 2][ 1].im*B[ 1][ 0].im 
	+A[ 2][ 1].re*B[ 1][ 0].re 
	-A[ 2][ 2].im*B[ 2][ 0].im 
	+A[ 2][ 2].re*B[ 2][ 0].re 
	-A[ 2][ 3].im*B[ 3][ 0].im 
	+A[ 2][ 3].re*B[ 3][ 0].re 
	-A[ 2][ 4].im*B[ 4][ 0].im 
	+A[ 2][ 4].re*B[ 4][ 0].re 
	-A[ 2][ 5].im*B[ 5][ 0].im 
	+A[ 2][ 5].re*B[ 5][ 0].re 
	-A[ 2][ 6].im*B[ 6][ 0].im 
	+A[ 2][ 6].re*B[ 6][ 0].re 
	-A[ 2][ 7].im*B[ 7][ 0].im 
	+A[ 2][ 7].re*B[ 7][ 0].re 
	-A[ 2][ 8].im*B[ 8][ 0].im 
	+A[ 2][ 8].re*B[ 8][ 0].re 
	-A[ 2][ 9].im*B[ 9][ 0].im 
	+A[ 2][ 9].re*B[ 9][ 0].re 
	-A[ 2][10].im*B[10][ 0].im 
	+A[ 2][10].re*B[10][ 0].re 
	-A[ 2][11].im*B[11][ 0].im 
	+A[ 2][11].re*B[11][ 0].re;

  C[ 2][ 0].im = 
	 A[ 2][ 0].im*B[ 0][ 0].re 
	+A[ 2][ 0].re*B[ 0][ 0].im 
	+A[ 2][ 1].im*B[ 1][ 0].re 
	+A[ 2][ 1].re*B[ 1][ 0].im 
	+A[ 2][ 2].im*B[ 2][ 0].re 
	+A[ 2][ 2].re*B[ 2][ 0].im 
	+A[ 2][ 3].im*B[ 3][ 0].re 
	+A[ 2][ 3].re*B[ 3][ 0].im 
	+A[ 2][ 4].im*B[ 4][ 0].re 
	+A[ 2][ 4].re*B[ 4][ 0].im 
	+A[ 2][ 5].im*B[ 5][ 0].re 
	+A[ 2][ 5].re*B[ 5][ 0].im 
	+A[ 2][ 6].im*B[ 6][ 0].re 
	+A[ 2][ 6].re*B[ 6][ 0].im 
	+A[ 2][ 7].im*B[ 7][ 0].re 
	+A[ 2][ 7].re*B[ 7][ 0].im 
	+A[ 2][ 8].im*B[ 8][ 0].re 
	+A[ 2][ 8].re*B[ 8][ 0].im 
	+A[ 2][ 9].im*B[ 9][ 0].re 
	+A[ 2][ 9].re*B[ 9][ 0].im 
	+A[ 2][10].im*B[10][ 0].re 
	+A[ 2][10].re*B[10][ 0].im 
	+A[ 2][11].im*B[11][ 0].re 
	+A[ 2][11].re*B[11][ 0].im;

  C[ 2][ 1].re = 
	-A[ 2][ 0].im*B[ 0][ 1].im 
	+A[ 2][ 0].re*B[ 0][ 1].re 
	-A[ 2][ 1].im*B[ 1][ 1].im 
	+A[ 2][ 1].re*B[ 1][ 1].re 
	-A[ 2][ 2].im*B[ 2][ 1].im 
	+A[ 2][ 2].re*B[ 2][ 1].re 
	-A[ 2][ 3].im*B[ 3][ 1].im 
	+A[ 2][ 3].re*B[ 3][ 1].re 
	-A[ 2][ 4].im*B[ 4][ 1].im 
	+A[ 2][ 4].re*B[ 4][ 1].re 
	-A[ 2][ 5].im*B[ 5][ 1].im 
	+A[ 2][ 5].re*B[ 5][ 1].re 
	-A[ 2][ 6].im*B[ 6][ 1].im 
	+A[ 2][ 6].re*B[ 6][ 1].re 
	-A[ 2][ 7].im*B[ 7][ 1].im 
	+A[ 2][ 7].re*B[ 7][ 1].re 
	-A[ 2][ 8].im*B[ 8][ 1].im 
	+A[ 2][ 8].re*B[ 8][ 1].re 
	-A[ 2][ 9].im*B[ 9][ 1].im 
	+A[ 2][ 9].re*B[ 9][ 1].re 
	-A[ 2][10].im*B[10][ 1].im 
	+A[ 2][10].re*B[10][ 1].re 
	-A[ 2][11].im*B[11][ 1].im 
	+A[ 2][11].re*B[11][ 1].re;

  C[ 2][ 1].im = 
	 A[ 2][ 0].im*B[ 0][ 1].re 
	+A[ 2][ 0].re*B[ 0][ 1].im 
	+A[ 2][ 1].im*B[ 1][ 1].re 
	+A[ 2][ 1].re*B[ 1][ 1].im 
	+A[ 2][ 2].im*B[ 2][ 1].re 
	+A[ 2][ 2].re*B[ 2][ 1].im 
	+A[ 2][ 3].im*B[ 3][ 1].re 
	+A[ 2][ 3].re*B[ 3][ 1].im 
	+A[ 2][ 4].im*B[ 4][ 1].re 
	+A[ 2][ 4].re*B[ 4][ 1].im 
	+A[ 2][ 5].im*B[ 5][ 1].re 
	+A[ 2][ 5].re*B[ 5][ 1].im 
	+A[ 2][ 6].im*B[ 6][ 1].re 
	+A[ 2][ 6].re*B[ 6][ 1].im 
	+A[ 2][ 7].im*B[ 7][ 1].re 
	+A[ 2][ 7].re*B[ 7][ 1].im 
	+A[ 2][ 8].im*B[ 8][ 1].re 
	+A[ 2][ 8].re*B[ 8][ 1].im 
	+A[ 2][ 9].im*B[ 9][ 1].re 
	+A[ 2][ 9].re*B[ 9][ 1].im 
	+A[ 2][10].im*B[10][ 1].re 
	+A[ 2][10].re*B[10][ 1].im 
	+A[ 2][11].im*B[11][ 1].re 
	+A[ 2][11].re*B[11][ 1].im;

  C[ 2][ 2].re = 
	-A[ 2][ 0].im*B[ 0][ 2].im 
	+A[ 2][ 0].re*B[ 0][ 2].re 
	-A[ 2][ 1].im*B[ 1][ 2].im 
	+A[ 2][ 1].re*B[ 1][ 2].re 
	-A[ 2][ 2].im*B[ 2][ 2].im 
	+A[ 2][ 2].re*B[ 2][ 2].re 
	-A[ 2][ 3].im*B[ 3][ 2].im 
	+A[ 2][ 3].re*B[ 3][ 2].re 
	-A[ 2][ 4].im*B[ 4][ 2].im 
	+A[ 2][ 4].re*B[ 4][ 2].re 
	-A[ 2][ 5].im*B[ 5][ 2].im 
	+A[ 2][ 5].re*B[ 5][ 2].re 
	-A[ 2][ 6].im*B[ 6][ 2].im 
	+A[ 2][ 6].re*B[ 6][ 2].re 
	-A[ 2][ 7].im*B[ 7][ 2].im 
	+A[ 2][ 7].re*B[ 7][ 2].re 
	-A[ 2][ 8].im*B[ 8][ 2].im 
	+A[ 2][ 8].re*B[ 8][ 2].re 
	-A[ 2][ 9].im*B[ 9][ 2].im 
	+A[ 2][ 9].re*B[ 9][ 2].re 
	-A[ 2][10].im*B[10][ 2].im 
	+A[ 2][10].re*B[10][ 2].re 
	-A[ 2][11].im*B[11][ 2].im 
	+A[ 2][11].re*B[11][ 2].re;

  C[ 2][ 2].im = 
	 A[ 2][ 0].im*B[ 0][ 2].re 
	+A[ 2][ 0].re*B[ 0][ 2].im 
	+A[ 2][ 1].im*B[ 1][ 2].re 
	+A[ 2][ 1].re*B[ 1][ 2].im 
	+A[ 2][ 2].im*B[ 2][ 2].re 
	+A[ 2][ 2].re*B[ 2][ 2].im 
	+A[ 2][ 3].im*B[ 3][ 2].re 
	+A[ 2][ 3].re*B[ 3][ 2].im 
	+A[ 2][ 4].im*B[ 4][ 2].re 
	+A[ 2][ 4].re*B[ 4][ 2].im 
	+A[ 2][ 5].im*B[ 5][ 2].re 
	+A[ 2][ 5].re*B[ 5][ 2].im 
	+A[ 2][ 6].im*B[ 6][ 2].re 
	+A[ 2][ 6].re*B[ 6][ 2].im 
	+A[ 2][ 7].im*B[ 7][ 2].re 
	+A[ 2][ 7].re*B[ 7][ 2].im 
	+A[ 2][ 8].im*B[ 8][ 2].re 
	+A[ 2][ 8].re*B[ 8][ 2].im 
	+A[ 2][ 9].im*B[ 9][ 2].re 
	+A[ 2][ 9].re*B[ 9][ 2].im 
	+A[ 2][10].im*B[10][ 2].re 
	+A[ 2][10].re*B[10][ 2].im 
	+A[ 2][11].im*B[11][ 2].re 
	+A[ 2][11].re*B[11][ 2].im;

  C[ 2][ 3].re = 
	-A[ 2][ 0].im*B[ 0][ 3].im 
	+A[ 2][ 0].re*B[ 0][ 3].re 
	-A[ 2][ 1].im*B[ 1][ 3].im 
	+A[ 2][ 1].re*B[ 1][ 3].re 
	-A[ 2][ 2].im*B[ 2][ 3].im 
	+A[ 2][ 2].re*B[ 2][ 3].re 
	-A[ 2][ 3].im*B[ 3][ 3].im 
	+A[ 2][ 3].re*B[ 3][ 3].re 
	-A[ 2][ 4].im*B[ 4][ 3].im 
	+A[ 2][ 4].re*B[ 4][ 3].re 
	-A[ 2][ 5].im*B[ 5][ 3].im 
	+A[ 2][ 5].re*B[ 5][ 3].re 
	-A[ 2][ 6].im*B[ 6][ 3].im 
	+A[ 2][ 6].re*B[ 6][ 3].re 
	-A[ 2][ 7].im*B[ 7][ 3].im 
	+A[ 2][ 7].re*B[ 7][ 3].re 
	-A[ 2][ 8].im*B[ 8][ 3].im 
	+A[ 2][ 8].re*B[ 8][ 3].re 
	-A[ 2][ 9].im*B[ 9][ 3].im 
	+A[ 2][ 9].re*B[ 9][ 3].re 
	-A[ 2][10].im*B[10][ 3].im 
	+A[ 2][10].re*B[10][ 3].re 
	-A[ 2][11].im*B[11][ 3].im 
	+A[ 2][11].re*B[11][ 3].re;

  C[ 2][ 3].im = 
	 A[ 2][ 0].im*B[ 0][ 3].re 
	+A[ 2][ 0].re*B[ 0][ 3].im 
	+A[ 2][ 1].im*B[ 1][ 3].re 
	+A[ 2][ 1].re*B[ 1][ 3].im 
	+A[ 2][ 2].im*B[ 2][ 3].re 
	+A[ 2][ 2].re*B[ 2][ 3].im 
	+A[ 2][ 3].im*B[ 3][ 3].re 
	+A[ 2][ 3].re*B[ 3][ 3].im 
	+A[ 2][ 4].im*B[ 4][ 3].re 
	+A[ 2][ 4].re*B[ 4][ 3].im 
	+A[ 2][ 5].im*B[ 5][ 3].re 
	+A[ 2][ 5].re*B[ 5][ 3].im 
	+A[ 2][ 6].im*B[ 6][ 3].re 
	+A[ 2][ 6].re*B[ 6][ 3].im 
	+A[ 2][ 7].im*B[ 7][ 3].re 
	+A[ 2][ 7].re*B[ 7][ 3].im 
	+A[ 2][ 8].im*B[ 8][ 3].re 
	+A[ 2][ 8].re*B[ 8][ 3].im 
	+A[ 2][ 9].im*B[ 9][ 3].re 
	+A[ 2][ 9].re*B[ 9][ 3].im 
	+A[ 2][10].im*B[10][ 3].re 
	+A[ 2][10].re*B[10][ 3].im 
	+A[ 2][11].im*B[11][ 3].re 
	+A[ 2][11].re*B[11][ 3].im;

  C[ 2][ 4].re = 
	-A[ 2][ 0].im*B[ 0][ 4].im 
	+A[ 2][ 0].re*B[ 0][ 4].re 
	-A[ 2][ 1].im*B[ 1][ 4].im 
	+A[ 2][ 1].re*B[ 1][ 4].re 
	-A[ 2][ 2].im*B[ 2][ 4].im 
	+A[ 2][ 2].re*B[ 2][ 4].re 
	-A[ 2][ 3].im*B[ 3][ 4].im 
	+A[ 2][ 3].re*B[ 3][ 4].re 
	-A[ 2][ 4].im*B[ 4][ 4].im 
	+A[ 2][ 4].re*B[ 4][ 4].re 
	-A[ 2][ 5].im*B[ 5][ 4].im 
	+A[ 2][ 5].re*B[ 5][ 4].re 
	-A[ 2][ 6].im*B[ 6][ 4].im 
	+A[ 2][ 6].re*B[ 6][ 4].re 
	-A[ 2][ 7].im*B[ 7][ 4].im 
	+A[ 2][ 7].re*B[ 7][ 4].re 
	-A[ 2][ 8].im*B[ 8][ 4].im 
	+A[ 2][ 8].re*B[ 8][ 4].re 
	-A[ 2][ 9].im*B[ 9][ 4].im 
	+A[ 2][ 9].re*B[ 9][ 4].re 
	-A[ 2][10].im*B[10][ 4].im 
	+A[ 2][10].re*B[10][ 4].re 
	-A[ 2][11].im*B[11][ 4].im 
	+A[ 2][11].re*B[11][ 4].re;

  C[ 2][ 4].im = 
	 A[ 2][ 0].im*B[ 0][ 4].re 
	+A[ 2][ 0].re*B[ 0][ 4].im 
	+A[ 2][ 1].im*B[ 1][ 4].re 
	+A[ 2][ 1].re*B[ 1][ 4].im 
	+A[ 2][ 2].im*B[ 2][ 4].re 
	+A[ 2][ 2].re*B[ 2][ 4].im 
	+A[ 2][ 3].im*B[ 3][ 4].re 
	+A[ 2][ 3].re*B[ 3][ 4].im 
	+A[ 2][ 4].im*B[ 4][ 4].re 
	+A[ 2][ 4].re*B[ 4][ 4].im 
	+A[ 2][ 5].im*B[ 5][ 4].re 
	+A[ 2][ 5].re*B[ 5][ 4].im 
	+A[ 2][ 6].im*B[ 6][ 4].re 
	+A[ 2][ 6].re*B[ 6][ 4].im 
	+A[ 2][ 7].im*B[ 7][ 4].re 
	+A[ 2][ 7].re*B[ 7][ 4].im 
	+A[ 2][ 8].im*B[ 8][ 4].re 
	+A[ 2][ 8].re*B[ 8][ 4].im 
	+A[ 2][ 9].im*B[ 9][ 4].re 
	+A[ 2][ 9].re*B[ 9][ 4].im 
	+A[ 2][10].im*B[10][ 4].re 
	+A[ 2][10].re*B[10][ 4].im 
	+A[ 2][11].im*B[11][ 4].re 
	+A[ 2][11].re*B[11][ 4].im;

  C[ 2][ 5].re = 
	-A[ 2][ 0].im*B[ 0][ 5].im 
	+A[ 2][ 0].re*B[ 0][ 5].re 
	-A[ 2][ 1].im*B[ 1][ 5].im 
	+A[ 2][ 1].re*B[ 1][ 5].re 
	-A[ 2][ 2].im*B[ 2][ 5].im 
	+A[ 2][ 2].re*B[ 2][ 5].re 
	-A[ 2][ 3].im*B[ 3][ 5].im 
	+A[ 2][ 3].re*B[ 3][ 5].re 
	-A[ 2][ 4].im*B[ 4][ 5].im 
	+A[ 2][ 4].re*B[ 4][ 5].re 
	-A[ 2][ 5].im*B[ 5][ 5].im 
	+A[ 2][ 5].re*B[ 5][ 5].re 
	-A[ 2][ 6].im*B[ 6][ 5].im 
	+A[ 2][ 6].re*B[ 6][ 5].re 
	-A[ 2][ 7].im*B[ 7][ 5].im 
	+A[ 2][ 7].re*B[ 7][ 5].re 
	-A[ 2][ 8].im*B[ 8][ 5].im 
	+A[ 2][ 8].re*B[ 8][ 5].re 
	-A[ 2][ 9].im*B[ 9][ 5].im 
	+A[ 2][ 9].re*B[ 9][ 5].re 
	-A[ 2][10].im*B[10][ 5].im 
	+A[ 2][10].re*B[10][ 5].re 
	-A[ 2][11].im*B[11][ 5].im 
	+A[ 2][11].re*B[11][ 5].re;

  C[ 2][ 5].im = 
	 A[ 2][ 0].im*B[ 0][ 5].re 
	+A[ 2][ 0].re*B[ 0][ 5].im 
	+A[ 2][ 1].im*B[ 1][ 5].re 
	+A[ 2][ 1].re*B[ 1][ 5].im 
	+A[ 2][ 2].im*B[ 2][ 5].re 
	+A[ 2][ 2].re*B[ 2][ 5].im 
	+A[ 2][ 3].im*B[ 3][ 5].re 
	+A[ 2][ 3].re*B[ 3][ 5].im 
	+A[ 2][ 4].im*B[ 4][ 5].re 
	+A[ 2][ 4].re*B[ 4][ 5].im 
	+A[ 2][ 5].im*B[ 5][ 5].re 
	+A[ 2][ 5].re*B[ 5][ 5].im 
	+A[ 2][ 6].im*B[ 6][ 5].re 
	+A[ 2][ 6].re*B[ 6][ 5].im 
	+A[ 2][ 7].im*B[ 7][ 5].re 
	+A[ 2][ 7].re*B[ 7][ 5].im 
	+A[ 2][ 8].im*B[ 8][ 5].re 
	+A[ 2][ 8].re*B[ 8][ 5].im 
	+A[ 2][ 9].im*B[ 9][ 5].re 
	+A[ 2][ 9].re*B[ 9][ 5].im 
	+A[ 2][10].im*B[10][ 5].re 
	+A[ 2][10].re*B[10][ 5].im 
	+A[ 2][11].im*B[11][ 5].re 
	+A[ 2][11].re*B[11][ 5].im;

  C[ 2][ 6].re = 
	-A[ 2][ 0].im*B[ 0][ 6].im 
	+A[ 2][ 0].re*B[ 0][ 6].re 
	-A[ 2][ 1].im*B[ 1][ 6].im 
	+A[ 2][ 1].re*B[ 1][ 6].re 
	-A[ 2][ 2].im*B[ 2][ 6].im 
	+A[ 2][ 2].re*B[ 2][ 6].re 
	-A[ 2][ 3].im*B[ 3][ 6].im 
	+A[ 2][ 3].re*B[ 3][ 6].re 
	-A[ 2][ 4].im*B[ 4][ 6].im 
	+A[ 2][ 4].re*B[ 4][ 6].re 
	-A[ 2][ 5].im*B[ 5][ 6].im 
	+A[ 2][ 5].re*B[ 5][ 6].re 
	-A[ 2][ 6].im*B[ 6][ 6].im 
	+A[ 2][ 6].re*B[ 6][ 6].re 
	-A[ 2][ 7].im*B[ 7][ 6].im 
	+A[ 2][ 7].re*B[ 7][ 6].re 
	-A[ 2][ 8].im*B[ 8][ 6].im 
	+A[ 2][ 8].re*B[ 8][ 6].re 
	-A[ 2][ 9].im*B[ 9][ 6].im 
	+A[ 2][ 9].re*B[ 9][ 6].re 
	-A[ 2][10].im*B[10][ 6].im 
	+A[ 2][10].re*B[10][ 6].re 
	-A[ 2][11].im*B[11][ 6].im 
	+A[ 2][11].re*B[11][ 6].re;

  C[ 2][ 6].im = 
	 A[ 2][ 0].im*B[ 0][ 6].re 
	+A[ 2][ 0].re*B[ 0][ 6].im 
	+A[ 2][ 1].im*B[ 1][ 6].re 
	+A[ 2][ 1].re*B[ 1][ 6].im 
	+A[ 2][ 2].im*B[ 2][ 6].re 
	+A[ 2][ 2].re*B[ 2][ 6].im 
	+A[ 2][ 3].im*B[ 3][ 6].re 
	+A[ 2][ 3].re*B[ 3][ 6].im 
	+A[ 2][ 4].im*B[ 4][ 6].re 
	+A[ 2][ 4].re*B[ 4][ 6].im 
	+A[ 2][ 5].im*B[ 5][ 6].re 
	+A[ 2][ 5].re*B[ 5][ 6].im 
	+A[ 2][ 6].im*B[ 6][ 6].re 
	+A[ 2][ 6].re*B[ 6][ 6].im 
	+A[ 2][ 7].im*B[ 7][ 6].re 
	+A[ 2][ 7].re*B[ 7][ 6].im 
	+A[ 2][ 8].im*B[ 8][ 6].re 
	+A[ 2][ 8].re*B[ 8][ 6].im 
	+A[ 2][ 9].im*B[ 9][ 6].re 
	+A[ 2][ 9].re*B[ 9][ 6].im 
	+A[ 2][10].im*B[10][ 6].re 
	+A[ 2][10].re*B[10][ 6].im 
	+A[ 2][11].im*B[11][ 6].re 
	+A[ 2][11].re*B[11][ 6].im;

  C[ 2][ 7].re = 
	-A[ 2][ 0].im*B[ 0][ 7].im 
	+A[ 2][ 0].re*B[ 0][ 7].re 
	-A[ 2][ 1].im*B[ 1][ 7].im 
	+A[ 2][ 1].re*B[ 1][ 7].re 
	-A[ 2][ 2].im*B[ 2][ 7].im 
	+A[ 2][ 2].re*B[ 2][ 7].re 
	-A[ 2][ 3].im*B[ 3][ 7].im 
	+A[ 2][ 3].re*B[ 3][ 7].re 
	-A[ 2][ 4].im*B[ 4][ 7].im 
	+A[ 2][ 4].re*B[ 4][ 7].re 
	-A[ 2][ 5].im*B[ 5][ 7].im 
	+A[ 2][ 5].re*B[ 5][ 7].re 
	-A[ 2][ 6].im*B[ 6][ 7].im 
	+A[ 2][ 6].re*B[ 6][ 7].re 
	-A[ 2][ 7].im*B[ 7][ 7].im 
	+A[ 2][ 7].re*B[ 7][ 7].re 
	-A[ 2][ 8].im*B[ 8][ 7].im 
	+A[ 2][ 8].re*B[ 8][ 7].re 
	-A[ 2][ 9].im*B[ 9][ 7].im 
	+A[ 2][ 9].re*B[ 9][ 7].re 
	-A[ 2][10].im*B[10][ 7].im 
	+A[ 2][10].re*B[10][ 7].re 
	-A[ 2][11].im*B[11][ 7].im 
	+A[ 2][11].re*B[11][ 7].re;

  C[ 2][ 7].im = 
	 A[ 2][ 0].im*B[ 0][ 7].re 
	+A[ 2][ 0].re*B[ 0][ 7].im 
	+A[ 2][ 1].im*B[ 1][ 7].re 
	+A[ 2][ 1].re*B[ 1][ 7].im 
	+A[ 2][ 2].im*B[ 2][ 7].re 
	+A[ 2][ 2].re*B[ 2][ 7].im 
	+A[ 2][ 3].im*B[ 3][ 7].re 
	+A[ 2][ 3].re*B[ 3][ 7].im 
	+A[ 2][ 4].im*B[ 4][ 7].re 
	+A[ 2][ 4].re*B[ 4][ 7].im 
	+A[ 2][ 5].im*B[ 5][ 7].re 
	+A[ 2][ 5].re*B[ 5][ 7].im 
	+A[ 2][ 6].im*B[ 6][ 7].re 
	+A[ 2][ 6].re*B[ 6][ 7].im 
	+A[ 2][ 7].im*B[ 7][ 7].re 
	+A[ 2][ 7].re*B[ 7][ 7].im 
	+A[ 2][ 8].im*B[ 8][ 7].re 
	+A[ 2][ 8].re*B[ 8][ 7].im 
	+A[ 2][ 9].im*B[ 9][ 7].re 
	+A[ 2][ 9].re*B[ 9][ 7].im 
	+A[ 2][10].im*B[10][ 7].re 
	+A[ 2][10].re*B[10][ 7].im 
	+A[ 2][11].im*B[11][ 7].re 
	+A[ 2][11].re*B[11][ 7].im;

  C[ 2][ 8].re = 
	-A[ 2][ 0].im*B[ 0][ 8].im 
	+A[ 2][ 0].re*B[ 0][ 8].re 
	-A[ 2][ 1].im*B[ 1][ 8].im 
	+A[ 2][ 1].re*B[ 1][ 8].re 
	-A[ 2][ 2].im*B[ 2][ 8].im 
	+A[ 2][ 2].re*B[ 2][ 8].re 
	-A[ 2][ 3].im*B[ 3][ 8].im 
	+A[ 2][ 3].re*B[ 3][ 8].re 
	-A[ 2][ 4].im*B[ 4][ 8].im 
	+A[ 2][ 4].re*B[ 4][ 8].re 
	-A[ 2][ 5].im*B[ 5][ 8].im 
	+A[ 2][ 5].re*B[ 5][ 8].re 
	-A[ 2][ 6].im*B[ 6][ 8].im 
	+A[ 2][ 6].re*B[ 6][ 8].re 
	-A[ 2][ 7].im*B[ 7][ 8].im 
	+A[ 2][ 7].re*B[ 7][ 8].re 
	-A[ 2][ 8].im*B[ 8][ 8].im 
	+A[ 2][ 8].re*B[ 8][ 8].re 
	-A[ 2][ 9].im*B[ 9][ 8].im 
	+A[ 2][ 9].re*B[ 9][ 8].re 
	-A[ 2][10].im*B[10][ 8].im 
	+A[ 2][10].re*B[10][ 8].re 
	-A[ 2][11].im*B[11][ 8].im 
	+A[ 2][11].re*B[11][ 8].re;

  C[ 2][ 8].im = 
	 A[ 2][ 0].im*B[ 0][ 8].re 
	+A[ 2][ 0].re*B[ 0][ 8].im 
	+A[ 2][ 1].im*B[ 1][ 8].re 
	+A[ 2][ 1].re*B[ 1][ 8].im 
	+A[ 2][ 2].im*B[ 2][ 8].re 
	+A[ 2][ 2].re*B[ 2][ 8].im 
	+A[ 2][ 3].im*B[ 3][ 8].re 
	+A[ 2][ 3].re*B[ 3][ 8].im 
	+A[ 2][ 4].im*B[ 4][ 8].re 
	+A[ 2][ 4].re*B[ 4][ 8].im 
	+A[ 2][ 5].im*B[ 5][ 8].re 
	+A[ 2][ 5].re*B[ 5][ 8].im 
	+A[ 2][ 6].im*B[ 6][ 8].re 
	+A[ 2][ 6].re*B[ 6][ 8].im 
	+A[ 2][ 7].im*B[ 7][ 8].re 
	+A[ 2][ 7].re*B[ 7][ 8].im 
	+A[ 2][ 8].im*B[ 8][ 8].re 
	+A[ 2][ 8].re*B[ 8][ 8].im 
	+A[ 2][ 9].im*B[ 9][ 8].re 
	+A[ 2][ 9].re*B[ 9][ 8].im 
	+A[ 2][10].im*B[10][ 8].re 
	+A[ 2][10].re*B[10][ 8].im 
	+A[ 2][11].im*B[11][ 8].re 
	+A[ 2][11].re*B[11][ 8].im;

  C[ 2][ 9].re = 
	-A[ 2][ 0].im*B[ 0][ 9].im 
	+A[ 2][ 0].re*B[ 0][ 9].re 
	-A[ 2][ 1].im*B[ 1][ 9].im 
	+A[ 2][ 1].re*B[ 1][ 9].re 
	-A[ 2][ 2].im*B[ 2][ 9].im 
	+A[ 2][ 2].re*B[ 2][ 9].re 
	-A[ 2][ 3].im*B[ 3][ 9].im 
	+A[ 2][ 3].re*B[ 3][ 9].re 
	-A[ 2][ 4].im*B[ 4][ 9].im 
	+A[ 2][ 4].re*B[ 4][ 9].re 
	-A[ 2][ 5].im*B[ 5][ 9].im 
	+A[ 2][ 5].re*B[ 5][ 9].re 
	-A[ 2][ 6].im*B[ 6][ 9].im 
	+A[ 2][ 6].re*B[ 6][ 9].re 
	-A[ 2][ 7].im*B[ 7][ 9].im 
	+A[ 2][ 7].re*B[ 7][ 9].re 
	-A[ 2][ 8].im*B[ 8][ 9].im 
	+A[ 2][ 8].re*B[ 8][ 9].re 
	-A[ 2][ 9].im*B[ 9][ 9].im 
	+A[ 2][ 9].re*B[ 9][ 9].re 
	-A[ 2][10].im*B[10][ 9].im 
	+A[ 2][10].re*B[10][ 9].re 
	-A[ 2][11].im*B[11][ 9].im 
	+A[ 2][11].re*B[11][ 9].re;

  C[ 2][ 9].im = 
	 A[ 2][ 0].im*B[ 0][ 9].re 
	+A[ 2][ 0].re*B[ 0][ 9].im 
	+A[ 2][ 1].im*B[ 1][ 9].re 
	+A[ 2][ 1].re*B[ 1][ 9].im 
	+A[ 2][ 2].im*B[ 2][ 9].re 
	+A[ 2][ 2].re*B[ 2][ 9].im 
	+A[ 2][ 3].im*B[ 3][ 9].re 
	+A[ 2][ 3].re*B[ 3][ 9].im 
	+A[ 2][ 4].im*B[ 4][ 9].re 
	+A[ 2][ 4].re*B[ 4][ 9].im 
	+A[ 2][ 5].im*B[ 5][ 9].re 
	+A[ 2][ 5].re*B[ 5][ 9].im 
	+A[ 2][ 6].im*B[ 6][ 9].re 
	+A[ 2][ 6].re*B[ 6][ 9].im 
	+A[ 2][ 7].im*B[ 7][ 9].re 
	+A[ 2][ 7].re*B[ 7][ 9].im 
	+A[ 2][ 8].im*B[ 8][ 9].re 
	+A[ 2][ 8].re*B[ 8][ 9].im 
	+A[ 2][ 9].im*B[ 9][ 9].re 
	+A[ 2][ 9].re*B[ 9][ 9].im 
	+A[ 2][10].im*B[10][ 9].re 
	+A[ 2][10].re*B[10][ 9].im 
	+A[ 2][11].im*B[11][ 9].re 
	+A[ 2][11].re*B[11][ 9].im;

  C[ 2][10].re = 
	-A[ 2][ 0].im*B[ 0][10].im 
	+A[ 2][ 0].re*B[ 0][10].re 
	-A[ 2][ 1].im*B[ 1][10].im 
	+A[ 2][ 1].re*B[ 1][10].re 
	-A[ 2][ 2].im*B[ 2][10].im 
	+A[ 2][ 2].re*B[ 2][10].re 
	-A[ 2][ 3].im*B[ 3][10].im 
	+A[ 2][ 3].re*B[ 3][10].re 
	-A[ 2][ 4].im*B[ 4][10].im 
	+A[ 2][ 4].re*B[ 4][10].re 
	-A[ 2][ 5].im*B[ 5][10].im 
	+A[ 2][ 5].re*B[ 5][10].re 
	-A[ 2][ 6].im*B[ 6][10].im 
	+A[ 2][ 6].re*B[ 6][10].re 
	-A[ 2][ 7].im*B[ 7][10].im 
	+A[ 2][ 7].re*B[ 7][10].re 
	-A[ 2][ 8].im*B[ 8][10].im 
	+A[ 2][ 8].re*B[ 8][10].re 
	-A[ 2][ 9].im*B[ 9][10].im 
	+A[ 2][ 9].re*B[ 9][10].re 
	-A[ 2][10].im*B[10][10].im 
	+A[ 2][10].re*B[10][10].re 
	-A[ 2][11].im*B[11][10].im 
	+A[ 2][11].re*B[11][10].re;

  C[ 2][10].im = 
	 A[ 2][ 0].im*B[ 0][10].re 
	+A[ 2][ 0].re*B[ 0][10].im 
	+A[ 2][ 1].im*B[ 1][10].re 
	+A[ 2][ 1].re*B[ 1][10].im 
	+A[ 2][ 2].im*B[ 2][10].re 
	+A[ 2][ 2].re*B[ 2][10].im 
	+A[ 2][ 3].im*B[ 3][10].re 
	+A[ 2][ 3].re*B[ 3][10].im 
	+A[ 2][ 4].im*B[ 4][10].re 
	+A[ 2][ 4].re*B[ 4][10].im 
	+A[ 2][ 5].im*B[ 5][10].re 
	+A[ 2][ 5].re*B[ 5][10].im 
	+A[ 2][ 6].im*B[ 6][10].re 
	+A[ 2][ 6].re*B[ 6][10].im 
	+A[ 2][ 7].im*B[ 7][10].re 
	+A[ 2][ 7].re*B[ 7][10].im 
	+A[ 2][ 8].im*B[ 8][10].re 
	+A[ 2][ 8].re*B[ 8][10].im 
	+A[ 2][ 9].im*B[ 9][10].re 
	+A[ 2][ 9].re*B[ 9][10].im 
	+A[ 2][10].im*B[10][10].re 
	+A[ 2][10].re*B[10][10].im 
	+A[ 2][11].im*B[11][10].re 
	+A[ 2][11].re*B[11][10].im;

  C[ 2][11].re = 
	-A[ 2][ 0].im*B[ 0][11].im 
	+A[ 2][ 0].re*B[ 0][11].re 
	-A[ 2][ 1].im*B[ 1][11].im 
	+A[ 2][ 1].re*B[ 1][11].re 
	-A[ 2][ 2].im*B[ 2][11].im 
	+A[ 2][ 2].re*B[ 2][11].re 
	-A[ 2][ 3].im*B[ 3][11].im 
	+A[ 2][ 3].re*B[ 3][11].re 
	-A[ 2][ 4].im*B[ 4][11].im 
	+A[ 2][ 4].re*B[ 4][11].re 
	-A[ 2][ 5].im*B[ 5][11].im 
	+A[ 2][ 5].re*B[ 5][11].re 
	-A[ 2][ 6].im*B[ 6][11].im 
	+A[ 2][ 6].re*B[ 6][11].re 
	-A[ 2][ 7].im*B[ 7][11].im 
	+A[ 2][ 7].re*B[ 7][11].re 
	-A[ 2][ 8].im*B[ 8][11].im 
	+A[ 2][ 8].re*B[ 8][11].re 
	-A[ 2][ 9].im*B[ 9][11].im 
	+A[ 2][ 9].re*B[ 9][11].re 
	-A[ 2][10].im*B[10][11].im 
	+A[ 2][10].re*B[10][11].re 
	-A[ 2][11].im*B[11][11].im 
	+A[ 2][11].re*B[11][11].re;

  C[ 2][11].im = 
	 A[ 2][ 0].im*B[ 0][11].re 
	+A[ 2][ 0].re*B[ 0][11].im 
	+A[ 2][ 1].im*B[ 1][11].re 
	+A[ 2][ 1].re*B[ 1][11].im 
	+A[ 2][ 2].im*B[ 2][11].re 
	+A[ 2][ 2].re*B[ 2][11].im 
	+A[ 2][ 3].im*B[ 3][11].re 
	+A[ 2][ 3].re*B[ 3][11].im 
	+A[ 2][ 4].im*B[ 4][11].re 
	+A[ 2][ 4].re*B[ 4][11].im 
	+A[ 2][ 5].im*B[ 5][11].re 
	+A[ 2][ 5].re*B[ 5][11].im 
	+A[ 2][ 6].im*B[ 6][11].re 
	+A[ 2][ 6].re*B[ 6][11].im 
	+A[ 2][ 7].im*B[ 7][11].re 
	+A[ 2][ 7].re*B[ 7][11].im 
	+A[ 2][ 8].im*B[ 8][11].re 
	+A[ 2][ 8].re*B[ 8][11].im 
	+A[ 2][ 9].im*B[ 9][11].re 
	+A[ 2][ 9].re*B[ 9][11].im 
	+A[ 2][10].im*B[10][11].re 
	+A[ 2][10].re*B[10][11].im 
	+A[ 2][11].im*B[11][11].re 
	+A[ 2][11].re*B[11][11].im;

  C[ 3][ 0].re = 
	-A[ 3][ 0].im*B[ 0][ 0].im 
	+A[ 3][ 0].re*B[ 0][ 0].re 
	-A[ 3][ 1].im*B[ 1][ 0].im 
	+A[ 3][ 1].re*B[ 1][ 0].re 
	-A[ 3][ 2].im*B[ 2][ 0].im 
	+A[ 3][ 2].re*B[ 2][ 0].re 
	-A[ 3][ 3].im*B[ 3][ 0].im 
	+A[ 3][ 3].re*B[ 3][ 0].re 
	-A[ 3][ 4].im*B[ 4][ 0].im 
	+A[ 3][ 4].re*B[ 4][ 0].re 
	-A[ 3][ 5].im*B[ 5][ 0].im 
	+A[ 3][ 5].re*B[ 5][ 0].re 
	-A[ 3][ 6].im*B[ 6][ 0].im 
	+A[ 3][ 6].re*B[ 6][ 0].re 
	-A[ 3][ 7].im*B[ 7][ 0].im 
	+A[ 3][ 7].re*B[ 7][ 0].re 
	-A[ 3][ 8].im*B[ 8][ 0].im 
	+A[ 3][ 8].re*B[ 8][ 0].re 
	-A[ 3][ 9].im*B[ 9][ 0].im 
	+A[ 3][ 9].re*B[ 9][ 0].re 
	-A[ 3][10].im*B[10][ 0].im 
	+A[ 3][10].re*B[10][ 0].re 
	-A[ 3][11].im*B[11][ 0].im 
	+A[ 3][11].re*B[11][ 0].re;

  C[ 3][ 0].im = 
	 A[ 3][ 0].im*B[ 0][ 0].re 
	+A[ 3][ 0].re*B[ 0][ 0].im 
	+A[ 3][ 1].im*B[ 1][ 0].re 
	+A[ 3][ 1].re*B[ 1][ 0].im 
	+A[ 3][ 2].im*B[ 2][ 0].re 
	+A[ 3][ 2].re*B[ 2][ 0].im 
	+A[ 3][ 3].im*B[ 3][ 0].re 
	+A[ 3][ 3].re*B[ 3][ 0].im 
	+A[ 3][ 4].im*B[ 4][ 0].re 
	+A[ 3][ 4].re*B[ 4][ 0].im 
	+A[ 3][ 5].im*B[ 5][ 0].re 
	+A[ 3][ 5].re*B[ 5][ 0].im 
	+A[ 3][ 6].im*B[ 6][ 0].re 
	+A[ 3][ 6].re*B[ 6][ 0].im 
	+A[ 3][ 7].im*B[ 7][ 0].re 
	+A[ 3][ 7].re*B[ 7][ 0].im 
	+A[ 3][ 8].im*B[ 8][ 0].re 
	+A[ 3][ 8].re*B[ 8][ 0].im 
	+A[ 3][ 9].im*B[ 9][ 0].re 
	+A[ 3][ 9].re*B[ 9][ 0].im 
	+A[ 3][10].im*B[10][ 0].re 
	+A[ 3][10].re*B[10][ 0].im 
	+A[ 3][11].im*B[11][ 0].re 
	+A[ 3][11].re*B[11][ 0].im;

  C[ 3][ 1].re = 
	-A[ 3][ 0].im*B[ 0][ 1].im 
	+A[ 3][ 0].re*B[ 0][ 1].re 
	-A[ 3][ 1].im*B[ 1][ 1].im 
	+A[ 3][ 1].re*B[ 1][ 1].re 
	-A[ 3][ 2].im*B[ 2][ 1].im 
	+A[ 3][ 2].re*B[ 2][ 1].re 
	-A[ 3][ 3].im*B[ 3][ 1].im 
	+A[ 3][ 3].re*B[ 3][ 1].re 
	-A[ 3][ 4].im*B[ 4][ 1].im 
	+A[ 3][ 4].re*B[ 4][ 1].re 
	-A[ 3][ 5].im*B[ 5][ 1].im 
	+A[ 3][ 5].re*B[ 5][ 1].re 
	-A[ 3][ 6].im*B[ 6][ 1].im 
	+A[ 3][ 6].re*B[ 6][ 1].re 
	-A[ 3][ 7].im*B[ 7][ 1].im 
	+A[ 3][ 7].re*B[ 7][ 1].re 
	-A[ 3][ 8].im*B[ 8][ 1].im 
	+A[ 3][ 8].re*B[ 8][ 1].re 
	-A[ 3][ 9].im*B[ 9][ 1].im 
	+A[ 3][ 9].re*B[ 9][ 1].re 
	-A[ 3][10].im*B[10][ 1].im 
	+A[ 3][10].re*B[10][ 1].re 
	-A[ 3][11].im*B[11][ 1].im 
	+A[ 3][11].re*B[11][ 1].re;

  C[ 3][ 1].im = 
	 A[ 3][ 0].im*B[ 0][ 1].re 
	+A[ 3][ 0].re*B[ 0][ 1].im 
	+A[ 3][ 1].im*B[ 1][ 1].re 
	+A[ 3][ 1].re*B[ 1][ 1].im 
	+A[ 3][ 2].im*B[ 2][ 1].re 
	+A[ 3][ 2].re*B[ 2][ 1].im 
	+A[ 3][ 3].im*B[ 3][ 1].re 
	+A[ 3][ 3].re*B[ 3][ 1].im 
	+A[ 3][ 4].im*B[ 4][ 1].re 
	+A[ 3][ 4].re*B[ 4][ 1].im 
	+A[ 3][ 5].im*B[ 5][ 1].re 
	+A[ 3][ 5].re*B[ 5][ 1].im 
	+A[ 3][ 6].im*B[ 6][ 1].re 
	+A[ 3][ 6].re*B[ 6][ 1].im 
	+A[ 3][ 7].im*B[ 7][ 1].re 
	+A[ 3][ 7].re*B[ 7][ 1].im 
	+A[ 3][ 8].im*B[ 8][ 1].re 
	+A[ 3][ 8].re*B[ 8][ 1].im 
	+A[ 3][ 9].im*B[ 9][ 1].re 
	+A[ 3][ 9].re*B[ 9][ 1].im 
	+A[ 3][10].im*B[10][ 1].re 
	+A[ 3][10].re*B[10][ 1].im 
	+A[ 3][11].im*B[11][ 1].re 
	+A[ 3][11].re*B[11][ 1].im;

  C[ 3][ 2].re = 
	-A[ 3][ 0].im*B[ 0][ 2].im 
	+A[ 3][ 0].re*B[ 0][ 2].re 
	-A[ 3][ 1].im*B[ 1][ 2].im 
	+A[ 3][ 1].re*B[ 1][ 2].re 
	-A[ 3][ 2].im*B[ 2][ 2].im 
	+A[ 3][ 2].re*B[ 2][ 2].re 
	-A[ 3][ 3].im*B[ 3][ 2].im 
	+A[ 3][ 3].re*B[ 3][ 2].re 
	-A[ 3][ 4].im*B[ 4][ 2].im 
	+A[ 3][ 4].re*B[ 4][ 2].re 
	-A[ 3][ 5].im*B[ 5][ 2].im 
	+A[ 3][ 5].re*B[ 5][ 2].re 
	-A[ 3][ 6].im*B[ 6][ 2].im 
	+A[ 3][ 6].re*B[ 6][ 2].re 
	-A[ 3][ 7].im*B[ 7][ 2].im 
	+A[ 3][ 7].re*B[ 7][ 2].re 
	-A[ 3][ 8].im*B[ 8][ 2].im 
	+A[ 3][ 8].re*B[ 8][ 2].re 
	-A[ 3][ 9].im*B[ 9][ 2].im 
	+A[ 3][ 9].re*B[ 9][ 2].re 
	-A[ 3][10].im*B[10][ 2].im 
	+A[ 3][10].re*B[10][ 2].re 
	-A[ 3][11].im*B[11][ 2].im 
	+A[ 3][11].re*B[11][ 2].re;

  C[ 3][ 2].im = 
	 A[ 3][ 0].im*B[ 0][ 2].re 
	+A[ 3][ 0].re*B[ 0][ 2].im 
	+A[ 3][ 1].im*B[ 1][ 2].re 
	+A[ 3][ 1].re*B[ 1][ 2].im 
	+A[ 3][ 2].im*B[ 2][ 2].re 
	+A[ 3][ 2].re*B[ 2][ 2].im 
	+A[ 3][ 3].im*B[ 3][ 2].re 
	+A[ 3][ 3].re*B[ 3][ 2].im 
	+A[ 3][ 4].im*B[ 4][ 2].re 
	+A[ 3][ 4].re*B[ 4][ 2].im 
	+A[ 3][ 5].im*B[ 5][ 2].re 
	+A[ 3][ 5].re*B[ 5][ 2].im 
	+A[ 3][ 6].im*B[ 6][ 2].re 
	+A[ 3][ 6].re*B[ 6][ 2].im 
	+A[ 3][ 7].im*B[ 7][ 2].re 
	+A[ 3][ 7].re*B[ 7][ 2].im 
	+A[ 3][ 8].im*B[ 8][ 2].re 
	+A[ 3][ 8].re*B[ 8][ 2].im 
	+A[ 3][ 9].im*B[ 9][ 2].re 
	+A[ 3][ 9].re*B[ 9][ 2].im 
	+A[ 3][10].im*B[10][ 2].re 
	+A[ 3][10].re*B[10][ 2].im 
	+A[ 3][11].im*B[11][ 2].re 
	+A[ 3][11].re*B[11][ 2].im;

  C[ 3][ 3].re = 
	-A[ 3][ 0].im*B[ 0][ 3].im 
	+A[ 3][ 0].re*B[ 0][ 3].re 
	-A[ 3][ 1].im*B[ 1][ 3].im 
	+A[ 3][ 1].re*B[ 1][ 3].re 
	-A[ 3][ 2].im*B[ 2][ 3].im 
	+A[ 3][ 2].re*B[ 2][ 3].re 
	-A[ 3][ 3].im*B[ 3][ 3].im 
	+A[ 3][ 3].re*B[ 3][ 3].re 
	-A[ 3][ 4].im*B[ 4][ 3].im 
	+A[ 3][ 4].re*B[ 4][ 3].re 
	-A[ 3][ 5].im*B[ 5][ 3].im 
	+A[ 3][ 5].re*B[ 5][ 3].re 
	-A[ 3][ 6].im*B[ 6][ 3].im 
	+A[ 3][ 6].re*B[ 6][ 3].re 
	-A[ 3][ 7].im*B[ 7][ 3].im 
	+A[ 3][ 7].re*B[ 7][ 3].re 
	-A[ 3][ 8].im*B[ 8][ 3].im 
	+A[ 3][ 8].re*B[ 8][ 3].re 
	-A[ 3][ 9].im*B[ 9][ 3].im 
	+A[ 3][ 9].re*B[ 9][ 3].re 
	-A[ 3][10].im*B[10][ 3].im 
	+A[ 3][10].re*B[10][ 3].re 
	-A[ 3][11].im*B[11][ 3].im 
	+A[ 3][11].re*B[11][ 3].re;

  C[ 3][ 3].im = 
	 A[ 3][ 0].im*B[ 0][ 3].re 
	+A[ 3][ 0].re*B[ 0][ 3].im 
	+A[ 3][ 1].im*B[ 1][ 3].re 
	+A[ 3][ 1].re*B[ 1][ 3].im 
	+A[ 3][ 2].im*B[ 2][ 3].re 
	+A[ 3][ 2].re*B[ 2][ 3].im 
	+A[ 3][ 3].im*B[ 3][ 3].re 
	+A[ 3][ 3].re*B[ 3][ 3].im 
	+A[ 3][ 4].im*B[ 4][ 3].re 
	+A[ 3][ 4].re*B[ 4][ 3].im 
	+A[ 3][ 5].im*B[ 5][ 3].re 
	+A[ 3][ 5].re*B[ 5][ 3].im 
	+A[ 3][ 6].im*B[ 6][ 3].re 
	+A[ 3][ 6].re*B[ 6][ 3].im 
	+A[ 3][ 7].im*B[ 7][ 3].re 
	+A[ 3][ 7].re*B[ 7][ 3].im 
	+A[ 3][ 8].im*B[ 8][ 3].re 
	+A[ 3][ 8].re*B[ 8][ 3].im 
	+A[ 3][ 9].im*B[ 9][ 3].re 
	+A[ 3][ 9].re*B[ 9][ 3].im 
	+A[ 3][10].im*B[10][ 3].re 
	+A[ 3][10].re*B[10][ 3].im 
	+A[ 3][11].im*B[11][ 3].re 
	+A[ 3][11].re*B[11][ 3].im;

  C[ 3][ 4].re = 
	-A[ 3][ 0].im*B[ 0][ 4].im 
	+A[ 3][ 0].re*B[ 0][ 4].re 
	-A[ 3][ 1].im*B[ 1][ 4].im 
	+A[ 3][ 1].re*B[ 1][ 4].re 
	-A[ 3][ 2].im*B[ 2][ 4].im 
	+A[ 3][ 2].re*B[ 2][ 4].re 
	-A[ 3][ 3].im*B[ 3][ 4].im 
	+A[ 3][ 3].re*B[ 3][ 4].re 
	-A[ 3][ 4].im*B[ 4][ 4].im 
	+A[ 3][ 4].re*B[ 4][ 4].re 
	-A[ 3][ 5].im*B[ 5][ 4].im 
	+A[ 3][ 5].re*B[ 5][ 4].re 
	-A[ 3][ 6].im*B[ 6][ 4].im 
	+A[ 3][ 6].re*B[ 6][ 4].re 
	-A[ 3][ 7].im*B[ 7][ 4].im 
	+A[ 3][ 7].re*B[ 7][ 4].re 
	-A[ 3][ 8].im*B[ 8][ 4].im 
	+A[ 3][ 8].re*B[ 8][ 4].re 
	-A[ 3][ 9].im*B[ 9][ 4].im 
	+A[ 3][ 9].re*B[ 9][ 4].re 
	-A[ 3][10].im*B[10][ 4].im 
	+A[ 3][10].re*B[10][ 4].re 
	-A[ 3][11].im*B[11][ 4].im 
	+A[ 3][11].re*B[11][ 4].re;

  C[ 3][ 4].im = 
	 A[ 3][ 0].im*B[ 0][ 4].re 
	+A[ 3][ 0].re*B[ 0][ 4].im 
	+A[ 3][ 1].im*B[ 1][ 4].re 
	+A[ 3][ 1].re*B[ 1][ 4].im 
	+A[ 3][ 2].im*B[ 2][ 4].re 
	+A[ 3][ 2].re*B[ 2][ 4].im 
	+A[ 3][ 3].im*B[ 3][ 4].re 
	+A[ 3][ 3].re*B[ 3][ 4].im 
	+A[ 3][ 4].im*B[ 4][ 4].re 
	+A[ 3][ 4].re*B[ 4][ 4].im 
	+A[ 3][ 5].im*B[ 5][ 4].re 
	+A[ 3][ 5].re*B[ 5][ 4].im 
	+A[ 3][ 6].im*B[ 6][ 4].re 
	+A[ 3][ 6].re*B[ 6][ 4].im 
	+A[ 3][ 7].im*B[ 7][ 4].re 
	+A[ 3][ 7].re*B[ 7][ 4].im 
	+A[ 3][ 8].im*B[ 8][ 4].re 
	+A[ 3][ 8].re*B[ 8][ 4].im 
	+A[ 3][ 9].im*B[ 9][ 4].re 
	+A[ 3][ 9].re*B[ 9][ 4].im 
	+A[ 3][10].im*B[10][ 4].re 
	+A[ 3][10].re*B[10][ 4].im 
	+A[ 3][11].im*B[11][ 4].re 
	+A[ 3][11].re*B[11][ 4].im;

  C[ 3][ 5].re = 
	-A[ 3][ 0].im*B[ 0][ 5].im 
	+A[ 3][ 0].re*B[ 0][ 5].re 
	-A[ 3][ 1].im*B[ 1][ 5].im 
	+A[ 3][ 1].re*B[ 1][ 5].re 
	-A[ 3][ 2].im*B[ 2][ 5].im 
	+A[ 3][ 2].re*B[ 2][ 5].re 
	-A[ 3][ 3].im*B[ 3][ 5].im 
	+A[ 3][ 3].re*B[ 3][ 5].re 
	-A[ 3][ 4].im*B[ 4][ 5].im 
	+A[ 3][ 4].re*B[ 4][ 5].re 
	-A[ 3][ 5].im*B[ 5][ 5].im 
	+A[ 3][ 5].re*B[ 5][ 5].re 
	-A[ 3][ 6].im*B[ 6][ 5].im 
	+A[ 3][ 6].re*B[ 6][ 5].re 
	-A[ 3][ 7].im*B[ 7][ 5].im 
	+A[ 3][ 7].re*B[ 7][ 5].re 
	-A[ 3][ 8].im*B[ 8][ 5].im 
	+A[ 3][ 8].re*B[ 8][ 5].re 
	-A[ 3][ 9].im*B[ 9][ 5].im 
	+A[ 3][ 9].re*B[ 9][ 5].re 
	-A[ 3][10].im*B[10][ 5].im 
	+A[ 3][10].re*B[10][ 5].re 
	-A[ 3][11].im*B[11][ 5].im 
	+A[ 3][11].re*B[11][ 5].re;

  C[ 3][ 5].im = 
	 A[ 3][ 0].im*B[ 0][ 5].re 
	+A[ 3][ 0].re*B[ 0][ 5].im 
	+A[ 3][ 1].im*B[ 1][ 5].re 
	+A[ 3][ 1].re*B[ 1][ 5].im 
	+A[ 3][ 2].im*B[ 2][ 5].re 
	+A[ 3][ 2].re*B[ 2][ 5].im 
	+A[ 3][ 3].im*B[ 3][ 5].re 
	+A[ 3][ 3].re*B[ 3][ 5].im 
	+A[ 3][ 4].im*B[ 4][ 5].re 
	+A[ 3][ 4].re*B[ 4][ 5].im 
	+A[ 3][ 5].im*B[ 5][ 5].re 
	+A[ 3][ 5].re*B[ 5][ 5].im 
	+A[ 3][ 6].im*B[ 6][ 5].re 
	+A[ 3][ 6].re*B[ 6][ 5].im 
	+A[ 3][ 7].im*B[ 7][ 5].re 
	+A[ 3][ 7].re*B[ 7][ 5].im 
	+A[ 3][ 8].im*B[ 8][ 5].re 
	+A[ 3][ 8].re*B[ 8][ 5].im 
	+A[ 3][ 9].im*B[ 9][ 5].re 
	+A[ 3][ 9].re*B[ 9][ 5].im 
	+A[ 3][10].im*B[10][ 5].re 
	+A[ 3][10].re*B[10][ 5].im 
	+A[ 3][11].im*B[11][ 5].re 
	+A[ 3][11].re*B[11][ 5].im;

  C[ 3][ 6].re = 
	-A[ 3][ 0].im*B[ 0][ 6].im 
	+A[ 3][ 0].re*B[ 0][ 6].re 
	-A[ 3][ 1].im*B[ 1][ 6].im 
	+A[ 3][ 1].re*B[ 1][ 6].re 
	-A[ 3][ 2].im*B[ 2][ 6].im 
	+A[ 3][ 2].re*B[ 2][ 6].re 
	-A[ 3][ 3].im*B[ 3][ 6].im 
	+A[ 3][ 3].re*B[ 3][ 6].re 
	-A[ 3][ 4].im*B[ 4][ 6].im 
	+A[ 3][ 4].re*B[ 4][ 6].re 
	-A[ 3][ 5].im*B[ 5][ 6].im 
	+A[ 3][ 5].re*B[ 5][ 6].re 
	-A[ 3][ 6].im*B[ 6][ 6].im 
	+A[ 3][ 6].re*B[ 6][ 6].re 
	-A[ 3][ 7].im*B[ 7][ 6].im 
	+A[ 3][ 7].re*B[ 7][ 6].re 
	-A[ 3][ 8].im*B[ 8][ 6].im 
	+A[ 3][ 8].re*B[ 8][ 6].re 
	-A[ 3][ 9].im*B[ 9][ 6].im 
	+A[ 3][ 9].re*B[ 9][ 6].re 
	-A[ 3][10].im*B[10][ 6].im 
	+A[ 3][10].re*B[10][ 6].re 
	-A[ 3][11].im*B[11][ 6].im 
	+A[ 3][11].re*B[11][ 6].re;

  C[ 3][ 6].im = 
	 A[ 3][ 0].im*B[ 0][ 6].re 
	+A[ 3][ 0].re*B[ 0][ 6].im 
	+A[ 3][ 1].im*B[ 1][ 6].re 
	+A[ 3][ 1].re*B[ 1][ 6].im 
	+A[ 3][ 2].im*B[ 2][ 6].re 
	+A[ 3][ 2].re*B[ 2][ 6].im 
	+A[ 3][ 3].im*B[ 3][ 6].re 
	+A[ 3][ 3].re*B[ 3][ 6].im 
	+A[ 3][ 4].im*B[ 4][ 6].re 
	+A[ 3][ 4].re*B[ 4][ 6].im 
	+A[ 3][ 5].im*B[ 5][ 6].re 
	+A[ 3][ 5].re*B[ 5][ 6].im 
	+A[ 3][ 6].im*B[ 6][ 6].re 
	+A[ 3][ 6].re*B[ 6][ 6].im 
	+A[ 3][ 7].im*B[ 7][ 6].re 
	+A[ 3][ 7].re*B[ 7][ 6].im 
	+A[ 3][ 8].im*B[ 8][ 6].re 
	+A[ 3][ 8].re*B[ 8][ 6].im 
	+A[ 3][ 9].im*B[ 9][ 6].re 
	+A[ 3][ 9].re*B[ 9][ 6].im 
	+A[ 3][10].im*B[10][ 6].re 
	+A[ 3][10].re*B[10][ 6].im 
	+A[ 3][11].im*B[11][ 6].re 
	+A[ 3][11].re*B[11][ 6].im;

  C[ 3][ 7].re = 
	-A[ 3][ 0].im*B[ 0][ 7].im 
	+A[ 3][ 0].re*B[ 0][ 7].re 
	-A[ 3][ 1].im*B[ 1][ 7].im 
	+A[ 3][ 1].re*B[ 1][ 7].re 
	-A[ 3][ 2].im*B[ 2][ 7].im 
	+A[ 3][ 2].re*B[ 2][ 7].re 
	-A[ 3][ 3].im*B[ 3][ 7].im 
	+A[ 3][ 3].re*B[ 3][ 7].re 
	-A[ 3][ 4].im*B[ 4][ 7].im 
	+A[ 3][ 4].re*B[ 4][ 7].re 
	-A[ 3][ 5].im*B[ 5][ 7].im 
	+A[ 3][ 5].re*B[ 5][ 7].re 
	-A[ 3][ 6].im*B[ 6][ 7].im 
	+A[ 3][ 6].re*B[ 6][ 7].re 
	-A[ 3][ 7].im*B[ 7][ 7].im 
	+A[ 3][ 7].re*B[ 7][ 7].re 
	-A[ 3][ 8].im*B[ 8][ 7].im 
	+A[ 3][ 8].re*B[ 8][ 7].re 
	-A[ 3][ 9].im*B[ 9][ 7].im 
	+A[ 3][ 9].re*B[ 9][ 7].re 
	-A[ 3][10].im*B[10][ 7].im 
	+A[ 3][10].re*B[10][ 7].re 
	-A[ 3][11].im*B[11][ 7].im 
	+A[ 3][11].re*B[11][ 7].re;

  C[ 3][ 7].im = 
	 A[ 3][ 0].im*B[ 0][ 7].re 
	+A[ 3][ 0].re*B[ 0][ 7].im 
	+A[ 3][ 1].im*B[ 1][ 7].re 
	+A[ 3][ 1].re*B[ 1][ 7].im 
	+A[ 3][ 2].im*B[ 2][ 7].re 
	+A[ 3][ 2].re*B[ 2][ 7].im 
	+A[ 3][ 3].im*B[ 3][ 7].re 
	+A[ 3][ 3].re*B[ 3][ 7].im 
	+A[ 3][ 4].im*B[ 4][ 7].re 
	+A[ 3][ 4].re*B[ 4][ 7].im 
	+A[ 3][ 5].im*B[ 5][ 7].re 
	+A[ 3][ 5].re*B[ 5][ 7].im 
	+A[ 3][ 6].im*B[ 6][ 7].re 
	+A[ 3][ 6].re*B[ 6][ 7].im 
	+A[ 3][ 7].im*B[ 7][ 7].re 
	+A[ 3][ 7].re*B[ 7][ 7].im 
	+A[ 3][ 8].im*B[ 8][ 7].re 
	+A[ 3][ 8].re*B[ 8][ 7].im 
	+A[ 3][ 9].im*B[ 9][ 7].re 
	+A[ 3][ 9].re*B[ 9][ 7].im 
	+A[ 3][10].im*B[10][ 7].re 
	+A[ 3][10].re*B[10][ 7].im 
	+A[ 3][11].im*B[11][ 7].re 
	+A[ 3][11].re*B[11][ 7].im;

  C[ 3][ 8].re = 
	-A[ 3][ 0].im*B[ 0][ 8].im 
	+A[ 3][ 0].re*B[ 0][ 8].re 
	-A[ 3][ 1].im*B[ 1][ 8].im 
	+A[ 3][ 1].re*B[ 1][ 8].re 
	-A[ 3][ 2].im*B[ 2][ 8].im 
	+A[ 3][ 2].re*B[ 2][ 8].re 
	-A[ 3][ 3].im*B[ 3][ 8].im 
	+A[ 3][ 3].re*B[ 3][ 8].re 
	-A[ 3][ 4].im*B[ 4][ 8].im 
	+A[ 3][ 4].re*B[ 4][ 8].re 
	-A[ 3][ 5].im*B[ 5][ 8].im 
	+A[ 3][ 5].re*B[ 5][ 8].re 
	-A[ 3][ 6].im*B[ 6][ 8].im 
	+A[ 3][ 6].re*B[ 6][ 8].re 
	-A[ 3][ 7].im*B[ 7][ 8].im 
	+A[ 3][ 7].re*B[ 7][ 8].re 
	-A[ 3][ 8].im*B[ 8][ 8].im 
	+A[ 3][ 8].re*B[ 8][ 8].re 
	-A[ 3][ 9].im*B[ 9][ 8].im 
	+A[ 3][ 9].re*B[ 9][ 8].re 
	-A[ 3][10].im*B[10][ 8].im 
	+A[ 3][10].re*B[10][ 8].re 
	-A[ 3][11].im*B[11][ 8].im 
	+A[ 3][11].re*B[11][ 8].re;

  C[ 3][ 8].im = 
	 A[ 3][ 0].im*B[ 0][ 8].re 
	+A[ 3][ 0].re*B[ 0][ 8].im 
	+A[ 3][ 1].im*B[ 1][ 8].re 
	+A[ 3][ 1].re*B[ 1][ 8].im 
	+A[ 3][ 2].im*B[ 2][ 8].re 
	+A[ 3][ 2].re*B[ 2][ 8].im 
	+A[ 3][ 3].im*B[ 3][ 8].re 
	+A[ 3][ 3].re*B[ 3][ 8].im 
	+A[ 3][ 4].im*B[ 4][ 8].re 
	+A[ 3][ 4].re*B[ 4][ 8].im 
	+A[ 3][ 5].im*B[ 5][ 8].re 
	+A[ 3][ 5].re*B[ 5][ 8].im 
	+A[ 3][ 6].im*B[ 6][ 8].re 
	+A[ 3][ 6].re*B[ 6][ 8].im 
	+A[ 3][ 7].im*B[ 7][ 8].re 
	+A[ 3][ 7].re*B[ 7][ 8].im 
	+A[ 3][ 8].im*B[ 8][ 8].re 
	+A[ 3][ 8].re*B[ 8][ 8].im 
	+A[ 3][ 9].im*B[ 9][ 8].re 
	+A[ 3][ 9].re*B[ 9][ 8].im 
	+A[ 3][10].im*B[10][ 8].re 
	+A[ 3][10].re*B[10][ 8].im 
	+A[ 3][11].im*B[11][ 8].re 
	+A[ 3][11].re*B[11][ 8].im;

  C[ 3][ 9].re = 
	-A[ 3][ 0].im*B[ 0][ 9].im 
	+A[ 3][ 0].re*B[ 0][ 9].re 
	-A[ 3][ 1].im*B[ 1][ 9].im 
	+A[ 3][ 1].re*B[ 1][ 9].re 
	-A[ 3][ 2].im*B[ 2][ 9].im 
	+A[ 3][ 2].re*B[ 2][ 9].re 
	-A[ 3][ 3].im*B[ 3][ 9].im 
	+A[ 3][ 3].re*B[ 3][ 9].re 
	-A[ 3][ 4].im*B[ 4][ 9].im 
	+A[ 3][ 4].re*B[ 4][ 9].re 
	-A[ 3][ 5].im*B[ 5][ 9].im 
	+A[ 3][ 5].re*B[ 5][ 9].re 
	-A[ 3][ 6].im*B[ 6][ 9].im 
	+A[ 3][ 6].re*B[ 6][ 9].re 
	-A[ 3][ 7].im*B[ 7][ 9].im 
	+A[ 3][ 7].re*B[ 7][ 9].re 
	-A[ 3][ 8].im*B[ 8][ 9].im 
	+A[ 3][ 8].re*B[ 8][ 9].re 
	-A[ 3][ 9].im*B[ 9][ 9].im 
	+A[ 3][ 9].re*B[ 9][ 9].re 
	-A[ 3][10].im*B[10][ 9].im 
	+A[ 3][10].re*B[10][ 9].re 
	-A[ 3][11].im*B[11][ 9].im 
	+A[ 3][11].re*B[11][ 9].re;

  C[ 3][ 9].im = 
	 A[ 3][ 0].im*B[ 0][ 9].re 
	+A[ 3][ 0].re*B[ 0][ 9].im 
	+A[ 3][ 1].im*B[ 1][ 9].re 
	+A[ 3][ 1].re*B[ 1][ 9].im 
	+A[ 3][ 2].im*B[ 2][ 9].re 
	+A[ 3][ 2].re*B[ 2][ 9].im 
	+A[ 3][ 3].im*B[ 3][ 9].re 
	+A[ 3][ 3].re*B[ 3][ 9].im 
	+A[ 3][ 4].im*B[ 4][ 9].re 
	+A[ 3][ 4].re*B[ 4][ 9].im 
	+A[ 3][ 5].im*B[ 5][ 9].re 
	+A[ 3][ 5].re*B[ 5][ 9].im 
	+A[ 3][ 6].im*B[ 6][ 9].re 
	+A[ 3][ 6].re*B[ 6][ 9].im 
	+A[ 3][ 7].im*B[ 7][ 9].re 
	+A[ 3][ 7].re*B[ 7][ 9].im 
	+A[ 3][ 8].im*B[ 8][ 9].re 
	+A[ 3][ 8].re*B[ 8][ 9].im 
	+A[ 3][ 9].im*B[ 9][ 9].re 
	+A[ 3][ 9].re*B[ 9][ 9].im 
	+A[ 3][10].im*B[10][ 9].re 
	+A[ 3][10].re*B[10][ 9].im 
	+A[ 3][11].im*B[11][ 9].re 
	+A[ 3][11].re*B[11][ 9].im;

  C[ 3][10].re = 
	-A[ 3][ 0].im*B[ 0][10].im 
	+A[ 3][ 0].re*B[ 0][10].re 
	-A[ 3][ 1].im*B[ 1][10].im 
	+A[ 3][ 1].re*B[ 1][10].re 
	-A[ 3][ 2].im*B[ 2][10].im 
	+A[ 3][ 2].re*B[ 2][10].re 
	-A[ 3][ 3].im*B[ 3][10].im 
	+A[ 3][ 3].re*B[ 3][10].re 
	-A[ 3][ 4].im*B[ 4][10].im 
	+A[ 3][ 4].re*B[ 4][10].re 
	-A[ 3][ 5].im*B[ 5][10].im 
	+A[ 3][ 5].re*B[ 5][10].re 
	-A[ 3][ 6].im*B[ 6][10].im 
	+A[ 3][ 6].re*B[ 6][10].re 
	-A[ 3][ 7].im*B[ 7][10].im 
	+A[ 3][ 7].re*B[ 7][10].re 
	-A[ 3][ 8].im*B[ 8][10].im 
	+A[ 3][ 8].re*B[ 8][10].re 
	-A[ 3][ 9].im*B[ 9][10].im 
	+A[ 3][ 9].re*B[ 9][10].re 
	-A[ 3][10].im*B[10][10].im 
	+A[ 3][10].re*B[10][10].re 
	-A[ 3][11].im*B[11][10].im 
	+A[ 3][11].re*B[11][10].re;

  C[ 3][10].im = 
	 A[ 3][ 0].im*B[ 0][10].re 
	+A[ 3][ 0].re*B[ 0][10].im 
	+A[ 3][ 1].im*B[ 1][10].re 
	+A[ 3][ 1].re*B[ 1][10].im 
	+A[ 3][ 2].im*B[ 2][10].re 
	+A[ 3][ 2].re*B[ 2][10].im 
	+A[ 3][ 3].im*B[ 3][10].re 
	+A[ 3][ 3].re*B[ 3][10].im 
	+A[ 3][ 4].im*B[ 4][10].re 
	+A[ 3][ 4].re*B[ 4][10].im 
	+A[ 3][ 5].im*B[ 5][10].re 
	+A[ 3][ 5].re*B[ 5][10].im 
	+A[ 3][ 6].im*B[ 6][10].re 
	+A[ 3][ 6].re*B[ 6][10].im 
	+A[ 3][ 7].im*B[ 7][10].re 
	+A[ 3][ 7].re*B[ 7][10].im 
	+A[ 3][ 8].im*B[ 8][10].re 
	+A[ 3][ 8].re*B[ 8][10].im 
	+A[ 3][ 9].im*B[ 9][10].re 
	+A[ 3][ 9].re*B[ 9][10].im 
	+A[ 3][10].im*B[10][10].re 
	+A[ 3][10].re*B[10][10].im 
	+A[ 3][11].im*B[11][10].re 
	+A[ 3][11].re*B[11][10].im;

  C[ 3][11].re = 
	-A[ 3][ 0].im*B[ 0][11].im 
	+A[ 3][ 0].re*B[ 0][11].re 
	-A[ 3][ 1].im*B[ 1][11].im 
	+A[ 3][ 1].re*B[ 1][11].re 
	-A[ 3][ 2].im*B[ 2][11].im 
	+A[ 3][ 2].re*B[ 2][11].re 
	-A[ 3][ 3].im*B[ 3][11].im 
	+A[ 3][ 3].re*B[ 3][11].re 
	-A[ 3][ 4].im*B[ 4][11].im 
	+A[ 3][ 4].re*B[ 4][11].re 
	-A[ 3][ 5].im*B[ 5][11].im 
	+A[ 3][ 5].re*B[ 5][11].re 
	-A[ 3][ 6].im*B[ 6][11].im 
	+A[ 3][ 6].re*B[ 6][11].re 
	-A[ 3][ 7].im*B[ 7][11].im 
	+A[ 3][ 7].re*B[ 7][11].re 
	-A[ 3][ 8].im*B[ 8][11].im 
	+A[ 3][ 8].re*B[ 8][11].re 
	-A[ 3][ 9].im*B[ 9][11].im 
	+A[ 3][ 9].re*B[ 9][11].re 
	-A[ 3][10].im*B[10][11].im 
	+A[ 3][10].re*B[10][11].re 
	-A[ 3][11].im*B[11][11].im 
	+A[ 3][11].re*B[11][11].re;

  C[ 3][11].im = 
	 A[ 3][ 0].im*B[ 0][11].re 
	+A[ 3][ 0].re*B[ 0][11].im 
	+A[ 3][ 1].im*B[ 1][11].re 
	+A[ 3][ 1].re*B[ 1][11].im 
	+A[ 3][ 2].im*B[ 2][11].re 
	+A[ 3][ 2].re*B[ 2][11].im 
	+A[ 3][ 3].im*B[ 3][11].re 
	+A[ 3][ 3].re*B[ 3][11].im 
	+A[ 3][ 4].im*B[ 4][11].re 
	+A[ 3][ 4].re*B[ 4][11].im 
	+A[ 3][ 5].im*B[ 5][11].re 
	+A[ 3][ 5].re*B[ 5][11].im 
	+A[ 3][ 6].im*B[ 6][11].re 
	+A[ 3][ 6].re*B[ 6][11].im 
	+A[ 3][ 7].im*B[ 7][11].re 
	+A[ 3][ 7].re*B[ 7][11].im 
	+A[ 3][ 8].im*B[ 8][11].re 
	+A[ 3][ 8].re*B[ 8][11].im 
	+A[ 3][ 9].im*B[ 9][11].re 
	+A[ 3][ 9].re*B[ 9][11].im 
	+A[ 3][10].im*B[10][11].re 
	+A[ 3][10].re*B[10][11].im 
	+A[ 3][11].im*B[11][11].re 
	+A[ 3][11].re*B[11][11].im;

  C[ 4][ 0].re = 
	-A[ 4][ 0].im*B[ 0][ 0].im 
	+A[ 4][ 0].re*B[ 0][ 0].re 
	-A[ 4][ 1].im*B[ 1][ 0].im 
	+A[ 4][ 1].re*B[ 1][ 0].re 
	-A[ 4][ 2].im*B[ 2][ 0].im 
	+A[ 4][ 2].re*B[ 2][ 0].re 
	-A[ 4][ 3].im*B[ 3][ 0].im 
	+A[ 4][ 3].re*B[ 3][ 0].re 
	-A[ 4][ 4].im*B[ 4][ 0].im 
	+A[ 4][ 4].re*B[ 4][ 0].re 
	-A[ 4][ 5].im*B[ 5][ 0].im 
	+A[ 4][ 5].re*B[ 5][ 0].re 
	-A[ 4][ 6].im*B[ 6][ 0].im 
	+A[ 4][ 6].re*B[ 6][ 0].re 
	-A[ 4][ 7].im*B[ 7][ 0].im 
	+A[ 4][ 7].re*B[ 7][ 0].re 
	-A[ 4][ 8].im*B[ 8][ 0].im 
	+A[ 4][ 8].re*B[ 8][ 0].re 
	-A[ 4][ 9].im*B[ 9][ 0].im 
	+A[ 4][ 9].re*B[ 9][ 0].re 
	-A[ 4][10].im*B[10][ 0].im 
	+A[ 4][10].re*B[10][ 0].re 
	-A[ 4][11].im*B[11][ 0].im 
	+A[ 4][11].re*B[11][ 0].re;

  C[ 4][ 0].im = 
	 A[ 4][ 0].im*B[ 0][ 0].re 
	+A[ 4][ 0].re*B[ 0][ 0].im 
	+A[ 4][ 1].im*B[ 1][ 0].re 
	+A[ 4][ 1].re*B[ 1][ 0].im 
	+A[ 4][ 2].im*B[ 2][ 0].re 
	+A[ 4][ 2].re*B[ 2][ 0].im 
	+A[ 4][ 3].im*B[ 3][ 0].re 
	+A[ 4][ 3].re*B[ 3][ 0].im 
	+A[ 4][ 4].im*B[ 4][ 0].re 
	+A[ 4][ 4].re*B[ 4][ 0].im 
	+A[ 4][ 5].im*B[ 5][ 0].re 
	+A[ 4][ 5].re*B[ 5][ 0].im 
	+A[ 4][ 6].im*B[ 6][ 0].re 
	+A[ 4][ 6].re*B[ 6][ 0].im 
	+A[ 4][ 7].im*B[ 7][ 0].re 
	+A[ 4][ 7].re*B[ 7][ 0].im 
	+A[ 4][ 8].im*B[ 8][ 0].re 
	+A[ 4][ 8].re*B[ 8][ 0].im 
	+A[ 4][ 9].im*B[ 9][ 0].re 
	+A[ 4][ 9].re*B[ 9][ 0].im 
	+A[ 4][10].im*B[10][ 0].re 
	+A[ 4][10].re*B[10][ 0].im 
	+A[ 4][11].im*B[11][ 0].re 
	+A[ 4][11].re*B[11][ 0].im;

  C[ 4][ 1].re = 
	-A[ 4][ 0].im*B[ 0][ 1].im 
	+A[ 4][ 0].re*B[ 0][ 1].re 
	-A[ 4][ 1].im*B[ 1][ 1].im 
	+A[ 4][ 1].re*B[ 1][ 1].re 
	-A[ 4][ 2].im*B[ 2][ 1].im 
	+A[ 4][ 2].re*B[ 2][ 1].re 
	-A[ 4][ 3].im*B[ 3][ 1].im 
	+A[ 4][ 3].re*B[ 3][ 1].re 
	-A[ 4][ 4].im*B[ 4][ 1].im 
	+A[ 4][ 4].re*B[ 4][ 1].re 
	-A[ 4][ 5].im*B[ 5][ 1].im 
	+A[ 4][ 5].re*B[ 5][ 1].re 
	-A[ 4][ 6].im*B[ 6][ 1].im 
	+A[ 4][ 6].re*B[ 6][ 1].re 
	-A[ 4][ 7].im*B[ 7][ 1].im 
	+A[ 4][ 7].re*B[ 7][ 1].re 
	-A[ 4][ 8].im*B[ 8][ 1].im 
	+A[ 4][ 8].re*B[ 8][ 1].re 
	-A[ 4][ 9].im*B[ 9][ 1].im 
	+A[ 4][ 9].re*B[ 9][ 1].re 
	-A[ 4][10].im*B[10][ 1].im 
	+A[ 4][10].re*B[10][ 1].re 
	-A[ 4][11].im*B[11][ 1].im 
	+A[ 4][11].re*B[11][ 1].re;

  C[ 4][ 1].im = 
	 A[ 4][ 0].im*B[ 0][ 1].re 
	+A[ 4][ 0].re*B[ 0][ 1].im 
	+A[ 4][ 1].im*B[ 1][ 1].re 
	+A[ 4][ 1].re*B[ 1][ 1].im 
	+A[ 4][ 2].im*B[ 2][ 1].re 
	+A[ 4][ 2].re*B[ 2][ 1].im 
	+A[ 4][ 3].im*B[ 3][ 1].re 
	+A[ 4][ 3].re*B[ 3][ 1].im 
	+A[ 4][ 4].im*B[ 4][ 1].re 
	+A[ 4][ 4].re*B[ 4][ 1].im 
	+A[ 4][ 5].im*B[ 5][ 1].re 
	+A[ 4][ 5].re*B[ 5][ 1].im 
	+A[ 4][ 6].im*B[ 6][ 1].re 
	+A[ 4][ 6].re*B[ 6][ 1].im 
	+A[ 4][ 7].im*B[ 7][ 1].re 
	+A[ 4][ 7].re*B[ 7][ 1].im 
	+A[ 4][ 8].im*B[ 8][ 1].re 
	+A[ 4][ 8].re*B[ 8][ 1].im 
	+A[ 4][ 9].im*B[ 9][ 1].re 
	+A[ 4][ 9].re*B[ 9][ 1].im 
	+A[ 4][10].im*B[10][ 1].re 
	+A[ 4][10].re*B[10][ 1].im 
	+A[ 4][11].im*B[11][ 1].re 
	+A[ 4][11].re*B[11][ 1].im;

  C[ 4][ 2].re = 
	-A[ 4][ 0].im*B[ 0][ 2].im 
	+A[ 4][ 0].re*B[ 0][ 2].re 
	-A[ 4][ 1].im*B[ 1][ 2].im 
	+A[ 4][ 1].re*B[ 1][ 2].re 
	-A[ 4][ 2].im*B[ 2][ 2].im 
	+A[ 4][ 2].re*B[ 2][ 2].re 
	-A[ 4][ 3].im*B[ 3][ 2].im 
	+A[ 4][ 3].re*B[ 3][ 2].re 
	-A[ 4][ 4].im*B[ 4][ 2].im 
	+A[ 4][ 4].re*B[ 4][ 2].re 
	-A[ 4][ 5].im*B[ 5][ 2].im 
	+A[ 4][ 5].re*B[ 5][ 2].re 
	-A[ 4][ 6].im*B[ 6][ 2].im 
	+A[ 4][ 6].re*B[ 6][ 2].re 
	-A[ 4][ 7].im*B[ 7][ 2].im 
	+A[ 4][ 7].re*B[ 7][ 2].re 
	-A[ 4][ 8].im*B[ 8][ 2].im 
	+A[ 4][ 8].re*B[ 8][ 2].re 
	-A[ 4][ 9].im*B[ 9][ 2].im 
	+A[ 4][ 9].re*B[ 9][ 2].re 
	-A[ 4][10].im*B[10][ 2].im 
	+A[ 4][10].re*B[10][ 2].re 
	-A[ 4][11].im*B[11][ 2].im 
	+A[ 4][11].re*B[11][ 2].re;

  C[ 4][ 2].im = 
	 A[ 4][ 0].im*B[ 0][ 2].re 
	+A[ 4][ 0].re*B[ 0][ 2].im 
	+A[ 4][ 1].im*B[ 1][ 2].re 
	+A[ 4][ 1].re*B[ 1][ 2].im 
	+A[ 4][ 2].im*B[ 2][ 2].re 
	+A[ 4][ 2].re*B[ 2][ 2].im 
	+A[ 4][ 3].im*B[ 3][ 2].re 
	+A[ 4][ 3].re*B[ 3][ 2].im 
	+A[ 4][ 4].im*B[ 4][ 2].re 
	+A[ 4][ 4].re*B[ 4][ 2].im 
	+A[ 4][ 5].im*B[ 5][ 2].re 
	+A[ 4][ 5].re*B[ 5][ 2].im 
	+A[ 4][ 6].im*B[ 6][ 2].re 
	+A[ 4][ 6].re*B[ 6][ 2].im 
	+A[ 4][ 7].im*B[ 7][ 2].re 
	+A[ 4][ 7].re*B[ 7][ 2].im 
	+A[ 4][ 8].im*B[ 8][ 2].re 
	+A[ 4][ 8].re*B[ 8][ 2].im 
	+A[ 4][ 9].im*B[ 9][ 2].re 
	+A[ 4][ 9].re*B[ 9][ 2].im 
	+A[ 4][10].im*B[10][ 2].re 
	+A[ 4][10].re*B[10][ 2].im 
	+A[ 4][11].im*B[11][ 2].re 
	+A[ 4][11].re*B[11][ 2].im;

  C[ 4][ 3].re = 
	-A[ 4][ 0].im*B[ 0][ 3].im 
	+A[ 4][ 0].re*B[ 0][ 3].re 
	-A[ 4][ 1].im*B[ 1][ 3].im 
	+A[ 4][ 1].re*B[ 1][ 3].re 
	-A[ 4][ 2].im*B[ 2][ 3].im 
	+A[ 4][ 2].re*B[ 2][ 3].re 
	-A[ 4][ 3].im*B[ 3][ 3].im 
	+A[ 4][ 3].re*B[ 3][ 3].re 
	-A[ 4][ 4].im*B[ 4][ 3].im 
	+A[ 4][ 4].re*B[ 4][ 3].re 
	-A[ 4][ 5].im*B[ 5][ 3].im 
	+A[ 4][ 5].re*B[ 5][ 3].re 
	-A[ 4][ 6].im*B[ 6][ 3].im 
	+A[ 4][ 6].re*B[ 6][ 3].re 
	-A[ 4][ 7].im*B[ 7][ 3].im 
	+A[ 4][ 7].re*B[ 7][ 3].re 
	-A[ 4][ 8].im*B[ 8][ 3].im 
	+A[ 4][ 8].re*B[ 8][ 3].re 
	-A[ 4][ 9].im*B[ 9][ 3].im 
	+A[ 4][ 9].re*B[ 9][ 3].re 
	-A[ 4][10].im*B[10][ 3].im 
	+A[ 4][10].re*B[10][ 3].re 
	-A[ 4][11].im*B[11][ 3].im 
	+A[ 4][11].re*B[11][ 3].re;

  C[ 4][ 3].im = 
	 A[ 4][ 0].im*B[ 0][ 3].re 
	+A[ 4][ 0].re*B[ 0][ 3].im 
	+A[ 4][ 1].im*B[ 1][ 3].re 
	+A[ 4][ 1].re*B[ 1][ 3].im 
	+A[ 4][ 2].im*B[ 2][ 3].re 
	+A[ 4][ 2].re*B[ 2][ 3].im 
	+A[ 4][ 3].im*B[ 3][ 3].re 
	+A[ 4][ 3].re*B[ 3][ 3].im 
	+A[ 4][ 4].im*B[ 4][ 3].re 
	+A[ 4][ 4].re*B[ 4][ 3].im 
	+A[ 4][ 5].im*B[ 5][ 3].re 
	+A[ 4][ 5].re*B[ 5][ 3].im 
	+A[ 4][ 6].im*B[ 6][ 3].re 
	+A[ 4][ 6].re*B[ 6][ 3].im 
	+A[ 4][ 7].im*B[ 7][ 3].re 
	+A[ 4][ 7].re*B[ 7][ 3].im 
	+A[ 4][ 8].im*B[ 8][ 3].re 
	+A[ 4][ 8].re*B[ 8][ 3].im 
	+A[ 4][ 9].im*B[ 9][ 3].re 
	+A[ 4][ 9].re*B[ 9][ 3].im 
	+A[ 4][10].im*B[10][ 3].re 
	+A[ 4][10].re*B[10][ 3].im 
	+A[ 4][11].im*B[11][ 3].re 
	+A[ 4][11].re*B[11][ 3].im;

  C[ 4][ 4].re = 
	-A[ 4][ 0].im*B[ 0][ 4].im 
	+A[ 4][ 0].re*B[ 0][ 4].re 
	-A[ 4][ 1].im*B[ 1][ 4].im 
	+A[ 4][ 1].re*B[ 1][ 4].re 
	-A[ 4][ 2].im*B[ 2][ 4].im 
	+A[ 4][ 2].re*B[ 2][ 4].re 
	-A[ 4][ 3].im*B[ 3][ 4].im 
	+A[ 4][ 3].re*B[ 3][ 4].re 
	-A[ 4][ 4].im*B[ 4][ 4].im 
	+A[ 4][ 4].re*B[ 4][ 4].re 
	-A[ 4][ 5].im*B[ 5][ 4].im 
	+A[ 4][ 5].re*B[ 5][ 4].re 
	-A[ 4][ 6].im*B[ 6][ 4].im 
	+A[ 4][ 6].re*B[ 6][ 4].re 
	-A[ 4][ 7].im*B[ 7][ 4].im 
	+A[ 4][ 7].re*B[ 7][ 4].re 
	-A[ 4][ 8].im*B[ 8][ 4].im 
	+A[ 4][ 8].re*B[ 8][ 4].re 
	-A[ 4][ 9].im*B[ 9][ 4].im 
	+A[ 4][ 9].re*B[ 9][ 4].re 
	-A[ 4][10].im*B[10][ 4].im 
	+A[ 4][10].re*B[10][ 4].re 
	-A[ 4][11].im*B[11][ 4].im 
	+A[ 4][11].re*B[11][ 4].re;

  C[ 4][ 4].im = 
	 A[ 4][ 0].im*B[ 0][ 4].re 
	+A[ 4][ 0].re*B[ 0][ 4].im 
	+A[ 4][ 1].im*B[ 1][ 4].re 
	+A[ 4][ 1].re*B[ 1][ 4].im 
	+A[ 4][ 2].im*B[ 2][ 4].re 
	+A[ 4][ 2].re*B[ 2][ 4].im 
	+A[ 4][ 3].im*B[ 3][ 4].re 
	+A[ 4][ 3].re*B[ 3][ 4].im 
	+A[ 4][ 4].im*B[ 4][ 4].re 
	+A[ 4][ 4].re*B[ 4][ 4].im 
	+A[ 4][ 5].im*B[ 5][ 4].re 
	+A[ 4][ 5].re*B[ 5][ 4].im 
	+A[ 4][ 6].im*B[ 6][ 4].re 
	+A[ 4][ 6].re*B[ 6][ 4].im 
	+A[ 4][ 7].im*B[ 7][ 4].re 
	+A[ 4][ 7].re*B[ 7][ 4].im 
	+A[ 4][ 8].im*B[ 8][ 4].re 
	+A[ 4][ 8].re*B[ 8][ 4].im 
	+A[ 4][ 9].im*B[ 9][ 4].re 
	+A[ 4][ 9].re*B[ 9][ 4].im 
	+A[ 4][10].im*B[10][ 4].re 
	+A[ 4][10].re*B[10][ 4].im 
	+A[ 4][11].im*B[11][ 4].re 
	+A[ 4][11].re*B[11][ 4].im;

  C[ 4][ 5].re = 
	-A[ 4][ 0].im*B[ 0][ 5].im 
	+A[ 4][ 0].re*B[ 0][ 5].re 
	-A[ 4][ 1].im*B[ 1][ 5].im 
	+A[ 4][ 1].re*B[ 1][ 5].re 
	-A[ 4][ 2].im*B[ 2][ 5].im 
	+A[ 4][ 2].re*B[ 2][ 5].re 
	-A[ 4][ 3].im*B[ 3][ 5].im 
	+A[ 4][ 3].re*B[ 3][ 5].re 
	-A[ 4][ 4].im*B[ 4][ 5].im 
	+A[ 4][ 4].re*B[ 4][ 5].re 
	-A[ 4][ 5].im*B[ 5][ 5].im 
	+A[ 4][ 5].re*B[ 5][ 5].re 
	-A[ 4][ 6].im*B[ 6][ 5].im 
	+A[ 4][ 6].re*B[ 6][ 5].re 
	-A[ 4][ 7].im*B[ 7][ 5].im 
	+A[ 4][ 7].re*B[ 7][ 5].re 
	-A[ 4][ 8].im*B[ 8][ 5].im 
	+A[ 4][ 8].re*B[ 8][ 5].re 
	-A[ 4][ 9].im*B[ 9][ 5].im 
	+A[ 4][ 9].re*B[ 9][ 5].re 
	-A[ 4][10].im*B[10][ 5].im 
	+A[ 4][10].re*B[10][ 5].re 
	-A[ 4][11].im*B[11][ 5].im 
	+A[ 4][11].re*B[11][ 5].re;

  C[ 4][ 5].im = 
	 A[ 4][ 0].im*B[ 0][ 5].re 
	+A[ 4][ 0].re*B[ 0][ 5].im 
	+A[ 4][ 1].im*B[ 1][ 5].re 
	+A[ 4][ 1].re*B[ 1][ 5].im 
	+A[ 4][ 2].im*B[ 2][ 5].re 
	+A[ 4][ 2].re*B[ 2][ 5].im 
	+A[ 4][ 3].im*B[ 3][ 5].re 
	+A[ 4][ 3].re*B[ 3][ 5].im 
	+A[ 4][ 4].im*B[ 4][ 5].re 
	+A[ 4][ 4].re*B[ 4][ 5].im 
	+A[ 4][ 5].im*B[ 5][ 5].re 
	+A[ 4][ 5].re*B[ 5][ 5].im 
	+A[ 4][ 6].im*B[ 6][ 5].re 
	+A[ 4][ 6].re*B[ 6][ 5].im 
	+A[ 4][ 7].im*B[ 7][ 5].re 
	+A[ 4][ 7].re*B[ 7][ 5].im 
	+A[ 4][ 8].im*B[ 8][ 5].re 
	+A[ 4][ 8].re*B[ 8][ 5].im 
	+A[ 4][ 9].im*B[ 9][ 5].re 
	+A[ 4][ 9].re*B[ 9][ 5].im 
	+A[ 4][10].im*B[10][ 5].re 
	+A[ 4][10].re*B[10][ 5].im 
	+A[ 4][11].im*B[11][ 5].re 
	+A[ 4][11].re*B[11][ 5].im;

  C[ 4][ 6].re = 
	-A[ 4][ 0].im*B[ 0][ 6].im 
	+A[ 4][ 0].re*B[ 0][ 6].re 
	-A[ 4][ 1].im*B[ 1][ 6].im 
	+A[ 4][ 1].re*B[ 1][ 6].re 
	-A[ 4][ 2].im*B[ 2][ 6].im 
	+A[ 4][ 2].re*B[ 2][ 6].re 
	-A[ 4][ 3].im*B[ 3][ 6].im 
	+A[ 4][ 3].re*B[ 3][ 6].re 
	-A[ 4][ 4].im*B[ 4][ 6].im 
	+A[ 4][ 4].re*B[ 4][ 6].re 
	-A[ 4][ 5].im*B[ 5][ 6].im 
	+A[ 4][ 5].re*B[ 5][ 6].re 
	-A[ 4][ 6].im*B[ 6][ 6].im 
	+A[ 4][ 6].re*B[ 6][ 6].re 
	-A[ 4][ 7].im*B[ 7][ 6].im 
	+A[ 4][ 7].re*B[ 7][ 6].re 
	-A[ 4][ 8].im*B[ 8][ 6].im 
	+A[ 4][ 8].re*B[ 8][ 6].re 
	-A[ 4][ 9].im*B[ 9][ 6].im 
	+A[ 4][ 9].re*B[ 9][ 6].re 
	-A[ 4][10].im*B[10][ 6].im 
	+A[ 4][10].re*B[10][ 6].re 
	-A[ 4][11].im*B[11][ 6].im 
	+A[ 4][11].re*B[11][ 6].re;

  C[ 4][ 6].im = 
	 A[ 4][ 0].im*B[ 0][ 6].re 
	+A[ 4][ 0].re*B[ 0][ 6].im 
	+A[ 4][ 1].im*B[ 1][ 6].re 
	+A[ 4][ 1].re*B[ 1][ 6].im 
	+A[ 4][ 2].im*B[ 2][ 6].re 
	+A[ 4][ 2].re*B[ 2][ 6].im 
	+A[ 4][ 3].im*B[ 3][ 6].re 
	+A[ 4][ 3].re*B[ 3][ 6].im 
	+A[ 4][ 4].im*B[ 4][ 6].re 
	+A[ 4][ 4].re*B[ 4][ 6].im 
	+A[ 4][ 5].im*B[ 5][ 6].re 
	+A[ 4][ 5].re*B[ 5][ 6].im 
	+A[ 4][ 6].im*B[ 6][ 6].re 
	+A[ 4][ 6].re*B[ 6][ 6].im 
	+A[ 4][ 7].im*B[ 7][ 6].re 
	+A[ 4][ 7].re*B[ 7][ 6].im 
	+A[ 4][ 8].im*B[ 8][ 6].re 
	+A[ 4][ 8].re*B[ 8][ 6].im 
	+A[ 4][ 9].im*B[ 9][ 6].re 
	+A[ 4][ 9].re*B[ 9][ 6].im 
	+A[ 4][10].im*B[10][ 6].re 
	+A[ 4][10].re*B[10][ 6].im 
	+A[ 4][11].im*B[11][ 6].re 
	+A[ 4][11].re*B[11][ 6].im;

  C[ 4][ 7].re = 
	-A[ 4][ 0].im*B[ 0][ 7].im 
	+A[ 4][ 0].re*B[ 0][ 7].re 
	-A[ 4][ 1].im*B[ 1][ 7].im 
	+A[ 4][ 1].re*B[ 1][ 7].re 
	-A[ 4][ 2].im*B[ 2][ 7].im 
	+A[ 4][ 2].re*B[ 2][ 7].re 
	-A[ 4][ 3].im*B[ 3][ 7].im 
	+A[ 4][ 3].re*B[ 3][ 7].re 
	-A[ 4][ 4].im*B[ 4][ 7].im 
	+A[ 4][ 4].re*B[ 4][ 7].re 
	-A[ 4][ 5].im*B[ 5][ 7].im 
	+A[ 4][ 5].re*B[ 5][ 7].re 
	-A[ 4][ 6].im*B[ 6][ 7].im 
	+A[ 4][ 6].re*B[ 6][ 7].re 
	-A[ 4][ 7].im*B[ 7][ 7].im 
	+A[ 4][ 7].re*B[ 7][ 7].re 
	-A[ 4][ 8].im*B[ 8][ 7].im 
	+A[ 4][ 8].re*B[ 8][ 7].re 
	-A[ 4][ 9].im*B[ 9][ 7].im 
	+A[ 4][ 9].re*B[ 9][ 7].re 
	-A[ 4][10].im*B[10][ 7].im 
	+A[ 4][10].re*B[10][ 7].re 
	-A[ 4][11].im*B[11][ 7].im 
	+A[ 4][11].re*B[11][ 7].re;

  C[ 4][ 7].im = 
	 A[ 4][ 0].im*B[ 0][ 7].re 
	+A[ 4][ 0].re*B[ 0][ 7].im 
	+A[ 4][ 1].im*B[ 1][ 7].re 
	+A[ 4][ 1].re*B[ 1][ 7].im 
	+A[ 4][ 2].im*B[ 2][ 7].re 
	+A[ 4][ 2].re*B[ 2][ 7].im 
	+A[ 4][ 3].im*B[ 3][ 7].re 
	+A[ 4][ 3].re*B[ 3][ 7].im 
	+A[ 4][ 4].im*B[ 4][ 7].re 
	+A[ 4][ 4].re*B[ 4][ 7].im 
	+A[ 4][ 5].im*B[ 5][ 7].re 
	+A[ 4][ 5].re*B[ 5][ 7].im 
	+A[ 4][ 6].im*B[ 6][ 7].re 
	+A[ 4][ 6].re*B[ 6][ 7].im 
	+A[ 4][ 7].im*B[ 7][ 7].re 
	+A[ 4][ 7].re*B[ 7][ 7].im 
	+A[ 4][ 8].im*B[ 8][ 7].re 
	+A[ 4][ 8].re*B[ 8][ 7].im 
	+A[ 4][ 9].im*B[ 9][ 7].re 
	+A[ 4][ 9].re*B[ 9][ 7].im 
	+A[ 4][10].im*B[10][ 7].re 
	+A[ 4][10].re*B[10][ 7].im 
	+A[ 4][11].im*B[11][ 7].re 
	+A[ 4][11].re*B[11][ 7].im;

  C[ 4][ 8].re = 
	-A[ 4][ 0].im*B[ 0][ 8].im 
	+A[ 4][ 0].re*B[ 0][ 8].re 
	-A[ 4][ 1].im*B[ 1][ 8].im 
	+A[ 4][ 1].re*B[ 1][ 8].re 
	-A[ 4][ 2].im*B[ 2][ 8].im 
	+A[ 4][ 2].re*B[ 2][ 8].re 
	-A[ 4][ 3].im*B[ 3][ 8].im 
	+A[ 4][ 3].re*B[ 3][ 8].re 
	-A[ 4][ 4].im*B[ 4][ 8].im 
	+A[ 4][ 4].re*B[ 4][ 8].re 
	-A[ 4][ 5].im*B[ 5][ 8].im 
	+A[ 4][ 5].re*B[ 5][ 8].re 
	-A[ 4][ 6].im*B[ 6][ 8].im 
	+A[ 4][ 6].re*B[ 6][ 8].re 
	-A[ 4][ 7].im*B[ 7][ 8].im 
	+A[ 4][ 7].re*B[ 7][ 8].re 
	-A[ 4][ 8].im*B[ 8][ 8].im 
	+A[ 4][ 8].re*B[ 8][ 8].re 
	-A[ 4][ 9].im*B[ 9][ 8].im 
	+A[ 4][ 9].re*B[ 9][ 8].re 
	-A[ 4][10].im*B[10][ 8].im 
	+A[ 4][10].re*B[10][ 8].re 
	-A[ 4][11].im*B[11][ 8].im 
	+A[ 4][11].re*B[11][ 8].re;

  C[ 4][ 8].im = 
	 A[ 4][ 0].im*B[ 0][ 8].re 
	+A[ 4][ 0].re*B[ 0][ 8].im 
	+A[ 4][ 1].im*B[ 1][ 8].re 
	+A[ 4][ 1].re*B[ 1][ 8].im 
	+A[ 4][ 2].im*B[ 2][ 8].re 
	+A[ 4][ 2].re*B[ 2][ 8].im 
	+A[ 4][ 3].im*B[ 3][ 8].re 
	+A[ 4][ 3].re*B[ 3][ 8].im 
	+A[ 4][ 4].im*B[ 4][ 8].re 
	+A[ 4][ 4].re*B[ 4][ 8].im 
	+A[ 4][ 5].im*B[ 5][ 8].re 
	+A[ 4][ 5].re*B[ 5][ 8].im 
	+A[ 4][ 6].im*B[ 6][ 8].re 
	+A[ 4][ 6].re*B[ 6][ 8].im 
	+A[ 4][ 7].im*B[ 7][ 8].re 
	+A[ 4][ 7].re*B[ 7][ 8].im 
	+A[ 4][ 8].im*B[ 8][ 8].re 
	+A[ 4][ 8].re*B[ 8][ 8].im 
	+A[ 4][ 9].im*B[ 9][ 8].re 
	+A[ 4][ 9].re*B[ 9][ 8].im 
	+A[ 4][10].im*B[10][ 8].re 
	+A[ 4][10].re*B[10][ 8].im 
	+A[ 4][11].im*B[11][ 8].re 
	+A[ 4][11].re*B[11][ 8].im;

  C[ 4][ 9].re = 
	-A[ 4][ 0].im*B[ 0][ 9].im 
	+A[ 4][ 0].re*B[ 0][ 9].re 
	-A[ 4][ 1].im*B[ 1][ 9].im 
	+A[ 4][ 1].re*B[ 1][ 9].re 
	-A[ 4][ 2].im*B[ 2][ 9].im 
	+A[ 4][ 2].re*B[ 2][ 9].re 
	-A[ 4][ 3].im*B[ 3][ 9].im 
	+A[ 4][ 3].re*B[ 3][ 9].re 
	-A[ 4][ 4].im*B[ 4][ 9].im 
	+A[ 4][ 4].re*B[ 4][ 9].re 
	-A[ 4][ 5].im*B[ 5][ 9].im 
	+A[ 4][ 5].re*B[ 5][ 9].re 
	-A[ 4][ 6].im*B[ 6][ 9].im 
	+A[ 4][ 6].re*B[ 6][ 9].re 
	-A[ 4][ 7].im*B[ 7][ 9].im 
	+A[ 4][ 7].re*B[ 7][ 9].re 
	-A[ 4][ 8].im*B[ 8][ 9].im 
	+A[ 4][ 8].re*B[ 8][ 9].re 
	-A[ 4][ 9].im*B[ 9][ 9].im 
	+A[ 4][ 9].re*B[ 9][ 9].re 
	-A[ 4][10].im*B[10][ 9].im 
	+A[ 4][10].re*B[10][ 9].re 
	-A[ 4][11].im*B[11][ 9].im 
	+A[ 4][11].re*B[11][ 9].re;

  C[ 4][ 9].im = 
	 A[ 4][ 0].im*B[ 0][ 9].re 
	+A[ 4][ 0].re*B[ 0][ 9].im 
	+A[ 4][ 1].im*B[ 1][ 9].re 
	+A[ 4][ 1].re*B[ 1][ 9].im 
	+A[ 4][ 2].im*B[ 2][ 9].re 
	+A[ 4][ 2].re*B[ 2][ 9].im 
	+A[ 4][ 3].im*B[ 3][ 9].re 
	+A[ 4][ 3].re*B[ 3][ 9].im 
	+A[ 4][ 4].im*B[ 4][ 9].re 
	+A[ 4][ 4].re*B[ 4][ 9].im 
	+A[ 4][ 5].im*B[ 5][ 9].re 
	+A[ 4][ 5].re*B[ 5][ 9].im 
	+A[ 4][ 6].im*B[ 6][ 9].re 
	+A[ 4][ 6].re*B[ 6][ 9].im 
	+A[ 4][ 7].im*B[ 7][ 9].re 
	+A[ 4][ 7].re*B[ 7][ 9].im 
	+A[ 4][ 8].im*B[ 8][ 9].re 
	+A[ 4][ 8].re*B[ 8][ 9].im 
	+A[ 4][ 9].im*B[ 9][ 9].re 
	+A[ 4][ 9].re*B[ 9][ 9].im 
	+A[ 4][10].im*B[10][ 9].re 
	+A[ 4][10].re*B[10][ 9].im 
	+A[ 4][11].im*B[11][ 9].re 
	+A[ 4][11].re*B[11][ 9].im;

  C[ 4][10].re = 
	-A[ 4][ 0].im*B[ 0][10].im 
	+A[ 4][ 0].re*B[ 0][10].re 
	-A[ 4][ 1].im*B[ 1][10].im 
	+A[ 4][ 1].re*B[ 1][10].re 
	-A[ 4][ 2].im*B[ 2][10].im 
	+A[ 4][ 2].re*B[ 2][10].re 
	-A[ 4][ 3].im*B[ 3][10].im 
	+A[ 4][ 3].re*B[ 3][10].re 
	-A[ 4][ 4].im*B[ 4][10].im 
	+A[ 4][ 4].re*B[ 4][10].re 
	-A[ 4][ 5].im*B[ 5][10].im 
	+A[ 4][ 5].re*B[ 5][10].re 
	-A[ 4][ 6].im*B[ 6][10].im 
	+A[ 4][ 6].re*B[ 6][10].re 
	-A[ 4][ 7].im*B[ 7][10].im 
	+A[ 4][ 7].re*B[ 7][10].re 
	-A[ 4][ 8].im*B[ 8][10].im 
	+A[ 4][ 8].re*B[ 8][10].re 
	-A[ 4][ 9].im*B[ 9][10].im 
	+A[ 4][ 9].re*B[ 9][10].re 
	-A[ 4][10].im*B[10][10].im 
	+A[ 4][10].re*B[10][10].re 
	-A[ 4][11].im*B[11][10].im 
	+A[ 4][11].re*B[11][10].re;

  C[ 4][10].im = 
	 A[ 4][ 0].im*B[ 0][10].re 
	+A[ 4][ 0].re*B[ 0][10].im 
	+A[ 4][ 1].im*B[ 1][10].re 
	+A[ 4][ 1].re*B[ 1][10].im 
	+A[ 4][ 2].im*B[ 2][10].re 
	+A[ 4][ 2].re*B[ 2][10].im 
	+A[ 4][ 3].im*B[ 3][10].re 
	+A[ 4][ 3].re*B[ 3][10].im 
	+A[ 4][ 4].im*B[ 4][10].re 
	+A[ 4][ 4].re*B[ 4][10].im 
	+A[ 4][ 5].im*B[ 5][10].re 
	+A[ 4][ 5].re*B[ 5][10].im 
	+A[ 4][ 6].im*B[ 6][10].re 
	+A[ 4][ 6].re*B[ 6][10].im 
	+A[ 4][ 7].im*B[ 7][10].re 
	+A[ 4][ 7].re*B[ 7][10].im 
	+A[ 4][ 8].im*B[ 8][10].re 
	+A[ 4][ 8].re*B[ 8][10].im 
	+A[ 4][ 9].im*B[ 9][10].re 
	+A[ 4][ 9].re*B[ 9][10].im 
	+A[ 4][10].im*B[10][10].re 
	+A[ 4][10].re*B[10][10].im 
	+A[ 4][11].im*B[11][10].re 
	+A[ 4][11].re*B[11][10].im;

  C[ 4][11].re = 
	-A[ 4][ 0].im*B[ 0][11].im 
	+A[ 4][ 0].re*B[ 0][11].re 
	-A[ 4][ 1].im*B[ 1][11].im 
	+A[ 4][ 1].re*B[ 1][11].re 
	-A[ 4][ 2].im*B[ 2][11].im 
	+A[ 4][ 2].re*B[ 2][11].re 
	-A[ 4][ 3].im*B[ 3][11].im 
	+A[ 4][ 3].re*B[ 3][11].re 
	-A[ 4][ 4].im*B[ 4][11].im 
	+A[ 4][ 4].re*B[ 4][11].re 
	-A[ 4][ 5].im*B[ 5][11].im 
	+A[ 4][ 5].re*B[ 5][11].re 
	-A[ 4][ 6].im*B[ 6][11].im 
	+A[ 4][ 6].re*B[ 6][11].re 
	-A[ 4][ 7].im*B[ 7][11].im 
	+A[ 4][ 7].re*B[ 7][11].re 
	-A[ 4][ 8].im*B[ 8][11].im 
	+A[ 4][ 8].re*B[ 8][11].re 
	-A[ 4][ 9].im*B[ 9][11].im 
	+A[ 4][ 9].re*B[ 9][11].re 
	-A[ 4][10].im*B[10][11].im 
	+A[ 4][10].re*B[10][11].re 
	-A[ 4][11].im*B[11][11].im 
	+A[ 4][11].re*B[11][11].re;

  C[ 4][11].im = 
	 A[ 4][ 0].im*B[ 0][11].re 
	+A[ 4][ 0].re*B[ 0][11].im 
	+A[ 4][ 1].im*B[ 1][11].re 
	+A[ 4][ 1].re*B[ 1][11].im 
	+A[ 4][ 2].im*B[ 2][11].re 
	+A[ 4][ 2].re*B[ 2][11].im 
	+A[ 4][ 3].im*B[ 3][11].re 
	+A[ 4][ 3].re*B[ 3][11].im 
	+A[ 4][ 4].im*B[ 4][11].re 
	+A[ 4][ 4].re*B[ 4][11].im 
	+A[ 4][ 5].im*B[ 5][11].re 
	+A[ 4][ 5].re*B[ 5][11].im 
	+A[ 4][ 6].im*B[ 6][11].re 
	+A[ 4][ 6].re*B[ 6][11].im 
	+A[ 4][ 7].im*B[ 7][11].re 
	+A[ 4][ 7].re*B[ 7][11].im 
	+A[ 4][ 8].im*B[ 8][11].re 
	+A[ 4][ 8].re*B[ 8][11].im 
	+A[ 4][ 9].im*B[ 9][11].re 
	+A[ 4][ 9].re*B[ 9][11].im 
	+A[ 4][10].im*B[10][11].re 
	+A[ 4][10].re*B[10][11].im 
	+A[ 4][11].im*B[11][11].re 
	+A[ 4][11].re*B[11][11].im;

  C[ 5][ 0].re = 
	-A[ 5][ 0].im*B[ 0][ 0].im 
	+A[ 5][ 0].re*B[ 0][ 0].re 
	-A[ 5][ 1].im*B[ 1][ 0].im 
	+A[ 5][ 1].re*B[ 1][ 0].re 
	-A[ 5][ 2].im*B[ 2][ 0].im 
	+A[ 5][ 2].re*B[ 2][ 0].re 
	-A[ 5][ 3].im*B[ 3][ 0].im 
	+A[ 5][ 3].re*B[ 3][ 0].re 
	-A[ 5][ 4].im*B[ 4][ 0].im 
	+A[ 5][ 4].re*B[ 4][ 0].re 
	-A[ 5][ 5].im*B[ 5][ 0].im 
	+A[ 5][ 5].re*B[ 5][ 0].re 
	-A[ 5][ 6].im*B[ 6][ 0].im 
	+A[ 5][ 6].re*B[ 6][ 0].re 
	-A[ 5][ 7].im*B[ 7][ 0].im 
	+A[ 5][ 7].re*B[ 7][ 0].re 
	-A[ 5][ 8].im*B[ 8][ 0].im 
	+A[ 5][ 8].re*B[ 8][ 0].re 
	-A[ 5][ 9].im*B[ 9][ 0].im 
	+A[ 5][ 9].re*B[ 9][ 0].re 
	-A[ 5][10].im*B[10][ 0].im 
	+A[ 5][10].re*B[10][ 0].re 
	-A[ 5][11].im*B[11][ 0].im 
	+A[ 5][11].re*B[11][ 0].re;

  C[ 5][ 0].im = 
	 A[ 5][ 0].im*B[ 0][ 0].re 
	+A[ 5][ 0].re*B[ 0][ 0].im 
	+A[ 5][ 1].im*B[ 1][ 0].re 
	+A[ 5][ 1].re*B[ 1][ 0].im 
	+A[ 5][ 2].im*B[ 2][ 0].re 
	+A[ 5][ 2].re*B[ 2][ 0].im 
	+A[ 5][ 3].im*B[ 3][ 0].re 
	+A[ 5][ 3].re*B[ 3][ 0].im 
	+A[ 5][ 4].im*B[ 4][ 0].re 
	+A[ 5][ 4].re*B[ 4][ 0].im 
	+A[ 5][ 5].im*B[ 5][ 0].re 
	+A[ 5][ 5].re*B[ 5][ 0].im 
	+A[ 5][ 6].im*B[ 6][ 0].re 
	+A[ 5][ 6].re*B[ 6][ 0].im 
	+A[ 5][ 7].im*B[ 7][ 0].re 
	+A[ 5][ 7].re*B[ 7][ 0].im 
	+A[ 5][ 8].im*B[ 8][ 0].re 
	+A[ 5][ 8].re*B[ 8][ 0].im 
	+A[ 5][ 9].im*B[ 9][ 0].re 
	+A[ 5][ 9].re*B[ 9][ 0].im 
	+A[ 5][10].im*B[10][ 0].re 
	+A[ 5][10].re*B[10][ 0].im 
	+A[ 5][11].im*B[11][ 0].re 
	+A[ 5][11].re*B[11][ 0].im;

  C[ 5][ 1].re = 
	-A[ 5][ 0].im*B[ 0][ 1].im 
	+A[ 5][ 0].re*B[ 0][ 1].re 
	-A[ 5][ 1].im*B[ 1][ 1].im 
	+A[ 5][ 1].re*B[ 1][ 1].re 
	-A[ 5][ 2].im*B[ 2][ 1].im 
	+A[ 5][ 2].re*B[ 2][ 1].re 
	-A[ 5][ 3].im*B[ 3][ 1].im 
	+A[ 5][ 3].re*B[ 3][ 1].re 
	-A[ 5][ 4].im*B[ 4][ 1].im 
	+A[ 5][ 4].re*B[ 4][ 1].re 
	-A[ 5][ 5].im*B[ 5][ 1].im 
	+A[ 5][ 5].re*B[ 5][ 1].re 
	-A[ 5][ 6].im*B[ 6][ 1].im 
	+A[ 5][ 6].re*B[ 6][ 1].re 
	-A[ 5][ 7].im*B[ 7][ 1].im 
	+A[ 5][ 7].re*B[ 7][ 1].re 
	-A[ 5][ 8].im*B[ 8][ 1].im 
	+A[ 5][ 8].re*B[ 8][ 1].re 
	-A[ 5][ 9].im*B[ 9][ 1].im 
	+A[ 5][ 9].re*B[ 9][ 1].re 
	-A[ 5][10].im*B[10][ 1].im 
	+A[ 5][10].re*B[10][ 1].re 
	-A[ 5][11].im*B[11][ 1].im 
	+A[ 5][11].re*B[11][ 1].re;

  C[ 5][ 1].im = 
	 A[ 5][ 0].im*B[ 0][ 1].re 
	+A[ 5][ 0].re*B[ 0][ 1].im 
	+A[ 5][ 1].im*B[ 1][ 1].re 
	+A[ 5][ 1].re*B[ 1][ 1].im 
	+A[ 5][ 2].im*B[ 2][ 1].re 
	+A[ 5][ 2].re*B[ 2][ 1].im 
	+A[ 5][ 3].im*B[ 3][ 1].re 
	+A[ 5][ 3].re*B[ 3][ 1].im 
	+A[ 5][ 4].im*B[ 4][ 1].re 
	+A[ 5][ 4].re*B[ 4][ 1].im 
	+A[ 5][ 5].im*B[ 5][ 1].re 
	+A[ 5][ 5].re*B[ 5][ 1].im 
	+A[ 5][ 6].im*B[ 6][ 1].re 
	+A[ 5][ 6].re*B[ 6][ 1].im 
	+A[ 5][ 7].im*B[ 7][ 1].re 
	+A[ 5][ 7].re*B[ 7][ 1].im 
	+A[ 5][ 8].im*B[ 8][ 1].re 
	+A[ 5][ 8].re*B[ 8][ 1].im 
	+A[ 5][ 9].im*B[ 9][ 1].re 
	+A[ 5][ 9].re*B[ 9][ 1].im 
	+A[ 5][10].im*B[10][ 1].re 
	+A[ 5][10].re*B[10][ 1].im 
	+A[ 5][11].im*B[11][ 1].re 
	+A[ 5][11].re*B[11][ 1].im;

  C[ 5][ 2].re = 
	-A[ 5][ 0].im*B[ 0][ 2].im 
	+A[ 5][ 0].re*B[ 0][ 2].re 
	-A[ 5][ 1].im*B[ 1][ 2].im 
	+A[ 5][ 1].re*B[ 1][ 2].re 
	-A[ 5][ 2].im*B[ 2][ 2].im 
	+A[ 5][ 2].re*B[ 2][ 2].re 
	-A[ 5][ 3].im*B[ 3][ 2].im 
	+A[ 5][ 3].re*B[ 3][ 2].re 
	-A[ 5][ 4].im*B[ 4][ 2].im 
	+A[ 5][ 4].re*B[ 4][ 2].re 
	-A[ 5][ 5].im*B[ 5][ 2].im 
	+A[ 5][ 5].re*B[ 5][ 2].re 
	-A[ 5][ 6].im*B[ 6][ 2].im 
	+A[ 5][ 6].re*B[ 6][ 2].re 
	-A[ 5][ 7].im*B[ 7][ 2].im 
	+A[ 5][ 7].re*B[ 7][ 2].re 
	-A[ 5][ 8].im*B[ 8][ 2].im 
	+A[ 5][ 8].re*B[ 8][ 2].re 
	-A[ 5][ 9].im*B[ 9][ 2].im 
	+A[ 5][ 9].re*B[ 9][ 2].re 
	-A[ 5][10].im*B[10][ 2].im 
	+A[ 5][10].re*B[10][ 2].re 
	-A[ 5][11].im*B[11][ 2].im 
	+A[ 5][11].re*B[11][ 2].re;

  C[ 5][ 2].im = 
	 A[ 5][ 0].im*B[ 0][ 2].re 
	+A[ 5][ 0].re*B[ 0][ 2].im 
	+A[ 5][ 1].im*B[ 1][ 2].re 
	+A[ 5][ 1].re*B[ 1][ 2].im 
	+A[ 5][ 2].im*B[ 2][ 2].re 
	+A[ 5][ 2].re*B[ 2][ 2].im 
	+A[ 5][ 3].im*B[ 3][ 2].re 
	+A[ 5][ 3].re*B[ 3][ 2].im 
	+A[ 5][ 4].im*B[ 4][ 2].re 
	+A[ 5][ 4].re*B[ 4][ 2].im 
	+A[ 5][ 5].im*B[ 5][ 2].re 
	+A[ 5][ 5].re*B[ 5][ 2].im 
	+A[ 5][ 6].im*B[ 6][ 2].re 
	+A[ 5][ 6].re*B[ 6][ 2].im 
	+A[ 5][ 7].im*B[ 7][ 2].re 
	+A[ 5][ 7].re*B[ 7][ 2].im 
	+A[ 5][ 8].im*B[ 8][ 2].re 
	+A[ 5][ 8].re*B[ 8][ 2].im 
	+A[ 5][ 9].im*B[ 9][ 2].re 
	+A[ 5][ 9].re*B[ 9][ 2].im 
	+A[ 5][10].im*B[10][ 2].re 
	+A[ 5][10].re*B[10][ 2].im 
	+A[ 5][11].im*B[11][ 2].re 
	+A[ 5][11].re*B[11][ 2].im;

  C[ 5][ 3].re = 
	-A[ 5][ 0].im*B[ 0][ 3].im 
	+A[ 5][ 0].re*B[ 0][ 3].re 
	-A[ 5][ 1].im*B[ 1][ 3].im 
	+A[ 5][ 1].re*B[ 1][ 3].re 
	-A[ 5][ 2].im*B[ 2][ 3].im 
	+A[ 5][ 2].re*B[ 2][ 3].re 
	-A[ 5][ 3].im*B[ 3][ 3].im 
	+A[ 5][ 3].re*B[ 3][ 3].re 
	-A[ 5][ 4].im*B[ 4][ 3].im 
	+A[ 5][ 4].re*B[ 4][ 3].re 
	-A[ 5][ 5].im*B[ 5][ 3].im 
	+A[ 5][ 5].re*B[ 5][ 3].re 
	-A[ 5][ 6].im*B[ 6][ 3].im 
	+A[ 5][ 6].re*B[ 6][ 3].re 
	-A[ 5][ 7].im*B[ 7][ 3].im 
	+A[ 5][ 7].re*B[ 7][ 3].re 
	-A[ 5][ 8].im*B[ 8][ 3].im 
	+A[ 5][ 8].re*B[ 8][ 3].re 
	-A[ 5][ 9].im*B[ 9][ 3].im 
	+A[ 5][ 9].re*B[ 9][ 3].re 
	-A[ 5][10].im*B[10][ 3].im 
	+A[ 5][10].re*B[10][ 3].re 
	-A[ 5][11].im*B[11][ 3].im 
	+A[ 5][11].re*B[11][ 3].re;

  C[ 5][ 3].im = 
	 A[ 5][ 0].im*B[ 0][ 3].re 
	+A[ 5][ 0].re*B[ 0][ 3].im 
	+A[ 5][ 1].im*B[ 1][ 3].re 
	+A[ 5][ 1].re*B[ 1][ 3].im 
	+A[ 5][ 2].im*B[ 2][ 3].re 
	+A[ 5][ 2].re*B[ 2][ 3].im 
	+A[ 5][ 3].im*B[ 3][ 3].re 
	+A[ 5][ 3].re*B[ 3][ 3].im 
	+A[ 5][ 4].im*B[ 4][ 3].re 
	+A[ 5][ 4].re*B[ 4][ 3].im 
	+A[ 5][ 5].im*B[ 5][ 3].re 
	+A[ 5][ 5].re*B[ 5][ 3].im 
	+A[ 5][ 6].im*B[ 6][ 3].re 
	+A[ 5][ 6].re*B[ 6][ 3].im 
	+A[ 5][ 7].im*B[ 7][ 3].re 
	+A[ 5][ 7].re*B[ 7][ 3].im 
	+A[ 5][ 8].im*B[ 8][ 3].re 
	+A[ 5][ 8].re*B[ 8][ 3].im 
	+A[ 5][ 9].im*B[ 9][ 3].re 
	+A[ 5][ 9].re*B[ 9][ 3].im 
	+A[ 5][10].im*B[10][ 3].re 
	+A[ 5][10].re*B[10][ 3].im 
	+A[ 5][11].im*B[11][ 3].re 
	+A[ 5][11].re*B[11][ 3].im;

  C[ 5][ 4].re = 
	-A[ 5][ 0].im*B[ 0][ 4].im 
	+A[ 5][ 0].re*B[ 0][ 4].re 
	-A[ 5][ 1].im*B[ 1][ 4].im 
	+A[ 5][ 1].re*B[ 1][ 4].re 
	-A[ 5][ 2].im*B[ 2][ 4].im 
	+A[ 5][ 2].re*B[ 2][ 4].re 
	-A[ 5][ 3].im*B[ 3][ 4].im 
	+A[ 5][ 3].re*B[ 3][ 4].re 
	-A[ 5][ 4].im*B[ 4][ 4].im 
	+A[ 5][ 4].re*B[ 4][ 4].re 
	-A[ 5][ 5].im*B[ 5][ 4].im 
	+A[ 5][ 5].re*B[ 5][ 4].re 
	-A[ 5][ 6].im*B[ 6][ 4].im 
	+A[ 5][ 6].re*B[ 6][ 4].re 
	-A[ 5][ 7].im*B[ 7][ 4].im 
	+A[ 5][ 7].re*B[ 7][ 4].re 
	-A[ 5][ 8].im*B[ 8][ 4].im 
	+A[ 5][ 8].re*B[ 8][ 4].re 
	-A[ 5][ 9].im*B[ 9][ 4].im 
	+A[ 5][ 9].re*B[ 9][ 4].re 
	-A[ 5][10].im*B[10][ 4].im 
	+A[ 5][10].re*B[10][ 4].re 
	-A[ 5][11].im*B[11][ 4].im 
	+A[ 5][11].re*B[11][ 4].re;

  C[ 5][ 4].im = 
	 A[ 5][ 0].im*B[ 0][ 4].re 
	+A[ 5][ 0].re*B[ 0][ 4].im 
	+A[ 5][ 1].im*B[ 1][ 4].re 
	+A[ 5][ 1].re*B[ 1][ 4].im 
	+A[ 5][ 2].im*B[ 2][ 4].re 
	+A[ 5][ 2].re*B[ 2][ 4].im 
	+A[ 5][ 3].im*B[ 3][ 4].re 
	+A[ 5][ 3].re*B[ 3][ 4].im 
	+A[ 5][ 4].im*B[ 4][ 4].re 
	+A[ 5][ 4].re*B[ 4][ 4].im 
	+A[ 5][ 5].im*B[ 5][ 4].re 
	+A[ 5][ 5].re*B[ 5][ 4].im 
	+A[ 5][ 6].im*B[ 6][ 4].re 
	+A[ 5][ 6].re*B[ 6][ 4].im 
	+A[ 5][ 7].im*B[ 7][ 4].re 
	+A[ 5][ 7].re*B[ 7][ 4].im 
	+A[ 5][ 8].im*B[ 8][ 4].re 
	+A[ 5][ 8].re*B[ 8][ 4].im 
	+A[ 5][ 9].im*B[ 9][ 4].re 
	+A[ 5][ 9].re*B[ 9][ 4].im 
	+A[ 5][10].im*B[10][ 4].re 
	+A[ 5][10].re*B[10][ 4].im 
	+A[ 5][11].im*B[11][ 4].re 
	+A[ 5][11].re*B[11][ 4].im;

  C[ 5][ 5].re = 
	-A[ 5][ 0].im*B[ 0][ 5].im 
	+A[ 5][ 0].re*B[ 0][ 5].re 
	-A[ 5][ 1].im*B[ 1][ 5].im 
	+A[ 5][ 1].re*B[ 1][ 5].re 
	-A[ 5][ 2].im*B[ 2][ 5].im 
	+A[ 5][ 2].re*B[ 2][ 5].re 
	-A[ 5][ 3].im*B[ 3][ 5].im 
	+A[ 5][ 3].re*B[ 3][ 5].re 
	-A[ 5][ 4].im*B[ 4][ 5].im 
	+A[ 5][ 4].re*B[ 4][ 5].re 
	-A[ 5][ 5].im*B[ 5][ 5].im 
	+A[ 5][ 5].re*B[ 5][ 5].re 
	-A[ 5][ 6].im*B[ 6][ 5].im 
	+A[ 5][ 6].re*B[ 6][ 5].re 
	-A[ 5][ 7].im*B[ 7][ 5].im 
	+A[ 5][ 7].re*B[ 7][ 5].re 
	-A[ 5][ 8].im*B[ 8][ 5].im 
	+A[ 5][ 8].re*B[ 8][ 5].re 
	-A[ 5][ 9].im*B[ 9][ 5].im 
	+A[ 5][ 9].re*B[ 9][ 5].re 
	-A[ 5][10].im*B[10][ 5].im 
	+A[ 5][10].re*B[10][ 5].re 
	-A[ 5][11].im*B[11][ 5].im 
	+A[ 5][11].re*B[11][ 5].re;

  C[ 5][ 5].im = 
	 A[ 5][ 0].im*B[ 0][ 5].re 
	+A[ 5][ 0].re*B[ 0][ 5].im 
	+A[ 5][ 1].im*B[ 1][ 5].re 
	+A[ 5][ 1].re*B[ 1][ 5].im 
	+A[ 5][ 2].im*B[ 2][ 5].re 
	+A[ 5][ 2].re*B[ 2][ 5].im 
	+A[ 5][ 3].im*B[ 3][ 5].re 
	+A[ 5][ 3].re*B[ 3][ 5].im 
	+A[ 5][ 4].im*B[ 4][ 5].re 
	+A[ 5][ 4].re*B[ 4][ 5].im 
	+A[ 5][ 5].im*B[ 5][ 5].re 
	+A[ 5][ 5].re*B[ 5][ 5].im 
	+A[ 5][ 6].im*B[ 6][ 5].re 
	+A[ 5][ 6].re*B[ 6][ 5].im 
	+A[ 5][ 7].im*B[ 7][ 5].re 
	+A[ 5][ 7].re*B[ 7][ 5].im 
	+A[ 5][ 8].im*B[ 8][ 5].re 
	+A[ 5][ 8].re*B[ 8][ 5].im 
	+A[ 5][ 9].im*B[ 9][ 5].re 
	+A[ 5][ 9].re*B[ 9][ 5].im 
	+A[ 5][10].im*B[10][ 5].re 
	+A[ 5][10].re*B[10][ 5].im 
	+A[ 5][11].im*B[11][ 5].re 
	+A[ 5][11].re*B[11][ 5].im;

  C[ 5][ 6].re = 
	-A[ 5][ 0].im*B[ 0][ 6].im 
	+A[ 5][ 0].re*B[ 0][ 6].re 
	-A[ 5][ 1].im*B[ 1][ 6].im 
	+A[ 5][ 1].re*B[ 1][ 6].re 
	-A[ 5][ 2].im*B[ 2][ 6].im 
	+A[ 5][ 2].re*B[ 2][ 6].re 
	-A[ 5][ 3].im*B[ 3][ 6].im 
	+A[ 5][ 3].re*B[ 3][ 6].re 
	-A[ 5][ 4].im*B[ 4][ 6].im 
	+A[ 5][ 4].re*B[ 4][ 6].re 
	-A[ 5][ 5].im*B[ 5][ 6].im 
	+A[ 5][ 5].re*B[ 5][ 6].re 
	-A[ 5][ 6].im*B[ 6][ 6].im 
	+A[ 5][ 6].re*B[ 6][ 6].re 
	-A[ 5][ 7].im*B[ 7][ 6].im 
	+A[ 5][ 7].re*B[ 7][ 6].re 
	-A[ 5][ 8].im*B[ 8][ 6].im 
	+A[ 5][ 8].re*B[ 8][ 6].re 
	-A[ 5][ 9].im*B[ 9][ 6].im 
	+A[ 5][ 9].re*B[ 9][ 6].re 
	-A[ 5][10].im*B[10][ 6].im 
	+A[ 5][10].re*B[10][ 6].re 
	-A[ 5][11].im*B[11][ 6].im 
	+A[ 5][11].re*B[11][ 6].re;

  C[ 5][ 6].im = 
	 A[ 5][ 0].im*B[ 0][ 6].re 
	+A[ 5][ 0].re*B[ 0][ 6].im 
	+A[ 5][ 1].im*B[ 1][ 6].re 
	+A[ 5][ 1].re*B[ 1][ 6].im 
	+A[ 5][ 2].im*B[ 2][ 6].re 
	+A[ 5][ 2].re*B[ 2][ 6].im 
	+A[ 5][ 3].im*B[ 3][ 6].re 
	+A[ 5][ 3].re*B[ 3][ 6].im 
	+A[ 5][ 4].im*B[ 4][ 6].re 
	+A[ 5][ 4].re*B[ 4][ 6].im 
	+A[ 5][ 5].im*B[ 5][ 6].re 
	+A[ 5][ 5].re*B[ 5][ 6].im 
	+A[ 5][ 6].im*B[ 6][ 6].re 
	+A[ 5][ 6].re*B[ 6][ 6].im 
	+A[ 5][ 7].im*B[ 7][ 6].re 
	+A[ 5][ 7].re*B[ 7][ 6].im 
	+A[ 5][ 8].im*B[ 8][ 6].re 
	+A[ 5][ 8].re*B[ 8][ 6].im 
	+A[ 5][ 9].im*B[ 9][ 6].re 
	+A[ 5][ 9].re*B[ 9][ 6].im 
	+A[ 5][10].im*B[10][ 6].re 
	+A[ 5][10].re*B[10][ 6].im 
	+A[ 5][11].im*B[11][ 6].re 
	+A[ 5][11].re*B[11][ 6].im;

  C[ 5][ 7].re = 
	-A[ 5][ 0].im*B[ 0][ 7].im 
	+A[ 5][ 0].re*B[ 0][ 7].re 
	-A[ 5][ 1].im*B[ 1][ 7].im 
	+A[ 5][ 1].re*B[ 1][ 7].re 
	-A[ 5][ 2].im*B[ 2][ 7].im 
	+A[ 5][ 2].re*B[ 2][ 7].re 
	-A[ 5][ 3].im*B[ 3][ 7].im 
	+A[ 5][ 3].re*B[ 3][ 7].re 
	-A[ 5][ 4].im*B[ 4][ 7].im 
	+A[ 5][ 4].re*B[ 4][ 7].re 
	-A[ 5][ 5].im*B[ 5][ 7].im 
	+A[ 5][ 5].re*B[ 5][ 7].re 
	-A[ 5][ 6].im*B[ 6][ 7].im 
	+A[ 5][ 6].re*B[ 6][ 7].re 
	-A[ 5][ 7].im*B[ 7][ 7].im 
	+A[ 5][ 7].re*B[ 7][ 7].re 
	-A[ 5][ 8].im*B[ 8][ 7].im 
	+A[ 5][ 8].re*B[ 8][ 7].re 
	-A[ 5][ 9].im*B[ 9][ 7].im 
	+A[ 5][ 9].re*B[ 9][ 7].re 
	-A[ 5][10].im*B[10][ 7].im 
	+A[ 5][10].re*B[10][ 7].re 
	-A[ 5][11].im*B[11][ 7].im 
	+A[ 5][11].re*B[11][ 7].re;

  C[ 5][ 7].im = 
	 A[ 5][ 0].im*B[ 0][ 7].re 
	+A[ 5][ 0].re*B[ 0][ 7].im 
	+A[ 5][ 1].im*B[ 1][ 7].re 
	+A[ 5][ 1].re*B[ 1][ 7].im 
	+A[ 5][ 2].im*B[ 2][ 7].re 
	+A[ 5][ 2].re*B[ 2][ 7].im 
	+A[ 5][ 3].im*B[ 3][ 7].re 
	+A[ 5][ 3].re*B[ 3][ 7].im 
	+A[ 5][ 4].im*B[ 4][ 7].re 
	+A[ 5][ 4].re*B[ 4][ 7].im 
	+A[ 5][ 5].im*B[ 5][ 7].re 
	+A[ 5][ 5].re*B[ 5][ 7].im 
	+A[ 5][ 6].im*B[ 6][ 7].re 
	+A[ 5][ 6].re*B[ 6][ 7].im 
	+A[ 5][ 7].im*B[ 7][ 7].re 
	+A[ 5][ 7].re*B[ 7][ 7].im 
	+A[ 5][ 8].im*B[ 8][ 7].re 
	+A[ 5][ 8].re*B[ 8][ 7].im 
	+A[ 5][ 9].im*B[ 9][ 7].re 
	+A[ 5][ 9].re*B[ 9][ 7].im 
	+A[ 5][10].im*B[10][ 7].re 
	+A[ 5][10].re*B[10][ 7].im 
	+A[ 5][11].im*B[11][ 7].re 
	+A[ 5][11].re*B[11][ 7].im;

  C[ 5][ 8].re = 
	-A[ 5][ 0].im*B[ 0][ 8].im 
	+A[ 5][ 0].re*B[ 0][ 8].re 
	-A[ 5][ 1].im*B[ 1][ 8].im 
	+A[ 5][ 1].re*B[ 1][ 8].re 
	-A[ 5][ 2].im*B[ 2][ 8].im 
	+A[ 5][ 2].re*B[ 2][ 8].re 
	-A[ 5][ 3].im*B[ 3][ 8].im 
	+A[ 5][ 3].re*B[ 3][ 8].re 
	-A[ 5][ 4].im*B[ 4][ 8].im 
	+A[ 5][ 4].re*B[ 4][ 8].re 
	-A[ 5][ 5].im*B[ 5][ 8].im 
	+A[ 5][ 5].re*B[ 5][ 8].re 
	-A[ 5][ 6].im*B[ 6][ 8].im 
	+A[ 5][ 6].re*B[ 6][ 8].re 
	-A[ 5][ 7].im*B[ 7][ 8].im 
	+A[ 5][ 7].re*B[ 7][ 8].re 
	-A[ 5][ 8].im*B[ 8][ 8].im 
	+A[ 5][ 8].re*B[ 8][ 8].re 
	-A[ 5][ 9].im*B[ 9][ 8].im 
	+A[ 5][ 9].re*B[ 9][ 8].re 
	-A[ 5][10].im*B[10][ 8].im 
	+A[ 5][10].re*B[10][ 8].re 
	-A[ 5][11].im*B[11][ 8].im 
	+A[ 5][11].re*B[11][ 8].re;

  C[ 5][ 8].im = 
	 A[ 5][ 0].im*B[ 0][ 8].re 
	+A[ 5][ 0].re*B[ 0][ 8].im 
	+A[ 5][ 1].im*B[ 1][ 8].re 
	+A[ 5][ 1].re*B[ 1][ 8].im 
	+A[ 5][ 2].im*B[ 2][ 8].re 
	+A[ 5][ 2].re*B[ 2][ 8].im 
	+A[ 5][ 3].im*B[ 3][ 8].re 
	+A[ 5][ 3].re*B[ 3][ 8].im 
	+A[ 5][ 4].im*B[ 4][ 8].re 
	+A[ 5][ 4].re*B[ 4][ 8].im 
	+A[ 5][ 5].im*B[ 5][ 8].re 
	+A[ 5][ 5].re*B[ 5][ 8].im 
	+A[ 5][ 6].im*B[ 6][ 8].re 
	+A[ 5][ 6].re*B[ 6][ 8].im 
	+A[ 5][ 7].im*B[ 7][ 8].re 
	+A[ 5][ 7].re*B[ 7][ 8].im 
	+A[ 5][ 8].im*B[ 8][ 8].re 
	+A[ 5][ 8].re*B[ 8][ 8].im 
	+A[ 5][ 9].im*B[ 9][ 8].re 
	+A[ 5][ 9].re*B[ 9][ 8].im 
	+A[ 5][10].im*B[10][ 8].re 
	+A[ 5][10].re*B[10][ 8].im 
	+A[ 5][11].im*B[11][ 8].re 
	+A[ 5][11].re*B[11][ 8].im;

  C[ 5][ 9].re = 
	-A[ 5][ 0].im*B[ 0][ 9].im 
	+A[ 5][ 0].re*B[ 0][ 9].re 
	-A[ 5][ 1].im*B[ 1][ 9].im 
	+A[ 5][ 1].re*B[ 1][ 9].re 
	-A[ 5][ 2].im*B[ 2][ 9].im 
	+A[ 5][ 2].re*B[ 2][ 9].re 
	-A[ 5][ 3].im*B[ 3][ 9].im 
	+A[ 5][ 3].re*B[ 3][ 9].re 
	-A[ 5][ 4].im*B[ 4][ 9].im 
	+A[ 5][ 4].re*B[ 4][ 9].re 
	-A[ 5][ 5].im*B[ 5][ 9].im 
	+A[ 5][ 5].re*B[ 5][ 9].re 
	-A[ 5][ 6].im*B[ 6][ 9].im 
	+A[ 5][ 6].re*B[ 6][ 9].re 
	-A[ 5][ 7].im*B[ 7][ 9].im 
	+A[ 5][ 7].re*B[ 7][ 9].re 
	-A[ 5][ 8].im*B[ 8][ 9].im 
	+A[ 5][ 8].re*B[ 8][ 9].re 
	-A[ 5][ 9].im*B[ 9][ 9].im 
	+A[ 5][ 9].re*B[ 9][ 9].re 
	-A[ 5][10].im*B[10][ 9].im 
	+A[ 5][10].re*B[10][ 9].re 
	-A[ 5][11].im*B[11][ 9].im 
	+A[ 5][11].re*B[11][ 9].re;

  C[ 5][ 9].im = 
	 A[ 5][ 0].im*B[ 0][ 9].re 
	+A[ 5][ 0].re*B[ 0][ 9].im 
	+A[ 5][ 1].im*B[ 1][ 9].re 
	+A[ 5][ 1].re*B[ 1][ 9].im 
	+A[ 5][ 2].im*B[ 2][ 9].re 
	+A[ 5][ 2].re*B[ 2][ 9].im 
	+A[ 5][ 3].im*B[ 3][ 9].re 
	+A[ 5][ 3].re*B[ 3][ 9].im 
	+A[ 5][ 4].im*B[ 4][ 9].re 
	+A[ 5][ 4].re*B[ 4][ 9].im 
	+A[ 5][ 5].im*B[ 5][ 9].re 
	+A[ 5][ 5].re*B[ 5][ 9].im 
	+A[ 5][ 6].im*B[ 6][ 9].re 
	+A[ 5][ 6].re*B[ 6][ 9].im 
	+A[ 5][ 7].im*B[ 7][ 9].re 
	+A[ 5][ 7].re*B[ 7][ 9].im 
	+A[ 5][ 8].im*B[ 8][ 9].re 
	+A[ 5][ 8].re*B[ 8][ 9].im 
	+A[ 5][ 9].im*B[ 9][ 9].re 
	+A[ 5][ 9].re*B[ 9][ 9].im 
	+A[ 5][10].im*B[10][ 9].re 
	+A[ 5][10].re*B[10][ 9].im 
	+A[ 5][11].im*B[11][ 9].re 
	+A[ 5][11].re*B[11][ 9].im;

  C[ 5][10].re = 
	-A[ 5][ 0].im*B[ 0][10].im 
	+A[ 5][ 0].re*B[ 0][10].re 
	-A[ 5][ 1].im*B[ 1][10].im 
	+A[ 5][ 1].re*B[ 1][10].re 
	-A[ 5][ 2].im*B[ 2][10].im 
	+A[ 5][ 2].re*B[ 2][10].re 
	-A[ 5][ 3].im*B[ 3][10].im 
	+A[ 5][ 3].re*B[ 3][10].re 
	-A[ 5][ 4].im*B[ 4][10].im 
	+A[ 5][ 4].re*B[ 4][10].re 
	-A[ 5][ 5].im*B[ 5][10].im 
	+A[ 5][ 5].re*B[ 5][10].re 
	-A[ 5][ 6].im*B[ 6][10].im 
	+A[ 5][ 6].re*B[ 6][10].re 
	-A[ 5][ 7].im*B[ 7][10].im 
	+A[ 5][ 7].re*B[ 7][10].re 
	-A[ 5][ 8].im*B[ 8][10].im 
	+A[ 5][ 8].re*B[ 8][10].re 
	-A[ 5][ 9].im*B[ 9][10].im 
	+A[ 5][ 9].re*B[ 9][10].re 
	-A[ 5][10].im*B[10][10].im 
	+A[ 5][10].re*B[10][10].re 
	-A[ 5][11].im*B[11][10].im 
	+A[ 5][11].re*B[11][10].re;

  C[ 5][10].im = 
	 A[ 5][ 0].im*B[ 0][10].re 
	+A[ 5][ 0].re*B[ 0][10].im 
	+A[ 5][ 1].im*B[ 1][10].re 
	+A[ 5][ 1].re*B[ 1][10].im 
	+A[ 5][ 2].im*B[ 2][10].re 
	+A[ 5][ 2].re*B[ 2][10].im 
	+A[ 5][ 3].im*B[ 3][10].re 
	+A[ 5][ 3].re*B[ 3][10].im 
	+A[ 5][ 4].im*B[ 4][10].re 
	+A[ 5][ 4].re*B[ 4][10].im 
	+A[ 5][ 5].im*B[ 5][10].re 
	+A[ 5][ 5].re*B[ 5][10].im 
	+A[ 5][ 6].im*B[ 6][10].re 
	+A[ 5][ 6].re*B[ 6][10].im 
	+A[ 5][ 7].im*B[ 7][10].re 
	+A[ 5][ 7].re*B[ 7][10].im 
	+A[ 5][ 8].im*B[ 8][10].re 
	+A[ 5][ 8].re*B[ 8][10].im 
	+A[ 5][ 9].im*B[ 9][10].re 
	+A[ 5][ 9].re*B[ 9][10].im 
	+A[ 5][10].im*B[10][10].re 
	+A[ 5][10].re*B[10][10].im 
	+A[ 5][11].im*B[11][10].re 
	+A[ 5][11].re*B[11][10].im;

  C[ 5][11].re = 
	-A[ 5][ 0].im*B[ 0][11].im 
	+A[ 5][ 0].re*B[ 0][11].re 
	-A[ 5][ 1].im*B[ 1][11].im 
	+A[ 5][ 1].re*B[ 1][11].re 
	-A[ 5][ 2].im*B[ 2][11].im 
	+A[ 5][ 2].re*B[ 2][11].re 
	-A[ 5][ 3].im*B[ 3][11].im 
	+A[ 5][ 3].re*B[ 3][11].re 
	-A[ 5][ 4].im*B[ 4][11].im 
	+A[ 5][ 4].re*B[ 4][11].re 
	-A[ 5][ 5].im*B[ 5][11].im 
	+A[ 5][ 5].re*B[ 5][11].re 
	-A[ 5][ 6].im*B[ 6][11].im 
	+A[ 5][ 6].re*B[ 6][11].re 
	-A[ 5][ 7].im*B[ 7][11].im 
	+A[ 5][ 7].re*B[ 7][11].re 
	-A[ 5][ 8].im*B[ 8][11].im 
	+A[ 5][ 8].re*B[ 8][11].re 
	-A[ 5][ 9].im*B[ 9][11].im 
	+A[ 5][ 9].re*B[ 9][11].re 
	-A[ 5][10].im*B[10][11].im 
	+A[ 5][10].re*B[10][11].re 
	-A[ 5][11].im*B[11][11].im 
	+A[ 5][11].re*B[11][11].re;

  C[ 5][11].im = 
	 A[ 5][ 0].im*B[ 0][11].re 
	+A[ 5][ 0].re*B[ 0][11].im 
	+A[ 5][ 1].im*B[ 1][11].re 
	+A[ 5][ 1].re*B[ 1][11].im 
	+A[ 5][ 2].im*B[ 2][11].re 
	+A[ 5][ 2].re*B[ 2][11].im 
	+A[ 5][ 3].im*B[ 3][11].re 
	+A[ 5][ 3].re*B[ 3][11].im 
	+A[ 5][ 4].im*B[ 4][11].re 
	+A[ 5][ 4].re*B[ 4][11].im 
	+A[ 5][ 5].im*B[ 5][11].re 
	+A[ 5][ 5].re*B[ 5][11].im 
	+A[ 5][ 6].im*B[ 6][11].re 
	+A[ 5][ 6].re*B[ 6][11].im 
	+A[ 5][ 7].im*B[ 7][11].re 
	+A[ 5][ 7].re*B[ 7][11].im 
	+A[ 5][ 8].im*B[ 8][11].re 
	+A[ 5][ 8].re*B[ 8][11].im 
	+A[ 5][ 9].im*B[ 9][11].re 
	+A[ 5][ 9].re*B[ 9][11].im 
	+A[ 5][10].im*B[10][11].re 
	+A[ 5][10].re*B[10][11].im 
	+A[ 5][11].im*B[11][11].re 
	+A[ 5][11].re*B[11][11].im;

  C[ 6][ 0].re = 
	-A[ 6][ 0].im*B[ 0][ 0].im 
	+A[ 6][ 0].re*B[ 0][ 0].re 
	-A[ 6][ 1].im*B[ 1][ 0].im 
	+A[ 6][ 1].re*B[ 1][ 0].re 
	-A[ 6][ 2].im*B[ 2][ 0].im 
	+A[ 6][ 2].re*B[ 2][ 0].re 
	-A[ 6][ 3].im*B[ 3][ 0].im 
	+A[ 6][ 3].re*B[ 3][ 0].re 
	-A[ 6][ 4].im*B[ 4][ 0].im 
	+A[ 6][ 4].re*B[ 4][ 0].re 
	-A[ 6][ 5].im*B[ 5][ 0].im 
	+A[ 6][ 5].re*B[ 5][ 0].re 
	-A[ 6][ 6].im*B[ 6][ 0].im 
	+A[ 6][ 6].re*B[ 6][ 0].re 
	-A[ 6][ 7].im*B[ 7][ 0].im 
	+A[ 6][ 7].re*B[ 7][ 0].re 
	-A[ 6][ 8].im*B[ 8][ 0].im 
	+A[ 6][ 8].re*B[ 8][ 0].re 
	-A[ 6][ 9].im*B[ 9][ 0].im 
	+A[ 6][ 9].re*B[ 9][ 0].re 
	-A[ 6][10].im*B[10][ 0].im 
	+A[ 6][10].re*B[10][ 0].re 
	-A[ 6][11].im*B[11][ 0].im 
	+A[ 6][11].re*B[11][ 0].re;

  C[ 6][ 0].im = 
	 A[ 6][ 0].im*B[ 0][ 0].re 
	+A[ 6][ 0].re*B[ 0][ 0].im 
	+A[ 6][ 1].im*B[ 1][ 0].re 
	+A[ 6][ 1].re*B[ 1][ 0].im 
	+A[ 6][ 2].im*B[ 2][ 0].re 
	+A[ 6][ 2].re*B[ 2][ 0].im 
	+A[ 6][ 3].im*B[ 3][ 0].re 
	+A[ 6][ 3].re*B[ 3][ 0].im 
	+A[ 6][ 4].im*B[ 4][ 0].re 
	+A[ 6][ 4].re*B[ 4][ 0].im 
	+A[ 6][ 5].im*B[ 5][ 0].re 
	+A[ 6][ 5].re*B[ 5][ 0].im 
	+A[ 6][ 6].im*B[ 6][ 0].re 
	+A[ 6][ 6].re*B[ 6][ 0].im 
	+A[ 6][ 7].im*B[ 7][ 0].re 
	+A[ 6][ 7].re*B[ 7][ 0].im 
	+A[ 6][ 8].im*B[ 8][ 0].re 
	+A[ 6][ 8].re*B[ 8][ 0].im 
	+A[ 6][ 9].im*B[ 9][ 0].re 
	+A[ 6][ 9].re*B[ 9][ 0].im 
	+A[ 6][10].im*B[10][ 0].re 
	+A[ 6][10].re*B[10][ 0].im 
	+A[ 6][11].im*B[11][ 0].re 
	+A[ 6][11].re*B[11][ 0].im;

  C[ 6][ 1].re = 
	-A[ 6][ 0].im*B[ 0][ 1].im 
	+A[ 6][ 0].re*B[ 0][ 1].re 
	-A[ 6][ 1].im*B[ 1][ 1].im 
	+A[ 6][ 1].re*B[ 1][ 1].re 
	-A[ 6][ 2].im*B[ 2][ 1].im 
	+A[ 6][ 2].re*B[ 2][ 1].re 
	-A[ 6][ 3].im*B[ 3][ 1].im 
	+A[ 6][ 3].re*B[ 3][ 1].re 
	-A[ 6][ 4].im*B[ 4][ 1].im 
	+A[ 6][ 4].re*B[ 4][ 1].re 
	-A[ 6][ 5].im*B[ 5][ 1].im 
	+A[ 6][ 5].re*B[ 5][ 1].re 
	-A[ 6][ 6].im*B[ 6][ 1].im 
	+A[ 6][ 6].re*B[ 6][ 1].re 
	-A[ 6][ 7].im*B[ 7][ 1].im 
	+A[ 6][ 7].re*B[ 7][ 1].re 
	-A[ 6][ 8].im*B[ 8][ 1].im 
	+A[ 6][ 8].re*B[ 8][ 1].re 
	-A[ 6][ 9].im*B[ 9][ 1].im 
	+A[ 6][ 9].re*B[ 9][ 1].re 
	-A[ 6][10].im*B[10][ 1].im 
	+A[ 6][10].re*B[10][ 1].re 
	-A[ 6][11].im*B[11][ 1].im 
	+A[ 6][11].re*B[11][ 1].re;

  C[ 6][ 1].im = 
	 A[ 6][ 0].im*B[ 0][ 1].re 
	+A[ 6][ 0].re*B[ 0][ 1].im 
	+A[ 6][ 1].im*B[ 1][ 1].re 
	+A[ 6][ 1].re*B[ 1][ 1].im 
	+A[ 6][ 2].im*B[ 2][ 1].re 
	+A[ 6][ 2].re*B[ 2][ 1].im 
	+A[ 6][ 3].im*B[ 3][ 1].re 
	+A[ 6][ 3].re*B[ 3][ 1].im 
	+A[ 6][ 4].im*B[ 4][ 1].re 
	+A[ 6][ 4].re*B[ 4][ 1].im 
	+A[ 6][ 5].im*B[ 5][ 1].re 
	+A[ 6][ 5].re*B[ 5][ 1].im 
	+A[ 6][ 6].im*B[ 6][ 1].re 
	+A[ 6][ 6].re*B[ 6][ 1].im 
	+A[ 6][ 7].im*B[ 7][ 1].re 
	+A[ 6][ 7].re*B[ 7][ 1].im 
	+A[ 6][ 8].im*B[ 8][ 1].re 
	+A[ 6][ 8].re*B[ 8][ 1].im 
	+A[ 6][ 9].im*B[ 9][ 1].re 
	+A[ 6][ 9].re*B[ 9][ 1].im 
	+A[ 6][10].im*B[10][ 1].re 
	+A[ 6][10].re*B[10][ 1].im 
	+A[ 6][11].im*B[11][ 1].re 
	+A[ 6][11].re*B[11][ 1].im;

  C[ 6][ 2].re = 
	-A[ 6][ 0].im*B[ 0][ 2].im 
	+A[ 6][ 0].re*B[ 0][ 2].re 
	-A[ 6][ 1].im*B[ 1][ 2].im 
	+A[ 6][ 1].re*B[ 1][ 2].re 
	-A[ 6][ 2].im*B[ 2][ 2].im 
	+A[ 6][ 2].re*B[ 2][ 2].re 
	-A[ 6][ 3].im*B[ 3][ 2].im 
	+A[ 6][ 3].re*B[ 3][ 2].re 
	-A[ 6][ 4].im*B[ 4][ 2].im 
	+A[ 6][ 4].re*B[ 4][ 2].re 
	-A[ 6][ 5].im*B[ 5][ 2].im 
	+A[ 6][ 5].re*B[ 5][ 2].re 
	-A[ 6][ 6].im*B[ 6][ 2].im 
	+A[ 6][ 6].re*B[ 6][ 2].re 
	-A[ 6][ 7].im*B[ 7][ 2].im 
	+A[ 6][ 7].re*B[ 7][ 2].re 
	-A[ 6][ 8].im*B[ 8][ 2].im 
	+A[ 6][ 8].re*B[ 8][ 2].re 
	-A[ 6][ 9].im*B[ 9][ 2].im 
	+A[ 6][ 9].re*B[ 9][ 2].re 
	-A[ 6][10].im*B[10][ 2].im 
	+A[ 6][10].re*B[10][ 2].re 
	-A[ 6][11].im*B[11][ 2].im 
	+A[ 6][11].re*B[11][ 2].re;

  C[ 6][ 2].im = 
	 A[ 6][ 0].im*B[ 0][ 2].re 
	+A[ 6][ 0].re*B[ 0][ 2].im 
	+A[ 6][ 1].im*B[ 1][ 2].re 
	+A[ 6][ 1].re*B[ 1][ 2].im 
	+A[ 6][ 2].im*B[ 2][ 2].re 
	+A[ 6][ 2].re*B[ 2][ 2].im 
	+A[ 6][ 3].im*B[ 3][ 2].re 
	+A[ 6][ 3].re*B[ 3][ 2].im 
	+A[ 6][ 4].im*B[ 4][ 2].re 
	+A[ 6][ 4].re*B[ 4][ 2].im 
	+A[ 6][ 5].im*B[ 5][ 2].re 
	+A[ 6][ 5].re*B[ 5][ 2].im 
	+A[ 6][ 6].im*B[ 6][ 2].re 
	+A[ 6][ 6].re*B[ 6][ 2].im 
	+A[ 6][ 7].im*B[ 7][ 2].re 
	+A[ 6][ 7].re*B[ 7][ 2].im 
	+A[ 6][ 8].im*B[ 8][ 2].re 
	+A[ 6][ 8].re*B[ 8][ 2].im 
	+A[ 6][ 9].im*B[ 9][ 2].re 
	+A[ 6][ 9].re*B[ 9][ 2].im 
	+A[ 6][10].im*B[10][ 2].re 
	+A[ 6][10].re*B[10][ 2].im 
	+A[ 6][11].im*B[11][ 2].re 
	+A[ 6][11].re*B[11][ 2].im;

  C[ 6][ 3].re = 
	-A[ 6][ 0].im*B[ 0][ 3].im 
	+A[ 6][ 0].re*B[ 0][ 3].re 
	-A[ 6][ 1].im*B[ 1][ 3].im 
	+A[ 6][ 1].re*B[ 1][ 3].re 
	-A[ 6][ 2].im*B[ 2][ 3].im 
	+A[ 6][ 2].re*B[ 2][ 3].re 
	-A[ 6][ 3].im*B[ 3][ 3].im 
	+A[ 6][ 3].re*B[ 3][ 3].re 
	-A[ 6][ 4].im*B[ 4][ 3].im 
	+A[ 6][ 4].re*B[ 4][ 3].re 
	-A[ 6][ 5].im*B[ 5][ 3].im 
	+A[ 6][ 5].re*B[ 5][ 3].re 
	-A[ 6][ 6].im*B[ 6][ 3].im 
	+A[ 6][ 6].re*B[ 6][ 3].re 
	-A[ 6][ 7].im*B[ 7][ 3].im 
	+A[ 6][ 7].re*B[ 7][ 3].re 
	-A[ 6][ 8].im*B[ 8][ 3].im 
	+A[ 6][ 8].re*B[ 8][ 3].re 
	-A[ 6][ 9].im*B[ 9][ 3].im 
	+A[ 6][ 9].re*B[ 9][ 3].re 
	-A[ 6][10].im*B[10][ 3].im 
	+A[ 6][10].re*B[10][ 3].re 
	-A[ 6][11].im*B[11][ 3].im 
	+A[ 6][11].re*B[11][ 3].re;

  C[ 6][ 3].im = 
	 A[ 6][ 0].im*B[ 0][ 3].re 
	+A[ 6][ 0].re*B[ 0][ 3].im 
	+A[ 6][ 1].im*B[ 1][ 3].re 
	+A[ 6][ 1].re*B[ 1][ 3].im 
	+A[ 6][ 2].im*B[ 2][ 3].re 
	+A[ 6][ 2].re*B[ 2][ 3].im 
	+A[ 6][ 3].im*B[ 3][ 3].re 
	+A[ 6][ 3].re*B[ 3][ 3].im 
	+A[ 6][ 4].im*B[ 4][ 3].re 
	+A[ 6][ 4].re*B[ 4][ 3].im 
	+A[ 6][ 5].im*B[ 5][ 3].re 
	+A[ 6][ 5].re*B[ 5][ 3].im 
	+A[ 6][ 6].im*B[ 6][ 3].re 
	+A[ 6][ 6].re*B[ 6][ 3].im 
	+A[ 6][ 7].im*B[ 7][ 3].re 
	+A[ 6][ 7].re*B[ 7][ 3].im 
	+A[ 6][ 8].im*B[ 8][ 3].re 
	+A[ 6][ 8].re*B[ 8][ 3].im 
	+A[ 6][ 9].im*B[ 9][ 3].re 
	+A[ 6][ 9].re*B[ 9][ 3].im 
	+A[ 6][10].im*B[10][ 3].re 
	+A[ 6][10].re*B[10][ 3].im 
	+A[ 6][11].im*B[11][ 3].re 
	+A[ 6][11].re*B[11][ 3].im;

  C[ 6][ 4].re = 
	-A[ 6][ 0].im*B[ 0][ 4].im 
	+A[ 6][ 0].re*B[ 0][ 4].re 
	-A[ 6][ 1].im*B[ 1][ 4].im 
	+A[ 6][ 1].re*B[ 1][ 4].re 
	-A[ 6][ 2].im*B[ 2][ 4].im 
	+A[ 6][ 2].re*B[ 2][ 4].re 
	-A[ 6][ 3].im*B[ 3][ 4].im 
	+A[ 6][ 3].re*B[ 3][ 4].re 
	-A[ 6][ 4].im*B[ 4][ 4].im 
	+A[ 6][ 4].re*B[ 4][ 4].re 
	-A[ 6][ 5].im*B[ 5][ 4].im 
	+A[ 6][ 5].re*B[ 5][ 4].re 
	-A[ 6][ 6].im*B[ 6][ 4].im 
	+A[ 6][ 6].re*B[ 6][ 4].re 
	-A[ 6][ 7].im*B[ 7][ 4].im 
	+A[ 6][ 7].re*B[ 7][ 4].re 
	-A[ 6][ 8].im*B[ 8][ 4].im 
	+A[ 6][ 8].re*B[ 8][ 4].re 
	-A[ 6][ 9].im*B[ 9][ 4].im 
	+A[ 6][ 9].re*B[ 9][ 4].re 
	-A[ 6][10].im*B[10][ 4].im 
	+A[ 6][10].re*B[10][ 4].re 
	-A[ 6][11].im*B[11][ 4].im 
	+A[ 6][11].re*B[11][ 4].re;

  C[ 6][ 4].im = 
	 A[ 6][ 0].im*B[ 0][ 4].re 
	+A[ 6][ 0].re*B[ 0][ 4].im 
	+A[ 6][ 1].im*B[ 1][ 4].re 
	+A[ 6][ 1].re*B[ 1][ 4].im 
	+A[ 6][ 2].im*B[ 2][ 4].re 
	+A[ 6][ 2].re*B[ 2][ 4].im 
	+A[ 6][ 3].im*B[ 3][ 4].re 
	+A[ 6][ 3].re*B[ 3][ 4].im 
	+A[ 6][ 4].im*B[ 4][ 4].re 
	+A[ 6][ 4].re*B[ 4][ 4].im 
	+A[ 6][ 5].im*B[ 5][ 4].re 
	+A[ 6][ 5].re*B[ 5][ 4].im 
	+A[ 6][ 6].im*B[ 6][ 4].re 
	+A[ 6][ 6].re*B[ 6][ 4].im 
	+A[ 6][ 7].im*B[ 7][ 4].re 
	+A[ 6][ 7].re*B[ 7][ 4].im 
	+A[ 6][ 8].im*B[ 8][ 4].re 
	+A[ 6][ 8].re*B[ 8][ 4].im 
	+A[ 6][ 9].im*B[ 9][ 4].re 
	+A[ 6][ 9].re*B[ 9][ 4].im 
	+A[ 6][10].im*B[10][ 4].re 
	+A[ 6][10].re*B[10][ 4].im 
	+A[ 6][11].im*B[11][ 4].re 
	+A[ 6][11].re*B[11][ 4].im;

  C[ 6][ 5].re = 
	-A[ 6][ 0].im*B[ 0][ 5].im 
	+A[ 6][ 0].re*B[ 0][ 5].re 
	-A[ 6][ 1].im*B[ 1][ 5].im 
	+A[ 6][ 1].re*B[ 1][ 5].re 
	-A[ 6][ 2].im*B[ 2][ 5].im 
	+A[ 6][ 2].re*B[ 2][ 5].re 
	-A[ 6][ 3].im*B[ 3][ 5].im 
	+A[ 6][ 3].re*B[ 3][ 5].re 
	-A[ 6][ 4].im*B[ 4][ 5].im 
	+A[ 6][ 4].re*B[ 4][ 5].re 
	-A[ 6][ 5].im*B[ 5][ 5].im 
	+A[ 6][ 5].re*B[ 5][ 5].re 
	-A[ 6][ 6].im*B[ 6][ 5].im 
	+A[ 6][ 6].re*B[ 6][ 5].re 
	-A[ 6][ 7].im*B[ 7][ 5].im 
	+A[ 6][ 7].re*B[ 7][ 5].re 
	-A[ 6][ 8].im*B[ 8][ 5].im 
	+A[ 6][ 8].re*B[ 8][ 5].re 
	-A[ 6][ 9].im*B[ 9][ 5].im 
	+A[ 6][ 9].re*B[ 9][ 5].re 
	-A[ 6][10].im*B[10][ 5].im 
	+A[ 6][10].re*B[10][ 5].re 
	-A[ 6][11].im*B[11][ 5].im 
	+A[ 6][11].re*B[11][ 5].re;

  C[ 6][ 5].im = 
	 A[ 6][ 0].im*B[ 0][ 5].re 
	+A[ 6][ 0].re*B[ 0][ 5].im 
	+A[ 6][ 1].im*B[ 1][ 5].re 
	+A[ 6][ 1].re*B[ 1][ 5].im 
	+A[ 6][ 2].im*B[ 2][ 5].re 
	+A[ 6][ 2].re*B[ 2][ 5].im 
	+A[ 6][ 3].im*B[ 3][ 5].re 
	+A[ 6][ 3].re*B[ 3][ 5].im 
	+A[ 6][ 4].im*B[ 4][ 5].re 
	+A[ 6][ 4].re*B[ 4][ 5].im 
	+A[ 6][ 5].im*B[ 5][ 5].re 
	+A[ 6][ 5].re*B[ 5][ 5].im 
	+A[ 6][ 6].im*B[ 6][ 5].re 
	+A[ 6][ 6].re*B[ 6][ 5].im 
	+A[ 6][ 7].im*B[ 7][ 5].re 
	+A[ 6][ 7].re*B[ 7][ 5].im 
	+A[ 6][ 8].im*B[ 8][ 5].re 
	+A[ 6][ 8].re*B[ 8][ 5].im 
	+A[ 6][ 9].im*B[ 9][ 5].re 
	+A[ 6][ 9].re*B[ 9][ 5].im 
	+A[ 6][10].im*B[10][ 5].re 
	+A[ 6][10].re*B[10][ 5].im 
	+A[ 6][11].im*B[11][ 5].re 
	+A[ 6][11].re*B[11][ 5].im;

  C[ 6][ 6].re = 
	-A[ 6][ 0].im*B[ 0][ 6].im 
	+A[ 6][ 0].re*B[ 0][ 6].re 
	-A[ 6][ 1].im*B[ 1][ 6].im 
	+A[ 6][ 1].re*B[ 1][ 6].re 
	-A[ 6][ 2].im*B[ 2][ 6].im 
	+A[ 6][ 2].re*B[ 2][ 6].re 
	-A[ 6][ 3].im*B[ 3][ 6].im 
	+A[ 6][ 3].re*B[ 3][ 6].re 
	-A[ 6][ 4].im*B[ 4][ 6].im 
	+A[ 6][ 4].re*B[ 4][ 6].re 
	-A[ 6][ 5].im*B[ 5][ 6].im 
	+A[ 6][ 5].re*B[ 5][ 6].re 
	-A[ 6][ 6].im*B[ 6][ 6].im 
	+A[ 6][ 6].re*B[ 6][ 6].re 
	-A[ 6][ 7].im*B[ 7][ 6].im 
	+A[ 6][ 7].re*B[ 7][ 6].re 
	-A[ 6][ 8].im*B[ 8][ 6].im 
	+A[ 6][ 8].re*B[ 8][ 6].re 
	-A[ 6][ 9].im*B[ 9][ 6].im 
	+A[ 6][ 9].re*B[ 9][ 6].re 
	-A[ 6][10].im*B[10][ 6].im 
	+A[ 6][10].re*B[10][ 6].re 
	-A[ 6][11].im*B[11][ 6].im 
	+A[ 6][11].re*B[11][ 6].re;

  C[ 6][ 6].im = 
	 A[ 6][ 0].im*B[ 0][ 6].re 
	+A[ 6][ 0].re*B[ 0][ 6].im 
	+A[ 6][ 1].im*B[ 1][ 6].re 
	+A[ 6][ 1].re*B[ 1][ 6].im 
	+A[ 6][ 2].im*B[ 2][ 6].re 
	+A[ 6][ 2].re*B[ 2][ 6].im 
	+A[ 6][ 3].im*B[ 3][ 6].re 
	+A[ 6][ 3].re*B[ 3][ 6].im 
	+A[ 6][ 4].im*B[ 4][ 6].re 
	+A[ 6][ 4].re*B[ 4][ 6].im 
	+A[ 6][ 5].im*B[ 5][ 6].re 
	+A[ 6][ 5].re*B[ 5][ 6].im 
	+A[ 6][ 6].im*B[ 6][ 6].re 
	+A[ 6][ 6].re*B[ 6][ 6].im 
	+A[ 6][ 7].im*B[ 7][ 6].re 
	+A[ 6][ 7].re*B[ 7][ 6].im 
	+A[ 6][ 8].im*B[ 8][ 6].re 
	+A[ 6][ 8].re*B[ 8][ 6].im 
	+A[ 6][ 9].im*B[ 9][ 6].re 
	+A[ 6][ 9].re*B[ 9][ 6].im 
	+A[ 6][10].im*B[10][ 6].re 
	+A[ 6][10].re*B[10][ 6].im 
	+A[ 6][11].im*B[11][ 6].re 
	+A[ 6][11].re*B[11][ 6].im;

  C[ 6][ 7].re = 
	-A[ 6][ 0].im*B[ 0][ 7].im 
	+A[ 6][ 0].re*B[ 0][ 7].re 
	-A[ 6][ 1].im*B[ 1][ 7].im 
	+A[ 6][ 1].re*B[ 1][ 7].re 
	-A[ 6][ 2].im*B[ 2][ 7].im 
	+A[ 6][ 2].re*B[ 2][ 7].re 
	-A[ 6][ 3].im*B[ 3][ 7].im 
	+A[ 6][ 3].re*B[ 3][ 7].re 
	-A[ 6][ 4].im*B[ 4][ 7].im 
	+A[ 6][ 4].re*B[ 4][ 7].re 
	-A[ 6][ 5].im*B[ 5][ 7].im 
	+A[ 6][ 5].re*B[ 5][ 7].re 
	-A[ 6][ 6].im*B[ 6][ 7].im 
	+A[ 6][ 6].re*B[ 6][ 7].re 
	-A[ 6][ 7].im*B[ 7][ 7].im 
	+A[ 6][ 7].re*B[ 7][ 7].re 
	-A[ 6][ 8].im*B[ 8][ 7].im 
	+A[ 6][ 8].re*B[ 8][ 7].re 
	-A[ 6][ 9].im*B[ 9][ 7].im 
	+A[ 6][ 9].re*B[ 9][ 7].re 
	-A[ 6][10].im*B[10][ 7].im 
	+A[ 6][10].re*B[10][ 7].re 
	-A[ 6][11].im*B[11][ 7].im 
	+A[ 6][11].re*B[11][ 7].re;

  C[ 6][ 7].im = 
	 A[ 6][ 0].im*B[ 0][ 7].re 
	+A[ 6][ 0].re*B[ 0][ 7].im 
	+A[ 6][ 1].im*B[ 1][ 7].re 
	+A[ 6][ 1].re*B[ 1][ 7].im 
	+A[ 6][ 2].im*B[ 2][ 7].re 
	+A[ 6][ 2].re*B[ 2][ 7].im 
	+A[ 6][ 3].im*B[ 3][ 7].re 
	+A[ 6][ 3].re*B[ 3][ 7].im 
	+A[ 6][ 4].im*B[ 4][ 7].re 
	+A[ 6][ 4].re*B[ 4][ 7].im 
	+A[ 6][ 5].im*B[ 5][ 7].re 
	+A[ 6][ 5].re*B[ 5][ 7].im 
	+A[ 6][ 6].im*B[ 6][ 7].re 
	+A[ 6][ 6].re*B[ 6][ 7].im 
	+A[ 6][ 7].im*B[ 7][ 7].re 
	+A[ 6][ 7].re*B[ 7][ 7].im 
	+A[ 6][ 8].im*B[ 8][ 7].re 
	+A[ 6][ 8].re*B[ 8][ 7].im 
	+A[ 6][ 9].im*B[ 9][ 7].re 
	+A[ 6][ 9].re*B[ 9][ 7].im 
	+A[ 6][10].im*B[10][ 7].re 
	+A[ 6][10].re*B[10][ 7].im 
	+A[ 6][11].im*B[11][ 7].re 
	+A[ 6][11].re*B[11][ 7].im;

  C[ 6][ 8].re = 
	-A[ 6][ 0].im*B[ 0][ 8].im 
	+A[ 6][ 0].re*B[ 0][ 8].re 
	-A[ 6][ 1].im*B[ 1][ 8].im 
	+A[ 6][ 1].re*B[ 1][ 8].re 
	-A[ 6][ 2].im*B[ 2][ 8].im 
	+A[ 6][ 2].re*B[ 2][ 8].re 
	-A[ 6][ 3].im*B[ 3][ 8].im 
	+A[ 6][ 3].re*B[ 3][ 8].re 
	-A[ 6][ 4].im*B[ 4][ 8].im 
	+A[ 6][ 4].re*B[ 4][ 8].re 
	-A[ 6][ 5].im*B[ 5][ 8].im 
	+A[ 6][ 5].re*B[ 5][ 8].re 
	-A[ 6][ 6].im*B[ 6][ 8].im 
	+A[ 6][ 6].re*B[ 6][ 8].re 
	-A[ 6][ 7].im*B[ 7][ 8].im 
	+A[ 6][ 7].re*B[ 7][ 8].re 
	-A[ 6][ 8].im*B[ 8][ 8].im 
	+A[ 6][ 8].re*B[ 8][ 8].re 
	-A[ 6][ 9].im*B[ 9][ 8].im 
	+A[ 6][ 9].re*B[ 9][ 8].re 
	-A[ 6][10].im*B[10][ 8].im 
	+A[ 6][10].re*B[10][ 8].re 
	-A[ 6][11].im*B[11][ 8].im 
	+A[ 6][11].re*B[11][ 8].re;

  C[ 6][ 8].im = 
	 A[ 6][ 0].im*B[ 0][ 8].re 
	+A[ 6][ 0].re*B[ 0][ 8].im 
	+A[ 6][ 1].im*B[ 1][ 8].re 
	+A[ 6][ 1].re*B[ 1][ 8].im 
	+A[ 6][ 2].im*B[ 2][ 8].re 
	+A[ 6][ 2].re*B[ 2][ 8].im 
	+A[ 6][ 3].im*B[ 3][ 8].re 
	+A[ 6][ 3].re*B[ 3][ 8].im 
	+A[ 6][ 4].im*B[ 4][ 8].re 
	+A[ 6][ 4].re*B[ 4][ 8].im 
	+A[ 6][ 5].im*B[ 5][ 8].re 
	+A[ 6][ 5].re*B[ 5][ 8].im 
	+A[ 6][ 6].im*B[ 6][ 8].re 
	+A[ 6][ 6].re*B[ 6][ 8].im 
	+A[ 6][ 7].im*B[ 7][ 8].re 
	+A[ 6][ 7].re*B[ 7][ 8].im 
	+A[ 6][ 8].im*B[ 8][ 8].re 
	+A[ 6][ 8].re*B[ 8][ 8].im 
	+A[ 6][ 9].im*B[ 9][ 8].re 
	+A[ 6][ 9].re*B[ 9][ 8].im 
	+A[ 6][10].im*B[10][ 8].re 
	+A[ 6][10].re*B[10][ 8].im 
	+A[ 6][11].im*B[11][ 8].re 
	+A[ 6][11].re*B[11][ 8].im;

  C[ 6][ 9].re = 
	-A[ 6][ 0].im*B[ 0][ 9].im 
	+A[ 6][ 0].re*B[ 0][ 9].re 
	-A[ 6][ 1].im*B[ 1][ 9].im 
	+A[ 6][ 1].re*B[ 1][ 9].re 
	-A[ 6][ 2].im*B[ 2][ 9].im 
	+A[ 6][ 2].re*B[ 2][ 9].re 
	-A[ 6][ 3].im*B[ 3][ 9].im 
	+A[ 6][ 3].re*B[ 3][ 9].re 
	-A[ 6][ 4].im*B[ 4][ 9].im 
	+A[ 6][ 4].re*B[ 4][ 9].re 
	-A[ 6][ 5].im*B[ 5][ 9].im 
	+A[ 6][ 5].re*B[ 5][ 9].re 
	-A[ 6][ 6].im*B[ 6][ 9].im 
	+A[ 6][ 6].re*B[ 6][ 9].re 
	-A[ 6][ 7].im*B[ 7][ 9].im 
	+A[ 6][ 7].re*B[ 7][ 9].re 
	-A[ 6][ 8].im*B[ 8][ 9].im 
	+A[ 6][ 8].re*B[ 8][ 9].re 
	-A[ 6][ 9].im*B[ 9][ 9].im 
	+A[ 6][ 9].re*B[ 9][ 9].re 
	-A[ 6][10].im*B[10][ 9].im 
	+A[ 6][10].re*B[10][ 9].re 
	-A[ 6][11].im*B[11][ 9].im 
	+A[ 6][11].re*B[11][ 9].re;

  C[ 6][ 9].im = 
	 A[ 6][ 0].im*B[ 0][ 9].re 
	+A[ 6][ 0].re*B[ 0][ 9].im 
	+A[ 6][ 1].im*B[ 1][ 9].re 
	+A[ 6][ 1].re*B[ 1][ 9].im 
	+A[ 6][ 2].im*B[ 2][ 9].re 
	+A[ 6][ 2].re*B[ 2][ 9].im 
	+A[ 6][ 3].im*B[ 3][ 9].re 
	+A[ 6][ 3].re*B[ 3][ 9].im 
	+A[ 6][ 4].im*B[ 4][ 9].re 
	+A[ 6][ 4].re*B[ 4][ 9].im 
	+A[ 6][ 5].im*B[ 5][ 9].re 
	+A[ 6][ 5].re*B[ 5][ 9].im 
	+A[ 6][ 6].im*B[ 6][ 9].re 
	+A[ 6][ 6].re*B[ 6][ 9].im 
	+A[ 6][ 7].im*B[ 7][ 9].re 
	+A[ 6][ 7].re*B[ 7][ 9].im 
	+A[ 6][ 8].im*B[ 8][ 9].re 
	+A[ 6][ 8].re*B[ 8][ 9].im 
	+A[ 6][ 9].im*B[ 9][ 9].re 
	+A[ 6][ 9].re*B[ 9][ 9].im 
	+A[ 6][10].im*B[10][ 9].re 
	+A[ 6][10].re*B[10][ 9].im 
	+A[ 6][11].im*B[11][ 9].re 
	+A[ 6][11].re*B[11][ 9].im;

  C[ 6][10].re = 
	-A[ 6][ 0].im*B[ 0][10].im 
	+A[ 6][ 0].re*B[ 0][10].re 
	-A[ 6][ 1].im*B[ 1][10].im 
	+A[ 6][ 1].re*B[ 1][10].re 
	-A[ 6][ 2].im*B[ 2][10].im 
	+A[ 6][ 2].re*B[ 2][10].re 
	-A[ 6][ 3].im*B[ 3][10].im 
	+A[ 6][ 3].re*B[ 3][10].re 
	-A[ 6][ 4].im*B[ 4][10].im 
	+A[ 6][ 4].re*B[ 4][10].re 
	-A[ 6][ 5].im*B[ 5][10].im 
	+A[ 6][ 5].re*B[ 5][10].re 
	-A[ 6][ 6].im*B[ 6][10].im 
	+A[ 6][ 6].re*B[ 6][10].re 
	-A[ 6][ 7].im*B[ 7][10].im 
	+A[ 6][ 7].re*B[ 7][10].re 
	-A[ 6][ 8].im*B[ 8][10].im 
	+A[ 6][ 8].re*B[ 8][10].re 
	-A[ 6][ 9].im*B[ 9][10].im 
	+A[ 6][ 9].re*B[ 9][10].re 
	-A[ 6][10].im*B[10][10].im 
	+A[ 6][10].re*B[10][10].re 
	-A[ 6][11].im*B[11][10].im 
	+A[ 6][11].re*B[11][10].re;

  C[ 6][10].im = 
	 A[ 6][ 0].im*B[ 0][10].re 
	+A[ 6][ 0].re*B[ 0][10].im 
	+A[ 6][ 1].im*B[ 1][10].re 
	+A[ 6][ 1].re*B[ 1][10].im 
	+A[ 6][ 2].im*B[ 2][10].re 
	+A[ 6][ 2].re*B[ 2][10].im 
	+A[ 6][ 3].im*B[ 3][10].re 
	+A[ 6][ 3].re*B[ 3][10].im 
	+A[ 6][ 4].im*B[ 4][10].re 
	+A[ 6][ 4].re*B[ 4][10].im 
	+A[ 6][ 5].im*B[ 5][10].re 
	+A[ 6][ 5].re*B[ 5][10].im 
	+A[ 6][ 6].im*B[ 6][10].re 
	+A[ 6][ 6].re*B[ 6][10].im 
	+A[ 6][ 7].im*B[ 7][10].re 
	+A[ 6][ 7].re*B[ 7][10].im 
	+A[ 6][ 8].im*B[ 8][10].re 
	+A[ 6][ 8].re*B[ 8][10].im 
	+A[ 6][ 9].im*B[ 9][10].re 
	+A[ 6][ 9].re*B[ 9][10].im 
	+A[ 6][10].im*B[10][10].re 
	+A[ 6][10].re*B[10][10].im 
	+A[ 6][11].im*B[11][10].re 
	+A[ 6][11].re*B[11][10].im;

  C[ 6][11].re = 
	-A[ 6][ 0].im*B[ 0][11].im 
	+A[ 6][ 0].re*B[ 0][11].re 
	-A[ 6][ 1].im*B[ 1][11].im 
	+A[ 6][ 1].re*B[ 1][11].re 
	-A[ 6][ 2].im*B[ 2][11].im 
	+A[ 6][ 2].re*B[ 2][11].re 
	-A[ 6][ 3].im*B[ 3][11].im 
	+A[ 6][ 3].re*B[ 3][11].re 
	-A[ 6][ 4].im*B[ 4][11].im 
	+A[ 6][ 4].re*B[ 4][11].re 
	-A[ 6][ 5].im*B[ 5][11].im 
	+A[ 6][ 5].re*B[ 5][11].re 
	-A[ 6][ 6].im*B[ 6][11].im 
	+A[ 6][ 6].re*B[ 6][11].re 
	-A[ 6][ 7].im*B[ 7][11].im 
	+A[ 6][ 7].re*B[ 7][11].re 
	-A[ 6][ 8].im*B[ 8][11].im 
	+A[ 6][ 8].re*B[ 8][11].re 
	-A[ 6][ 9].im*B[ 9][11].im 
	+A[ 6][ 9].re*B[ 9][11].re 
	-A[ 6][10].im*B[10][11].im 
	+A[ 6][10].re*B[10][11].re 
	-A[ 6][11].im*B[11][11].im 
	+A[ 6][11].re*B[11][11].re;

  C[ 6][11].im = 
	 A[ 6][ 0].im*B[ 0][11].re 
	+A[ 6][ 0].re*B[ 0][11].im 
	+A[ 6][ 1].im*B[ 1][11].re 
	+A[ 6][ 1].re*B[ 1][11].im 
	+A[ 6][ 2].im*B[ 2][11].re 
	+A[ 6][ 2].re*B[ 2][11].im 
	+A[ 6][ 3].im*B[ 3][11].re 
	+A[ 6][ 3].re*B[ 3][11].im 
	+A[ 6][ 4].im*B[ 4][11].re 
	+A[ 6][ 4].re*B[ 4][11].im 
	+A[ 6][ 5].im*B[ 5][11].re 
	+A[ 6][ 5].re*B[ 5][11].im 
	+A[ 6][ 6].im*B[ 6][11].re 
	+A[ 6][ 6].re*B[ 6][11].im 
	+A[ 6][ 7].im*B[ 7][11].re 
	+A[ 6][ 7].re*B[ 7][11].im 
	+A[ 6][ 8].im*B[ 8][11].re 
	+A[ 6][ 8].re*B[ 8][11].im 
	+A[ 6][ 9].im*B[ 9][11].re 
	+A[ 6][ 9].re*B[ 9][11].im 
	+A[ 6][10].im*B[10][11].re 
	+A[ 6][10].re*B[10][11].im 
	+A[ 6][11].im*B[11][11].re 
	+A[ 6][11].re*B[11][11].im;

  C[ 7][ 0].re = 
	-A[ 7][ 0].im*B[ 0][ 0].im 
	+A[ 7][ 0].re*B[ 0][ 0].re 
	-A[ 7][ 1].im*B[ 1][ 0].im 
	+A[ 7][ 1].re*B[ 1][ 0].re 
	-A[ 7][ 2].im*B[ 2][ 0].im 
	+A[ 7][ 2].re*B[ 2][ 0].re 
	-A[ 7][ 3].im*B[ 3][ 0].im 
	+A[ 7][ 3].re*B[ 3][ 0].re 
	-A[ 7][ 4].im*B[ 4][ 0].im 
	+A[ 7][ 4].re*B[ 4][ 0].re 
	-A[ 7][ 5].im*B[ 5][ 0].im 
	+A[ 7][ 5].re*B[ 5][ 0].re 
	-A[ 7][ 6].im*B[ 6][ 0].im 
	+A[ 7][ 6].re*B[ 6][ 0].re 
	-A[ 7][ 7].im*B[ 7][ 0].im 
	+A[ 7][ 7].re*B[ 7][ 0].re 
	-A[ 7][ 8].im*B[ 8][ 0].im 
	+A[ 7][ 8].re*B[ 8][ 0].re 
	-A[ 7][ 9].im*B[ 9][ 0].im 
	+A[ 7][ 9].re*B[ 9][ 0].re 
	-A[ 7][10].im*B[10][ 0].im 
	+A[ 7][10].re*B[10][ 0].re 
	-A[ 7][11].im*B[11][ 0].im 
	+A[ 7][11].re*B[11][ 0].re;

  C[ 7][ 0].im = 
	 A[ 7][ 0].im*B[ 0][ 0].re 
	+A[ 7][ 0].re*B[ 0][ 0].im 
	+A[ 7][ 1].im*B[ 1][ 0].re 
	+A[ 7][ 1].re*B[ 1][ 0].im 
	+A[ 7][ 2].im*B[ 2][ 0].re 
	+A[ 7][ 2].re*B[ 2][ 0].im 
	+A[ 7][ 3].im*B[ 3][ 0].re 
	+A[ 7][ 3].re*B[ 3][ 0].im 
	+A[ 7][ 4].im*B[ 4][ 0].re 
	+A[ 7][ 4].re*B[ 4][ 0].im 
	+A[ 7][ 5].im*B[ 5][ 0].re 
	+A[ 7][ 5].re*B[ 5][ 0].im 
	+A[ 7][ 6].im*B[ 6][ 0].re 
	+A[ 7][ 6].re*B[ 6][ 0].im 
	+A[ 7][ 7].im*B[ 7][ 0].re 
	+A[ 7][ 7].re*B[ 7][ 0].im 
	+A[ 7][ 8].im*B[ 8][ 0].re 
	+A[ 7][ 8].re*B[ 8][ 0].im 
	+A[ 7][ 9].im*B[ 9][ 0].re 
	+A[ 7][ 9].re*B[ 9][ 0].im 
	+A[ 7][10].im*B[10][ 0].re 
	+A[ 7][10].re*B[10][ 0].im 
	+A[ 7][11].im*B[11][ 0].re 
	+A[ 7][11].re*B[11][ 0].im;

  C[ 7][ 1].re = 
	-A[ 7][ 0].im*B[ 0][ 1].im 
	+A[ 7][ 0].re*B[ 0][ 1].re 
	-A[ 7][ 1].im*B[ 1][ 1].im 
	+A[ 7][ 1].re*B[ 1][ 1].re 
	-A[ 7][ 2].im*B[ 2][ 1].im 
	+A[ 7][ 2].re*B[ 2][ 1].re 
	-A[ 7][ 3].im*B[ 3][ 1].im 
	+A[ 7][ 3].re*B[ 3][ 1].re 
	-A[ 7][ 4].im*B[ 4][ 1].im 
	+A[ 7][ 4].re*B[ 4][ 1].re 
	-A[ 7][ 5].im*B[ 5][ 1].im 
	+A[ 7][ 5].re*B[ 5][ 1].re 
	-A[ 7][ 6].im*B[ 6][ 1].im 
	+A[ 7][ 6].re*B[ 6][ 1].re 
	-A[ 7][ 7].im*B[ 7][ 1].im 
	+A[ 7][ 7].re*B[ 7][ 1].re 
	-A[ 7][ 8].im*B[ 8][ 1].im 
	+A[ 7][ 8].re*B[ 8][ 1].re 
	-A[ 7][ 9].im*B[ 9][ 1].im 
	+A[ 7][ 9].re*B[ 9][ 1].re 
	-A[ 7][10].im*B[10][ 1].im 
	+A[ 7][10].re*B[10][ 1].re 
	-A[ 7][11].im*B[11][ 1].im 
	+A[ 7][11].re*B[11][ 1].re;

  C[ 7][ 1].im = 
	 A[ 7][ 0].im*B[ 0][ 1].re 
	+A[ 7][ 0].re*B[ 0][ 1].im 
	+A[ 7][ 1].im*B[ 1][ 1].re 
	+A[ 7][ 1].re*B[ 1][ 1].im 
	+A[ 7][ 2].im*B[ 2][ 1].re 
	+A[ 7][ 2].re*B[ 2][ 1].im 
	+A[ 7][ 3].im*B[ 3][ 1].re 
	+A[ 7][ 3].re*B[ 3][ 1].im 
	+A[ 7][ 4].im*B[ 4][ 1].re 
	+A[ 7][ 4].re*B[ 4][ 1].im 
	+A[ 7][ 5].im*B[ 5][ 1].re 
	+A[ 7][ 5].re*B[ 5][ 1].im 
	+A[ 7][ 6].im*B[ 6][ 1].re 
	+A[ 7][ 6].re*B[ 6][ 1].im 
	+A[ 7][ 7].im*B[ 7][ 1].re 
	+A[ 7][ 7].re*B[ 7][ 1].im 
	+A[ 7][ 8].im*B[ 8][ 1].re 
	+A[ 7][ 8].re*B[ 8][ 1].im 
	+A[ 7][ 9].im*B[ 9][ 1].re 
	+A[ 7][ 9].re*B[ 9][ 1].im 
	+A[ 7][10].im*B[10][ 1].re 
	+A[ 7][10].re*B[10][ 1].im 
	+A[ 7][11].im*B[11][ 1].re 
	+A[ 7][11].re*B[11][ 1].im;

  C[ 7][ 2].re = 
	-A[ 7][ 0].im*B[ 0][ 2].im 
	+A[ 7][ 0].re*B[ 0][ 2].re 
	-A[ 7][ 1].im*B[ 1][ 2].im 
	+A[ 7][ 1].re*B[ 1][ 2].re 
	-A[ 7][ 2].im*B[ 2][ 2].im 
	+A[ 7][ 2].re*B[ 2][ 2].re 
	-A[ 7][ 3].im*B[ 3][ 2].im 
	+A[ 7][ 3].re*B[ 3][ 2].re 
	-A[ 7][ 4].im*B[ 4][ 2].im 
	+A[ 7][ 4].re*B[ 4][ 2].re 
	-A[ 7][ 5].im*B[ 5][ 2].im 
	+A[ 7][ 5].re*B[ 5][ 2].re 
	-A[ 7][ 6].im*B[ 6][ 2].im 
	+A[ 7][ 6].re*B[ 6][ 2].re 
	-A[ 7][ 7].im*B[ 7][ 2].im 
	+A[ 7][ 7].re*B[ 7][ 2].re 
	-A[ 7][ 8].im*B[ 8][ 2].im 
	+A[ 7][ 8].re*B[ 8][ 2].re 
	-A[ 7][ 9].im*B[ 9][ 2].im 
	+A[ 7][ 9].re*B[ 9][ 2].re 
	-A[ 7][10].im*B[10][ 2].im 
	+A[ 7][10].re*B[10][ 2].re 
	-A[ 7][11].im*B[11][ 2].im 
	+A[ 7][11].re*B[11][ 2].re;

  C[ 7][ 2].im = 
	 A[ 7][ 0].im*B[ 0][ 2].re 
	+A[ 7][ 0].re*B[ 0][ 2].im 
	+A[ 7][ 1].im*B[ 1][ 2].re 
	+A[ 7][ 1].re*B[ 1][ 2].im 
	+A[ 7][ 2].im*B[ 2][ 2].re 
	+A[ 7][ 2].re*B[ 2][ 2].im 
	+A[ 7][ 3].im*B[ 3][ 2].re 
	+A[ 7][ 3].re*B[ 3][ 2].im 
	+A[ 7][ 4].im*B[ 4][ 2].re 
	+A[ 7][ 4].re*B[ 4][ 2].im 
	+A[ 7][ 5].im*B[ 5][ 2].re 
	+A[ 7][ 5].re*B[ 5][ 2].im 
	+A[ 7][ 6].im*B[ 6][ 2].re 
	+A[ 7][ 6].re*B[ 6][ 2].im 
	+A[ 7][ 7].im*B[ 7][ 2].re 
	+A[ 7][ 7].re*B[ 7][ 2].im 
	+A[ 7][ 8].im*B[ 8][ 2].re 
	+A[ 7][ 8].re*B[ 8][ 2].im 
	+A[ 7][ 9].im*B[ 9][ 2].re 
	+A[ 7][ 9].re*B[ 9][ 2].im 
	+A[ 7][10].im*B[10][ 2].re 
	+A[ 7][10].re*B[10][ 2].im 
	+A[ 7][11].im*B[11][ 2].re 
	+A[ 7][11].re*B[11][ 2].im;

  C[ 7][ 3].re = 
	-A[ 7][ 0].im*B[ 0][ 3].im 
	+A[ 7][ 0].re*B[ 0][ 3].re 
	-A[ 7][ 1].im*B[ 1][ 3].im 
	+A[ 7][ 1].re*B[ 1][ 3].re 
	-A[ 7][ 2].im*B[ 2][ 3].im 
	+A[ 7][ 2].re*B[ 2][ 3].re 
	-A[ 7][ 3].im*B[ 3][ 3].im 
	+A[ 7][ 3].re*B[ 3][ 3].re 
	-A[ 7][ 4].im*B[ 4][ 3].im 
	+A[ 7][ 4].re*B[ 4][ 3].re 
	-A[ 7][ 5].im*B[ 5][ 3].im 
	+A[ 7][ 5].re*B[ 5][ 3].re 
	-A[ 7][ 6].im*B[ 6][ 3].im 
	+A[ 7][ 6].re*B[ 6][ 3].re 
	-A[ 7][ 7].im*B[ 7][ 3].im 
	+A[ 7][ 7].re*B[ 7][ 3].re 
	-A[ 7][ 8].im*B[ 8][ 3].im 
	+A[ 7][ 8].re*B[ 8][ 3].re 
	-A[ 7][ 9].im*B[ 9][ 3].im 
	+A[ 7][ 9].re*B[ 9][ 3].re 
	-A[ 7][10].im*B[10][ 3].im 
	+A[ 7][10].re*B[10][ 3].re 
	-A[ 7][11].im*B[11][ 3].im 
	+A[ 7][11].re*B[11][ 3].re;

  C[ 7][ 3].im = 
	 A[ 7][ 0].im*B[ 0][ 3].re 
	+A[ 7][ 0].re*B[ 0][ 3].im 
	+A[ 7][ 1].im*B[ 1][ 3].re 
	+A[ 7][ 1].re*B[ 1][ 3].im 
	+A[ 7][ 2].im*B[ 2][ 3].re 
	+A[ 7][ 2].re*B[ 2][ 3].im 
	+A[ 7][ 3].im*B[ 3][ 3].re 
	+A[ 7][ 3].re*B[ 3][ 3].im 
	+A[ 7][ 4].im*B[ 4][ 3].re 
	+A[ 7][ 4].re*B[ 4][ 3].im 
	+A[ 7][ 5].im*B[ 5][ 3].re 
	+A[ 7][ 5].re*B[ 5][ 3].im 
	+A[ 7][ 6].im*B[ 6][ 3].re 
	+A[ 7][ 6].re*B[ 6][ 3].im 
	+A[ 7][ 7].im*B[ 7][ 3].re 
	+A[ 7][ 7].re*B[ 7][ 3].im 
	+A[ 7][ 8].im*B[ 8][ 3].re 
	+A[ 7][ 8].re*B[ 8][ 3].im 
	+A[ 7][ 9].im*B[ 9][ 3].re 
	+A[ 7][ 9].re*B[ 9][ 3].im 
	+A[ 7][10].im*B[10][ 3].re 
	+A[ 7][10].re*B[10][ 3].im 
	+A[ 7][11].im*B[11][ 3].re 
	+A[ 7][11].re*B[11][ 3].im;

  C[ 7][ 4].re = 
	-A[ 7][ 0].im*B[ 0][ 4].im 
	+A[ 7][ 0].re*B[ 0][ 4].re 
	-A[ 7][ 1].im*B[ 1][ 4].im 
	+A[ 7][ 1].re*B[ 1][ 4].re 
	-A[ 7][ 2].im*B[ 2][ 4].im 
	+A[ 7][ 2].re*B[ 2][ 4].re 
	-A[ 7][ 3].im*B[ 3][ 4].im 
	+A[ 7][ 3].re*B[ 3][ 4].re 
	-A[ 7][ 4].im*B[ 4][ 4].im 
	+A[ 7][ 4].re*B[ 4][ 4].re 
	-A[ 7][ 5].im*B[ 5][ 4].im 
	+A[ 7][ 5].re*B[ 5][ 4].re 
	-A[ 7][ 6].im*B[ 6][ 4].im 
	+A[ 7][ 6].re*B[ 6][ 4].re 
	-A[ 7][ 7].im*B[ 7][ 4].im 
	+A[ 7][ 7].re*B[ 7][ 4].re 
	-A[ 7][ 8].im*B[ 8][ 4].im 
	+A[ 7][ 8].re*B[ 8][ 4].re 
	-A[ 7][ 9].im*B[ 9][ 4].im 
	+A[ 7][ 9].re*B[ 9][ 4].re 
	-A[ 7][10].im*B[10][ 4].im 
	+A[ 7][10].re*B[10][ 4].re 
	-A[ 7][11].im*B[11][ 4].im 
	+A[ 7][11].re*B[11][ 4].re;

  C[ 7][ 4].im = 
	 A[ 7][ 0].im*B[ 0][ 4].re 
	+A[ 7][ 0].re*B[ 0][ 4].im 
	+A[ 7][ 1].im*B[ 1][ 4].re 
	+A[ 7][ 1].re*B[ 1][ 4].im 
	+A[ 7][ 2].im*B[ 2][ 4].re 
	+A[ 7][ 2].re*B[ 2][ 4].im 
	+A[ 7][ 3].im*B[ 3][ 4].re 
	+A[ 7][ 3].re*B[ 3][ 4].im 
	+A[ 7][ 4].im*B[ 4][ 4].re 
	+A[ 7][ 4].re*B[ 4][ 4].im 
	+A[ 7][ 5].im*B[ 5][ 4].re 
	+A[ 7][ 5].re*B[ 5][ 4].im 
	+A[ 7][ 6].im*B[ 6][ 4].re 
	+A[ 7][ 6].re*B[ 6][ 4].im 
	+A[ 7][ 7].im*B[ 7][ 4].re 
	+A[ 7][ 7].re*B[ 7][ 4].im 
	+A[ 7][ 8].im*B[ 8][ 4].re 
	+A[ 7][ 8].re*B[ 8][ 4].im 
	+A[ 7][ 9].im*B[ 9][ 4].re 
	+A[ 7][ 9].re*B[ 9][ 4].im 
	+A[ 7][10].im*B[10][ 4].re 
	+A[ 7][10].re*B[10][ 4].im 
	+A[ 7][11].im*B[11][ 4].re 
	+A[ 7][11].re*B[11][ 4].im;

  C[ 7][ 5].re = 
	-A[ 7][ 0].im*B[ 0][ 5].im 
	+A[ 7][ 0].re*B[ 0][ 5].re 
	-A[ 7][ 1].im*B[ 1][ 5].im 
	+A[ 7][ 1].re*B[ 1][ 5].re 
	-A[ 7][ 2].im*B[ 2][ 5].im 
	+A[ 7][ 2].re*B[ 2][ 5].re 
	-A[ 7][ 3].im*B[ 3][ 5].im 
	+A[ 7][ 3].re*B[ 3][ 5].re 
	-A[ 7][ 4].im*B[ 4][ 5].im 
	+A[ 7][ 4].re*B[ 4][ 5].re 
	-A[ 7][ 5].im*B[ 5][ 5].im 
	+A[ 7][ 5].re*B[ 5][ 5].re 
	-A[ 7][ 6].im*B[ 6][ 5].im 
	+A[ 7][ 6].re*B[ 6][ 5].re 
	-A[ 7][ 7].im*B[ 7][ 5].im 
	+A[ 7][ 7].re*B[ 7][ 5].re 
	-A[ 7][ 8].im*B[ 8][ 5].im 
	+A[ 7][ 8].re*B[ 8][ 5].re 
	-A[ 7][ 9].im*B[ 9][ 5].im 
	+A[ 7][ 9].re*B[ 9][ 5].re 
	-A[ 7][10].im*B[10][ 5].im 
	+A[ 7][10].re*B[10][ 5].re 
	-A[ 7][11].im*B[11][ 5].im 
	+A[ 7][11].re*B[11][ 5].re;

  C[ 7][ 5].im = 
	 A[ 7][ 0].im*B[ 0][ 5].re 
	+A[ 7][ 0].re*B[ 0][ 5].im 
	+A[ 7][ 1].im*B[ 1][ 5].re 
	+A[ 7][ 1].re*B[ 1][ 5].im 
	+A[ 7][ 2].im*B[ 2][ 5].re 
	+A[ 7][ 2].re*B[ 2][ 5].im 
	+A[ 7][ 3].im*B[ 3][ 5].re 
	+A[ 7][ 3].re*B[ 3][ 5].im 
	+A[ 7][ 4].im*B[ 4][ 5].re 
	+A[ 7][ 4].re*B[ 4][ 5].im 
	+A[ 7][ 5].im*B[ 5][ 5].re 
	+A[ 7][ 5].re*B[ 5][ 5].im 
	+A[ 7][ 6].im*B[ 6][ 5].re 
	+A[ 7][ 6].re*B[ 6][ 5].im 
	+A[ 7][ 7].im*B[ 7][ 5].re 
	+A[ 7][ 7].re*B[ 7][ 5].im 
	+A[ 7][ 8].im*B[ 8][ 5].re 
	+A[ 7][ 8].re*B[ 8][ 5].im 
	+A[ 7][ 9].im*B[ 9][ 5].re 
	+A[ 7][ 9].re*B[ 9][ 5].im 
	+A[ 7][10].im*B[10][ 5].re 
	+A[ 7][10].re*B[10][ 5].im 
	+A[ 7][11].im*B[11][ 5].re 
	+A[ 7][11].re*B[11][ 5].im;

  C[ 7][ 6].re = 
	-A[ 7][ 0].im*B[ 0][ 6].im 
	+A[ 7][ 0].re*B[ 0][ 6].re 
	-A[ 7][ 1].im*B[ 1][ 6].im 
	+A[ 7][ 1].re*B[ 1][ 6].re 
	-A[ 7][ 2].im*B[ 2][ 6].im 
	+A[ 7][ 2].re*B[ 2][ 6].re 
	-A[ 7][ 3].im*B[ 3][ 6].im 
	+A[ 7][ 3].re*B[ 3][ 6].re 
	-A[ 7][ 4].im*B[ 4][ 6].im 
	+A[ 7][ 4].re*B[ 4][ 6].re 
	-A[ 7][ 5].im*B[ 5][ 6].im 
	+A[ 7][ 5].re*B[ 5][ 6].re 
	-A[ 7][ 6].im*B[ 6][ 6].im 
	+A[ 7][ 6].re*B[ 6][ 6].re 
	-A[ 7][ 7].im*B[ 7][ 6].im 
	+A[ 7][ 7].re*B[ 7][ 6].re 
	-A[ 7][ 8].im*B[ 8][ 6].im 
	+A[ 7][ 8].re*B[ 8][ 6].re 
	-A[ 7][ 9].im*B[ 9][ 6].im 
	+A[ 7][ 9].re*B[ 9][ 6].re 
	-A[ 7][10].im*B[10][ 6].im 
	+A[ 7][10].re*B[10][ 6].re 
	-A[ 7][11].im*B[11][ 6].im 
	+A[ 7][11].re*B[11][ 6].re;

  C[ 7][ 6].im = 
	 A[ 7][ 0].im*B[ 0][ 6].re 
	+A[ 7][ 0].re*B[ 0][ 6].im 
	+A[ 7][ 1].im*B[ 1][ 6].re 
	+A[ 7][ 1].re*B[ 1][ 6].im 
	+A[ 7][ 2].im*B[ 2][ 6].re 
	+A[ 7][ 2].re*B[ 2][ 6].im 
	+A[ 7][ 3].im*B[ 3][ 6].re 
	+A[ 7][ 3].re*B[ 3][ 6].im 
	+A[ 7][ 4].im*B[ 4][ 6].re 
	+A[ 7][ 4].re*B[ 4][ 6].im 
	+A[ 7][ 5].im*B[ 5][ 6].re 
	+A[ 7][ 5].re*B[ 5][ 6].im 
	+A[ 7][ 6].im*B[ 6][ 6].re 
	+A[ 7][ 6].re*B[ 6][ 6].im 
	+A[ 7][ 7].im*B[ 7][ 6].re 
	+A[ 7][ 7].re*B[ 7][ 6].im 
	+A[ 7][ 8].im*B[ 8][ 6].re 
	+A[ 7][ 8].re*B[ 8][ 6].im 
	+A[ 7][ 9].im*B[ 9][ 6].re 
	+A[ 7][ 9].re*B[ 9][ 6].im 
	+A[ 7][10].im*B[10][ 6].re 
	+A[ 7][10].re*B[10][ 6].im 
	+A[ 7][11].im*B[11][ 6].re 
	+A[ 7][11].re*B[11][ 6].im;

  C[ 7][ 7].re = 
	-A[ 7][ 0].im*B[ 0][ 7].im 
	+A[ 7][ 0].re*B[ 0][ 7].re 
	-A[ 7][ 1].im*B[ 1][ 7].im 
	+A[ 7][ 1].re*B[ 1][ 7].re 
	-A[ 7][ 2].im*B[ 2][ 7].im 
	+A[ 7][ 2].re*B[ 2][ 7].re 
	-A[ 7][ 3].im*B[ 3][ 7].im 
	+A[ 7][ 3].re*B[ 3][ 7].re 
	-A[ 7][ 4].im*B[ 4][ 7].im 
	+A[ 7][ 4].re*B[ 4][ 7].re 
	-A[ 7][ 5].im*B[ 5][ 7].im 
	+A[ 7][ 5].re*B[ 5][ 7].re 
	-A[ 7][ 6].im*B[ 6][ 7].im 
	+A[ 7][ 6].re*B[ 6][ 7].re 
	-A[ 7][ 7].im*B[ 7][ 7].im 
	+A[ 7][ 7].re*B[ 7][ 7].re 
	-A[ 7][ 8].im*B[ 8][ 7].im 
	+A[ 7][ 8].re*B[ 8][ 7].re 
	-A[ 7][ 9].im*B[ 9][ 7].im 
	+A[ 7][ 9].re*B[ 9][ 7].re 
	-A[ 7][10].im*B[10][ 7].im 
	+A[ 7][10].re*B[10][ 7].re 
	-A[ 7][11].im*B[11][ 7].im 
	+A[ 7][11].re*B[11][ 7].re;

  C[ 7][ 7].im = 
	 A[ 7][ 0].im*B[ 0][ 7].re 
	+A[ 7][ 0].re*B[ 0][ 7].im 
	+A[ 7][ 1].im*B[ 1][ 7].re 
	+A[ 7][ 1].re*B[ 1][ 7].im 
	+A[ 7][ 2].im*B[ 2][ 7].re 
	+A[ 7][ 2].re*B[ 2][ 7].im 
	+A[ 7][ 3].im*B[ 3][ 7].re 
	+A[ 7][ 3].re*B[ 3][ 7].im 
	+A[ 7][ 4].im*B[ 4][ 7].re 
	+A[ 7][ 4].re*B[ 4][ 7].im 
	+A[ 7][ 5].im*B[ 5][ 7].re 
	+A[ 7][ 5].re*B[ 5][ 7].im 
	+A[ 7][ 6].im*B[ 6][ 7].re 
	+A[ 7][ 6].re*B[ 6][ 7].im 
	+A[ 7][ 7].im*B[ 7][ 7].re 
	+A[ 7][ 7].re*B[ 7][ 7].im 
	+A[ 7][ 8].im*B[ 8][ 7].re 
	+A[ 7][ 8].re*B[ 8][ 7].im 
	+A[ 7][ 9].im*B[ 9][ 7].re 
	+A[ 7][ 9].re*B[ 9][ 7].im 
	+A[ 7][10].im*B[10][ 7].re 
	+A[ 7][10].re*B[10][ 7].im 
	+A[ 7][11].im*B[11][ 7].re 
	+A[ 7][11].re*B[11][ 7].im;

  C[ 7][ 8].re = 
	-A[ 7][ 0].im*B[ 0][ 8].im 
	+A[ 7][ 0].re*B[ 0][ 8].re 
	-A[ 7][ 1].im*B[ 1][ 8].im 
	+A[ 7][ 1].re*B[ 1][ 8].re 
	-A[ 7][ 2].im*B[ 2][ 8].im 
	+A[ 7][ 2].re*B[ 2][ 8].re 
	-A[ 7][ 3].im*B[ 3][ 8].im 
	+A[ 7][ 3].re*B[ 3][ 8].re 
	-A[ 7][ 4].im*B[ 4][ 8].im 
	+A[ 7][ 4].re*B[ 4][ 8].re 
	-A[ 7][ 5].im*B[ 5][ 8].im 
	+A[ 7][ 5].re*B[ 5][ 8].re 
	-A[ 7][ 6].im*B[ 6][ 8].im 
	+A[ 7][ 6].re*B[ 6][ 8].re 
	-A[ 7][ 7].im*B[ 7][ 8].im 
	+A[ 7][ 7].re*B[ 7][ 8].re 
	-A[ 7][ 8].im*B[ 8][ 8].im 
	+A[ 7][ 8].re*B[ 8][ 8].re 
	-A[ 7][ 9].im*B[ 9][ 8].im 
	+A[ 7][ 9].re*B[ 9][ 8].re 
	-A[ 7][10].im*B[10][ 8].im 
	+A[ 7][10].re*B[10][ 8].re 
	-A[ 7][11].im*B[11][ 8].im 
	+A[ 7][11].re*B[11][ 8].re;

  C[ 7][ 8].im = 
	 A[ 7][ 0].im*B[ 0][ 8].re 
	+A[ 7][ 0].re*B[ 0][ 8].im 
	+A[ 7][ 1].im*B[ 1][ 8].re 
	+A[ 7][ 1].re*B[ 1][ 8].im 
	+A[ 7][ 2].im*B[ 2][ 8].re 
	+A[ 7][ 2].re*B[ 2][ 8].im 
	+A[ 7][ 3].im*B[ 3][ 8].re 
	+A[ 7][ 3].re*B[ 3][ 8].im 
	+A[ 7][ 4].im*B[ 4][ 8].re 
	+A[ 7][ 4].re*B[ 4][ 8].im 
	+A[ 7][ 5].im*B[ 5][ 8].re 
	+A[ 7][ 5].re*B[ 5][ 8].im 
	+A[ 7][ 6].im*B[ 6][ 8].re 
	+A[ 7][ 6].re*B[ 6][ 8].im 
	+A[ 7][ 7].im*B[ 7][ 8].re 
	+A[ 7][ 7].re*B[ 7][ 8].im 
	+A[ 7][ 8].im*B[ 8][ 8].re 
	+A[ 7][ 8].re*B[ 8][ 8].im 
	+A[ 7][ 9].im*B[ 9][ 8].re 
	+A[ 7][ 9].re*B[ 9][ 8].im 
	+A[ 7][10].im*B[10][ 8].re 
	+A[ 7][10].re*B[10][ 8].im 
	+A[ 7][11].im*B[11][ 8].re 
	+A[ 7][11].re*B[11][ 8].im;

  C[ 7][ 9].re = 
	-A[ 7][ 0].im*B[ 0][ 9].im 
	+A[ 7][ 0].re*B[ 0][ 9].re 
	-A[ 7][ 1].im*B[ 1][ 9].im 
	+A[ 7][ 1].re*B[ 1][ 9].re 
	-A[ 7][ 2].im*B[ 2][ 9].im 
	+A[ 7][ 2].re*B[ 2][ 9].re 
	-A[ 7][ 3].im*B[ 3][ 9].im 
	+A[ 7][ 3].re*B[ 3][ 9].re 
	-A[ 7][ 4].im*B[ 4][ 9].im 
	+A[ 7][ 4].re*B[ 4][ 9].re 
	-A[ 7][ 5].im*B[ 5][ 9].im 
	+A[ 7][ 5].re*B[ 5][ 9].re 
	-A[ 7][ 6].im*B[ 6][ 9].im 
	+A[ 7][ 6].re*B[ 6][ 9].re 
	-A[ 7][ 7].im*B[ 7][ 9].im 
	+A[ 7][ 7].re*B[ 7][ 9].re 
	-A[ 7][ 8].im*B[ 8][ 9].im 
	+A[ 7][ 8].re*B[ 8][ 9].re 
	-A[ 7][ 9].im*B[ 9][ 9].im 
	+A[ 7][ 9].re*B[ 9][ 9].re 
	-A[ 7][10].im*B[10][ 9].im 
	+A[ 7][10].re*B[10][ 9].re 
	-A[ 7][11].im*B[11][ 9].im 
	+A[ 7][11].re*B[11][ 9].re;

  C[ 7][ 9].im = 
	 A[ 7][ 0].im*B[ 0][ 9].re 
	+A[ 7][ 0].re*B[ 0][ 9].im 
	+A[ 7][ 1].im*B[ 1][ 9].re 
	+A[ 7][ 1].re*B[ 1][ 9].im 
	+A[ 7][ 2].im*B[ 2][ 9].re 
	+A[ 7][ 2].re*B[ 2][ 9].im 
	+A[ 7][ 3].im*B[ 3][ 9].re 
	+A[ 7][ 3].re*B[ 3][ 9].im 
	+A[ 7][ 4].im*B[ 4][ 9].re 
	+A[ 7][ 4].re*B[ 4][ 9].im 
	+A[ 7][ 5].im*B[ 5][ 9].re 
	+A[ 7][ 5].re*B[ 5][ 9].im 
	+A[ 7][ 6].im*B[ 6][ 9].re 
	+A[ 7][ 6].re*B[ 6][ 9].im 
	+A[ 7][ 7].im*B[ 7][ 9].re 
	+A[ 7][ 7].re*B[ 7][ 9].im 
	+A[ 7][ 8].im*B[ 8][ 9].re 
	+A[ 7][ 8].re*B[ 8][ 9].im 
	+A[ 7][ 9].im*B[ 9][ 9].re 
	+A[ 7][ 9].re*B[ 9][ 9].im 
	+A[ 7][10].im*B[10][ 9].re 
	+A[ 7][10].re*B[10][ 9].im 
	+A[ 7][11].im*B[11][ 9].re 
	+A[ 7][11].re*B[11][ 9].im;

  C[ 7][10].re = 
	-A[ 7][ 0].im*B[ 0][10].im 
	+A[ 7][ 0].re*B[ 0][10].re 
	-A[ 7][ 1].im*B[ 1][10].im 
	+A[ 7][ 1].re*B[ 1][10].re 
	-A[ 7][ 2].im*B[ 2][10].im 
	+A[ 7][ 2].re*B[ 2][10].re 
	-A[ 7][ 3].im*B[ 3][10].im 
	+A[ 7][ 3].re*B[ 3][10].re 
	-A[ 7][ 4].im*B[ 4][10].im 
	+A[ 7][ 4].re*B[ 4][10].re 
	-A[ 7][ 5].im*B[ 5][10].im 
	+A[ 7][ 5].re*B[ 5][10].re 
	-A[ 7][ 6].im*B[ 6][10].im 
	+A[ 7][ 6].re*B[ 6][10].re 
	-A[ 7][ 7].im*B[ 7][10].im 
	+A[ 7][ 7].re*B[ 7][10].re 
	-A[ 7][ 8].im*B[ 8][10].im 
	+A[ 7][ 8].re*B[ 8][10].re 
	-A[ 7][ 9].im*B[ 9][10].im 
	+A[ 7][ 9].re*B[ 9][10].re 
	-A[ 7][10].im*B[10][10].im 
	+A[ 7][10].re*B[10][10].re 
	-A[ 7][11].im*B[11][10].im 
	+A[ 7][11].re*B[11][10].re;

  C[ 7][10].im = 
	 A[ 7][ 0].im*B[ 0][10].re 
	+A[ 7][ 0].re*B[ 0][10].im 
	+A[ 7][ 1].im*B[ 1][10].re 
	+A[ 7][ 1].re*B[ 1][10].im 
	+A[ 7][ 2].im*B[ 2][10].re 
	+A[ 7][ 2].re*B[ 2][10].im 
	+A[ 7][ 3].im*B[ 3][10].re 
	+A[ 7][ 3].re*B[ 3][10].im 
	+A[ 7][ 4].im*B[ 4][10].re 
	+A[ 7][ 4].re*B[ 4][10].im 
	+A[ 7][ 5].im*B[ 5][10].re 
	+A[ 7][ 5].re*B[ 5][10].im 
	+A[ 7][ 6].im*B[ 6][10].re 
	+A[ 7][ 6].re*B[ 6][10].im 
	+A[ 7][ 7].im*B[ 7][10].re 
	+A[ 7][ 7].re*B[ 7][10].im 
	+A[ 7][ 8].im*B[ 8][10].re 
	+A[ 7][ 8].re*B[ 8][10].im 
	+A[ 7][ 9].im*B[ 9][10].re 
	+A[ 7][ 9].re*B[ 9][10].im 
	+A[ 7][10].im*B[10][10].re 
	+A[ 7][10].re*B[10][10].im 
	+A[ 7][11].im*B[11][10].re 
	+A[ 7][11].re*B[11][10].im;

  C[ 7][11].re = 
	-A[ 7][ 0].im*B[ 0][11].im 
	+A[ 7][ 0].re*B[ 0][11].re 
	-A[ 7][ 1].im*B[ 1][11].im 
	+A[ 7][ 1].re*B[ 1][11].re 
	-A[ 7][ 2].im*B[ 2][11].im 
	+A[ 7][ 2].re*B[ 2][11].re 
	-A[ 7][ 3].im*B[ 3][11].im 
	+A[ 7][ 3].re*B[ 3][11].re 
	-A[ 7][ 4].im*B[ 4][11].im 
	+A[ 7][ 4].re*B[ 4][11].re 
	-A[ 7][ 5].im*B[ 5][11].im 
	+A[ 7][ 5].re*B[ 5][11].re 
	-A[ 7][ 6].im*B[ 6][11].im 
	+A[ 7][ 6].re*B[ 6][11].re 
	-A[ 7][ 7].im*B[ 7][11].im 
	+A[ 7][ 7].re*B[ 7][11].re 
	-A[ 7][ 8].im*B[ 8][11].im 
	+A[ 7][ 8].re*B[ 8][11].re 
	-A[ 7][ 9].im*B[ 9][11].im 
	+A[ 7][ 9].re*B[ 9][11].re 
	-A[ 7][10].im*B[10][11].im 
	+A[ 7][10].re*B[10][11].re 
	-A[ 7][11].im*B[11][11].im 
	+A[ 7][11].re*B[11][11].re;

  C[ 7][11].im = 
	 A[ 7][ 0].im*B[ 0][11].re 
	+A[ 7][ 0].re*B[ 0][11].im 
	+A[ 7][ 1].im*B[ 1][11].re 
	+A[ 7][ 1].re*B[ 1][11].im 
	+A[ 7][ 2].im*B[ 2][11].re 
	+A[ 7][ 2].re*B[ 2][11].im 
	+A[ 7][ 3].im*B[ 3][11].re 
	+A[ 7][ 3].re*B[ 3][11].im 
	+A[ 7][ 4].im*B[ 4][11].re 
	+A[ 7][ 4].re*B[ 4][11].im 
	+A[ 7][ 5].im*B[ 5][11].re 
	+A[ 7][ 5].re*B[ 5][11].im 
	+A[ 7][ 6].im*B[ 6][11].re 
	+A[ 7][ 6].re*B[ 6][11].im 
	+A[ 7][ 7].im*B[ 7][11].re 
	+A[ 7][ 7].re*B[ 7][11].im 
	+A[ 7][ 8].im*B[ 8][11].re 
	+A[ 7][ 8].re*B[ 8][11].im 
	+A[ 7][ 9].im*B[ 9][11].re 
	+A[ 7][ 9].re*B[ 9][11].im 
	+A[ 7][10].im*B[10][11].re 
	+A[ 7][10].re*B[10][11].im 
	+A[ 7][11].im*B[11][11].re 
	+A[ 7][11].re*B[11][11].im;

  C[ 8][ 0].re = 
	-A[ 8][ 0].im*B[ 0][ 0].im 
	+A[ 8][ 0].re*B[ 0][ 0].re 
	-A[ 8][ 1].im*B[ 1][ 0].im 
	+A[ 8][ 1].re*B[ 1][ 0].re 
	-A[ 8][ 2].im*B[ 2][ 0].im 
	+A[ 8][ 2].re*B[ 2][ 0].re 
	-A[ 8][ 3].im*B[ 3][ 0].im 
	+A[ 8][ 3].re*B[ 3][ 0].re 
	-A[ 8][ 4].im*B[ 4][ 0].im 
	+A[ 8][ 4].re*B[ 4][ 0].re 
	-A[ 8][ 5].im*B[ 5][ 0].im 
	+A[ 8][ 5].re*B[ 5][ 0].re 
	-A[ 8][ 6].im*B[ 6][ 0].im 
	+A[ 8][ 6].re*B[ 6][ 0].re 
	-A[ 8][ 7].im*B[ 7][ 0].im 
	+A[ 8][ 7].re*B[ 7][ 0].re 
	-A[ 8][ 8].im*B[ 8][ 0].im 
	+A[ 8][ 8].re*B[ 8][ 0].re 
	-A[ 8][ 9].im*B[ 9][ 0].im 
	+A[ 8][ 9].re*B[ 9][ 0].re 
	-A[ 8][10].im*B[10][ 0].im 
	+A[ 8][10].re*B[10][ 0].re 
	-A[ 8][11].im*B[11][ 0].im 
	+A[ 8][11].re*B[11][ 0].re;

  C[ 8][ 0].im = 
	 A[ 8][ 0].im*B[ 0][ 0].re 
	+A[ 8][ 0].re*B[ 0][ 0].im 
	+A[ 8][ 1].im*B[ 1][ 0].re 
	+A[ 8][ 1].re*B[ 1][ 0].im 
	+A[ 8][ 2].im*B[ 2][ 0].re 
	+A[ 8][ 2].re*B[ 2][ 0].im 
	+A[ 8][ 3].im*B[ 3][ 0].re 
	+A[ 8][ 3].re*B[ 3][ 0].im 
	+A[ 8][ 4].im*B[ 4][ 0].re 
	+A[ 8][ 4].re*B[ 4][ 0].im 
	+A[ 8][ 5].im*B[ 5][ 0].re 
	+A[ 8][ 5].re*B[ 5][ 0].im 
	+A[ 8][ 6].im*B[ 6][ 0].re 
	+A[ 8][ 6].re*B[ 6][ 0].im 
	+A[ 8][ 7].im*B[ 7][ 0].re 
	+A[ 8][ 7].re*B[ 7][ 0].im 
	+A[ 8][ 8].im*B[ 8][ 0].re 
	+A[ 8][ 8].re*B[ 8][ 0].im 
	+A[ 8][ 9].im*B[ 9][ 0].re 
	+A[ 8][ 9].re*B[ 9][ 0].im 
	+A[ 8][10].im*B[10][ 0].re 
	+A[ 8][10].re*B[10][ 0].im 
	+A[ 8][11].im*B[11][ 0].re 
	+A[ 8][11].re*B[11][ 0].im;

  C[ 8][ 1].re = 
	-A[ 8][ 0].im*B[ 0][ 1].im 
	+A[ 8][ 0].re*B[ 0][ 1].re 
	-A[ 8][ 1].im*B[ 1][ 1].im 
	+A[ 8][ 1].re*B[ 1][ 1].re 
	-A[ 8][ 2].im*B[ 2][ 1].im 
	+A[ 8][ 2].re*B[ 2][ 1].re 
	-A[ 8][ 3].im*B[ 3][ 1].im 
	+A[ 8][ 3].re*B[ 3][ 1].re 
	-A[ 8][ 4].im*B[ 4][ 1].im 
	+A[ 8][ 4].re*B[ 4][ 1].re 
	-A[ 8][ 5].im*B[ 5][ 1].im 
	+A[ 8][ 5].re*B[ 5][ 1].re 
	-A[ 8][ 6].im*B[ 6][ 1].im 
	+A[ 8][ 6].re*B[ 6][ 1].re 
	-A[ 8][ 7].im*B[ 7][ 1].im 
	+A[ 8][ 7].re*B[ 7][ 1].re 
	-A[ 8][ 8].im*B[ 8][ 1].im 
	+A[ 8][ 8].re*B[ 8][ 1].re 
	-A[ 8][ 9].im*B[ 9][ 1].im 
	+A[ 8][ 9].re*B[ 9][ 1].re 
	-A[ 8][10].im*B[10][ 1].im 
	+A[ 8][10].re*B[10][ 1].re 
	-A[ 8][11].im*B[11][ 1].im 
	+A[ 8][11].re*B[11][ 1].re;

  C[ 8][ 1].im = 
	 A[ 8][ 0].im*B[ 0][ 1].re 
	+A[ 8][ 0].re*B[ 0][ 1].im 
	+A[ 8][ 1].im*B[ 1][ 1].re 
	+A[ 8][ 1].re*B[ 1][ 1].im 
	+A[ 8][ 2].im*B[ 2][ 1].re 
	+A[ 8][ 2].re*B[ 2][ 1].im 
	+A[ 8][ 3].im*B[ 3][ 1].re 
	+A[ 8][ 3].re*B[ 3][ 1].im 
	+A[ 8][ 4].im*B[ 4][ 1].re 
	+A[ 8][ 4].re*B[ 4][ 1].im 
	+A[ 8][ 5].im*B[ 5][ 1].re 
	+A[ 8][ 5].re*B[ 5][ 1].im 
	+A[ 8][ 6].im*B[ 6][ 1].re 
	+A[ 8][ 6].re*B[ 6][ 1].im 
	+A[ 8][ 7].im*B[ 7][ 1].re 
	+A[ 8][ 7].re*B[ 7][ 1].im 
	+A[ 8][ 8].im*B[ 8][ 1].re 
	+A[ 8][ 8].re*B[ 8][ 1].im 
	+A[ 8][ 9].im*B[ 9][ 1].re 
	+A[ 8][ 9].re*B[ 9][ 1].im 
	+A[ 8][10].im*B[10][ 1].re 
	+A[ 8][10].re*B[10][ 1].im 
	+A[ 8][11].im*B[11][ 1].re 
	+A[ 8][11].re*B[11][ 1].im;

  C[ 8][ 2].re = 
	-A[ 8][ 0].im*B[ 0][ 2].im 
	+A[ 8][ 0].re*B[ 0][ 2].re 
	-A[ 8][ 1].im*B[ 1][ 2].im 
	+A[ 8][ 1].re*B[ 1][ 2].re 
	-A[ 8][ 2].im*B[ 2][ 2].im 
	+A[ 8][ 2].re*B[ 2][ 2].re 
	-A[ 8][ 3].im*B[ 3][ 2].im 
	+A[ 8][ 3].re*B[ 3][ 2].re 
	-A[ 8][ 4].im*B[ 4][ 2].im 
	+A[ 8][ 4].re*B[ 4][ 2].re 
	-A[ 8][ 5].im*B[ 5][ 2].im 
	+A[ 8][ 5].re*B[ 5][ 2].re 
	-A[ 8][ 6].im*B[ 6][ 2].im 
	+A[ 8][ 6].re*B[ 6][ 2].re 
	-A[ 8][ 7].im*B[ 7][ 2].im 
	+A[ 8][ 7].re*B[ 7][ 2].re 
	-A[ 8][ 8].im*B[ 8][ 2].im 
	+A[ 8][ 8].re*B[ 8][ 2].re 
	-A[ 8][ 9].im*B[ 9][ 2].im 
	+A[ 8][ 9].re*B[ 9][ 2].re 
	-A[ 8][10].im*B[10][ 2].im 
	+A[ 8][10].re*B[10][ 2].re 
	-A[ 8][11].im*B[11][ 2].im 
	+A[ 8][11].re*B[11][ 2].re;

  C[ 8][ 2].im = 
	 A[ 8][ 0].im*B[ 0][ 2].re 
	+A[ 8][ 0].re*B[ 0][ 2].im 
	+A[ 8][ 1].im*B[ 1][ 2].re 
	+A[ 8][ 1].re*B[ 1][ 2].im 
	+A[ 8][ 2].im*B[ 2][ 2].re 
	+A[ 8][ 2].re*B[ 2][ 2].im 
	+A[ 8][ 3].im*B[ 3][ 2].re 
	+A[ 8][ 3].re*B[ 3][ 2].im 
	+A[ 8][ 4].im*B[ 4][ 2].re 
	+A[ 8][ 4].re*B[ 4][ 2].im 
	+A[ 8][ 5].im*B[ 5][ 2].re 
	+A[ 8][ 5].re*B[ 5][ 2].im 
	+A[ 8][ 6].im*B[ 6][ 2].re 
	+A[ 8][ 6].re*B[ 6][ 2].im 
	+A[ 8][ 7].im*B[ 7][ 2].re 
	+A[ 8][ 7].re*B[ 7][ 2].im 
	+A[ 8][ 8].im*B[ 8][ 2].re 
	+A[ 8][ 8].re*B[ 8][ 2].im 
	+A[ 8][ 9].im*B[ 9][ 2].re 
	+A[ 8][ 9].re*B[ 9][ 2].im 
	+A[ 8][10].im*B[10][ 2].re 
	+A[ 8][10].re*B[10][ 2].im 
	+A[ 8][11].im*B[11][ 2].re 
	+A[ 8][11].re*B[11][ 2].im;

  C[ 8][ 3].re = 
	-A[ 8][ 0].im*B[ 0][ 3].im 
	+A[ 8][ 0].re*B[ 0][ 3].re 
	-A[ 8][ 1].im*B[ 1][ 3].im 
	+A[ 8][ 1].re*B[ 1][ 3].re 
	-A[ 8][ 2].im*B[ 2][ 3].im 
	+A[ 8][ 2].re*B[ 2][ 3].re 
	-A[ 8][ 3].im*B[ 3][ 3].im 
	+A[ 8][ 3].re*B[ 3][ 3].re 
	-A[ 8][ 4].im*B[ 4][ 3].im 
	+A[ 8][ 4].re*B[ 4][ 3].re 
	-A[ 8][ 5].im*B[ 5][ 3].im 
	+A[ 8][ 5].re*B[ 5][ 3].re 
	-A[ 8][ 6].im*B[ 6][ 3].im 
	+A[ 8][ 6].re*B[ 6][ 3].re 
	-A[ 8][ 7].im*B[ 7][ 3].im 
	+A[ 8][ 7].re*B[ 7][ 3].re 
	-A[ 8][ 8].im*B[ 8][ 3].im 
	+A[ 8][ 8].re*B[ 8][ 3].re 
	-A[ 8][ 9].im*B[ 9][ 3].im 
	+A[ 8][ 9].re*B[ 9][ 3].re 
	-A[ 8][10].im*B[10][ 3].im 
	+A[ 8][10].re*B[10][ 3].re 
	-A[ 8][11].im*B[11][ 3].im 
	+A[ 8][11].re*B[11][ 3].re;

  C[ 8][ 3].im = 
	 A[ 8][ 0].im*B[ 0][ 3].re 
	+A[ 8][ 0].re*B[ 0][ 3].im 
	+A[ 8][ 1].im*B[ 1][ 3].re 
	+A[ 8][ 1].re*B[ 1][ 3].im 
	+A[ 8][ 2].im*B[ 2][ 3].re 
	+A[ 8][ 2].re*B[ 2][ 3].im 
	+A[ 8][ 3].im*B[ 3][ 3].re 
	+A[ 8][ 3].re*B[ 3][ 3].im 
	+A[ 8][ 4].im*B[ 4][ 3].re 
	+A[ 8][ 4].re*B[ 4][ 3].im 
	+A[ 8][ 5].im*B[ 5][ 3].re 
	+A[ 8][ 5].re*B[ 5][ 3].im 
	+A[ 8][ 6].im*B[ 6][ 3].re 
	+A[ 8][ 6].re*B[ 6][ 3].im 
	+A[ 8][ 7].im*B[ 7][ 3].re 
	+A[ 8][ 7].re*B[ 7][ 3].im 
	+A[ 8][ 8].im*B[ 8][ 3].re 
	+A[ 8][ 8].re*B[ 8][ 3].im 
	+A[ 8][ 9].im*B[ 9][ 3].re 
	+A[ 8][ 9].re*B[ 9][ 3].im 
	+A[ 8][10].im*B[10][ 3].re 
	+A[ 8][10].re*B[10][ 3].im 
	+A[ 8][11].im*B[11][ 3].re 
	+A[ 8][11].re*B[11][ 3].im;

  C[ 8][ 4].re = 
	-A[ 8][ 0].im*B[ 0][ 4].im 
	+A[ 8][ 0].re*B[ 0][ 4].re 
	-A[ 8][ 1].im*B[ 1][ 4].im 
	+A[ 8][ 1].re*B[ 1][ 4].re 
	-A[ 8][ 2].im*B[ 2][ 4].im 
	+A[ 8][ 2].re*B[ 2][ 4].re 
	-A[ 8][ 3].im*B[ 3][ 4].im 
	+A[ 8][ 3].re*B[ 3][ 4].re 
	-A[ 8][ 4].im*B[ 4][ 4].im 
	+A[ 8][ 4].re*B[ 4][ 4].re 
	-A[ 8][ 5].im*B[ 5][ 4].im 
	+A[ 8][ 5].re*B[ 5][ 4].re 
	-A[ 8][ 6].im*B[ 6][ 4].im 
	+A[ 8][ 6].re*B[ 6][ 4].re 
	-A[ 8][ 7].im*B[ 7][ 4].im 
	+A[ 8][ 7].re*B[ 7][ 4].re 
	-A[ 8][ 8].im*B[ 8][ 4].im 
	+A[ 8][ 8].re*B[ 8][ 4].re 
	-A[ 8][ 9].im*B[ 9][ 4].im 
	+A[ 8][ 9].re*B[ 9][ 4].re 
	-A[ 8][10].im*B[10][ 4].im 
	+A[ 8][10].re*B[10][ 4].re 
	-A[ 8][11].im*B[11][ 4].im 
	+A[ 8][11].re*B[11][ 4].re;

  C[ 8][ 4].im = 
	 A[ 8][ 0].im*B[ 0][ 4].re 
	+A[ 8][ 0].re*B[ 0][ 4].im 
	+A[ 8][ 1].im*B[ 1][ 4].re 
	+A[ 8][ 1].re*B[ 1][ 4].im 
	+A[ 8][ 2].im*B[ 2][ 4].re 
	+A[ 8][ 2].re*B[ 2][ 4].im 
	+A[ 8][ 3].im*B[ 3][ 4].re 
	+A[ 8][ 3].re*B[ 3][ 4].im 
	+A[ 8][ 4].im*B[ 4][ 4].re 
	+A[ 8][ 4].re*B[ 4][ 4].im 
	+A[ 8][ 5].im*B[ 5][ 4].re 
	+A[ 8][ 5].re*B[ 5][ 4].im 
	+A[ 8][ 6].im*B[ 6][ 4].re 
	+A[ 8][ 6].re*B[ 6][ 4].im 
	+A[ 8][ 7].im*B[ 7][ 4].re 
	+A[ 8][ 7].re*B[ 7][ 4].im 
	+A[ 8][ 8].im*B[ 8][ 4].re 
	+A[ 8][ 8].re*B[ 8][ 4].im 
	+A[ 8][ 9].im*B[ 9][ 4].re 
	+A[ 8][ 9].re*B[ 9][ 4].im 
	+A[ 8][10].im*B[10][ 4].re 
	+A[ 8][10].re*B[10][ 4].im 
	+A[ 8][11].im*B[11][ 4].re 
	+A[ 8][11].re*B[11][ 4].im;

  C[ 8][ 5].re = 
	-A[ 8][ 0].im*B[ 0][ 5].im 
	+A[ 8][ 0].re*B[ 0][ 5].re 
	-A[ 8][ 1].im*B[ 1][ 5].im 
	+A[ 8][ 1].re*B[ 1][ 5].re 
	-A[ 8][ 2].im*B[ 2][ 5].im 
	+A[ 8][ 2].re*B[ 2][ 5].re 
	-A[ 8][ 3].im*B[ 3][ 5].im 
	+A[ 8][ 3].re*B[ 3][ 5].re 
	-A[ 8][ 4].im*B[ 4][ 5].im 
	+A[ 8][ 4].re*B[ 4][ 5].re 
	-A[ 8][ 5].im*B[ 5][ 5].im 
	+A[ 8][ 5].re*B[ 5][ 5].re 
	-A[ 8][ 6].im*B[ 6][ 5].im 
	+A[ 8][ 6].re*B[ 6][ 5].re 
	-A[ 8][ 7].im*B[ 7][ 5].im 
	+A[ 8][ 7].re*B[ 7][ 5].re 
	-A[ 8][ 8].im*B[ 8][ 5].im 
	+A[ 8][ 8].re*B[ 8][ 5].re 
	-A[ 8][ 9].im*B[ 9][ 5].im 
	+A[ 8][ 9].re*B[ 9][ 5].re 
	-A[ 8][10].im*B[10][ 5].im 
	+A[ 8][10].re*B[10][ 5].re 
	-A[ 8][11].im*B[11][ 5].im 
	+A[ 8][11].re*B[11][ 5].re;

  C[ 8][ 5].im = 
	 A[ 8][ 0].im*B[ 0][ 5].re 
	+A[ 8][ 0].re*B[ 0][ 5].im 
	+A[ 8][ 1].im*B[ 1][ 5].re 
	+A[ 8][ 1].re*B[ 1][ 5].im 
	+A[ 8][ 2].im*B[ 2][ 5].re 
	+A[ 8][ 2].re*B[ 2][ 5].im 
	+A[ 8][ 3].im*B[ 3][ 5].re 
	+A[ 8][ 3].re*B[ 3][ 5].im 
	+A[ 8][ 4].im*B[ 4][ 5].re 
	+A[ 8][ 4].re*B[ 4][ 5].im 
	+A[ 8][ 5].im*B[ 5][ 5].re 
	+A[ 8][ 5].re*B[ 5][ 5].im 
	+A[ 8][ 6].im*B[ 6][ 5].re 
	+A[ 8][ 6].re*B[ 6][ 5].im 
	+A[ 8][ 7].im*B[ 7][ 5].re 
	+A[ 8][ 7].re*B[ 7][ 5].im 
	+A[ 8][ 8].im*B[ 8][ 5].re 
	+A[ 8][ 8].re*B[ 8][ 5].im 
	+A[ 8][ 9].im*B[ 9][ 5].re 
	+A[ 8][ 9].re*B[ 9][ 5].im 
	+A[ 8][10].im*B[10][ 5].re 
	+A[ 8][10].re*B[10][ 5].im 
	+A[ 8][11].im*B[11][ 5].re 
	+A[ 8][11].re*B[11][ 5].im;

  C[ 8][ 6].re = 
	-A[ 8][ 0].im*B[ 0][ 6].im 
	+A[ 8][ 0].re*B[ 0][ 6].re 
	-A[ 8][ 1].im*B[ 1][ 6].im 
	+A[ 8][ 1].re*B[ 1][ 6].re 
	-A[ 8][ 2].im*B[ 2][ 6].im 
	+A[ 8][ 2].re*B[ 2][ 6].re 
	-A[ 8][ 3].im*B[ 3][ 6].im 
	+A[ 8][ 3].re*B[ 3][ 6].re 
	-A[ 8][ 4].im*B[ 4][ 6].im 
	+A[ 8][ 4].re*B[ 4][ 6].re 
	-A[ 8][ 5].im*B[ 5][ 6].im 
	+A[ 8][ 5].re*B[ 5][ 6].re 
	-A[ 8][ 6].im*B[ 6][ 6].im 
	+A[ 8][ 6].re*B[ 6][ 6].re 
	-A[ 8][ 7].im*B[ 7][ 6].im 
	+A[ 8][ 7].re*B[ 7][ 6].re 
	-A[ 8][ 8].im*B[ 8][ 6].im 
	+A[ 8][ 8].re*B[ 8][ 6].re 
	-A[ 8][ 9].im*B[ 9][ 6].im 
	+A[ 8][ 9].re*B[ 9][ 6].re 
	-A[ 8][10].im*B[10][ 6].im 
	+A[ 8][10].re*B[10][ 6].re 
	-A[ 8][11].im*B[11][ 6].im 
	+A[ 8][11].re*B[11][ 6].re;

  C[ 8][ 6].im = 
	 A[ 8][ 0].im*B[ 0][ 6].re 
	+A[ 8][ 0].re*B[ 0][ 6].im 
	+A[ 8][ 1].im*B[ 1][ 6].re 
	+A[ 8][ 1].re*B[ 1][ 6].im 
	+A[ 8][ 2].im*B[ 2][ 6].re 
	+A[ 8][ 2].re*B[ 2][ 6].im 
	+A[ 8][ 3].im*B[ 3][ 6].re 
	+A[ 8][ 3].re*B[ 3][ 6].im 
	+A[ 8][ 4].im*B[ 4][ 6].re 
	+A[ 8][ 4].re*B[ 4][ 6].im 
	+A[ 8][ 5].im*B[ 5][ 6].re 
	+A[ 8][ 5].re*B[ 5][ 6].im 
	+A[ 8][ 6].im*B[ 6][ 6].re 
	+A[ 8][ 6].re*B[ 6][ 6].im 
	+A[ 8][ 7].im*B[ 7][ 6].re 
	+A[ 8][ 7].re*B[ 7][ 6].im 
	+A[ 8][ 8].im*B[ 8][ 6].re 
	+A[ 8][ 8].re*B[ 8][ 6].im 
	+A[ 8][ 9].im*B[ 9][ 6].re 
	+A[ 8][ 9].re*B[ 9][ 6].im 
	+A[ 8][10].im*B[10][ 6].re 
	+A[ 8][10].re*B[10][ 6].im 
	+A[ 8][11].im*B[11][ 6].re 
	+A[ 8][11].re*B[11][ 6].im;

  C[ 8][ 7].re = 
	-A[ 8][ 0].im*B[ 0][ 7].im 
	+A[ 8][ 0].re*B[ 0][ 7].re 
	-A[ 8][ 1].im*B[ 1][ 7].im 
	+A[ 8][ 1].re*B[ 1][ 7].re 
	-A[ 8][ 2].im*B[ 2][ 7].im 
	+A[ 8][ 2].re*B[ 2][ 7].re 
	-A[ 8][ 3].im*B[ 3][ 7].im 
	+A[ 8][ 3].re*B[ 3][ 7].re 
	-A[ 8][ 4].im*B[ 4][ 7].im 
	+A[ 8][ 4].re*B[ 4][ 7].re 
	-A[ 8][ 5].im*B[ 5][ 7].im 
	+A[ 8][ 5].re*B[ 5][ 7].re 
	-A[ 8][ 6].im*B[ 6][ 7].im 
	+A[ 8][ 6].re*B[ 6][ 7].re 
	-A[ 8][ 7].im*B[ 7][ 7].im 
	+A[ 8][ 7].re*B[ 7][ 7].re 
	-A[ 8][ 8].im*B[ 8][ 7].im 
	+A[ 8][ 8].re*B[ 8][ 7].re 
	-A[ 8][ 9].im*B[ 9][ 7].im 
	+A[ 8][ 9].re*B[ 9][ 7].re 
	-A[ 8][10].im*B[10][ 7].im 
	+A[ 8][10].re*B[10][ 7].re 
	-A[ 8][11].im*B[11][ 7].im 
	+A[ 8][11].re*B[11][ 7].re;

  C[ 8][ 7].im = 
	 A[ 8][ 0].im*B[ 0][ 7].re 
	+A[ 8][ 0].re*B[ 0][ 7].im 
	+A[ 8][ 1].im*B[ 1][ 7].re 
	+A[ 8][ 1].re*B[ 1][ 7].im 
	+A[ 8][ 2].im*B[ 2][ 7].re 
	+A[ 8][ 2].re*B[ 2][ 7].im 
	+A[ 8][ 3].im*B[ 3][ 7].re 
	+A[ 8][ 3].re*B[ 3][ 7].im 
	+A[ 8][ 4].im*B[ 4][ 7].re 
	+A[ 8][ 4].re*B[ 4][ 7].im 
	+A[ 8][ 5].im*B[ 5][ 7].re 
	+A[ 8][ 5].re*B[ 5][ 7].im 
	+A[ 8][ 6].im*B[ 6][ 7].re 
	+A[ 8][ 6].re*B[ 6][ 7].im 
	+A[ 8][ 7].im*B[ 7][ 7].re 
	+A[ 8][ 7].re*B[ 7][ 7].im 
	+A[ 8][ 8].im*B[ 8][ 7].re 
	+A[ 8][ 8].re*B[ 8][ 7].im 
	+A[ 8][ 9].im*B[ 9][ 7].re 
	+A[ 8][ 9].re*B[ 9][ 7].im 
	+A[ 8][10].im*B[10][ 7].re 
	+A[ 8][10].re*B[10][ 7].im 
	+A[ 8][11].im*B[11][ 7].re 
	+A[ 8][11].re*B[11][ 7].im;

  C[ 8][ 8].re = 
	-A[ 8][ 0].im*B[ 0][ 8].im 
	+A[ 8][ 0].re*B[ 0][ 8].re 
	-A[ 8][ 1].im*B[ 1][ 8].im 
	+A[ 8][ 1].re*B[ 1][ 8].re 
	-A[ 8][ 2].im*B[ 2][ 8].im 
	+A[ 8][ 2].re*B[ 2][ 8].re 
	-A[ 8][ 3].im*B[ 3][ 8].im 
	+A[ 8][ 3].re*B[ 3][ 8].re 
	-A[ 8][ 4].im*B[ 4][ 8].im 
	+A[ 8][ 4].re*B[ 4][ 8].re 
	-A[ 8][ 5].im*B[ 5][ 8].im 
	+A[ 8][ 5].re*B[ 5][ 8].re 
	-A[ 8][ 6].im*B[ 6][ 8].im 
	+A[ 8][ 6].re*B[ 6][ 8].re 
	-A[ 8][ 7].im*B[ 7][ 8].im 
	+A[ 8][ 7].re*B[ 7][ 8].re 
	-A[ 8][ 8].im*B[ 8][ 8].im 
	+A[ 8][ 8].re*B[ 8][ 8].re 
	-A[ 8][ 9].im*B[ 9][ 8].im 
	+A[ 8][ 9].re*B[ 9][ 8].re 
	-A[ 8][10].im*B[10][ 8].im 
	+A[ 8][10].re*B[10][ 8].re 
	-A[ 8][11].im*B[11][ 8].im 
	+A[ 8][11].re*B[11][ 8].re;

  C[ 8][ 8].im = 
	 A[ 8][ 0].im*B[ 0][ 8].re 
	+A[ 8][ 0].re*B[ 0][ 8].im 
	+A[ 8][ 1].im*B[ 1][ 8].re 
	+A[ 8][ 1].re*B[ 1][ 8].im 
	+A[ 8][ 2].im*B[ 2][ 8].re 
	+A[ 8][ 2].re*B[ 2][ 8].im 
	+A[ 8][ 3].im*B[ 3][ 8].re 
	+A[ 8][ 3].re*B[ 3][ 8].im 
	+A[ 8][ 4].im*B[ 4][ 8].re 
	+A[ 8][ 4].re*B[ 4][ 8].im 
	+A[ 8][ 5].im*B[ 5][ 8].re 
	+A[ 8][ 5].re*B[ 5][ 8].im 
	+A[ 8][ 6].im*B[ 6][ 8].re 
	+A[ 8][ 6].re*B[ 6][ 8].im 
	+A[ 8][ 7].im*B[ 7][ 8].re 
	+A[ 8][ 7].re*B[ 7][ 8].im 
	+A[ 8][ 8].im*B[ 8][ 8].re 
	+A[ 8][ 8].re*B[ 8][ 8].im 
	+A[ 8][ 9].im*B[ 9][ 8].re 
	+A[ 8][ 9].re*B[ 9][ 8].im 
	+A[ 8][10].im*B[10][ 8].re 
	+A[ 8][10].re*B[10][ 8].im 
	+A[ 8][11].im*B[11][ 8].re 
	+A[ 8][11].re*B[11][ 8].im;

  C[ 8][ 9].re = 
	-A[ 8][ 0].im*B[ 0][ 9].im 
	+A[ 8][ 0].re*B[ 0][ 9].re 
	-A[ 8][ 1].im*B[ 1][ 9].im 
	+A[ 8][ 1].re*B[ 1][ 9].re 
	-A[ 8][ 2].im*B[ 2][ 9].im 
	+A[ 8][ 2].re*B[ 2][ 9].re 
	-A[ 8][ 3].im*B[ 3][ 9].im 
	+A[ 8][ 3].re*B[ 3][ 9].re 
	-A[ 8][ 4].im*B[ 4][ 9].im 
	+A[ 8][ 4].re*B[ 4][ 9].re 
	-A[ 8][ 5].im*B[ 5][ 9].im 
	+A[ 8][ 5].re*B[ 5][ 9].re 
	-A[ 8][ 6].im*B[ 6][ 9].im 
	+A[ 8][ 6].re*B[ 6][ 9].re 
	-A[ 8][ 7].im*B[ 7][ 9].im 
	+A[ 8][ 7].re*B[ 7][ 9].re 
	-A[ 8][ 8].im*B[ 8][ 9].im 
	+A[ 8][ 8].re*B[ 8][ 9].re 
	-A[ 8][ 9].im*B[ 9][ 9].im 
	+A[ 8][ 9].re*B[ 9][ 9].re 
	-A[ 8][10].im*B[10][ 9].im 
	+A[ 8][10].re*B[10][ 9].re 
	-A[ 8][11].im*B[11][ 9].im 
	+A[ 8][11].re*B[11][ 9].re;

  C[ 8][ 9].im = 
	 A[ 8][ 0].im*B[ 0][ 9].re 
	+A[ 8][ 0].re*B[ 0][ 9].im 
	+A[ 8][ 1].im*B[ 1][ 9].re 
	+A[ 8][ 1].re*B[ 1][ 9].im 
	+A[ 8][ 2].im*B[ 2][ 9].re 
	+A[ 8][ 2].re*B[ 2][ 9].im 
	+A[ 8][ 3].im*B[ 3][ 9].re 
	+A[ 8][ 3].re*B[ 3][ 9].im 
	+A[ 8][ 4].im*B[ 4][ 9].re 
	+A[ 8][ 4].re*B[ 4][ 9].im 
	+A[ 8][ 5].im*B[ 5][ 9].re 
	+A[ 8][ 5].re*B[ 5][ 9].im 
	+A[ 8][ 6].im*B[ 6][ 9].re 
	+A[ 8][ 6].re*B[ 6][ 9].im 
	+A[ 8][ 7].im*B[ 7][ 9].re 
	+A[ 8][ 7].re*B[ 7][ 9].im 
	+A[ 8][ 8].im*B[ 8][ 9].re 
	+A[ 8][ 8].re*B[ 8][ 9].im 
	+A[ 8][ 9].im*B[ 9][ 9].re 
	+A[ 8][ 9].re*B[ 9][ 9].im 
	+A[ 8][10].im*B[10][ 9].re 
	+A[ 8][10].re*B[10][ 9].im 
	+A[ 8][11].im*B[11][ 9].re 
	+A[ 8][11].re*B[11][ 9].im;

  C[ 8][10].re = 
	-A[ 8][ 0].im*B[ 0][10].im 
	+A[ 8][ 0].re*B[ 0][10].re 
	-A[ 8][ 1].im*B[ 1][10].im 
	+A[ 8][ 1].re*B[ 1][10].re 
	-A[ 8][ 2].im*B[ 2][10].im 
	+A[ 8][ 2].re*B[ 2][10].re 
	-A[ 8][ 3].im*B[ 3][10].im 
	+A[ 8][ 3].re*B[ 3][10].re 
	-A[ 8][ 4].im*B[ 4][10].im 
	+A[ 8][ 4].re*B[ 4][10].re 
	-A[ 8][ 5].im*B[ 5][10].im 
	+A[ 8][ 5].re*B[ 5][10].re 
	-A[ 8][ 6].im*B[ 6][10].im 
	+A[ 8][ 6].re*B[ 6][10].re 
	-A[ 8][ 7].im*B[ 7][10].im 
	+A[ 8][ 7].re*B[ 7][10].re 
	-A[ 8][ 8].im*B[ 8][10].im 
	+A[ 8][ 8].re*B[ 8][10].re 
	-A[ 8][ 9].im*B[ 9][10].im 
	+A[ 8][ 9].re*B[ 9][10].re 
	-A[ 8][10].im*B[10][10].im 
	+A[ 8][10].re*B[10][10].re 
	-A[ 8][11].im*B[11][10].im 
	+A[ 8][11].re*B[11][10].re;

  C[ 8][10].im = 
	 A[ 8][ 0].im*B[ 0][10].re 
	+A[ 8][ 0].re*B[ 0][10].im 
	+A[ 8][ 1].im*B[ 1][10].re 
	+A[ 8][ 1].re*B[ 1][10].im 
	+A[ 8][ 2].im*B[ 2][10].re 
	+A[ 8][ 2].re*B[ 2][10].im 
	+A[ 8][ 3].im*B[ 3][10].re 
	+A[ 8][ 3].re*B[ 3][10].im 
	+A[ 8][ 4].im*B[ 4][10].re 
	+A[ 8][ 4].re*B[ 4][10].im 
	+A[ 8][ 5].im*B[ 5][10].re 
	+A[ 8][ 5].re*B[ 5][10].im 
	+A[ 8][ 6].im*B[ 6][10].re 
	+A[ 8][ 6].re*B[ 6][10].im 
	+A[ 8][ 7].im*B[ 7][10].re 
	+A[ 8][ 7].re*B[ 7][10].im 
	+A[ 8][ 8].im*B[ 8][10].re 
	+A[ 8][ 8].re*B[ 8][10].im 
	+A[ 8][ 9].im*B[ 9][10].re 
	+A[ 8][ 9].re*B[ 9][10].im 
	+A[ 8][10].im*B[10][10].re 
	+A[ 8][10].re*B[10][10].im 
	+A[ 8][11].im*B[11][10].re 
	+A[ 8][11].re*B[11][10].im;

  C[ 8][11].re = 
	-A[ 8][ 0].im*B[ 0][11].im 
	+A[ 8][ 0].re*B[ 0][11].re 
	-A[ 8][ 1].im*B[ 1][11].im 
	+A[ 8][ 1].re*B[ 1][11].re 
	-A[ 8][ 2].im*B[ 2][11].im 
	+A[ 8][ 2].re*B[ 2][11].re 
	-A[ 8][ 3].im*B[ 3][11].im 
	+A[ 8][ 3].re*B[ 3][11].re 
	-A[ 8][ 4].im*B[ 4][11].im 
	+A[ 8][ 4].re*B[ 4][11].re 
	-A[ 8][ 5].im*B[ 5][11].im 
	+A[ 8][ 5].re*B[ 5][11].re 
	-A[ 8][ 6].im*B[ 6][11].im 
	+A[ 8][ 6].re*B[ 6][11].re 
	-A[ 8][ 7].im*B[ 7][11].im 
	+A[ 8][ 7].re*B[ 7][11].re 
	-A[ 8][ 8].im*B[ 8][11].im 
	+A[ 8][ 8].re*B[ 8][11].re 
	-A[ 8][ 9].im*B[ 9][11].im 
	+A[ 8][ 9].re*B[ 9][11].re 
	-A[ 8][10].im*B[10][11].im 
	+A[ 8][10].re*B[10][11].re 
	-A[ 8][11].im*B[11][11].im 
	+A[ 8][11].re*B[11][11].re;

  C[ 8][11].im = 
	 A[ 8][ 0].im*B[ 0][11].re 
	+A[ 8][ 0].re*B[ 0][11].im 
	+A[ 8][ 1].im*B[ 1][11].re 
	+A[ 8][ 1].re*B[ 1][11].im 
	+A[ 8][ 2].im*B[ 2][11].re 
	+A[ 8][ 2].re*B[ 2][11].im 
	+A[ 8][ 3].im*B[ 3][11].re 
	+A[ 8][ 3].re*B[ 3][11].im 
	+A[ 8][ 4].im*B[ 4][11].re 
	+A[ 8][ 4].re*B[ 4][11].im 
	+A[ 8][ 5].im*B[ 5][11].re 
	+A[ 8][ 5].re*B[ 5][11].im 
	+A[ 8][ 6].im*B[ 6][11].re 
	+A[ 8][ 6].re*B[ 6][11].im 
	+A[ 8][ 7].im*B[ 7][11].re 
	+A[ 8][ 7].re*B[ 7][11].im 
	+A[ 8][ 8].im*B[ 8][11].re 
	+A[ 8][ 8].re*B[ 8][11].im 
	+A[ 8][ 9].im*B[ 9][11].re 
	+A[ 8][ 9].re*B[ 9][11].im 
	+A[ 8][10].im*B[10][11].re 
	+A[ 8][10].re*B[10][11].im 
	+A[ 8][11].im*B[11][11].re 
	+A[ 8][11].re*B[11][11].im;

  C[ 9][ 0].re = 
	-A[ 9][ 0].im*B[ 0][ 0].im 
	+A[ 9][ 0].re*B[ 0][ 0].re 
	-A[ 9][ 1].im*B[ 1][ 0].im 
	+A[ 9][ 1].re*B[ 1][ 0].re 
	-A[ 9][ 2].im*B[ 2][ 0].im 
	+A[ 9][ 2].re*B[ 2][ 0].re 
	-A[ 9][ 3].im*B[ 3][ 0].im 
	+A[ 9][ 3].re*B[ 3][ 0].re 
	-A[ 9][ 4].im*B[ 4][ 0].im 
	+A[ 9][ 4].re*B[ 4][ 0].re 
	-A[ 9][ 5].im*B[ 5][ 0].im 
	+A[ 9][ 5].re*B[ 5][ 0].re 
	-A[ 9][ 6].im*B[ 6][ 0].im 
	+A[ 9][ 6].re*B[ 6][ 0].re 
	-A[ 9][ 7].im*B[ 7][ 0].im 
	+A[ 9][ 7].re*B[ 7][ 0].re 
	-A[ 9][ 8].im*B[ 8][ 0].im 
	+A[ 9][ 8].re*B[ 8][ 0].re 
	-A[ 9][ 9].im*B[ 9][ 0].im 
	+A[ 9][ 9].re*B[ 9][ 0].re 
	-A[ 9][10].im*B[10][ 0].im 
	+A[ 9][10].re*B[10][ 0].re 
	-A[ 9][11].im*B[11][ 0].im 
	+A[ 9][11].re*B[11][ 0].re;

  C[ 9][ 0].im = 
	 A[ 9][ 0].im*B[ 0][ 0].re 
	+A[ 9][ 0].re*B[ 0][ 0].im 
	+A[ 9][ 1].im*B[ 1][ 0].re 
	+A[ 9][ 1].re*B[ 1][ 0].im 
	+A[ 9][ 2].im*B[ 2][ 0].re 
	+A[ 9][ 2].re*B[ 2][ 0].im 
	+A[ 9][ 3].im*B[ 3][ 0].re 
	+A[ 9][ 3].re*B[ 3][ 0].im 
	+A[ 9][ 4].im*B[ 4][ 0].re 
	+A[ 9][ 4].re*B[ 4][ 0].im 
	+A[ 9][ 5].im*B[ 5][ 0].re 
	+A[ 9][ 5].re*B[ 5][ 0].im 
	+A[ 9][ 6].im*B[ 6][ 0].re 
	+A[ 9][ 6].re*B[ 6][ 0].im 
	+A[ 9][ 7].im*B[ 7][ 0].re 
	+A[ 9][ 7].re*B[ 7][ 0].im 
	+A[ 9][ 8].im*B[ 8][ 0].re 
	+A[ 9][ 8].re*B[ 8][ 0].im 
	+A[ 9][ 9].im*B[ 9][ 0].re 
	+A[ 9][ 9].re*B[ 9][ 0].im 
	+A[ 9][10].im*B[10][ 0].re 
	+A[ 9][10].re*B[10][ 0].im 
	+A[ 9][11].im*B[11][ 0].re 
	+A[ 9][11].re*B[11][ 0].im;

  C[ 9][ 1].re = 
	-A[ 9][ 0].im*B[ 0][ 1].im 
	+A[ 9][ 0].re*B[ 0][ 1].re 
	-A[ 9][ 1].im*B[ 1][ 1].im 
	+A[ 9][ 1].re*B[ 1][ 1].re 
	-A[ 9][ 2].im*B[ 2][ 1].im 
	+A[ 9][ 2].re*B[ 2][ 1].re 
	-A[ 9][ 3].im*B[ 3][ 1].im 
	+A[ 9][ 3].re*B[ 3][ 1].re 
	-A[ 9][ 4].im*B[ 4][ 1].im 
	+A[ 9][ 4].re*B[ 4][ 1].re 
	-A[ 9][ 5].im*B[ 5][ 1].im 
	+A[ 9][ 5].re*B[ 5][ 1].re 
	-A[ 9][ 6].im*B[ 6][ 1].im 
	+A[ 9][ 6].re*B[ 6][ 1].re 
	-A[ 9][ 7].im*B[ 7][ 1].im 
	+A[ 9][ 7].re*B[ 7][ 1].re 
	-A[ 9][ 8].im*B[ 8][ 1].im 
	+A[ 9][ 8].re*B[ 8][ 1].re 
	-A[ 9][ 9].im*B[ 9][ 1].im 
	+A[ 9][ 9].re*B[ 9][ 1].re 
	-A[ 9][10].im*B[10][ 1].im 
	+A[ 9][10].re*B[10][ 1].re 
	-A[ 9][11].im*B[11][ 1].im 
	+A[ 9][11].re*B[11][ 1].re;

  C[ 9][ 1].im = 
	 A[ 9][ 0].im*B[ 0][ 1].re 
	+A[ 9][ 0].re*B[ 0][ 1].im 
	+A[ 9][ 1].im*B[ 1][ 1].re 
	+A[ 9][ 1].re*B[ 1][ 1].im 
	+A[ 9][ 2].im*B[ 2][ 1].re 
	+A[ 9][ 2].re*B[ 2][ 1].im 
	+A[ 9][ 3].im*B[ 3][ 1].re 
	+A[ 9][ 3].re*B[ 3][ 1].im 
	+A[ 9][ 4].im*B[ 4][ 1].re 
	+A[ 9][ 4].re*B[ 4][ 1].im 
	+A[ 9][ 5].im*B[ 5][ 1].re 
	+A[ 9][ 5].re*B[ 5][ 1].im 
	+A[ 9][ 6].im*B[ 6][ 1].re 
	+A[ 9][ 6].re*B[ 6][ 1].im 
	+A[ 9][ 7].im*B[ 7][ 1].re 
	+A[ 9][ 7].re*B[ 7][ 1].im 
	+A[ 9][ 8].im*B[ 8][ 1].re 
	+A[ 9][ 8].re*B[ 8][ 1].im 
	+A[ 9][ 9].im*B[ 9][ 1].re 
	+A[ 9][ 9].re*B[ 9][ 1].im 
	+A[ 9][10].im*B[10][ 1].re 
	+A[ 9][10].re*B[10][ 1].im 
	+A[ 9][11].im*B[11][ 1].re 
	+A[ 9][11].re*B[11][ 1].im;

  C[ 9][ 2].re = 
	-A[ 9][ 0].im*B[ 0][ 2].im 
	+A[ 9][ 0].re*B[ 0][ 2].re 
	-A[ 9][ 1].im*B[ 1][ 2].im 
	+A[ 9][ 1].re*B[ 1][ 2].re 
	-A[ 9][ 2].im*B[ 2][ 2].im 
	+A[ 9][ 2].re*B[ 2][ 2].re 
	-A[ 9][ 3].im*B[ 3][ 2].im 
	+A[ 9][ 3].re*B[ 3][ 2].re 
	-A[ 9][ 4].im*B[ 4][ 2].im 
	+A[ 9][ 4].re*B[ 4][ 2].re 
	-A[ 9][ 5].im*B[ 5][ 2].im 
	+A[ 9][ 5].re*B[ 5][ 2].re 
	-A[ 9][ 6].im*B[ 6][ 2].im 
	+A[ 9][ 6].re*B[ 6][ 2].re 
	-A[ 9][ 7].im*B[ 7][ 2].im 
	+A[ 9][ 7].re*B[ 7][ 2].re 
	-A[ 9][ 8].im*B[ 8][ 2].im 
	+A[ 9][ 8].re*B[ 8][ 2].re 
	-A[ 9][ 9].im*B[ 9][ 2].im 
	+A[ 9][ 9].re*B[ 9][ 2].re 
	-A[ 9][10].im*B[10][ 2].im 
	+A[ 9][10].re*B[10][ 2].re 
	-A[ 9][11].im*B[11][ 2].im 
	+A[ 9][11].re*B[11][ 2].re;

  C[ 9][ 2].im = 
	 A[ 9][ 0].im*B[ 0][ 2].re 
	+A[ 9][ 0].re*B[ 0][ 2].im 
	+A[ 9][ 1].im*B[ 1][ 2].re 
	+A[ 9][ 1].re*B[ 1][ 2].im 
	+A[ 9][ 2].im*B[ 2][ 2].re 
	+A[ 9][ 2].re*B[ 2][ 2].im 
	+A[ 9][ 3].im*B[ 3][ 2].re 
	+A[ 9][ 3].re*B[ 3][ 2].im 
	+A[ 9][ 4].im*B[ 4][ 2].re 
	+A[ 9][ 4].re*B[ 4][ 2].im 
	+A[ 9][ 5].im*B[ 5][ 2].re 
	+A[ 9][ 5].re*B[ 5][ 2].im 
	+A[ 9][ 6].im*B[ 6][ 2].re 
	+A[ 9][ 6].re*B[ 6][ 2].im 
	+A[ 9][ 7].im*B[ 7][ 2].re 
	+A[ 9][ 7].re*B[ 7][ 2].im 
	+A[ 9][ 8].im*B[ 8][ 2].re 
	+A[ 9][ 8].re*B[ 8][ 2].im 
	+A[ 9][ 9].im*B[ 9][ 2].re 
	+A[ 9][ 9].re*B[ 9][ 2].im 
	+A[ 9][10].im*B[10][ 2].re 
	+A[ 9][10].re*B[10][ 2].im 
	+A[ 9][11].im*B[11][ 2].re 
	+A[ 9][11].re*B[11][ 2].im;

  C[ 9][ 3].re = 
	-A[ 9][ 0].im*B[ 0][ 3].im 
	+A[ 9][ 0].re*B[ 0][ 3].re 
	-A[ 9][ 1].im*B[ 1][ 3].im 
	+A[ 9][ 1].re*B[ 1][ 3].re 
	-A[ 9][ 2].im*B[ 2][ 3].im 
	+A[ 9][ 2].re*B[ 2][ 3].re 
	-A[ 9][ 3].im*B[ 3][ 3].im 
	+A[ 9][ 3].re*B[ 3][ 3].re 
	-A[ 9][ 4].im*B[ 4][ 3].im 
	+A[ 9][ 4].re*B[ 4][ 3].re 
	-A[ 9][ 5].im*B[ 5][ 3].im 
	+A[ 9][ 5].re*B[ 5][ 3].re 
	-A[ 9][ 6].im*B[ 6][ 3].im 
	+A[ 9][ 6].re*B[ 6][ 3].re 
	-A[ 9][ 7].im*B[ 7][ 3].im 
	+A[ 9][ 7].re*B[ 7][ 3].re 
	-A[ 9][ 8].im*B[ 8][ 3].im 
	+A[ 9][ 8].re*B[ 8][ 3].re 
	-A[ 9][ 9].im*B[ 9][ 3].im 
	+A[ 9][ 9].re*B[ 9][ 3].re 
	-A[ 9][10].im*B[10][ 3].im 
	+A[ 9][10].re*B[10][ 3].re 
	-A[ 9][11].im*B[11][ 3].im 
	+A[ 9][11].re*B[11][ 3].re;

  C[ 9][ 3].im = 
	 A[ 9][ 0].im*B[ 0][ 3].re 
	+A[ 9][ 0].re*B[ 0][ 3].im 
	+A[ 9][ 1].im*B[ 1][ 3].re 
	+A[ 9][ 1].re*B[ 1][ 3].im 
	+A[ 9][ 2].im*B[ 2][ 3].re 
	+A[ 9][ 2].re*B[ 2][ 3].im 
	+A[ 9][ 3].im*B[ 3][ 3].re 
	+A[ 9][ 3].re*B[ 3][ 3].im 
	+A[ 9][ 4].im*B[ 4][ 3].re 
	+A[ 9][ 4].re*B[ 4][ 3].im 
	+A[ 9][ 5].im*B[ 5][ 3].re 
	+A[ 9][ 5].re*B[ 5][ 3].im 
	+A[ 9][ 6].im*B[ 6][ 3].re 
	+A[ 9][ 6].re*B[ 6][ 3].im 
	+A[ 9][ 7].im*B[ 7][ 3].re 
	+A[ 9][ 7].re*B[ 7][ 3].im 
	+A[ 9][ 8].im*B[ 8][ 3].re 
	+A[ 9][ 8].re*B[ 8][ 3].im 
	+A[ 9][ 9].im*B[ 9][ 3].re 
	+A[ 9][ 9].re*B[ 9][ 3].im 
	+A[ 9][10].im*B[10][ 3].re 
	+A[ 9][10].re*B[10][ 3].im 
	+A[ 9][11].im*B[11][ 3].re 
	+A[ 9][11].re*B[11][ 3].im;

  C[ 9][ 4].re = 
	-A[ 9][ 0].im*B[ 0][ 4].im 
	+A[ 9][ 0].re*B[ 0][ 4].re 
	-A[ 9][ 1].im*B[ 1][ 4].im 
	+A[ 9][ 1].re*B[ 1][ 4].re 
	-A[ 9][ 2].im*B[ 2][ 4].im 
	+A[ 9][ 2].re*B[ 2][ 4].re 
	-A[ 9][ 3].im*B[ 3][ 4].im 
	+A[ 9][ 3].re*B[ 3][ 4].re 
	-A[ 9][ 4].im*B[ 4][ 4].im 
	+A[ 9][ 4].re*B[ 4][ 4].re 
	-A[ 9][ 5].im*B[ 5][ 4].im 
	+A[ 9][ 5].re*B[ 5][ 4].re 
	-A[ 9][ 6].im*B[ 6][ 4].im 
	+A[ 9][ 6].re*B[ 6][ 4].re 
	-A[ 9][ 7].im*B[ 7][ 4].im 
	+A[ 9][ 7].re*B[ 7][ 4].re 
	-A[ 9][ 8].im*B[ 8][ 4].im 
	+A[ 9][ 8].re*B[ 8][ 4].re 
	-A[ 9][ 9].im*B[ 9][ 4].im 
	+A[ 9][ 9].re*B[ 9][ 4].re 
	-A[ 9][10].im*B[10][ 4].im 
	+A[ 9][10].re*B[10][ 4].re 
	-A[ 9][11].im*B[11][ 4].im 
	+A[ 9][11].re*B[11][ 4].re;

  C[ 9][ 4].im = 
	 A[ 9][ 0].im*B[ 0][ 4].re 
	+A[ 9][ 0].re*B[ 0][ 4].im 
	+A[ 9][ 1].im*B[ 1][ 4].re 
	+A[ 9][ 1].re*B[ 1][ 4].im 
	+A[ 9][ 2].im*B[ 2][ 4].re 
	+A[ 9][ 2].re*B[ 2][ 4].im 
	+A[ 9][ 3].im*B[ 3][ 4].re 
	+A[ 9][ 3].re*B[ 3][ 4].im 
	+A[ 9][ 4].im*B[ 4][ 4].re 
	+A[ 9][ 4].re*B[ 4][ 4].im 
	+A[ 9][ 5].im*B[ 5][ 4].re 
	+A[ 9][ 5].re*B[ 5][ 4].im 
	+A[ 9][ 6].im*B[ 6][ 4].re 
	+A[ 9][ 6].re*B[ 6][ 4].im 
	+A[ 9][ 7].im*B[ 7][ 4].re 
	+A[ 9][ 7].re*B[ 7][ 4].im 
	+A[ 9][ 8].im*B[ 8][ 4].re 
	+A[ 9][ 8].re*B[ 8][ 4].im 
	+A[ 9][ 9].im*B[ 9][ 4].re 
	+A[ 9][ 9].re*B[ 9][ 4].im 
	+A[ 9][10].im*B[10][ 4].re 
	+A[ 9][10].re*B[10][ 4].im 
	+A[ 9][11].im*B[11][ 4].re 
	+A[ 9][11].re*B[11][ 4].im;

  C[ 9][ 5].re = 
	-A[ 9][ 0].im*B[ 0][ 5].im 
	+A[ 9][ 0].re*B[ 0][ 5].re 
	-A[ 9][ 1].im*B[ 1][ 5].im 
	+A[ 9][ 1].re*B[ 1][ 5].re 
	-A[ 9][ 2].im*B[ 2][ 5].im 
	+A[ 9][ 2].re*B[ 2][ 5].re 
	-A[ 9][ 3].im*B[ 3][ 5].im 
	+A[ 9][ 3].re*B[ 3][ 5].re 
	-A[ 9][ 4].im*B[ 4][ 5].im 
	+A[ 9][ 4].re*B[ 4][ 5].re 
	-A[ 9][ 5].im*B[ 5][ 5].im 
	+A[ 9][ 5].re*B[ 5][ 5].re 
	-A[ 9][ 6].im*B[ 6][ 5].im 
	+A[ 9][ 6].re*B[ 6][ 5].re 
	-A[ 9][ 7].im*B[ 7][ 5].im 
	+A[ 9][ 7].re*B[ 7][ 5].re 
	-A[ 9][ 8].im*B[ 8][ 5].im 
	+A[ 9][ 8].re*B[ 8][ 5].re 
	-A[ 9][ 9].im*B[ 9][ 5].im 
	+A[ 9][ 9].re*B[ 9][ 5].re 
	-A[ 9][10].im*B[10][ 5].im 
	+A[ 9][10].re*B[10][ 5].re 
	-A[ 9][11].im*B[11][ 5].im 
	+A[ 9][11].re*B[11][ 5].re;

  C[ 9][ 5].im = 
	 A[ 9][ 0].im*B[ 0][ 5].re 
	+A[ 9][ 0].re*B[ 0][ 5].im 
	+A[ 9][ 1].im*B[ 1][ 5].re 
	+A[ 9][ 1].re*B[ 1][ 5].im 
	+A[ 9][ 2].im*B[ 2][ 5].re 
	+A[ 9][ 2].re*B[ 2][ 5].im 
	+A[ 9][ 3].im*B[ 3][ 5].re 
	+A[ 9][ 3].re*B[ 3][ 5].im 
	+A[ 9][ 4].im*B[ 4][ 5].re 
	+A[ 9][ 4].re*B[ 4][ 5].im 
	+A[ 9][ 5].im*B[ 5][ 5].re 
	+A[ 9][ 5].re*B[ 5][ 5].im 
	+A[ 9][ 6].im*B[ 6][ 5].re 
	+A[ 9][ 6].re*B[ 6][ 5].im 
	+A[ 9][ 7].im*B[ 7][ 5].re 
	+A[ 9][ 7].re*B[ 7][ 5].im 
	+A[ 9][ 8].im*B[ 8][ 5].re 
	+A[ 9][ 8].re*B[ 8][ 5].im 
	+A[ 9][ 9].im*B[ 9][ 5].re 
	+A[ 9][ 9].re*B[ 9][ 5].im 
	+A[ 9][10].im*B[10][ 5].re 
	+A[ 9][10].re*B[10][ 5].im 
	+A[ 9][11].im*B[11][ 5].re 
	+A[ 9][11].re*B[11][ 5].im;

  C[ 9][ 6].re = 
	-A[ 9][ 0].im*B[ 0][ 6].im 
	+A[ 9][ 0].re*B[ 0][ 6].re 
	-A[ 9][ 1].im*B[ 1][ 6].im 
	+A[ 9][ 1].re*B[ 1][ 6].re 
	-A[ 9][ 2].im*B[ 2][ 6].im 
	+A[ 9][ 2].re*B[ 2][ 6].re 
	-A[ 9][ 3].im*B[ 3][ 6].im 
	+A[ 9][ 3].re*B[ 3][ 6].re 
	-A[ 9][ 4].im*B[ 4][ 6].im 
	+A[ 9][ 4].re*B[ 4][ 6].re 
	-A[ 9][ 5].im*B[ 5][ 6].im 
	+A[ 9][ 5].re*B[ 5][ 6].re 
	-A[ 9][ 6].im*B[ 6][ 6].im 
	+A[ 9][ 6].re*B[ 6][ 6].re 
	-A[ 9][ 7].im*B[ 7][ 6].im 
	+A[ 9][ 7].re*B[ 7][ 6].re 
	-A[ 9][ 8].im*B[ 8][ 6].im 
	+A[ 9][ 8].re*B[ 8][ 6].re 
	-A[ 9][ 9].im*B[ 9][ 6].im 
	+A[ 9][ 9].re*B[ 9][ 6].re 
	-A[ 9][10].im*B[10][ 6].im 
	+A[ 9][10].re*B[10][ 6].re 
	-A[ 9][11].im*B[11][ 6].im 
	+A[ 9][11].re*B[11][ 6].re;

  C[ 9][ 6].im = 
	 A[ 9][ 0].im*B[ 0][ 6].re 
	+A[ 9][ 0].re*B[ 0][ 6].im 
	+A[ 9][ 1].im*B[ 1][ 6].re 
	+A[ 9][ 1].re*B[ 1][ 6].im 
	+A[ 9][ 2].im*B[ 2][ 6].re 
	+A[ 9][ 2].re*B[ 2][ 6].im 
	+A[ 9][ 3].im*B[ 3][ 6].re 
	+A[ 9][ 3].re*B[ 3][ 6].im 
	+A[ 9][ 4].im*B[ 4][ 6].re 
	+A[ 9][ 4].re*B[ 4][ 6].im 
	+A[ 9][ 5].im*B[ 5][ 6].re 
	+A[ 9][ 5].re*B[ 5][ 6].im 
	+A[ 9][ 6].im*B[ 6][ 6].re 
	+A[ 9][ 6].re*B[ 6][ 6].im 
	+A[ 9][ 7].im*B[ 7][ 6].re 
	+A[ 9][ 7].re*B[ 7][ 6].im 
	+A[ 9][ 8].im*B[ 8][ 6].re 
	+A[ 9][ 8].re*B[ 8][ 6].im 
	+A[ 9][ 9].im*B[ 9][ 6].re 
	+A[ 9][ 9].re*B[ 9][ 6].im 
	+A[ 9][10].im*B[10][ 6].re 
	+A[ 9][10].re*B[10][ 6].im 
	+A[ 9][11].im*B[11][ 6].re 
	+A[ 9][11].re*B[11][ 6].im;

  C[ 9][ 7].re = 
	-A[ 9][ 0].im*B[ 0][ 7].im 
	+A[ 9][ 0].re*B[ 0][ 7].re 
	-A[ 9][ 1].im*B[ 1][ 7].im 
	+A[ 9][ 1].re*B[ 1][ 7].re 
	-A[ 9][ 2].im*B[ 2][ 7].im 
	+A[ 9][ 2].re*B[ 2][ 7].re 
	-A[ 9][ 3].im*B[ 3][ 7].im 
	+A[ 9][ 3].re*B[ 3][ 7].re 
	-A[ 9][ 4].im*B[ 4][ 7].im 
	+A[ 9][ 4].re*B[ 4][ 7].re 
	-A[ 9][ 5].im*B[ 5][ 7].im 
	+A[ 9][ 5].re*B[ 5][ 7].re 
	-A[ 9][ 6].im*B[ 6][ 7].im 
	+A[ 9][ 6].re*B[ 6][ 7].re 
	-A[ 9][ 7].im*B[ 7][ 7].im 
	+A[ 9][ 7].re*B[ 7][ 7].re 
	-A[ 9][ 8].im*B[ 8][ 7].im 
	+A[ 9][ 8].re*B[ 8][ 7].re 
	-A[ 9][ 9].im*B[ 9][ 7].im 
	+A[ 9][ 9].re*B[ 9][ 7].re 
	-A[ 9][10].im*B[10][ 7].im 
	+A[ 9][10].re*B[10][ 7].re 
	-A[ 9][11].im*B[11][ 7].im 
	+A[ 9][11].re*B[11][ 7].re;

  C[ 9][ 7].im = 
	 A[ 9][ 0].im*B[ 0][ 7].re 
	+A[ 9][ 0].re*B[ 0][ 7].im 
	+A[ 9][ 1].im*B[ 1][ 7].re 
	+A[ 9][ 1].re*B[ 1][ 7].im 
	+A[ 9][ 2].im*B[ 2][ 7].re 
	+A[ 9][ 2].re*B[ 2][ 7].im 
	+A[ 9][ 3].im*B[ 3][ 7].re 
	+A[ 9][ 3].re*B[ 3][ 7].im 
	+A[ 9][ 4].im*B[ 4][ 7].re 
	+A[ 9][ 4].re*B[ 4][ 7].im 
	+A[ 9][ 5].im*B[ 5][ 7].re 
	+A[ 9][ 5].re*B[ 5][ 7].im 
	+A[ 9][ 6].im*B[ 6][ 7].re 
	+A[ 9][ 6].re*B[ 6][ 7].im 
	+A[ 9][ 7].im*B[ 7][ 7].re 
	+A[ 9][ 7].re*B[ 7][ 7].im 
	+A[ 9][ 8].im*B[ 8][ 7].re 
	+A[ 9][ 8].re*B[ 8][ 7].im 
	+A[ 9][ 9].im*B[ 9][ 7].re 
	+A[ 9][ 9].re*B[ 9][ 7].im 
	+A[ 9][10].im*B[10][ 7].re 
	+A[ 9][10].re*B[10][ 7].im 
	+A[ 9][11].im*B[11][ 7].re 
	+A[ 9][11].re*B[11][ 7].im;

  C[ 9][ 8].re = 
	-A[ 9][ 0].im*B[ 0][ 8].im 
	+A[ 9][ 0].re*B[ 0][ 8].re 
	-A[ 9][ 1].im*B[ 1][ 8].im 
	+A[ 9][ 1].re*B[ 1][ 8].re 
	-A[ 9][ 2].im*B[ 2][ 8].im 
	+A[ 9][ 2].re*B[ 2][ 8].re 
	-A[ 9][ 3].im*B[ 3][ 8].im 
	+A[ 9][ 3].re*B[ 3][ 8].re 
	-A[ 9][ 4].im*B[ 4][ 8].im 
	+A[ 9][ 4].re*B[ 4][ 8].re 
	-A[ 9][ 5].im*B[ 5][ 8].im 
	+A[ 9][ 5].re*B[ 5][ 8].re 
	-A[ 9][ 6].im*B[ 6][ 8].im 
	+A[ 9][ 6].re*B[ 6][ 8].re 
	-A[ 9][ 7].im*B[ 7][ 8].im 
	+A[ 9][ 7].re*B[ 7][ 8].re 
	-A[ 9][ 8].im*B[ 8][ 8].im 
	+A[ 9][ 8].re*B[ 8][ 8].re 
	-A[ 9][ 9].im*B[ 9][ 8].im 
	+A[ 9][ 9].re*B[ 9][ 8].re 
	-A[ 9][10].im*B[10][ 8].im 
	+A[ 9][10].re*B[10][ 8].re 
	-A[ 9][11].im*B[11][ 8].im 
	+A[ 9][11].re*B[11][ 8].re;

  C[ 9][ 8].im = 
	 A[ 9][ 0].im*B[ 0][ 8].re 
	+A[ 9][ 0].re*B[ 0][ 8].im 
	+A[ 9][ 1].im*B[ 1][ 8].re 
	+A[ 9][ 1].re*B[ 1][ 8].im 
	+A[ 9][ 2].im*B[ 2][ 8].re 
	+A[ 9][ 2].re*B[ 2][ 8].im 
	+A[ 9][ 3].im*B[ 3][ 8].re 
	+A[ 9][ 3].re*B[ 3][ 8].im 
	+A[ 9][ 4].im*B[ 4][ 8].re 
	+A[ 9][ 4].re*B[ 4][ 8].im 
	+A[ 9][ 5].im*B[ 5][ 8].re 
	+A[ 9][ 5].re*B[ 5][ 8].im 
	+A[ 9][ 6].im*B[ 6][ 8].re 
	+A[ 9][ 6].re*B[ 6][ 8].im 
	+A[ 9][ 7].im*B[ 7][ 8].re 
	+A[ 9][ 7].re*B[ 7][ 8].im 
	+A[ 9][ 8].im*B[ 8][ 8].re 
	+A[ 9][ 8].re*B[ 8][ 8].im 
	+A[ 9][ 9].im*B[ 9][ 8].re 
	+A[ 9][ 9].re*B[ 9][ 8].im 
	+A[ 9][10].im*B[10][ 8].re 
	+A[ 9][10].re*B[10][ 8].im 
	+A[ 9][11].im*B[11][ 8].re 
	+A[ 9][11].re*B[11][ 8].im;

  C[ 9][ 9].re = 
	-A[ 9][ 0].im*B[ 0][ 9].im 
	+A[ 9][ 0].re*B[ 0][ 9].re 
	-A[ 9][ 1].im*B[ 1][ 9].im 
	+A[ 9][ 1].re*B[ 1][ 9].re 
	-A[ 9][ 2].im*B[ 2][ 9].im 
	+A[ 9][ 2].re*B[ 2][ 9].re 
	-A[ 9][ 3].im*B[ 3][ 9].im 
	+A[ 9][ 3].re*B[ 3][ 9].re 
	-A[ 9][ 4].im*B[ 4][ 9].im 
	+A[ 9][ 4].re*B[ 4][ 9].re 
	-A[ 9][ 5].im*B[ 5][ 9].im 
	+A[ 9][ 5].re*B[ 5][ 9].re 
	-A[ 9][ 6].im*B[ 6][ 9].im 
	+A[ 9][ 6].re*B[ 6][ 9].re 
	-A[ 9][ 7].im*B[ 7][ 9].im 
	+A[ 9][ 7].re*B[ 7][ 9].re 
	-A[ 9][ 8].im*B[ 8][ 9].im 
	+A[ 9][ 8].re*B[ 8][ 9].re 
	-A[ 9][ 9].im*B[ 9][ 9].im 
	+A[ 9][ 9].re*B[ 9][ 9].re 
	-A[ 9][10].im*B[10][ 9].im 
	+A[ 9][10].re*B[10][ 9].re 
	-A[ 9][11].im*B[11][ 9].im 
	+A[ 9][11].re*B[11][ 9].re;

  C[ 9][ 9].im = 
	 A[ 9][ 0].im*B[ 0][ 9].re 
	+A[ 9][ 0].re*B[ 0][ 9].im 
	+A[ 9][ 1].im*B[ 1][ 9].re 
	+A[ 9][ 1].re*B[ 1][ 9].im 
	+A[ 9][ 2].im*B[ 2][ 9].re 
	+A[ 9][ 2].re*B[ 2][ 9].im 
	+A[ 9][ 3].im*B[ 3][ 9].re 
	+A[ 9][ 3].re*B[ 3][ 9].im 
	+A[ 9][ 4].im*B[ 4][ 9].re 
	+A[ 9][ 4].re*B[ 4][ 9].im 
	+A[ 9][ 5].im*B[ 5][ 9].re 
	+A[ 9][ 5].re*B[ 5][ 9].im 
	+A[ 9][ 6].im*B[ 6][ 9].re 
	+A[ 9][ 6].re*B[ 6][ 9].im 
	+A[ 9][ 7].im*B[ 7][ 9].re 
	+A[ 9][ 7].re*B[ 7][ 9].im 
	+A[ 9][ 8].im*B[ 8][ 9].re 
	+A[ 9][ 8].re*B[ 8][ 9].im 
	+A[ 9][ 9].im*B[ 9][ 9].re 
	+A[ 9][ 9].re*B[ 9][ 9].im 
	+A[ 9][10].im*B[10][ 9].re 
	+A[ 9][10].re*B[10][ 9].im 
	+A[ 9][11].im*B[11][ 9].re 
	+A[ 9][11].re*B[11][ 9].im;

  C[ 9][10].re = 
	-A[ 9][ 0].im*B[ 0][10].im 
	+A[ 9][ 0].re*B[ 0][10].re 
	-A[ 9][ 1].im*B[ 1][10].im 
	+A[ 9][ 1].re*B[ 1][10].re 
	-A[ 9][ 2].im*B[ 2][10].im 
	+A[ 9][ 2].re*B[ 2][10].re 
	-A[ 9][ 3].im*B[ 3][10].im 
	+A[ 9][ 3].re*B[ 3][10].re 
	-A[ 9][ 4].im*B[ 4][10].im 
	+A[ 9][ 4].re*B[ 4][10].re 
	-A[ 9][ 5].im*B[ 5][10].im 
	+A[ 9][ 5].re*B[ 5][10].re 
	-A[ 9][ 6].im*B[ 6][10].im 
	+A[ 9][ 6].re*B[ 6][10].re 
	-A[ 9][ 7].im*B[ 7][10].im 
	+A[ 9][ 7].re*B[ 7][10].re 
	-A[ 9][ 8].im*B[ 8][10].im 
	+A[ 9][ 8].re*B[ 8][10].re 
	-A[ 9][ 9].im*B[ 9][10].im 
	+A[ 9][ 9].re*B[ 9][10].re 
	-A[ 9][10].im*B[10][10].im 
	+A[ 9][10].re*B[10][10].re 
	-A[ 9][11].im*B[11][10].im 
	+A[ 9][11].re*B[11][10].re;

  C[ 9][10].im = 
	 A[ 9][ 0].im*B[ 0][10].re 
	+A[ 9][ 0].re*B[ 0][10].im 
	+A[ 9][ 1].im*B[ 1][10].re 
	+A[ 9][ 1].re*B[ 1][10].im 
	+A[ 9][ 2].im*B[ 2][10].re 
	+A[ 9][ 2].re*B[ 2][10].im 
	+A[ 9][ 3].im*B[ 3][10].re 
	+A[ 9][ 3].re*B[ 3][10].im 
	+A[ 9][ 4].im*B[ 4][10].re 
	+A[ 9][ 4].re*B[ 4][10].im 
	+A[ 9][ 5].im*B[ 5][10].re 
	+A[ 9][ 5].re*B[ 5][10].im 
	+A[ 9][ 6].im*B[ 6][10].re 
	+A[ 9][ 6].re*B[ 6][10].im 
	+A[ 9][ 7].im*B[ 7][10].re 
	+A[ 9][ 7].re*B[ 7][10].im 
	+A[ 9][ 8].im*B[ 8][10].re 
	+A[ 9][ 8].re*B[ 8][10].im 
	+A[ 9][ 9].im*B[ 9][10].re 
	+A[ 9][ 9].re*B[ 9][10].im 
	+A[ 9][10].im*B[10][10].re 
	+A[ 9][10].re*B[10][10].im 
	+A[ 9][11].im*B[11][10].re 
	+A[ 9][11].re*B[11][10].im;

  C[ 9][11].re = 
	-A[ 9][ 0].im*B[ 0][11].im 
	+A[ 9][ 0].re*B[ 0][11].re 
	-A[ 9][ 1].im*B[ 1][11].im 
	+A[ 9][ 1].re*B[ 1][11].re 
	-A[ 9][ 2].im*B[ 2][11].im 
	+A[ 9][ 2].re*B[ 2][11].re 
	-A[ 9][ 3].im*B[ 3][11].im 
	+A[ 9][ 3].re*B[ 3][11].re 
	-A[ 9][ 4].im*B[ 4][11].im 
	+A[ 9][ 4].re*B[ 4][11].re 
	-A[ 9][ 5].im*B[ 5][11].im 
	+A[ 9][ 5].re*B[ 5][11].re 
	-A[ 9][ 6].im*B[ 6][11].im 
	+A[ 9][ 6].re*B[ 6][11].re 
	-A[ 9][ 7].im*B[ 7][11].im 
	+A[ 9][ 7].re*B[ 7][11].re 
	-A[ 9][ 8].im*B[ 8][11].im 
	+A[ 9][ 8].re*B[ 8][11].re 
	-A[ 9][ 9].im*B[ 9][11].im 
	+A[ 9][ 9].re*B[ 9][11].re 
	-A[ 9][10].im*B[10][11].im 
	+A[ 9][10].re*B[10][11].re 
	-A[ 9][11].im*B[11][11].im 
	+A[ 9][11].re*B[11][11].re;

  C[ 9][11].im = 
	 A[ 9][ 0].im*B[ 0][11].re 
	+A[ 9][ 0].re*B[ 0][11].im 
	+A[ 9][ 1].im*B[ 1][11].re 
	+A[ 9][ 1].re*B[ 1][11].im 
	+A[ 9][ 2].im*B[ 2][11].re 
	+A[ 9][ 2].re*B[ 2][11].im 
	+A[ 9][ 3].im*B[ 3][11].re 
	+A[ 9][ 3].re*B[ 3][11].im 
	+A[ 9][ 4].im*B[ 4][11].re 
	+A[ 9][ 4].re*B[ 4][11].im 
	+A[ 9][ 5].im*B[ 5][11].re 
	+A[ 9][ 5].re*B[ 5][11].im 
	+A[ 9][ 6].im*B[ 6][11].re 
	+A[ 9][ 6].re*B[ 6][11].im 
	+A[ 9][ 7].im*B[ 7][11].re 
	+A[ 9][ 7].re*B[ 7][11].im 
	+A[ 9][ 8].im*B[ 8][11].re 
	+A[ 9][ 8].re*B[ 8][11].im 
	+A[ 9][ 9].im*B[ 9][11].re 
	+A[ 9][ 9].re*B[ 9][11].im 
	+A[ 9][10].im*B[10][11].re 
	+A[ 9][10].re*B[10][11].im 
	+A[ 9][11].im*B[11][11].re 
	+A[ 9][11].re*B[11][11].im;

  C[10][ 0].re = 
	-A[10][ 0].im*B[ 0][ 0].im 
	+A[10][ 0].re*B[ 0][ 0].re 
	-A[10][ 1].im*B[ 1][ 0].im 
	+A[10][ 1].re*B[ 1][ 0].re 
	-A[10][ 2].im*B[ 2][ 0].im 
	+A[10][ 2].re*B[ 2][ 0].re 
	-A[10][ 3].im*B[ 3][ 0].im 
	+A[10][ 3].re*B[ 3][ 0].re 
	-A[10][ 4].im*B[ 4][ 0].im 
	+A[10][ 4].re*B[ 4][ 0].re 
	-A[10][ 5].im*B[ 5][ 0].im 
	+A[10][ 5].re*B[ 5][ 0].re 
	-A[10][ 6].im*B[ 6][ 0].im 
	+A[10][ 6].re*B[ 6][ 0].re 
	-A[10][ 7].im*B[ 7][ 0].im 
	+A[10][ 7].re*B[ 7][ 0].re 
	-A[10][ 8].im*B[ 8][ 0].im 
	+A[10][ 8].re*B[ 8][ 0].re 
	-A[10][ 9].im*B[ 9][ 0].im 
	+A[10][ 9].re*B[ 9][ 0].re 
	-A[10][10].im*B[10][ 0].im 
	+A[10][10].re*B[10][ 0].re 
	-A[10][11].im*B[11][ 0].im 
	+A[10][11].re*B[11][ 0].re;

  C[10][ 0].im = 
	 A[10][ 0].im*B[ 0][ 0].re 
	+A[10][ 0].re*B[ 0][ 0].im 
	+A[10][ 1].im*B[ 1][ 0].re 
	+A[10][ 1].re*B[ 1][ 0].im 
	+A[10][ 2].im*B[ 2][ 0].re 
	+A[10][ 2].re*B[ 2][ 0].im 
	+A[10][ 3].im*B[ 3][ 0].re 
	+A[10][ 3].re*B[ 3][ 0].im 
	+A[10][ 4].im*B[ 4][ 0].re 
	+A[10][ 4].re*B[ 4][ 0].im 
	+A[10][ 5].im*B[ 5][ 0].re 
	+A[10][ 5].re*B[ 5][ 0].im 
	+A[10][ 6].im*B[ 6][ 0].re 
	+A[10][ 6].re*B[ 6][ 0].im 
	+A[10][ 7].im*B[ 7][ 0].re 
	+A[10][ 7].re*B[ 7][ 0].im 
	+A[10][ 8].im*B[ 8][ 0].re 
	+A[10][ 8].re*B[ 8][ 0].im 
	+A[10][ 9].im*B[ 9][ 0].re 
	+A[10][ 9].re*B[ 9][ 0].im 
	+A[10][10].im*B[10][ 0].re 
	+A[10][10].re*B[10][ 0].im 
	+A[10][11].im*B[11][ 0].re 
	+A[10][11].re*B[11][ 0].im;

  C[10][ 1].re = 
	-A[10][ 0].im*B[ 0][ 1].im 
	+A[10][ 0].re*B[ 0][ 1].re 
	-A[10][ 1].im*B[ 1][ 1].im 
	+A[10][ 1].re*B[ 1][ 1].re 
	-A[10][ 2].im*B[ 2][ 1].im 
	+A[10][ 2].re*B[ 2][ 1].re 
	-A[10][ 3].im*B[ 3][ 1].im 
	+A[10][ 3].re*B[ 3][ 1].re 
	-A[10][ 4].im*B[ 4][ 1].im 
	+A[10][ 4].re*B[ 4][ 1].re 
	-A[10][ 5].im*B[ 5][ 1].im 
	+A[10][ 5].re*B[ 5][ 1].re 
	-A[10][ 6].im*B[ 6][ 1].im 
	+A[10][ 6].re*B[ 6][ 1].re 
	-A[10][ 7].im*B[ 7][ 1].im 
	+A[10][ 7].re*B[ 7][ 1].re 
	-A[10][ 8].im*B[ 8][ 1].im 
	+A[10][ 8].re*B[ 8][ 1].re 
	-A[10][ 9].im*B[ 9][ 1].im 
	+A[10][ 9].re*B[ 9][ 1].re 
	-A[10][10].im*B[10][ 1].im 
	+A[10][10].re*B[10][ 1].re 
	-A[10][11].im*B[11][ 1].im 
	+A[10][11].re*B[11][ 1].re;

  C[10][ 1].im = 
	 A[10][ 0].im*B[ 0][ 1].re 
	+A[10][ 0].re*B[ 0][ 1].im 
	+A[10][ 1].im*B[ 1][ 1].re 
	+A[10][ 1].re*B[ 1][ 1].im 
	+A[10][ 2].im*B[ 2][ 1].re 
	+A[10][ 2].re*B[ 2][ 1].im 
	+A[10][ 3].im*B[ 3][ 1].re 
	+A[10][ 3].re*B[ 3][ 1].im 
	+A[10][ 4].im*B[ 4][ 1].re 
	+A[10][ 4].re*B[ 4][ 1].im 
	+A[10][ 5].im*B[ 5][ 1].re 
	+A[10][ 5].re*B[ 5][ 1].im 
	+A[10][ 6].im*B[ 6][ 1].re 
	+A[10][ 6].re*B[ 6][ 1].im 
	+A[10][ 7].im*B[ 7][ 1].re 
	+A[10][ 7].re*B[ 7][ 1].im 
	+A[10][ 8].im*B[ 8][ 1].re 
	+A[10][ 8].re*B[ 8][ 1].im 
	+A[10][ 9].im*B[ 9][ 1].re 
	+A[10][ 9].re*B[ 9][ 1].im 
	+A[10][10].im*B[10][ 1].re 
	+A[10][10].re*B[10][ 1].im 
	+A[10][11].im*B[11][ 1].re 
	+A[10][11].re*B[11][ 1].im;

  C[10][ 2].re = 
	-A[10][ 0].im*B[ 0][ 2].im 
	+A[10][ 0].re*B[ 0][ 2].re 
	-A[10][ 1].im*B[ 1][ 2].im 
	+A[10][ 1].re*B[ 1][ 2].re 
	-A[10][ 2].im*B[ 2][ 2].im 
	+A[10][ 2].re*B[ 2][ 2].re 
	-A[10][ 3].im*B[ 3][ 2].im 
	+A[10][ 3].re*B[ 3][ 2].re 
	-A[10][ 4].im*B[ 4][ 2].im 
	+A[10][ 4].re*B[ 4][ 2].re 
	-A[10][ 5].im*B[ 5][ 2].im 
	+A[10][ 5].re*B[ 5][ 2].re 
	-A[10][ 6].im*B[ 6][ 2].im 
	+A[10][ 6].re*B[ 6][ 2].re 
	-A[10][ 7].im*B[ 7][ 2].im 
	+A[10][ 7].re*B[ 7][ 2].re 
	-A[10][ 8].im*B[ 8][ 2].im 
	+A[10][ 8].re*B[ 8][ 2].re 
	-A[10][ 9].im*B[ 9][ 2].im 
	+A[10][ 9].re*B[ 9][ 2].re 
	-A[10][10].im*B[10][ 2].im 
	+A[10][10].re*B[10][ 2].re 
	-A[10][11].im*B[11][ 2].im 
	+A[10][11].re*B[11][ 2].re;

  C[10][ 2].im = 
	 A[10][ 0].im*B[ 0][ 2].re 
	+A[10][ 0].re*B[ 0][ 2].im 
	+A[10][ 1].im*B[ 1][ 2].re 
	+A[10][ 1].re*B[ 1][ 2].im 
	+A[10][ 2].im*B[ 2][ 2].re 
	+A[10][ 2].re*B[ 2][ 2].im 
	+A[10][ 3].im*B[ 3][ 2].re 
	+A[10][ 3].re*B[ 3][ 2].im 
	+A[10][ 4].im*B[ 4][ 2].re 
	+A[10][ 4].re*B[ 4][ 2].im 
	+A[10][ 5].im*B[ 5][ 2].re 
	+A[10][ 5].re*B[ 5][ 2].im 
	+A[10][ 6].im*B[ 6][ 2].re 
	+A[10][ 6].re*B[ 6][ 2].im 
	+A[10][ 7].im*B[ 7][ 2].re 
	+A[10][ 7].re*B[ 7][ 2].im 
	+A[10][ 8].im*B[ 8][ 2].re 
	+A[10][ 8].re*B[ 8][ 2].im 
	+A[10][ 9].im*B[ 9][ 2].re 
	+A[10][ 9].re*B[ 9][ 2].im 
	+A[10][10].im*B[10][ 2].re 
	+A[10][10].re*B[10][ 2].im 
	+A[10][11].im*B[11][ 2].re 
	+A[10][11].re*B[11][ 2].im;

  C[10][ 3].re = 
	-A[10][ 0].im*B[ 0][ 3].im 
	+A[10][ 0].re*B[ 0][ 3].re 
	-A[10][ 1].im*B[ 1][ 3].im 
	+A[10][ 1].re*B[ 1][ 3].re 
	-A[10][ 2].im*B[ 2][ 3].im 
	+A[10][ 2].re*B[ 2][ 3].re 
	-A[10][ 3].im*B[ 3][ 3].im 
	+A[10][ 3].re*B[ 3][ 3].re 
	-A[10][ 4].im*B[ 4][ 3].im 
	+A[10][ 4].re*B[ 4][ 3].re 
	-A[10][ 5].im*B[ 5][ 3].im 
	+A[10][ 5].re*B[ 5][ 3].re 
	-A[10][ 6].im*B[ 6][ 3].im 
	+A[10][ 6].re*B[ 6][ 3].re 
	-A[10][ 7].im*B[ 7][ 3].im 
	+A[10][ 7].re*B[ 7][ 3].re 
	-A[10][ 8].im*B[ 8][ 3].im 
	+A[10][ 8].re*B[ 8][ 3].re 
	-A[10][ 9].im*B[ 9][ 3].im 
	+A[10][ 9].re*B[ 9][ 3].re 
	-A[10][10].im*B[10][ 3].im 
	+A[10][10].re*B[10][ 3].re 
	-A[10][11].im*B[11][ 3].im 
	+A[10][11].re*B[11][ 3].re;

  C[10][ 3].im = 
	 A[10][ 0].im*B[ 0][ 3].re 
	+A[10][ 0].re*B[ 0][ 3].im 
	+A[10][ 1].im*B[ 1][ 3].re 
	+A[10][ 1].re*B[ 1][ 3].im 
	+A[10][ 2].im*B[ 2][ 3].re 
	+A[10][ 2].re*B[ 2][ 3].im 
	+A[10][ 3].im*B[ 3][ 3].re 
	+A[10][ 3].re*B[ 3][ 3].im 
	+A[10][ 4].im*B[ 4][ 3].re 
	+A[10][ 4].re*B[ 4][ 3].im 
	+A[10][ 5].im*B[ 5][ 3].re 
	+A[10][ 5].re*B[ 5][ 3].im 
	+A[10][ 6].im*B[ 6][ 3].re 
	+A[10][ 6].re*B[ 6][ 3].im 
	+A[10][ 7].im*B[ 7][ 3].re 
	+A[10][ 7].re*B[ 7][ 3].im 
	+A[10][ 8].im*B[ 8][ 3].re 
	+A[10][ 8].re*B[ 8][ 3].im 
	+A[10][ 9].im*B[ 9][ 3].re 
	+A[10][ 9].re*B[ 9][ 3].im 
	+A[10][10].im*B[10][ 3].re 
	+A[10][10].re*B[10][ 3].im 
	+A[10][11].im*B[11][ 3].re 
	+A[10][11].re*B[11][ 3].im;

  C[10][ 4].re = 
	-A[10][ 0].im*B[ 0][ 4].im 
	+A[10][ 0].re*B[ 0][ 4].re 
	-A[10][ 1].im*B[ 1][ 4].im 
	+A[10][ 1].re*B[ 1][ 4].re 
	-A[10][ 2].im*B[ 2][ 4].im 
	+A[10][ 2].re*B[ 2][ 4].re 
	-A[10][ 3].im*B[ 3][ 4].im 
	+A[10][ 3].re*B[ 3][ 4].re 
	-A[10][ 4].im*B[ 4][ 4].im 
	+A[10][ 4].re*B[ 4][ 4].re 
	-A[10][ 5].im*B[ 5][ 4].im 
	+A[10][ 5].re*B[ 5][ 4].re 
	-A[10][ 6].im*B[ 6][ 4].im 
	+A[10][ 6].re*B[ 6][ 4].re 
	-A[10][ 7].im*B[ 7][ 4].im 
	+A[10][ 7].re*B[ 7][ 4].re 
	-A[10][ 8].im*B[ 8][ 4].im 
	+A[10][ 8].re*B[ 8][ 4].re 
	-A[10][ 9].im*B[ 9][ 4].im 
	+A[10][ 9].re*B[ 9][ 4].re 
	-A[10][10].im*B[10][ 4].im 
	+A[10][10].re*B[10][ 4].re 
	-A[10][11].im*B[11][ 4].im 
	+A[10][11].re*B[11][ 4].re;

  C[10][ 4].im = 
	 A[10][ 0].im*B[ 0][ 4].re 
	+A[10][ 0].re*B[ 0][ 4].im 
	+A[10][ 1].im*B[ 1][ 4].re 
	+A[10][ 1].re*B[ 1][ 4].im 
	+A[10][ 2].im*B[ 2][ 4].re 
	+A[10][ 2].re*B[ 2][ 4].im 
	+A[10][ 3].im*B[ 3][ 4].re 
	+A[10][ 3].re*B[ 3][ 4].im 
	+A[10][ 4].im*B[ 4][ 4].re 
	+A[10][ 4].re*B[ 4][ 4].im 
	+A[10][ 5].im*B[ 5][ 4].re 
	+A[10][ 5].re*B[ 5][ 4].im 
	+A[10][ 6].im*B[ 6][ 4].re 
	+A[10][ 6].re*B[ 6][ 4].im 
	+A[10][ 7].im*B[ 7][ 4].re 
	+A[10][ 7].re*B[ 7][ 4].im 
	+A[10][ 8].im*B[ 8][ 4].re 
	+A[10][ 8].re*B[ 8][ 4].im 
	+A[10][ 9].im*B[ 9][ 4].re 
	+A[10][ 9].re*B[ 9][ 4].im 
	+A[10][10].im*B[10][ 4].re 
	+A[10][10].re*B[10][ 4].im 
	+A[10][11].im*B[11][ 4].re 
	+A[10][11].re*B[11][ 4].im;

  C[10][ 5].re = 
	-A[10][ 0].im*B[ 0][ 5].im 
	+A[10][ 0].re*B[ 0][ 5].re 
	-A[10][ 1].im*B[ 1][ 5].im 
	+A[10][ 1].re*B[ 1][ 5].re 
	-A[10][ 2].im*B[ 2][ 5].im 
	+A[10][ 2].re*B[ 2][ 5].re 
	-A[10][ 3].im*B[ 3][ 5].im 
	+A[10][ 3].re*B[ 3][ 5].re 
	-A[10][ 4].im*B[ 4][ 5].im 
	+A[10][ 4].re*B[ 4][ 5].re 
	-A[10][ 5].im*B[ 5][ 5].im 
	+A[10][ 5].re*B[ 5][ 5].re 
	-A[10][ 6].im*B[ 6][ 5].im 
	+A[10][ 6].re*B[ 6][ 5].re 
	-A[10][ 7].im*B[ 7][ 5].im 
	+A[10][ 7].re*B[ 7][ 5].re 
	-A[10][ 8].im*B[ 8][ 5].im 
	+A[10][ 8].re*B[ 8][ 5].re 
	-A[10][ 9].im*B[ 9][ 5].im 
	+A[10][ 9].re*B[ 9][ 5].re 
	-A[10][10].im*B[10][ 5].im 
	+A[10][10].re*B[10][ 5].re 
	-A[10][11].im*B[11][ 5].im 
	+A[10][11].re*B[11][ 5].re;

  C[10][ 5].im = 
	 A[10][ 0].im*B[ 0][ 5].re 
	+A[10][ 0].re*B[ 0][ 5].im 
	+A[10][ 1].im*B[ 1][ 5].re 
	+A[10][ 1].re*B[ 1][ 5].im 
	+A[10][ 2].im*B[ 2][ 5].re 
	+A[10][ 2].re*B[ 2][ 5].im 
	+A[10][ 3].im*B[ 3][ 5].re 
	+A[10][ 3].re*B[ 3][ 5].im 
	+A[10][ 4].im*B[ 4][ 5].re 
	+A[10][ 4].re*B[ 4][ 5].im 
	+A[10][ 5].im*B[ 5][ 5].re 
	+A[10][ 5].re*B[ 5][ 5].im 
	+A[10][ 6].im*B[ 6][ 5].re 
	+A[10][ 6].re*B[ 6][ 5].im 
	+A[10][ 7].im*B[ 7][ 5].re 
	+A[10][ 7].re*B[ 7][ 5].im 
	+A[10][ 8].im*B[ 8][ 5].re 
	+A[10][ 8].re*B[ 8][ 5].im 
	+A[10][ 9].im*B[ 9][ 5].re 
	+A[10][ 9].re*B[ 9][ 5].im 
	+A[10][10].im*B[10][ 5].re 
	+A[10][10].re*B[10][ 5].im 
	+A[10][11].im*B[11][ 5].re 
	+A[10][11].re*B[11][ 5].im;

  C[10][ 6].re = 
	-A[10][ 0].im*B[ 0][ 6].im 
	+A[10][ 0].re*B[ 0][ 6].re 
	-A[10][ 1].im*B[ 1][ 6].im 
	+A[10][ 1].re*B[ 1][ 6].re 
	-A[10][ 2].im*B[ 2][ 6].im 
	+A[10][ 2].re*B[ 2][ 6].re 
	-A[10][ 3].im*B[ 3][ 6].im 
	+A[10][ 3].re*B[ 3][ 6].re 
	-A[10][ 4].im*B[ 4][ 6].im 
	+A[10][ 4].re*B[ 4][ 6].re 
	-A[10][ 5].im*B[ 5][ 6].im 
	+A[10][ 5].re*B[ 5][ 6].re 
	-A[10][ 6].im*B[ 6][ 6].im 
	+A[10][ 6].re*B[ 6][ 6].re 
	-A[10][ 7].im*B[ 7][ 6].im 
	+A[10][ 7].re*B[ 7][ 6].re 
	-A[10][ 8].im*B[ 8][ 6].im 
	+A[10][ 8].re*B[ 8][ 6].re 
	-A[10][ 9].im*B[ 9][ 6].im 
	+A[10][ 9].re*B[ 9][ 6].re 
	-A[10][10].im*B[10][ 6].im 
	+A[10][10].re*B[10][ 6].re 
	-A[10][11].im*B[11][ 6].im 
	+A[10][11].re*B[11][ 6].re;

  C[10][ 6].im = 
	 A[10][ 0].im*B[ 0][ 6].re 
	+A[10][ 0].re*B[ 0][ 6].im 
	+A[10][ 1].im*B[ 1][ 6].re 
	+A[10][ 1].re*B[ 1][ 6].im 
	+A[10][ 2].im*B[ 2][ 6].re 
	+A[10][ 2].re*B[ 2][ 6].im 
	+A[10][ 3].im*B[ 3][ 6].re 
	+A[10][ 3].re*B[ 3][ 6].im 
	+A[10][ 4].im*B[ 4][ 6].re 
	+A[10][ 4].re*B[ 4][ 6].im 
	+A[10][ 5].im*B[ 5][ 6].re 
	+A[10][ 5].re*B[ 5][ 6].im 
	+A[10][ 6].im*B[ 6][ 6].re 
	+A[10][ 6].re*B[ 6][ 6].im 
	+A[10][ 7].im*B[ 7][ 6].re 
	+A[10][ 7].re*B[ 7][ 6].im 
	+A[10][ 8].im*B[ 8][ 6].re 
	+A[10][ 8].re*B[ 8][ 6].im 
	+A[10][ 9].im*B[ 9][ 6].re 
	+A[10][ 9].re*B[ 9][ 6].im 
	+A[10][10].im*B[10][ 6].re 
	+A[10][10].re*B[10][ 6].im 
	+A[10][11].im*B[11][ 6].re 
	+A[10][11].re*B[11][ 6].im;

  C[10][ 7].re = 
	-A[10][ 0].im*B[ 0][ 7].im 
	+A[10][ 0].re*B[ 0][ 7].re 
	-A[10][ 1].im*B[ 1][ 7].im 
	+A[10][ 1].re*B[ 1][ 7].re 
	-A[10][ 2].im*B[ 2][ 7].im 
	+A[10][ 2].re*B[ 2][ 7].re 
	-A[10][ 3].im*B[ 3][ 7].im 
	+A[10][ 3].re*B[ 3][ 7].re 
	-A[10][ 4].im*B[ 4][ 7].im 
	+A[10][ 4].re*B[ 4][ 7].re 
	-A[10][ 5].im*B[ 5][ 7].im 
	+A[10][ 5].re*B[ 5][ 7].re 
	-A[10][ 6].im*B[ 6][ 7].im 
	+A[10][ 6].re*B[ 6][ 7].re 
	-A[10][ 7].im*B[ 7][ 7].im 
	+A[10][ 7].re*B[ 7][ 7].re 
	-A[10][ 8].im*B[ 8][ 7].im 
	+A[10][ 8].re*B[ 8][ 7].re 
	-A[10][ 9].im*B[ 9][ 7].im 
	+A[10][ 9].re*B[ 9][ 7].re 
	-A[10][10].im*B[10][ 7].im 
	+A[10][10].re*B[10][ 7].re 
	-A[10][11].im*B[11][ 7].im 
	+A[10][11].re*B[11][ 7].re;

  C[10][ 7].im = 
	 A[10][ 0].im*B[ 0][ 7].re 
	+A[10][ 0].re*B[ 0][ 7].im 
	+A[10][ 1].im*B[ 1][ 7].re 
	+A[10][ 1].re*B[ 1][ 7].im 
	+A[10][ 2].im*B[ 2][ 7].re 
	+A[10][ 2].re*B[ 2][ 7].im 
	+A[10][ 3].im*B[ 3][ 7].re 
	+A[10][ 3].re*B[ 3][ 7].im 
	+A[10][ 4].im*B[ 4][ 7].re 
	+A[10][ 4].re*B[ 4][ 7].im 
	+A[10][ 5].im*B[ 5][ 7].re 
	+A[10][ 5].re*B[ 5][ 7].im 
	+A[10][ 6].im*B[ 6][ 7].re 
	+A[10][ 6].re*B[ 6][ 7].im 
	+A[10][ 7].im*B[ 7][ 7].re 
	+A[10][ 7].re*B[ 7][ 7].im 
	+A[10][ 8].im*B[ 8][ 7].re 
	+A[10][ 8].re*B[ 8][ 7].im 
	+A[10][ 9].im*B[ 9][ 7].re 
	+A[10][ 9].re*B[ 9][ 7].im 
	+A[10][10].im*B[10][ 7].re 
	+A[10][10].re*B[10][ 7].im 
	+A[10][11].im*B[11][ 7].re 
	+A[10][11].re*B[11][ 7].im;

  C[10][ 8].re = 
	-A[10][ 0].im*B[ 0][ 8].im 
	+A[10][ 0].re*B[ 0][ 8].re 
	-A[10][ 1].im*B[ 1][ 8].im 
	+A[10][ 1].re*B[ 1][ 8].re 
	-A[10][ 2].im*B[ 2][ 8].im 
	+A[10][ 2].re*B[ 2][ 8].re 
	-A[10][ 3].im*B[ 3][ 8].im 
	+A[10][ 3].re*B[ 3][ 8].re 
	-A[10][ 4].im*B[ 4][ 8].im 
	+A[10][ 4].re*B[ 4][ 8].re 
	-A[10][ 5].im*B[ 5][ 8].im 
	+A[10][ 5].re*B[ 5][ 8].re 
	-A[10][ 6].im*B[ 6][ 8].im 
	+A[10][ 6].re*B[ 6][ 8].re 
	-A[10][ 7].im*B[ 7][ 8].im 
	+A[10][ 7].re*B[ 7][ 8].re 
	-A[10][ 8].im*B[ 8][ 8].im 
	+A[10][ 8].re*B[ 8][ 8].re 
	-A[10][ 9].im*B[ 9][ 8].im 
	+A[10][ 9].re*B[ 9][ 8].re 
	-A[10][10].im*B[10][ 8].im 
	+A[10][10].re*B[10][ 8].re 
	-A[10][11].im*B[11][ 8].im 
	+A[10][11].re*B[11][ 8].re;

  C[10][ 8].im = 
	 A[10][ 0].im*B[ 0][ 8].re 
	+A[10][ 0].re*B[ 0][ 8].im 
	+A[10][ 1].im*B[ 1][ 8].re 
	+A[10][ 1].re*B[ 1][ 8].im 
	+A[10][ 2].im*B[ 2][ 8].re 
	+A[10][ 2].re*B[ 2][ 8].im 
	+A[10][ 3].im*B[ 3][ 8].re 
	+A[10][ 3].re*B[ 3][ 8].im 
	+A[10][ 4].im*B[ 4][ 8].re 
	+A[10][ 4].re*B[ 4][ 8].im 
	+A[10][ 5].im*B[ 5][ 8].re 
	+A[10][ 5].re*B[ 5][ 8].im 
	+A[10][ 6].im*B[ 6][ 8].re 
	+A[10][ 6].re*B[ 6][ 8].im 
	+A[10][ 7].im*B[ 7][ 8].re 
	+A[10][ 7].re*B[ 7][ 8].im 
	+A[10][ 8].im*B[ 8][ 8].re 
	+A[10][ 8].re*B[ 8][ 8].im 
	+A[10][ 9].im*B[ 9][ 8].re 
	+A[10][ 9].re*B[ 9][ 8].im 
	+A[10][10].im*B[10][ 8].re 
	+A[10][10].re*B[10][ 8].im 
	+A[10][11].im*B[11][ 8].re 
	+A[10][11].re*B[11][ 8].im;

  C[10][ 9].re = 
	-A[10][ 0].im*B[ 0][ 9].im 
	+A[10][ 0].re*B[ 0][ 9].re 
	-A[10][ 1].im*B[ 1][ 9].im 
	+A[10][ 1].re*B[ 1][ 9].re 
	-A[10][ 2].im*B[ 2][ 9].im 
	+A[10][ 2].re*B[ 2][ 9].re 
	-A[10][ 3].im*B[ 3][ 9].im 
	+A[10][ 3].re*B[ 3][ 9].re 
	-A[10][ 4].im*B[ 4][ 9].im 
	+A[10][ 4].re*B[ 4][ 9].re 
	-A[10][ 5].im*B[ 5][ 9].im 
	+A[10][ 5].re*B[ 5][ 9].re 
	-A[10][ 6].im*B[ 6][ 9].im 
	+A[10][ 6].re*B[ 6][ 9].re 
	-A[10][ 7].im*B[ 7][ 9].im 
	+A[10][ 7].re*B[ 7][ 9].re 
	-A[10][ 8].im*B[ 8][ 9].im 
	+A[10][ 8].re*B[ 8][ 9].re 
	-A[10][ 9].im*B[ 9][ 9].im 
	+A[10][ 9].re*B[ 9][ 9].re 
	-A[10][10].im*B[10][ 9].im 
	+A[10][10].re*B[10][ 9].re 
	-A[10][11].im*B[11][ 9].im 
	+A[10][11].re*B[11][ 9].re;

  C[10][ 9].im = 
	 A[10][ 0].im*B[ 0][ 9].re 
	+A[10][ 0].re*B[ 0][ 9].im 
	+A[10][ 1].im*B[ 1][ 9].re 
	+A[10][ 1].re*B[ 1][ 9].im 
	+A[10][ 2].im*B[ 2][ 9].re 
	+A[10][ 2].re*B[ 2][ 9].im 
	+A[10][ 3].im*B[ 3][ 9].re 
	+A[10][ 3].re*B[ 3][ 9].im 
	+A[10][ 4].im*B[ 4][ 9].re 
	+A[10][ 4].re*B[ 4][ 9].im 
	+A[10][ 5].im*B[ 5][ 9].re 
	+A[10][ 5].re*B[ 5][ 9].im 
	+A[10][ 6].im*B[ 6][ 9].re 
	+A[10][ 6].re*B[ 6][ 9].im 
	+A[10][ 7].im*B[ 7][ 9].re 
	+A[10][ 7].re*B[ 7][ 9].im 
	+A[10][ 8].im*B[ 8][ 9].re 
	+A[10][ 8].re*B[ 8][ 9].im 
	+A[10][ 9].im*B[ 9][ 9].re 
	+A[10][ 9].re*B[ 9][ 9].im 
	+A[10][10].im*B[10][ 9].re 
	+A[10][10].re*B[10][ 9].im 
	+A[10][11].im*B[11][ 9].re 
	+A[10][11].re*B[11][ 9].im;

  C[10][10].re = 
	-A[10][ 0].im*B[ 0][10].im 
	+A[10][ 0].re*B[ 0][10].re 
	-A[10][ 1].im*B[ 1][10].im 
	+A[10][ 1].re*B[ 1][10].re 
	-A[10][ 2].im*B[ 2][10].im 
	+A[10][ 2].re*B[ 2][10].re 
	-A[10][ 3].im*B[ 3][10].im 
	+A[10][ 3].re*B[ 3][10].re 
	-A[10][ 4].im*B[ 4][10].im 
	+A[10][ 4].re*B[ 4][10].re 
	-A[10][ 5].im*B[ 5][10].im 
	+A[10][ 5].re*B[ 5][10].re 
	-A[10][ 6].im*B[ 6][10].im 
	+A[10][ 6].re*B[ 6][10].re 
	-A[10][ 7].im*B[ 7][10].im 
	+A[10][ 7].re*B[ 7][10].re 
	-A[10][ 8].im*B[ 8][10].im 
	+A[10][ 8].re*B[ 8][10].re 
	-A[10][ 9].im*B[ 9][10].im 
	+A[10][ 9].re*B[ 9][10].re 
	-A[10][10].im*B[10][10].im 
	+A[10][10].re*B[10][10].re 
	-A[10][11].im*B[11][10].im 
	+A[10][11].re*B[11][10].re;

  C[10][10].im = 
	 A[10][ 0].im*B[ 0][10].re 
	+A[10][ 0].re*B[ 0][10].im 
	+A[10][ 1].im*B[ 1][10].re 
	+A[10][ 1].re*B[ 1][10].im 
	+A[10][ 2].im*B[ 2][10].re 
	+A[10][ 2].re*B[ 2][10].im 
	+A[10][ 3].im*B[ 3][10].re 
	+A[10][ 3].re*B[ 3][10].im 
	+A[10][ 4].im*B[ 4][10].re 
	+A[10][ 4].re*B[ 4][10].im 
	+A[10][ 5].im*B[ 5][10].re 
	+A[10][ 5].re*B[ 5][10].im 
	+A[10][ 6].im*B[ 6][10].re 
	+A[10][ 6].re*B[ 6][10].im 
	+A[10][ 7].im*B[ 7][10].re 
	+A[10][ 7].re*B[ 7][10].im 
	+A[10][ 8].im*B[ 8][10].re 
	+A[10][ 8].re*B[ 8][10].im 
	+A[10][ 9].im*B[ 9][10].re 
	+A[10][ 9].re*B[ 9][10].im 
	+A[10][10].im*B[10][10].re 
	+A[10][10].re*B[10][10].im 
	+A[10][11].im*B[11][10].re 
	+A[10][11].re*B[11][10].im;

  C[10][11].re = 
	-A[10][ 0].im*B[ 0][11].im 
	+A[10][ 0].re*B[ 0][11].re 
	-A[10][ 1].im*B[ 1][11].im 
	+A[10][ 1].re*B[ 1][11].re 
	-A[10][ 2].im*B[ 2][11].im 
	+A[10][ 2].re*B[ 2][11].re 
	-A[10][ 3].im*B[ 3][11].im 
	+A[10][ 3].re*B[ 3][11].re 
	-A[10][ 4].im*B[ 4][11].im 
	+A[10][ 4].re*B[ 4][11].re 
	-A[10][ 5].im*B[ 5][11].im 
	+A[10][ 5].re*B[ 5][11].re 
	-A[10][ 6].im*B[ 6][11].im 
	+A[10][ 6].re*B[ 6][11].re 
	-A[10][ 7].im*B[ 7][11].im 
	+A[10][ 7].re*B[ 7][11].re 
	-A[10][ 8].im*B[ 8][11].im 
	+A[10][ 8].re*B[ 8][11].re 
	-A[10][ 9].im*B[ 9][11].im 
	+A[10][ 9].re*B[ 9][11].re 
	-A[10][10].im*B[10][11].im 
	+A[10][10].re*B[10][11].re 
	-A[10][11].im*B[11][11].im 
	+A[10][11].re*B[11][11].re;

  C[10][11].im = 
	 A[10][ 0].im*B[ 0][11].re 
	+A[10][ 0].re*B[ 0][11].im 
	+A[10][ 1].im*B[ 1][11].re 
	+A[10][ 1].re*B[ 1][11].im 
	+A[10][ 2].im*B[ 2][11].re 
	+A[10][ 2].re*B[ 2][11].im 
	+A[10][ 3].im*B[ 3][11].re 
	+A[10][ 3].re*B[ 3][11].im 
	+A[10][ 4].im*B[ 4][11].re 
	+A[10][ 4].re*B[ 4][11].im 
	+A[10][ 5].im*B[ 5][11].re 
	+A[10][ 5].re*B[ 5][11].im 
	+A[10][ 6].im*B[ 6][11].re 
	+A[10][ 6].re*B[ 6][11].im 
	+A[10][ 7].im*B[ 7][11].re 
	+A[10][ 7].re*B[ 7][11].im 
	+A[10][ 8].im*B[ 8][11].re 
	+A[10][ 8].re*B[ 8][11].im 
	+A[10][ 9].im*B[ 9][11].re 
	+A[10][ 9].re*B[ 9][11].im 
	+A[10][10].im*B[10][11].re 
	+A[10][10].re*B[10][11].im 
	+A[10][11].im*B[11][11].re 
	+A[10][11].re*B[11][11].im;

  C[11][ 0].re = 
	-A[11][ 0].im*B[ 0][ 0].im 
	+A[11][ 0].re*B[ 0][ 0].re 
	-A[11][ 1].im*B[ 1][ 0].im 
	+A[11][ 1].re*B[ 1][ 0].re 
	-A[11][ 2].im*B[ 2][ 0].im 
	+A[11][ 2].re*B[ 2][ 0].re 
	-A[11][ 3].im*B[ 3][ 0].im 
	+A[11][ 3].re*B[ 3][ 0].re 
	-A[11][ 4].im*B[ 4][ 0].im 
	+A[11][ 4].re*B[ 4][ 0].re 
	-A[11][ 5].im*B[ 5][ 0].im 
	+A[11][ 5].re*B[ 5][ 0].re 
	-A[11][ 6].im*B[ 6][ 0].im 
	+A[11][ 6].re*B[ 6][ 0].re 
	-A[11][ 7].im*B[ 7][ 0].im 
	+A[11][ 7].re*B[ 7][ 0].re 
	-A[11][ 8].im*B[ 8][ 0].im 
	+A[11][ 8].re*B[ 8][ 0].re 
	-A[11][ 9].im*B[ 9][ 0].im 
	+A[11][ 9].re*B[ 9][ 0].re 
	-A[11][10].im*B[10][ 0].im 
	+A[11][10].re*B[10][ 0].re 
	-A[11][11].im*B[11][ 0].im 
	+A[11][11].re*B[11][ 0].re;

  C[11][ 0].im = 
	 A[11][ 0].im*B[ 0][ 0].re 
	+A[11][ 0].re*B[ 0][ 0].im 
	+A[11][ 1].im*B[ 1][ 0].re 
	+A[11][ 1].re*B[ 1][ 0].im 
	+A[11][ 2].im*B[ 2][ 0].re 
	+A[11][ 2].re*B[ 2][ 0].im 
	+A[11][ 3].im*B[ 3][ 0].re 
	+A[11][ 3].re*B[ 3][ 0].im 
	+A[11][ 4].im*B[ 4][ 0].re 
	+A[11][ 4].re*B[ 4][ 0].im 
	+A[11][ 5].im*B[ 5][ 0].re 
	+A[11][ 5].re*B[ 5][ 0].im 
	+A[11][ 6].im*B[ 6][ 0].re 
	+A[11][ 6].re*B[ 6][ 0].im 
	+A[11][ 7].im*B[ 7][ 0].re 
	+A[11][ 7].re*B[ 7][ 0].im 
	+A[11][ 8].im*B[ 8][ 0].re 
	+A[11][ 8].re*B[ 8][ 0].im 
	+A[11][ 9].im*B[ 9][ 0].re 
	+A[11][ 9].re*B[ 9][ 0].im 
	+A[11][10].im*B[10][ 0].re 
	+A[11][10].re*B[10][ 0].im 
	+A[11][11].im*B[11][ 0].re 
	+A[11][11].re*B[11][ 0].im;

  C[11][ 1].re = 
	-A[11][ 0].im*B[ 0][ 1].im 
	+A[11][ 0].re*B[ 0][ 1].re 
	-A[11][ 1].im*B[ 1][ 1].im 
	+A[11][ 1].re*B[ 1][ 1].re 
	-A[11][ 2].im*B[ 2][ 1].im 
	+A[11][ 2].re*B[ 2][ 1].re 
	-A[11][ 3].im*B[ 3][ 1].im 
	+A[11][ 3].re*B[ 3][ 1].re 
	-A[11][ 4].im*B[ 4][ 1].im 
	+A[11][ 4].re*B[ 4][ 1].re 
	-A[11][ 5].im*B[ 5][ 1].im 
	+A[11][ 5].re*B[ 5][ 1].re 
	-A[11][ 6].im*B[ 6][ 1].im 
	+A[11][ 6].re*B[ 6][ 1].re 
	-A[11][ 7].im*B[ 7][ 1].im 
	+A[11][ 7].re*B[ 7][ 1].re 
	-A[11][ 8].im*B[ 8][ 1].im 
	+A[11][ 8].re*B[ 8][ 1].re 
	-A[11][ 9].im*B[ 9][ 1].im 
	+A[11][ 9].re*B[ 9][ 1].re 
	-A[11][10].im*B[10][ 1].im 
	+A[11][10].re*B[10][ 1].re 
	-A[11][11].im*B[11][ 1].im 
	+A[11][11].re*B[11][ 1].re;

  C[11][ 1].im = 
	 A[11][ 0].im*B[ 0][ 1].re 
	+A[11][ 0].re*B[ 0][ 1].im 
	+A[11][ 1].im*B[ 1][ 1].re 
	+A[11][ 1].re*B[ 1][ 1].im 
	+A[11][ 2].im*B[ 2][ 1].re 
	+A[11][ 2].re*B[ 2][ 1].im 
	+A[11][ 3].im*B[ 3][ 1].re 
	+A[11][ 3].re*B[ 3][ 1].im 
	+A[11][ 4].im*B[ 4][ 1].re 
	+A[11][ 4].re*B[ 4][ 1].im 
	+A[11][ 5].im*B[ 5][ 1].re 
	+A[11][ 5].re*B[ 5][ 1].im 
	+A[11][ 6].im*B[ 6][ 1].re 
	+A[11][ 6].re*B[ 6][ 1].im 
	+A[11][ 7].im*B[ 7][ 1].re 
	+A[11][ 7].re*B[ 7][ 1].im 
	+A[11][ 8].im*B[ 8][ 1].re 
	+A[11][ 8].re*B[ 8][ 1].im 
	+A[11][ 9].im*B[ 9][ 1].re 
	+A[11][ 9].re*B[ 9][ 1].im 
	+A[11][10].im*B[10][ 1].re 
	+A[11][10].re*B[10][ 1].im 
	+A[11][11].im*B[11][ 1].re 
	+A[11][11].re*B[11][ 1].im;

  C[11][ 2].re = 
	-A[11][ 0].im*B[ 0][ 2].im 
	+A[11][ 0].re*B[ 0][ 2].re 
	-A[11][ 1].im*B[ 1][ 2].im 
	+A[11][ 1].re*B[ 1][ 2].re 
	-A[11][ 2].im*B[ 2][ 2].im 
	+A[11][ 2].re*B[ 2][ 2].re 
	-A[11][ 3].im*B[ 3][ 2].im 
	+A[11][ 3].re*B[ 3][ 2].re 
	-A[11][ 4].im*B[ 4][ 2].im 
	+A[11][ 4].re*B[ 4][ 2].re 
	-A[11][ 5].im*B[ 5][ 2].im 
	+A[11][ 5].re*B[ 5][ 2].re 
	-A[11][ 6].im*B[ 6][ 2].im 
	+A[11][ 6].re*B[ 6][ 2].re 
	-A[11][ 7].im*B[ 7][ 2].im 
	+A[11][ 7].re*B[ 7][ 2].re 
	-A[11][ 8].im*B[ 8][ 2].im 
	+A[11][ 8].re*B[ 8][ 2].re 
	-A[11][ 9].im*B[ 9][ 2].im 
	+A[11][ 9].re*B[ 9][ 2].re 
	-A[11][10].im*B[10][ 2].im 
	+A[11][10].re*B[10][ 2].re 
	-A[11][11].im*B[11][ 2].im 
	+A[11][11].re*B[11][ 2].re;

  C[11][ 2].im = 
	 A[11][ 0].im*B[ 0][ 2].re 
	+A[11][ 0].re*B[ 0][ 2].im 
	+A[11][ 1].im*B[ 1][ 2].re 
	+A[11][ 1].re*B[ 1][ 2].im 
	+A[11][ 2].im*B[ 2][ 2].re 
	+A[11][ 2].re*B[ 2][ 2].im 
	+A[11][ 3].im*B[ 3][ 2].re 
	+A[11][ 3].re*B[ 3][ 2].im 
	+A[11][ 4].im*B[ 4][ 2].re 
	+A[11][ 4].re*B[ 4][ 2].im 
	+A[11][ 5].im*B[ 5][ 2].re 
	+A[11][ 5].re*B[ 5][ 2].im 
	+A[11][ 6].im*B[ 6][ 2].re 
	+A[11][ 6].re*B[ 6][ 2].im 
	+A[11][ 7].im*B[ 7][ 2].re 
	+A[11][ 7].re*B[ 7][ 2].im 
	+A[11][ 8].im*B[ 8][ 2].re 
	+A[11][ 8].re*B[ 8][ 2].im 
	+A[11][ 9].im*B[ 9][ 2].re 
	+A[11][ 9].re*B[ 9][ 2].im 
	+A[11][10].im*B[10][ 2].re 
	+A[11][10].re*B[10][ 2].im 
	+A[11][11].im*B[11][ 2].re 
	+A[11][11].re*B[11][ 2].im;

  C[11][ 3].re = 
	-A[11][ 0].im*B[ 0][ 3].im 
	+A[11][ 0].re*B[ 0][ 3].re 
	-A[11][ 1].im*B[ 1][ 3].im 
	+A[11][ 1].re*B[ 1][ 3].re 
	-A[11][ 2].im*B[ 2][ 3].im 
	+A[11][ 2].re*B[ 2][ 3].re 
	-A[11][ 3].im*B[ 3][ 3].im 
	+A[11][ 3].re*B[ 3][ 3].re 
	-A[11][ 4].im*B[ 4][ 3].im 
	+A[11][ 4].re*B[ 4][ 3].re 
	-A[11][ 5].im*B[ 5][ 3].im 
	+A[11][ 5].re*B[ 5][ 3].re 
	-A[11][ 6].im*B[ 6][ 3].im 
	+A[11][ 6].re*B[ 6][ 3].re 
	-A[11][ 7].im*B[ 7][ 3].im 
	+A[11][ 7].re*B[ 7][ 3].re 
	-A[11][ 8].im*B[ 8][ 3].im 
	+A[11][ 8].re*B[ 8][ 3].re 
	-A[11][ 9].im*B[ 9][ 3].im 
	+A[11][ 9].re*B[ 9][ 3].re 
	-A[11][10].im*B[10][ 3].im 
	+A[11][10].re*B[10][ 3].re 
	-A[11][11].im*B[11][ 3].im 
	+A[11][11].re*B[11][ 3].re;

  C[11][ 3].im = 
	 A[11][ 0].im*B[ 0][ 3].re 
	+A[11][ 0].re*B[ 0][ 3].im 
	+A[11][ 1].im*B[ 1][ 3].re 
	+A[11][ 1].re*B[ 1][ 3].im 
	+A[11][ 2].im*B[ 2][ 3].re 
	+A[11][ 2].re*B[ 2][ 3].im 
	+A[11][ 3].im*B[ 3][ 3].re 
	+A[11][ 3].re*B[ 3][ 3].im 
	+A[11][ 4].im*B[ 4][ 3].re 
	+A[11][ 4].re*B[ 4][ 3].im 
	+A[11][ 5].im*B[ 5][ 3].re 
	+A[11][ 5].re*B[ 5][ 3].im 
	+A[11][ 6].im*B[ 6][ 3].re 
	+A[11][ 6].re*B[ 6][ 3].im 
	+A[11][ 7].im*B[ 7][ 3].re 
	+A[11][ 7].re*B[ 7][ 3].im 
	+A[11][ 8].im*B[ 8][ 3].re 
	+A[11][ 8].re*B[ 8][ 3].im 
	+A[11][ 9].im*B[ 9][ 3].re 
	+A[11][ 9].re*B[ 9][ 3].im 
	+A[11][10].im*B[10][ 3].re 
	+A[11][10].re*B[10][ 3].im 
	+A[11][11].im*B[11][ 3].re 
	+A[11][11].re*B[11][ 3].im;

  C[11][ 4].re = 
	-A[11][ 0].im*B[ 0][ 4].im 
	+A[11][ 0].re*B[ 0][ 4].re 
	-A[11][ 1].im*B[ 1][ 4].im 
	+A[11][ 1].re*B[ 1][ 4].re 
	-A[11][ 2].im*B[ 2][ 4].im 
	+A[11][ 2].re*B[ 2][ 4].re 
	-A[11][ 3].im*B[ 3][ 4].im 
	+A[11][ 3].re*B[ 3][ 4].re 
	-A[11][ 4].im*B[ 4][ 4].im 
	+A[11][ 4].re*B[ 4][ 4].re 
	-A[11][ 5].im*B[ 5][ 4].im 
	+A[11][ 5].re*B[ 5][ 4].re 
	-A[11][ 6].im*B[ 6][ 4].im 
	+A[11][ 6].re*B[ 6][ 4].re 
	-A[11][ 7].im*B[ 7][ 4].im 
	+A[11][ 7].re*B[ 7][ 4].re 
	-A[11][ 8].im*B[ 8][ 4].im 
	+A[11][ 8].re*B[ 8][ 4].re 
	-A[11][ 9].im*B[ 9][ 4].im 
	+A[11][ 9].re*B[ 9][ 4].re 
	-A[11][10].im*B[10][ 4].im 
	+A[11][10].re*B[10][ 4].re 
	-A[11][11].im*B[11][ 4].im 
	+A[11][11].re*B[11][ 4].re;

  C[11][ 4].im = 
	 A[11][ 0].im*B[ 0][ 4].re 
	+A[11][ 0].re*B[ 0][ 4].im 
	+A[11][ 1].im*B[ 1][ 4].re 
	+A[11][ 1].re*B[ 1][ 4].im 
	+A[11][ 2].im*B[ 2][ 4].re 
	+A[11][ 2].re*B[ 2][ 4].im 
	+A[11][ 3].im*B[ 3][ 4].re 
	+A[11][ 3].re*B[ 3][ 4].im 
	+A[11][ 4].im*B[ 4][ 4].re 
	+A[11][ 4].re*B[ 4][ 4].im 
	+A[11][ 5].im*B[ 5][ 4].re 
	+A[11][ 5].re*B[ 5][ 4].im 
	+A[11][ 6].im*B[ 6][ 4].re 
	+A[11][ 6].re*B[ 6][ 4].im 
	+A[11][ 7].im*B[ 7][ 4].re 
	+A[11][ 7].re*B[ 7][ 4].im 
	+A[11][ 8].im*B[ 8][ 4].re 
	+A[11][ 8].re*B[ 8][ 4].im 
	+A[11][ 9].im*B[ 9][ 4].re 
	+A[11][ 9].re*B[ 9][ 4].im 
	+A[11][10].im*B[10][ 4].re 
	+A[11][10].re*B[10][ 4].im 
	+A[11][11].im*B[11][ 4].re 
	+A[11][11].re*B[11][ 4].im;

  C[11][ 5].re = 
	-A[11][ 0].im*B[ 0][ 5].im 
	+A[11][ 0].re*B[ 0][ 5].re 
	-A[11][ 1].im*B[ 1][ 5].im 
	+A[11][ 1].re*B[ 1][ 5].re 
	-A[11][ 2].im*B[ 2][ 5].im 
	+A[11][ 2].re*B[ 2][ 5].re 
	-A[11][ 3].im*B[ 3][ 5].im 
	+A[11][ 3].re*B[ 3][ 5].re 
	-A[11][ 4].im*B[ 4][ 5].im 
	+A[11][ 4].re*B[ 4][ 5].re 
	-A[11][ 5].im*B[ 5][ 5].im 
	+A[11][ 5].re*B[ 5][ 5].re 
	-A[11][ 6].im*B[ 6][ 5].im 
	+A[11][ 6].re*B[ 6][ 5].re 
	-A[11][ 7].im*B[ 7][ 5].im 
	+A[11][ 7].re*B[ 7][ 5].re 
	-A[11][ 8].im*B[ 8][ 5].im 
	+A[11][ 8].re*B[ 8][ 5].re 
	-A[11][ 9].im*B[ 9][ 5].im 
	+A[11][ 9].re*B[ 9][ 5].re 
	-A[11][10].im*B[10][ 5].im 
	+A[11][10].re*B[10][ 5].re 
	-A[11][11].im*B[11][ 5].im 
	+A[11][11].re*B[11][ 5].re;

  C[11][ 5].im = 
	 A[11][ 0].im*B[ 0][ 5].re 
	+A[11][ 0].re*B[ 0][ 5].im 
	+A[11][ 1].im*B[ 1][ 5].re 
	+A[11][ 1].re*B[ 1][ 5].im 
	+A[11][ 2].im*B[ 2][ 5].re 
	+A[11][ 2].re*B[ 2][ 5].im 
	+A[11][ 3].im*B[ 3][ 5].re 
	+A[11][ 3].re*B[ 3][ 5].im 
	+A[11][ 4].im*B[ 4][ 5].re 
	+A[11][ 4].re*B[ 4][ 5].im 
	+A[11][ 5].im*B[ 5][ 5].re 
	+A[11][ 5].re*B[ 5][ 5].im 
	+A[11][ 6].im*B[ 6][ 5].re 
	+A[11][ 6].re*B[ 6][ 5].im 
	+A[11][ 7].im*B[ 7][ 5].re 
	+A[11][ 7].re*B[ 7][ 5].im 
	+A[11][ 8].im*B[ 8][ 5].re 
	+A[11][ 8].re*B[ 8][ 5].im 
	+A[11][ 9].im*B[ 9][ 5].re 
	+A[11][ 9].re*B[ 9][ 5].im 
	+A[11][10].im*B[10][ 5].re 
	+A[11][10].re*B[10][ 5].im 
	+A[11][11].im*B[11][ 5].re 
	+A[11][11].re*B[11][ 5].im;

  C[11][ 6].re = 
	-A[11][ 0].im*B[ 0][ 6].im 
	+A[11][ 0].re*B[ 0][ 6].re 
	-A[11][ 1].im*B[ 1][ 6].im 
	+A[11][ 1].re*B[ 1][ 6].re 
	-A[11][ 2].im*B[ 2][ 6].im 
	+A[11][ 2].re*B[ 2][ 6].re 
	-A[11][ 3].im*B[ 3][ 6].im 
	+A[11][ 3].re*B[ 3][ 6].re 
	-A[11][ 4].im*B[ 4][ 6].im 
	+A[11][ 4].re*B[ 4][ 6].re 
	-A[11][ 5].im*B[ 5][ 6].im 
	+A[11][ 5].re*B[ 5][ 6].re 
	-A[11][ 6].im*B[ 6][ 6].im 
	+A[11][ 6].re*B[ 6][ 6].re 
	-A[11][ 7].im*B[ 7][ 6].im 
	+A[11][ 7].re*B[ 7][ 6].re 
	-A[11][ 8].im*B[ 8][ 6].im 
	+A[11][ 8].re*B[ 8][ 6].re 
	-A[11][ 9].im*B[ 9][ 6].im 
	+A[11][ 9].re*B[ 9][ 6].re 
	-A[11][10].im*B[10][ 6].im 
	+A[11][10].re*B[10][ 6].re 
	-A[11][11].im*B[11][ 6].im 
	+A[11][11].re*B[11][ 6].re;

  C[11][ 6].im = 
	 A[11][ 0].im*B[ 0][ 6].re 
	+A[11][ 0].re*B[ 0][ 6].im 
	+A[11][ 1].im*B[ 1][ 6].re 
	+A[11][ 1].re*B[ 1][ 6].im 
	+A[11][ 2].im*B[ 2][ 6].re 
	+A[11][ 2].re*B[ 2][ 6].im 
	+A[11][ 3].im*B[ 3][ 6].re 
	+A[11][ 3].re*B[ 3][ 6].im 
	+A[11][ 4].im*B[ 4][ 6].re 
	+A[11][ 4].re*B[ 4][ 6].im 
	+A[11][ 5].im*B[ 5][ 6].re 
	+A[11][ 5].re*B[ 5][ 6].im 
	+A[11][ 6].im*B[ 6][ 6].re 
	+A[11][ 6].re*B[ 6][ 6].im 
	+A[11][ 7].im*B[ 7][ 6].re 
	+A[11][ 7].re*B[ 7][ 6].im 
	+A[11][ 8].im*B[ 8][ 6].re 
	+A[11][ 8].re*B[ 8][ 6].im 
	+A[11][ 9].im*B[ 9][ 6].re 
	+A[11][ 9].re*B[ 9][ 6].im 
	+A[11][10].im*B[10][ 6].re 
	+A[11][10].re*B[10][ 6].im 
	+A[11][11].im*B[11][ 6].re 
	+A[11][11].re*B[11][ 6].im;

  C[11][ 7].re = 
	-A[11][ 0].im*B[ 0][ 7].im 
	+A[11][ 0].re*B[ 0][ 7].re 
	-A[11][ 1].im*B[ 1][ 7].im 
	+A[11][ 1].re*B[ 1][ 7].re 
	-A[11][ 2].im*B[ 2][ 7].im 
	+A[11][ 2].re*B[ 2][ 7].re 
	-A[11][ 3].im*B[ 3][ 7].im 
	+A[11][ 3].re*B[ 3][ 7].re 
	-A[11][ 4].im*B[ 4][ 7].im 
	+A[11][ 4].re*B[ 4][ 7].re 
	-A[11][ 5].im*B[ 5][ 7].im 
	+A[11][ 5].re*B[ 5][ 7].re 
	-A[11][ 6].im*B[ 6][ 7].im 
	+A[11][ 6].re*B[ 6][ 7].re 
	-A[11][ 7].im*B[ 7][ 7].im 
	+A[11][ 7].re*B[ 7][ 7].re 
	-A[11][ 8].im*B[ 8][ 7].im 
	+A[11][ 8].re*B[ 8][ 7].re 
	-A[11][ 9].im*B[ 9][ 7].im 
	+A[11][ 9].re*B[ 9][ 7].re 
	-A[11][10].im*B[10][ 7].im 
	+A[11][10].re*B[10][ 7].re 
	-A[11][11].im*B[11][ 7].im 
	+A[11][11].re*B[11][ 7].re;

  C[11][ 7].im = 
	 A[11][ 0].im*B[ 0][ 7].re 
	+A[11][ 0].re*B[ 0][ 7].im 
	+A[11][ 1].im*B[ 1][ 7].re 
	+A[11][ 1].re*B[ 1][ 7].im 
	+A[11][ 2].im*B[ 2][ 7].re 
	+A[11][ 2].re*B[ 2][ 7].im 
	+A[11][ 3].im*B[ 3][ 7].re 
	+A[11][ 3].re*B[ 3][ 7].im 
	+A[11][ 4].im*B[ 4][ 7].re 
	+A[11][ 4].re*B[ 4][ 7].im 
	+A[11][ 5].im*B[ 5][ 7].re 
	+A[11][ 5].re*B[ 5][ 7].im 
	+A[11][ 6].im*B[ 6][ 7].re 
	+A[11][ 6].re*B[ 6][ 7].im 
	+A[11][ 7].im*B[ 7][ 7].re 
	+A[11][ 7].re*B[ 7][ 7].im 
	+A[11][ 8].im*B[ 8][ 7].re 
	+A[11][ 8].re*B[ 8][ 7].im 
	+A[11][ 9].im*B[ 9][ 7].re 
	+A[11][ 9].re*B[ 9][ 7].im 
	+A[11][10].im*B[10][ 7].re 
	+A[11][10].re*B[10][ 7].im 
	+A[11][11].im*B[11][ 7].re 
	+A[11][11].re*B[11][ 7].im;

  C[11][ 8].re = 
	-A[11][ 0].im*B[ 0][ 8].im 
	+A[11][ 0].re*B[ 0][ 8].re 
	-A[11][ 1].im*B[ 1][ 8].im 
	+A[11][ 1].re*B[ 1][ 8].re 
	-A[11][ 2].im*B[ 2][ 8].im 
	+A[11][ 2].re*B[ 2][ 8].re 
	-A[11][ 3].im*B[ 3][ 8].im 
	+A[11][ 3].re*B[ 3][ 8].re 
	-A[11][ 4].im*B[ 4][ 8].im 
	+A[11][ 4].re*B[ 4][ 8].re 
	-A[11][ 5].im*B[ 5][ 8].im 
	+A[11][ 5].re*B[ 5][ 8].re 
	-A[11][ 6].im*B[ 6][ 8].im 
	+A[11][ 6].re*B[ 6][ 8].re 
	-A[11][ 7].im*B[ 7][ 8].im 
	+A[11][ 7].re*B[ 7][ 8].re 
	-A[11][ 8].im*B[ 8][ 8].im 
	+A[11][ 8].re*B[ 8][ 8].re 
	-A[11][ 9].im*B[ 9][ 8].im 
	+A[11][ 9].re*B[ 9][ 8].re 
	-A[11][10].im*B[10][ 8].im 
	+A[11][10].re*B[10][ 8].re 
	-A[11][11].im*B[11][ 8].im 
	+A[11][11].re*B[11][ 8].re;

  C[11][ 8].im = 
	 A[11][ 0].im*B[ 0][ 8].re 
	+A[11][ 0].re*B[ 0][ 8].im 
	+A[11][ 1].im*B[ 1][ 8].re 
	+A[11][ 1].re*B[ 1][ 8].im 
	+A[11][ 2].im*B[ 2][ 8].re 
	+A[11][ 2].re*B[ 2][ 8].im 
	+A[11][ 3].im*B[ 3][ 8].re 
	+A[11][ 3].re*B[ 3][ 8].im 
	+A[11][ 4].im*B[ 4][ 8].re 
	+A[11][ 4].re*B[ 4][ 8].im 
	+A[11][ 5].im*B[ 5][ 8].re 
	+A[11][ 5].re*B[ 5][ 8].im 
	+A[11][ 6].im*B[ 6][ 8].re 
	+A[11][ 6].re*B[ 6][ 8].im 
	+A[11][ 7].im*B[ 7][ 8].re 
	+A[11][ 7].re*B[ 7][ 8].im 
	+A[11][ 8].im*B[ 8][ 8].re 
	+A[11][ 8].re*B[ 8][ 8].im 
	+A[11][ 9].im*B[ 9][ 8].re 
	+A[11][ 9].re*B[ 9][ 8].im 
	+A[11][10].im*B[10][ 8].re 
	+A[11][10].re*B[10][ 8].im 
	+A[11][11].im*B[11][ 8].re 
	+A[11][11].re*B[11][ 8].im;

  C[11][ 9].re = 
	-A[11][ 0].im*B[ 0][ 9].im 
	+A[11][ 0].re*B[ 0][ 9].re 
	-A[11][ 1].im*B[ 1][ 9].im 
	+A[11][ 1].re*B[ 1][ 9].re 
	-A[11][ 2].im*B[ 2][ 9].im 
	+A[11][ 2].re*B[ 2][ 9].re 
	-A[11][ 3].im*B[ 3][ 9].im 
	+A[11][ 3].re*B[ 3][ 9].re 
	-A[11][ 4].im*B[ 4][ 9].im 
	+A[11][ 4].re*B[ 4][ 9].re 
	-A[11][ 5].im*B[ 5][ 9].im 
	+A[11][ 5].re*B[ 5][ 9].re 
	-A[11][ 6].im*B[ 6][ 9].im 
	+A[11][ 6].re*B[ 6][ 9].re 
	-A[11][ 7].im*B[ 7][ 9].im 
	+A[11][ 7].re*B[ 7][ 9].re 
	-A[11][ 8].im*B[ 8][ 9].im 
	+A[11][ 8].re*B[ 8][ 9].re 
	-A[11][ 9].im*B[ 9][ 9].im 
	+A[11][ 9].re*B[ 9][ 9].re 
	-A[11][10].im*B[10][ 9].im 
	+A[11][10].re*B[10][ 9].re 
	-A[11][11].im*B[11][ 9].im 
	+A[11][11].re*B[11][ 9].re;

  C[11][ 9].im = 
	 A[11][ 0].im*B[ 0][ 9].re 
	+A[11][ 0].re*B[ 0][ 9].im 
	+A[11][ 1].im*B[ 1][ 9].re 
	+A[11][ 1].re*B[ 1][ 9].im 
	+A[11][ 2].im*B[ 2][ 9].re 
	+A[11][ 2].re*B[ 2][ 9].im 
	+A[11][ 3].im*B[ 3][ 9].re 
	+A[11][ 3].re*B[ 3][ 9].im 
	+A[11][ 4].im*B[ 4][ 9].re 
	+A[11][ 4].re*B[ 4][ 9].im 
	+A[11][ 5].im*B[ 5][ 9].re 
	+A[11][ 5].re*B[ 5][ 9].im 
	+A[11][ 6].im*B[ 6][ 9].re 
	+A[11][ 6].re*B[ 6][ 9].im 
	+A[11][ 7].im*B[ 7][ 9].re 
	+A[11][ 7].re*B[ 7][ 9].im 
	+A[11][ 8].im*B[ 8][ 9].re 
	+A[11][ 8].re*B[ 8][ 9].im 
	+A[11][ 9].im*B[ 9][ 9].re 
	+A[11][ 9].re*B[ 9][ 9].im 
	+A[11][10].im*B[10][ 9].re 
	+A[11][10].re*B[10][ 9].im 
	+A[11][11].im*B[11][ 9].re 
	+A[11][11].re*B[11][ 9].im;

  C[11][10].re = 
	-A[11][ 0].im*B[ 0][10].im 
	+A[11][ 0].re*B[ 0][10].re 
	-A[11][ 1].im*B[ 1][10].im 
	+A[11][ 1].re*B[ 1][10].re 
	-A[11][ 2].im*B[ 2][10].im 
	+A[11][ 2].re*B[ 2][10].re 
	-A[11][ 3].im*B[ 3][10].im 
	+A[11][ 3].re*B[ 3][10].re 
	-A[11][ 4].im*B[ 4][10].im 
	+A[11][ 4].re*B[ 4][10].re 
	-A[11][ 5].im*B[ 5][10].im 
	+A[11][ 5].re*B[ 5][10].re 
	-A[11][ 6].im*B[ 6][10].im 
	+A[11][ 6].re*B[ 6][10].re 
	-A[11][ 7].im*B[ 7][10].im 
	+A[11][ 7].re*B[ 7][10].re 
	-A[11][ 8].im*B[ 8][10].im 
	+A[11][ 8].re*B[ 8][10].re 
	-A[11][ 9].im*B[ 9][10].im 
	+A[11][ 9].re*B[ 9][10].re 
	-A[11][10].im*B[10][10].im 
	+A[11][10].re*B[10][10].re 
	-A[11][11].im*B[11][10].im 
	+A[11][11].re*B[11][10].re;

  C[11][10].im = 
	 A[11][ 0].im*B[ 0][10].re 
	+A[11][ 0].re*B[ 0][10].im 
	+A[11][ 1].im*B[ 1][10].re 
	+A[11][ 1].re*B[ 1][10].im 
	+A[11][ 2].im*B[ 2][10].re 
	+A[11][ 2].re*B[ 2][10].im 
	+A[11][ 3].im*B[ 3][10].re 
	+A[11][ 3].re*B[ 3][10].im 
	+A[11][ 4].im*B[ 4][10].re 
	+A[11][ 4].re*B[ 4][10].im 
	+A[11][ 5].im*B[ 5][10].re 
	+A[11][ 5].re*B[ 5][10].im 
	+A[11][ 6].im*B[ 6][10].re 
	+A[11][ 6].re*B[ 6][10].im 
	+A[11][ 7].im*B[ 7][10].re 
	+A[11][ 7].re*B[ 7][10].im 
	+A[11][ 8].im*B[ 8][10].re 
	+A[11][ 8].re*B[ 8][10].im 
	+A[11][ 9].im*B[ 9][10].re 
	+A[11][ 9].re*B[ 9][10].im 
	+A[11][10].im*B[10][10].re 
	+A[11][10].re*B[10][10].im 
	+A[11][11].im*B[11][10].re 
	+A[11][11].re*B[11][10].im;

  C[11][11].re = 
	-A[11][ 0].im*B[ 0][11].im 
	+A[11][ 0].re*B[ 0][11].re 
	-A[11][ 1].im*B[ 1][11].im 
	+A[11][ 1].re*B[ 1][11].re 
	-A[11][ 2].im*B[ 2][11].im 
	+A[11][ 2].re*B[ 2][11].re 
	-A[11][ 3].im*B[ 3][11].im 
	+A[11][ 3].re*B[ 3][11].re 
	-A[11][ 4].im*B[ 4][11].im 
	+A[11][ 4].re*B[ 4][11].re 
	-A[11][ 5].im*B[ 5][11].im 
	+A[11][ 5].re*B[ 5][11].re 
	-A[11][ 6].im*B[ 6][11].im 
	+A[11][ 6].re*B[ 6][11].re 
	-A[11][ 7].im*B[ 7][11].im 
	+A[11][ 7].re*B[ 7][11].re 
	-A[11][ 8].im*B[ 8][11].im 
	+A[11][ 8].re*B[ 8][11].re 
	-A[11][ 9].im*B[ 9][11].im 
	+A[11][ 9].re*B[ 9][11].re 
	-A[11][10].im*B[10][11].im 
	+A[11][10].re*B[10][11].re 
	-A[11][11].im*B[11][11].im 
	+A[11][11].re*B[11][11].re;

  C[11][11].im = 
	 A[11][ 0].im*B[ 0][11].re 
	+A[11][ 0].re*B[ 0][11].im 
	+A[11][ 1].im*B[ 1][11].re 
	+A[11][ 1].re*B[ 1][11].im 
	+A[11][ 2].im*B[ 2][11].re 
	+A[11][ 2].re*B[ 2][11].im 
	+A[11][ 3].im*B[ 3][11].re 
	+A[11][ 3].re*B[ 3][11].im 
	+A[11][ 4].im*B[ 4][11].re 
	+A[11][ 4].re*B[ 4][11].im 
	+A[11][ 5].im*B[ 5][11].re 
	+A[11][ 5].re*B[ 5][11].im 
	+A[11][ 6].im*B[ 6][11].re 
	+A[11][ 6].re*B[ 6][11].im 
	+A[11][ 7].im*B[ 7][11].re 
	+A[11][ 7].re*B[ 7][11].im 
	+A[11][ 8].im*B[ 8][11].re 
	+A[11][ 8].re*B[ 8][11].im 
	+A[11][ 9].im*B[ 9][11].re 
	+A[11][ 9].re*B[ 9][11].im 
	+A[11][10].im*B[10][11].re 
	+A[11][10].re*B[10][11].im 
	+A[11][11].im*B[11][11].re 
	+A[11][11].re*B[11][11].im;

  return;
}

#endif /* NC == 3 */
/* END python generated segment */


#endif /* _QPB_PROP_OPS_H */

