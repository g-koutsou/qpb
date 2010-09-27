#ifndef _QPB_APPLY_DIRAC_TZYX_H
#define _QPB_APPLY_DIRAC_TZYX_H 1
#include <qpb_types.h>

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
  COL_MPLY(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp1, link, ptr);
  COLSPIN_SUB(sp0, sp0, sp1);
  GAMMAT(out, sp0);

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
  COL_MPLY(sp0, link, ptr);
  GAMMAZ_PEQ(out, sp0);

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
  COL_MPLY_DAG(sp0, link, ptr);
  GAMMAZ_MEQ(out, sp0);

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
  COL_MPLY(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp1, link, ptr);
  COLSPIN_SUB(sp0, sp0, sp1);
  GAMMAZ_PEQ(out, sp0);

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
  COL_MPLY(sp0, link, ptr);
  GAMMAY_PEQ(out, sp0);

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
  COL_MPLY_DAG(sp0, link, ptr);
  GAMMAY_MEQ(out, sp0);

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
  COL_MPLY(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp1, link, ptr);
  COLSPIN_SUB(sp0, sp0, sp1);
  GAMMAY_PEQ(out, sp0);

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
  COL_MPLY(sp0, link, ptr);
  GAMMAX_PEQ(out, sp0);

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
  COL_MPLY_DAG(sp0, link, ptr);
  GAMMAX_MEQ(out, sp0);

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
  COL_MPLY(sp0, link, ptr);
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp1, link, ptr);
  COLSPIN_SUB(sp0, sp0, sp1);
  GAMMAX_PEQ(out, sp0);

  return;
}
#endif /* _QPB_APPLY_DIRAC_TZYX_H */
