#include <math.h>
#include <stdio.h>
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <qpb_alloc.h>
#include <qpb_prop_ops.h>
#include <qpb_prop_contract.h>
#include <qpb_gamma_matrices.h>

#define IDX(col, sp) (col + sp*NC)

void
qpb_tetraq_mol_2pt(qpb_complex **corr_x, qpb_spinor_field *spinor)
{
  int lvol = problem_params.l_vol;
  int lt = problem_params.l_dim[0];
  int lvol3d = lvol/lt;

#ifdef OPENMP
#	pragma omp parallel for
#endif
  for(int t=0; t<lt; t++)
    for(int lv=0; lv<lvol3d; lv++)
      {
	int v = blk_to_ext[lv+t*lvol3d];
	qpb_complex q0[NS*NC][NS*NC];
	qpb_complex q1[NS*NC][NS*NC];
	qpb_complex GGd[NS*NC][NS*NC];
	qpb_complex GGdGGd[NS*NC][NS*NC];
	for(int cs0=0; cs0<NC*NS; cs0++)
	  for(int cs1=0; cs1<NC*NS; cs1++)
	    {
	      q0[cs0][cs1] = ((qpb_complex *)(spinor[cs1].index[v]))[cs0];
	    }

	prop_G_dag(q1, q0);
	prop_G_G(GGd, q0, q1);
	prop_G_G(GGdGGd, GGd, GGd);

	qpb_complex A = (qpb_complex){0., 0.};
	qpb_complex B = (qpb_complex){0., 0.};
	
	for(int a0=0; a0<NC; a0++)
	  for(int mu=0; mu<NS; mu++)
	    {
	      A.re += GGd[IDX(a0, mu)][IDX(a0, mu)].re;
	      A.im += GGd[IDX(a0, mu)][IDX(a0, mu)].im;
	      
	      B.re += GGdGGd[IDX(a0, mu)][IDX(a0, mu)].re;
	      B.im += GGdGGd[IDX(a0, mu)][IDX(a0, mu)].im;
	    }

	A = CSCALE(CMUL(A,A), 2.0);	
	B = CSCALE(B, 2.0);
	corr_x[t][lv] = CSUB(A, B);
      }
  return;
}
