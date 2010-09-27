#ifndef _QPB_APPLY_LAPLACE_TZYX_H
#define _QPB_APPLY_LAPLACE_TZYX_H 1

__inline__ void
qpb_apply_laplace_t(qpb_complex *out, void **in, void **gauge, int v)
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
  COLSPIN_SUB(out, out, sp0);
  COLSPIN_SUB(out, out, sp1);
  return;
}

__inline__ void
qpb_apply_laplace_p_z(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;
  
  int dir = 1;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  COL_MPLY(sp0, link, ptr);
  COLSPIN_SUB(out, out, sp0);
  
  return;
}

__inline__ void
qpb_apply_laplace_m_z(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 1;
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp0, link, ptr);
  COLSPIN_SUB(out, out, sp0);

  return;
}

__inline__ void
qpb_apply_laplace_z(qpb_complex *out, void **in, void **gauge, int v)
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
  COLSPIN_SUB(out, out, sp0);
  COLSPIN_SUB(out, out, sp1);

  return;
}

__inline__ void
qpb_apply_laplace_p_y(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 2;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  COL_MPLY(sp0, link, ptr);
  COLSPIN_SUB(out, out, sp0);

  return;
}

__inline__ void
qpb_apply_laplace_m_y(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 2;
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp0, link, ptr);
  COLSPIN_SUB(out, out, sp0);

  return;
}

__inline__ void
qpb_apply_laplace_y(qpb_complex *out, void **in, void **gauge, int v)
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
  COLSPIN_SUB(out, out, sp0);
  COLSPIN_SUB(out, out, sp1);
  return;
}

__inline__ void
qpb_apply_laplace_p_x(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 3;
  link = (qpb_complex *)((qpb_link *) gauge[v] + dir);
  ptr = (qpb_complex *) in[nneigh[dir][v]];
  COL_MPLY(sp0, link, ptr);
  COLSPIN_SUB(out, out, sp0);

  return;
}


__inline__ void
qpb_apply_laplace_m_x(qpb_complex *out, void **in, void **gauge, int v)
{
  qpb_spinor aux_spinor0;
  qpb_complex *link;
  qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
  qpb_complex *ptr;

  int dir = 3;
  link = (qpb_complex *)((qpb_link *) gauge[nneigh[dir+ND][v]] + dir);
  ptr = (qpb_complex *) in[nneigh[dir+ND][v]];
  COL_MPLY_DAG(sp0, link, ptr);
  COLSPIN_SUB(out, out, sp0);

  return;
}

__inline__ void
qpb_apply_laplace_x(qpb_complex *out, void **in, void **gauge, int v)
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
  COLSPIN_SUB(out, out, sp0);
  COLSPIN_SUB(out, out, sp1);

  return;
}
#endif /* _QPB_APPLY_LAPLACE_TZYX_H */
