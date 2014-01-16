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
qpb_tetraq_mol_displ_2pt(qpb_complex **corr_x, qpb_spinor_field *spinor[2][2])
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
	qpb_complex q0[2][2][NS*NC][NS*NC];

	for(int cs0=0; cs0<NC*NS; cs0++)
	  for(int cs1=0; cs1<NC*NS; cs1++)
	    for(int i=0; i<2; i++)
	      for(int j=0; j<2; j++)
		{
		  q0[i][j][cs0][cs1] = ((qpb_complex *)(spinor[i][j][cs1].index[v]))[cs0];
		}

	qpb_complex q1[NS*NC][NS*NC];
	qpb_complex GGxx[NS*NC][NS*NC];
	qpb_complex GGyy[NS*NC][NS*NC];
	qpb_complex GGyx[NS*NC][NS*NC];
	qpb_complex GGxy[NS*NC][NS*NC];
	qpb_complex GxxGyx[NS*NC][NS*NC];
	qpb_complex GyyGxy[NS*NC][NS*NC];
	qpb_complex GGGG[NS*NC][NS*NC];
	prop_G_dag(q1, q0[0][0]);
	prop_G_G(GGxx, q0[0][0], q1);

	prop_G_dag(q1, q0[1][1]);
	prop_G_G(GGyy, q0[1][1], q1);

	prop_G_dag(q1, q0[0][1]);
	prop_G_G(GGxy, q0[0][1], q1);

	prop_G_dag(q1, q0[1][0]);
	prop_G_G(GGyx, q0[1][0], q1);

	prop_G_dag(q1, q0[1][0]);
	prop_G_G(GxxGyx, q0[0][0], q1);

	prop_G_dag(q1, q0[0][1]);
	prop_G_G(GyyGxy, q0[1][1], q1);

	prop_G_G(GGGG, GxxGyx, GyyGxy);      

	qpb_complex A1_a = (qpb_complex){0., 0.};
	qpb_complex A1_b = (qpb_complex){0., 0.};
	qpb_complex A2_a = (qpb_complex){0., 0.};
	qpb_complex A2_b = (qpb_complex){0., 0.};
	qpb_complex B = (qpb_complex){0., 0.};
	      
	for(int a0=0; a0<NC; a0++)
	  for(int mu=0; mu<NS; mu++)
	    {
	      A1_a.re += GGxx[IDX(a0, mu)][IDX(a0, mu)].re;
	      A1_a.im += GGxx[IDX(a0, mu)][IDX(a0, mu)].im;
	      
	      A1_b.re += GGyy[IDX(a0, mu)][IDX(a0, mu)].re;
	      A1_b.im += GGyy[IDX(a0, mu)][IDX(a0, mu)].im;

	      A2_a.re += GGxy[IDX(a0, mu)][IDX(a0, mu)].re;
	      A2_a.im += GGxy[IDX(a0, mu)][IDX(a0, mu)].im;

	      A2_b.re += GGyx[IDX(a0, mu)][IDX(a0, mu)].re;
	      A2_b.im += GGyx[IDX(a0, mu)][IDX(a0, mu)].im;
		    
	      B.re += GGGG[IDX(a0, mu)][IDX(a0, mu)].re;
	      B.im += GGGG[IDX(a0, mu)][IDX(a0, mu)].im;
	    }
	      
	qpb_complex A1 = CMUL(A1_a,A1_b);
	qpb_complex A2 = CMUL(A2_a,A2_b);
	qpb_complex A = CADD(A1, A2);
	B = CNEGATE(CADD(B, CCONJ(B)));
	corr_x[0*lt+t][lv] = B;
	corr_x[1*lt+t][lv] = A;
      }
  return;
}

