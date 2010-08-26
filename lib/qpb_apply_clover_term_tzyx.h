#ifndef _QPB_APPLY_CLOVER_TERM_TZYX_H
#define _QPB_APPLY_CLOVER_TERM_TZYX_H 1
#include <qpb_types.h>

extern inline void qpb_apply_clover_term_xy(qpb_complex *, void **, void **, int);
extern inline void qpb_apply_clover_term_xz(qpb_complex *, void **, void **, int);
extern inline void qpb_apply_clover_term_xt(qpb_complex *, void **, void **, int);
extern inline void qpb_apply_clover_term_yz(qpb_complex *, void **, void **, int);
extern inline void qpb_apply_clover_term_yt(qpb_complex *, void **, void **, int);
extern inline void qpb_apply_clover_term_zt(qpb_complex *, void **, void **, int);

inline void
qpb_apply_clover_term_xy(qpb_complex *out, void **in, void **clover, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_complex *sp_ptr;
  qpb_complex *link;
  int mu = 3, nu = 2;

  link = (qpb_complex *) ((qpb_link *)clover[v] + clover_idx[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  SIGMAXY(sp, sp_ptr);
  COL_MPLY_PEQ(out, link, sp);

  return;
}

inline void
qpb_apply_clover_term_xz(qpb_complex *out, void **in, void **clover, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_complex *sp_ptr;
  qpb_complex *link;
  int mu = 3, nu = 1;

  link = (qpb_complex *) ((qpb_link *)clover[v] + clover_idx[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  SIGMAXZ(sp, sp_ptr);
  COL_MPLY_PEQ(out, link, sp);

  return;
}

inline void
qpb_apply_clover_term_xt(qpb_complex *out, void **in, void **clover, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_complex *sp_ptr;
  qpb_complex *link;
  int mu = 3, nu = 0;

  link = (qpb_complex *) ((qpb_link *)clover[v] + clover_idx[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  SIGMAXT(sp, sp_ptr);
  COL_MPLY_PEQ(out, link, sp);

  return;
}

inline void
qpb_apply_clover_term_yz(qpb_complex *out, void **in, void **clover, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_complex *sp_ptr;
  qpb_complex *link;
  int mu = 2, nu = 1;

  link = (qpb_complex *) ((qpb_link *)clover[v] + clover_idx[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  SIGMAYZ(sp, sp_ptr);
  COL_MPLY_PEQ(out, link, sp);

  return;
}

inline void
qpb_apply_clover_term_yt(qpb_complex *out, void **in, void **clover, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_complex *sp_ptr;
  qpb_complex *link;
  int mu = 2, nu = 0;

  link = (qpb_complex *) ((qpb_link *)clover[v] + clover_idx[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  SIGMAYT(sp, sp_ptr);
  COL_MPLY_PEQ(out, link, sp);

  return;
}

inline void
qpb_apply_clover_term_zt(qpb_complex *out, void **in, void **clover, int v)
{
  qpb_spinor aux_spinor;
  qpb_complex *sp = (qpb_complex *)&aux_spinor;
  qpb_complex *sp_ptr;
  qpb_complex *link;
  int mu = 1, nu = 0;

  link = (qpb_complex *) ((qpb_link *)clover[v] + clover_idx[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  SIGMAZT(sp, sp_ptr);
  COL_MPLY_PEQ(out, link, sp);

  return;
}
#endif /* _QPB_APPLY_CLOVER_TERM_TZYX_H */
