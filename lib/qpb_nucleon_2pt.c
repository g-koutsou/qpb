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
qpb_nucleon_2pt(qpb_complex **corr_x, qpb_spinor_field *spinor0, qpb_spinor_field *spinor1)
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
	qpb_complex aux[NS*NC][NS*NC];
	qpb_complex Cg5q1Cg5[NS*NC][NS*NC];
	qpb_complex Contr[NS*NC][NS*NC];
	for(int cs0=0; cs0<NC*NS; cs0++)
	  for(int cs1=0; cs1<NC*NS; cs1++)
	    {
	      q0[cs0][cs1] = ((qpb_complex *)(spinor0[cs1].index[v]))[cs0];
	      q1[cs0][cs1] = ((qpb_complex *)(spinor1[cs1].index[v]))[cs0];
	    }

	prop_Cg5_G(aux, q1);
	prop_G_Cg5(Cg5q1Cg5, aux);
	prop_contract_02(Contr, Cg5q1Cg5, q0);

	qpb_complex A[NS][NS];
	qpb_complex B[NS][NS];
	for(int mu=0; mu<NS; mu++)
	for(int nu=0; nu<NS; nu++)
	  {
	    A[mu][nu] = (qpb_complex){0., 0.};
	    B[mu][nu] = (qpb_complex){0., 0.};
	  }
	
	for(int a0=0; a0<NC; a0++)
	  for(int a1=0; a1<NC; a1++)
	    for(int mu=0; mu<NS; mu++)
	      for(int nu=0; nu<NS; nu++)
		for(int ku=0; ku<NS; ku++)
		  {
		    A[mu][nu].re += CMULR( q0[IDX(a0, mu)][IDX(a1, nu)] , Contr[IDX(a1, ku)][IDX(a0, ku)] );
		    A[mu][nu].im += CMULI( q0[IDX(a0, mu)][IDX(a1, nu)] , Contr[IDX(a1, ku)][IDX(a0, ku)] );
		    
		    B[mu][nu].re += CMULR( q0[IDX(a0, mu)][IDX(a1, ku)] , Contr[IDX(a1, ku)][IDX(a0, nu)] );
		    B[mu][nu].im += CMULI( q0[IDX(a0, mu)][IDX(a1, ku)] , Contr[IDX(a1, ku)][IDX(a0, nu)] );
		  }

	
	for(int mu=0; mu<NS; mu++)
	  for(int nu=0; nu<NS; nu++)
	    corr_x[(mu*NS+nu)*lt + t][lv] = CADD(A[mu][nu], B[mu][nu]);
      }
  return;
}


void
qpb_nucleon_star_2pt(qpb_complex **corr_x, qpb_spinor_field *spinor0, qpb_spinor_field *spinor1)
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
	qpb_complex Cq1C[NS*NC][NS*NC];
	qpb_complex g5q0[NS*NC][NS*NC];
	qpb_complex q0g5[NS*NC][NS*NC];
	qpb_complex g5q0g5[NS*NC][NS*NC];
	qpb_complex aux[NS*NC][NS*NC];
	qpb_complex ContrA[NS*NC][NS*NC];
	qpb_complex ContrB[NS*NC][NS*NC];
	for(int cs0=0; cs0<NC*NS; cs0++)
	  for(int cs1=0; cs1<NC*NS; cs1++)
	    {
	      q0[cs0][cs1] = ((qpb_complex *)(spinor0[cs1].index[v]))[cs0];
	      q1[cs0][cs1] = ((qpb_complex *)(spinor1[cs1].index[v]))[cs0];
	    }

	prop_C_G(aux, q1);
	prop_G_C(Cq1C, aux);

	prop_gamma_5_G(g5q0, q0);
	prop_G_gamma_5(q0g5, q0);
	prop_G_gamma_5(g5q0g5, g5q0);

	prop_contract_13(ContrA, Cq1C, q0);
	prop_contract_02(ContrB, Cq1C, q0g5);

	qpb_complex A[NS][NS];
	qpb_complex B[NS][NS];
	for(int mu=0; mu<NS; mu++)
	  for(int nu=0; nu<NS; nu++)
	    {
	      A[mu][nu] = (qpb_complex){0., 0.};
	      B[mu][nu] = (qpb_complex){0., 0.};
	    }

	for(int a0=0; a0<NC; a0++)
	  for(int a1=0; a1<NC; a1++)
	    for(int mu=0; mu<NS; mu++)
	      for(int nu=0; nu<NS; nu++)
		for(int ku=0; ku<NS; ku++)
		  {
		    A[mu][nu].re += CMULR( g5q0g5[IDX(a0, mu)][IDX(a1, nu)] , ContrA[IDX(a1, ku)][IDX(a0, ku)] );
		    A[mu][nu].im += CMULI( g5q0g5[IDX(a0, mu)][IDX(a1, nu)] , ContrA[IDX(a1, ku)][IDX(a0, ku)] );
		    
		    B[mu][nu].re += CMULR( g5q0[IDX(a0, mu)][IDX(a1, ku)] , ContrB[IDX(a1, ku)][IDX(a0, nu)] );
		    B[mu][nu].im += CMULI( g5q0[IDX(a0, mu)][IDX(a1, ku)] , ContrB[IDX(a1, ku)][IDX(a0, nu)] );
		  }

	
	for(int mu=0; mu<NS; mu++)
	  for(int nu=0; nu<NS; nu++)
	    corr_x[(mu*NS+nu)*lt + t][lv] = CADD(A[mu][nu], B[mu][nu]);
	
      }

  return;
}
