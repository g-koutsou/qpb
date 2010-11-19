#ifndef _QPB_APPLY_CLOVER_TERM_TZYX_H
#define _QPB_APPLY_CLOVER_TERM_TZYX_H 1
#include <qpb_types.h>
#include <qpb_spinor_sigmas.h>

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

  link = (qpb_complex *) ((qpb_link *)clover[v] + dir_comb_2.index[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  spinor_sigma_xy(sp, sp_ptr);
  spinor_sun_peq_mul(out, link, sp);

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

  link = (qpb_complex *) ((qpb_link *)clover[v] + dir_comb_2.index[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  spinor_sigma_xz(sp, sp_ptr);
  spinor_sun_peq_mul(out, link, sp);

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

  link = (qpb_complex *) ((qpb_link *)clover[v] + dir_comb_2.index[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  spinor_sigma_xt(sp, sp_ptr);
  spinor_sun_peq_mul(out, link, sp);

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

  link = (qpb_complex *) ((qpb_link *)clover[v] + dir_comb_2.index[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  spinor_sigma_yz(sp, sp_ptr);
  spinor_sun_peq_mul(out, link, sp);

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

  link = (qpb_complex *) ((qpb_link *)clover[v] + dir_comb_2.index[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  spinor_sigma_yt(sp, sp_ptr);
  spinor_sun_peq_mul(out, link, sp);

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

  link = (qpb_complex *) ((qpb_link *)clover[v] + dir_comb_2.index[mu][nu]);
  sp_ptr = (qpb_complex *) in[v];
  spinor_sigma_zt(sp, sp_ptr);
  spinor_sun_peq_mul(out, link, sp);

  return;
}
#endif /* _QPB_APPLY_CLOVER_TERM_TZYX_H */
