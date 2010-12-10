#ifndef _QPB_APPLY_DSLASH_SITE_H
#define _QPB_APPLY_DSLASH_SITE_H 1
#include <qpb_types.h>
#include <qpb_spinor_sun_mul.h>
#include <qpb_spinor_gammas.h>

__inline__ void
qpb_apply_dslash_site(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0, aux_spinor1, aux_spinor2;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
  qpb_complex *sp2 = (qpb_complex *)&aux_spinor2;
  qpb_complex *ptr;
  int dir;

  /* t */
  dir = 0;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);

  spinor_xmy(sp2, sp0, sp1);
  spinor_gamma_pt(out, sp2);
  spinor_xmy(out, out, sp0);
  spinor_xmy(out, out, sp1);

  /* z */
  dir = 1;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);

  spinor_xmy(sp2, sp0, sp1);
  spinor_gamma_peq_pz(out, sp2);
  spinor_xmy(out, out, sp0);
  spinor_xmy(out, out, sp1);

  /* y */
  dir = 2;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);

  spinor_xmy(sp2, sp0, sp1);
  spinor_gamma_peq_py(out, sp2);
  spinor_xmy(out, out, sp0);
  spinor_xmy(out, out, sp1);

  /* x */
  dir = 3;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);

  spinor_xmy(sp2, sp0, sp1);
  spinor_gamma_peq_px(out, sp2);
  spinor_xmy(out, out, sp0);
  spinor_xmy(out, out, sp1);

  return;
}
#endif /* _QPB_APPLY_DSLASH_SITE_H */
