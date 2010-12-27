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

  /* BEGIN python generated segment */

  spinor_ax(out,   1.8750000000000000, in[v]);

  /* -I/16 + 4*gx/27 */
  nn = nneigh[3][v];
  idx = hypercube_neigh.index[0][0][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -4*gx/27 - I/16 DAGGER */
  nn = nneigh[7][v];
  idx = hypercube_neigh.index[0][0][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/16 + 4*gy/27 */
  nn = nneigh[2][v];
  idx = hypercube_neigh.index[0][0][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -4*gy/27 - I/16 DAGGER */
  nn = nneigh[6][v];
  idx = hypercube_neigh.index[0][0][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/32 + gx/27 + gy/27 */
  nn = nneigh[2][nneigh[3][v]];
  idx = hypercube_neigh.index[0][0][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gx/27 - gy/27 - I/32 DAGGER */
  nn = nneigh[6][nneigh[7][v]];
  idx = hypercube_neigh.index[0][0][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -gx/27 - I/32 + gy/27 */
  nn = nneigh[2][nneigh[7][v]];
  idx = hypercube_neigh.index[0][0][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gy/27 - I/32 + gx/27 DAGGER */
  nn = nneigh[6][nneigh[3][v]];
  idx = hypercube_neigh.index[0][0][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/16 + 4*gz/27 */
  nn = nneigh[1][v];
  idx = hypercube_neigh.index[0][1][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -4*gz/27 - I/16 DAGGER */
  nn = nneigh[5][v];
  idx = hypercube_neigh.index[0][1][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/32 + gx/27 + gz/27 */
  nn = nneigh[1][nneigh[3][v]];
  idx = hypercube_neigh.index[0][1][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gx/27 - gz/27 - I/32 DAGGER */
  nn = nneigh[5][nneigh[7][v]];
  idx = hypercube_neigh.index[0][1][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -gx/27 - I/32 + gz/27 */
  nn = nneigh[1][nneigh[7][v]];
  idx = hypercube_neigh.index[0][1][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gz/27 - I/32 + gx/27 DAGGER */
  nn = nneigh[5][nneigh[3][v]];
  idx = hypercube_neigh.index[0][1][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/32 + gy/27 + gz/27 */
  nn = nneigh[1][nneigh[2][v]];
  idx = hypercube_neigh.index[0][1][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gy/27 - gz/27 - I/32 DAGGER */
  nn = nneigh[5][nneigh[6][v]];
  idx = hypercube_neigh.index[0][1][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 + gx/108 + gy/108 + gz/108 */
  nn = nneigh[1][nneigh[2][nneigh[3][v]]];
  idx = hypercube_neigh.index[0][1][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 - gy/108 - gz/108 DAGGER */
  nn = nneigh[5][nneigh[6][nneigh[7][v]]];
  idx = hypercube_neigh.index[0][1][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 + gy/108 + gz/108 */
  nn = nneigh[1][nneigh[2][nneigh[7][v]]];
  idx = hypercube_neigh.index[0][1][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gy/108 - gz/108 + gx/108 DAGGER */
  nn = nneigh[5][nneigh[6][nneigh[3][v]]];
  idx = hypercube_neigh.index[0][1][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -gy/27 - I/32 + gz/27 */
  nn = nneigh[1][nneigh[6][v]];
  idx = hypercube_neigh.index[0][1][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gz/27 - I/32 + gy/27 DAGGER */
  nn = nneigh[5][nneigh[2][v]];
  idx = hypercube_neigh.index[0][1][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gy/108 + gx/108 + gz/108 */
  nn = nneigh[1][nneigh[6][nneigh[3][v]]];
  idx = hypercube_neigh.index[0][1][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 - gz/108 + gy/108 DAGGER */
  nn = nneigh[5][nneigh[2][nneigh[7][v]]];
  idx = hypercube_neigh.index[0][1][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 - gy/108 + gz/108 */
  nn = nneigh[1][nneigh[6][nneigh[7][v]]];
  idx = hypercube_neigh.index[0][1][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pz_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gz/108 + gx/108 + gy/108 DAGGER */
  nn = nneigh[5][nneigh[2][nneigh[3][v]]];
  idx = hypercube_neigh.index[0][1][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mz_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/16 + 4*gt/27 */
  nn = nneigh[0][v];
  idx = hypercube_neigh.index[1][0][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -4*gt/27 - I/16 DAGGER */
  nn = nneigh[4][v];
  idx = hypercube_neigh.index[1][0][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt(sp1, sp0);
  spinor_axpby(sp2,  -0.0625000000000000, sp0,   0.1481481481481481, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/32 + gt/27 + gx/27 */
  nn = nneigh[0][nneigh[3][v]];
  idx = hypercube_neigh.index[1][0][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gt/27 - gx/27 - I/32 DAGGER */
  nn = nneigh[4][nneigh[7][v]];
  idx = hypercube_neigh.index[1][0][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -gx/27 - I/32 + gt/27 */
  nn = nneigh[0][nneigh[7][v]];
  idx = hypercube_neigh.index[1][0][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gt/27 - I/32 + gx/27 DAGGER */
  nn = nneigh[4][nneigh[3][v]];
  idx = hypercube_neigh.index[1][0][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/32 + gt/27 + gy/27 */
  nn = nneigh[0][nneigh[2][v]];
  idx = hypercube_neigh.index[1][0][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gt/27 - gy/27 - I/32 DAGGER */
  nn = nneigh[4][nneigh[6][v]];
  idx = hypercube_neigh.index[1][0][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 + gt/108 + gx/108 + gy/108 */
  nn = nneigh[0][nneigh[2][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][0][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gx/108 - gy/108 DAGGER */
  nn = nneigh[4][nneigh[6][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][0][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 + gt/108 + gy/108 */
  nn = nneigh[0][nneigh[2][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][0][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gy/108 + gx/108 DAGGER */
  nn = nneigh[4][nneigh[6][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][0][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -gy/27 - I/32 + gt/27 */
  nn = nneigh[0][nneigh[6][v]];
  idx = hypercube_neigh.index[1][0][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gt/27 - I/32 + gy/27 DAGGER */
  nn = nneigh[4][nneigh[2][v]];
  idx = hypercube_neigh.index[1][0][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gy/108 + gt/108 + gx/108 */
  nn = nneigh[0][nneigh[6][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][0][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gx/108 + gy/108 DAGGER */
  nn = nneigh[4][nneigh[2][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][0][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 - gy/108 + gt/108 */
  nn = nneigh[0][nneigh[6][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][0][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 + gx/108 + gy/108 DAGGER */
  nn = nneigh[4][nneigh[2][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][0][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/32 + gt/27 + gz/27 */
  nn = nneigh[0][nneigh[1][v]];
  idx = hypercube_neigh.index[1][1][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gt/27 - gz/27 - I/32 DAGGER */
  nn = nneigh[4][nneigh[5][v]];
  idx = hypercube_neigh.index[1][1][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 + gt/108 + gx/108 + gz/108 */
  nn = nneigh[0][nneigh[1][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][1][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gx/108 - gz/108 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][1][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 + gt/108 + gz/108 */
  nn = nneigh[0][nneigh[1][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][1][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gz/108 + gx/108 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][1][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 + gt/108 + gy/108 + gz/108 */
  nn = nneigh[0][nneigh[1][nneigh[2][v]]];
  idx = hypercube_neigh.index[1][1][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gy/108 - gz/108 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[6][v]]];
  idx = hypercube_neigh.index[1][1][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 + gt/432 + gx/432 + gy/432 + gz/432 */
  nn = nneigh[0][nneigh[1][nneigh[2][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][1][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gx/432 - gy/432 - gz/432 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[6][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][1][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gx/432 + gt/432 + gy/432 + gz/432 */
  nn = nneigh[0][nneigh[1][nneigh[2][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][1][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gy/432 - gz/432 + gx/432 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[6][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][1][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gy/108 + gt/108 + gz/108 */
  nn = nneigh[0][nneigh[1][nneigh[6][v]]];
  idx = hypercube_neigh.index[1][1][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gz/108 + gy/108 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[2][v]]];
  idx = hypercube_neigh.index[1][1][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gy/432 + gt/432 + gx/432 + gz/432 */
  nn = nneigh[0][nneigh[1][nneigh[6][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][1][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gx/432 - gz/432 + gy/432 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[2][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][1][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gx/432 - gy/432 + gt/432 + gz/432 */
  nn = nneigh[0][nneigh[1][nneigh[6][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][1][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_pz_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gz/432 + gx/432 + gy/432 DAGGER */
  nn = nneigh[4][nneigh[5][nneigh[2][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][1][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_mz_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -gz/27 - I/32 + gt/27 */
  nn = nneigh[0][nneigh[5][v]];
  idx = hypercube_neigh.index[1][2][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -gt/27 - I/32 + gz/27 DAGGER */
  nn = nneigh[4][nneigh[1][v]];
  idx = hypercube_neigh.index[1][2][0][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz(sp1, sp0);
  spinor_axpby(sp2,  -0.0312500000000000, sp0,   0.0370370370370370, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gz/108 + gt/108 + gx/108 */
  nn = nneigh[0][nneigh[5][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][2][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gx/108 + gz/108 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][2][0][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gx/108 - gz/108 + gt/108 */
  nn = nneigh[0][nneigh[5][nneigh[7][v]]];
  idx = hypercube_neigh.index[1][2][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 + gx/108 + gz/108 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[3][v]]];
  idx = hypercube_neigh.index[1][2][0][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gz/108 + gt/108 + gy/108 */
  nn = nneigh[0][nneigh[5][nneigh[2][v]]];
  idx = hypercube_neigh.index[1][2][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 - gy/108 + gz/108 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[6][v]]];
  idx = hypercube_neigh.index[1][2][1][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gz/432 + gt/432 + gx/432 + gy/432 */
  nn = nneigh[0][nneigh[5][nneigh[2][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][2][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gx/432 - gy/432 + gz/432 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[6][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][2][1][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gx/432 - gz/432 + gt/432 + gy/432 */
  nn = nneigh[0][nneigh[5][nneigh[2][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][2][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gy/432 + gx/432 + gz/432 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[6][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][2][1][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/64 - gy/108 - gz/108 + gt/108 */
  nn = nneigh[0][nneigh[5][nneigh[6][v]]];
  idx = hypercube_neigh.index[1][2][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_my(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/64 - gt/108 + gy/108 + gz/108 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[2][v]]];
  idx = hypercube_neigh.index[1][2][2][0];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_py(sp1, sp0);
  spinor_axpby(sp2,  -0.0156250000000000, sp0,   0.0092592592592593, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gy/432 - gz/432 + gt/432 + gx/432 */
  nn = nneigh[0][nneigh[5][nneigh[6][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][2][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_my_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 - gx/432 + gy/432 + gz/432 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[2][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][2][2][1];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_py_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

  /* -I/128 - gx/432 - gy/432 - gz/432 + gt/432 */
  nn = nneigh[0][nneigh[5][nneigh[6][nneigh[7][v]]]];
  idx = hypercube_neigh.index[1][2][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[v] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_pt_mz_my_mx(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_peq_mul(out, link, sp2);

  /* -I/128 - gt/432 + gx/432 + gy/432 + gz/432 DAGGER */
  nn = nneigh[4][nneigh[1][nneigh[2][nneigh[3][v]]]];
  idx = hypercube_neigh.index[1][2][2][2];
  link = (qpb_complex *)((qpb_link *)gauge[nn] + idx);
  sp0 = (qpb_complex *)in[nn];
  spinor_gamma_mt_pz_py_px(sp1, sp0);
  spinor_axpby(sp2,  -0.0078125000000000, sp0,   0.0023148148148148, sp1);
  spinor_sun_dag_peq_mul(out, link, sp2);

/* END python generated segment */


  return;
}
#endif /* _QPB_APPLY_BRI_DSLASH_SITE_H */

