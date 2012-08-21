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
qpb_delta_3o2_2pt(qpb_complex **corr_x, qpb_spinor_field *spinor)
{
  int lvol = problem_params.l_vol;
  int lt = problem_params.l_dim[0];
  int lvol3d = lvol/lt;

#ifdef OPENMP
#	pragma omp parallel for
#endif
  for(int t=0; t<lt; t++)
    {
      for(int lv=0; lv<lvol3d; lv++)
	{
	  int v = blk_to_ext[lv+t*lvol3d];
	  qpb_complex q[NS*NC][NS*NC];
	  for(int cs0=0; cs0<NC*NS; cs0++)
	    for(int cs1=0; cs1<NC*NS; cs1++)
	      q[cs0][cs1] = ((qpb_complex *)(spinor[cs1].index[v]))[cs0];


	  for(int k=0; k<4; k++)
	    {
	      qpb_complex CgkqCgk[NS*NC][NS*NC];
	      qpb_complex Cgkq[NS*NC][NS*NC];
	      qpb_complex qCgk[NS*NC][NS*NC];
	    
	      switch(k)
		{
		case 0:
		  prop_Cgx_G(Cgkq, q);
		  prop_G_Cgx(qCgk, q);
		  prop_G_Cgx(CgkqCgk, Cgkq);
		  break;
		case 1:
		  prop_Cgy_G(Cgkq, q);
		  prop_G_Cgy(qCgk, q);
		  prop_G_Cgy(CgkqCgk, Cgkq);
		  break;
		case 2:
		  prop_Cgz_G(Cgkq, q);
		  prop_G_Cgz(qCgk, q);
		  prop_G_Cgz(CgkqCgk, Cgkq);
		  break;
		case 3:
		  prop_Cgt_G(Cgkq, q);
		  prop_G_Cgt(qCgk, q);
		  prop_G_Cgt(CgkqCgk, Cgkq);
		  break;
		default: /* to suppress "may be used uninitialized" compiler warning */
		  prop_Cgt_G(Cgkq, q);
		  prop_G_Cgt(qCgk, q);
		  prop_G_Cgt(CgkqCgk, Cgkq);
		  break;
		}

	      qpb_complex ContrA[NS*NC][NS*NC];
	      qpb_complex ContrB[NS*NC][NS*NC];
	      qpb_complex ContrC[NS*NC][NS*NC];
	   
	      prop_contract_02(ContrA, CgkqCgk, q);
	      prop_contract_02(ContrB, Cgkq, qCgk);
	      prop_contract_02(ContrC, Cgkq, q);
	    
	      qpb_complex A[NS][NS], B[NS][NS], C[NS][NS], D[NS][NS], E[NS][NS], F[NS][NS];
	      for(int mu=0; mu<NS; mu++)
		for(int nu=0; nu<NS; nu++)
		  {
		    A[mu][nu] = (qpb_complex){0., 0.};
		    B[mu][nu] = (qpb_complex){0., 0.};
		    C[mu][nu] = (qpb_complex){0., 0.};
		    D[mu][nu] = (qpb_complex){0., 0.};
		    E[mu][nu] = (qpb_complex){0., 0.};
		    F[mu][nu] = (qpb_complex){0., 0.};
		  }

	      for(int a0=0; a0<NC; a0++)
		for(int a1=0; a1<NC; a1++)
		  for(int mu=0; mu<NS; mu++)
		    for(int nu=0; nu<NS; nu++)
		      for(int ku=0; ku<NS; ku++)
			{
			  A[mu][nu].re += CMULR(q[IDX(a0, mu)][IDX(a1, nu)], ContrA[IDX(a1, ku)][IDX(a0, ku)]);
			  A[mu][nu].im += CMULI(q[IDX(a0, mu)][IDX(a1, nu)], ContrA[IDX(a1, ku)][IDX(a0, ku)]);
			  
			  B[mu][nu].re += CMULR(q[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, ku)][IDX(a0, ku)]);
			  B[mu][nu].im += CMULI(q[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, ku)][IDX(a0, ku)]);
			  
			  C[mu][nu].re += CMULR(qCgk[IDX(a0, mu)][IDX(a1, ku)], ContrC[IDX(a1, ku)][IDX(a0, nu)]);
			  C[mu][nu].im += CMULI(qCgk[IDX(a0, mu)][IDX(a1, ku)], ContrC[IDX(a1, ku)][IDX(a0, nu)]);
			  
			  D[mu][nu].re += CMULR(qCgk[IDX(a0, mu)][IDX(a1, ku)], ContrC[IDX(a1, nu)][IDX(a0, ku)]);
			  D[mu][nu].im += CMULI(qCgk[IDX(a0, mu)][IDX(a1, ku)], ContrC[IDX(a1, nu)][IDX(a0, ku)]);
			  
			  E[mu][nu].re += CMULR(q[IDX(a0, mu)][IDX(a1, ku)], ContrB[IDX(a1, nu)][IDX(a0, ku)]);
			  E[mu][nu].im += CMULI(q[IDX(a0, mu)][IDX(a1, ku)], ContrB[IDX(a1, nu)][IDX(a0, ku)]);
			  
			  F[mu][nu].re += CMULR(q[IDX(a0, mu)][IDX(a1, ku)], ContrA[IDX(a1, ku)][IDX(a0, nu)]);
			  F[mu][nu].im += CMULI(q[IDX(a0, mu)][IDX(a1, ku)], ContrA[IDX(a1, ku)][IDX(a0, nu)]);
			}
	      
	      for(int mu=0; mu<NS; mu++)
		for(int nu=0; nu<NS; nu++)
		  {
		    A[mu][nu] = CADD(A[mu][nu], B[mu][nu]);
		    C[mu][nu] = CADD(C[mu][nu], D[mu][nu]);
		    E[mu][nu] = CADD(E[mu][nu], F[mu][nu]);
	      
		    corr_x[k*NS*NS*lt + (mu*NS+nu)*lt + t][lv] = CADD(CADD(A[mu][nu], C[mu][nu]), E[mu][nu]);
		  }
	      
	    }
	}
    }
  
  return;
}
