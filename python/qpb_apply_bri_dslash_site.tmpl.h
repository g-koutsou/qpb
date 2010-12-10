#ifndef _QPB_APPLY_BRI_DSLASH_SITE_H
#define _QPB_APPLY_BRI_DSLASH_SITE_H 1
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_sun_mul.h>
#include <qpb_spinor_gammas.h>

__inline__ void
qpb_apply_bri_dslash_site(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0, aux_spinor1, aux_spinor2;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
  qpb_complex *sp2 = (qpb_complex *)&aux_spinor2;
  unsigned int nn, idx;

  XXXBODYXXX

  return;
}
#endif /* _QPB_APPLY_BRI_DSLASH_SITE_H */
