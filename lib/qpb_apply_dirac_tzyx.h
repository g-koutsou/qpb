#ifndef _QPB_APPLY_DIRAC_TZYX_H
#define _QPB_APPLY_DIRAC_TZYX_H 1
#include <qpb_types.h>
#include <qpb_spinor_sun_mul.h>
#include <qpb_spinor_gammas.h>

__inline__ void
qpb_apply_dirac_t(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0, aux_spinor1;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
  qpb_complex *ptr;

  int dir = 0;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);
  spinor_xmy(sp0, sp0, sp1);
  spinor_gamma_pt(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_p_z(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 1;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  spinor_gamma_peq_pz(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_m_z(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 1;
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp0, link, ptr);
  spinor_gamma_peq_mz(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_z(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0, aux_spinor1;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
  qpb_complex *ptr;

  int dir = 1;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);
  spinor_xmy(sp0, sp0, sp1);
  spinor_gamma_peq_pz(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_p_y(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 2;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  spinor_gamma_peq_py(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_m_y(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 2;
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp0, link, ptr);
  spinor_gamma_peq_my(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_y(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0, aux_spinor1;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
  qpb_complex *ptr;

  int dir = 2;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);
  spinor_xmy(sp0, sp0, sp1);
  spinor_gamma_peq_py(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_p_x(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 3;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  spinor_gamma_peq_px(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_m_x(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 3;
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp0, link, ptr);
  spinor_gamma_peq_mx(out, sp0);

  return;
}

__inline__ void
qpb_apply_dirac_x(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0, aux_spinor1;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
  qpb_complex *ptr;

  int dir = 3;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  spinor_sun_mul(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  spinor_sun_dag_mul(sp1, link, ptr);
  spinor_xmy(sp0, sp0, sp1);
  spinor_gamma_peq_px(out, sp0);

  return;
}
#endif /* _QPB_APPLY_DIRAC_TZYX_H */
