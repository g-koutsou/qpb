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
	  qpb_complex prop[NS*NC][NS*NC];
	  for(int cs0=0; cs0<NC*NS; cs0++)
	    for(int cs1=0; cs1<NC*NS; cs1++)
	      prop[cs0][cs1] = ((qpb_complex *)(spinor[cs1].index[v]))[cs0];


	  for(int k=0; k<4; k++)
	    {
	      qpb_complex CgkqCgk[NS*NC][NS*NC];
	      qpb_complex Cgkq[NS*NC][NS*NC];
	      qpb_complex qCgk[NS*NC][NS*NC];
	    
	      switch(k)
		{
		case 0:
		  prop_Cgx_G(Cgkq, prop);
		  prop_G_Cgx(qCgk, prop);
		  prop_G_Cgx(CgkqCgk, Cgkq);
		  break;
		case 1:
		  prop_Cgy_G(Cgkq, prop);
		  prop_G_Cgy(qCgk, prop);
		  prop_G_Cgy(CgkqCgk, Cgkq);
		  break;
		case 2:
		  prop_Cgz_G(Cgkq, prop);
		  prop_G_Cgz(qCgk, prop);
		  prop_G_Cgz(CgkqCgk, Cgkq);
		  break;
		case 3:
		  prop_Cgt_G(Cgkq, prop);
		  prop_G_Cgt(qCgk, prop);
		  prop_G_Cgt(CgkqCgk, Cgkq);
		  break;
		default: /* to suppress "may be used uninitialized" compiler warning */
		  prop_Cgt_G(Cgkq, prop);
		  prop_G_Cgt(qCgk, prop);
		  prop_G_Cgt(CgkqCgk, Cgkq);
		  break;
		}

	      qpb_complex ContrA[NS*NC][NS*NC];
	      qpb_complex ContrB[NS*NC][NS*NC];
	      qpb_complex ContrC[NS*NC][NS*NC];
	   
	      prop_contract_02(ContrA, CgkqCgk, prop);
	      prop_contract_02(ContrB, Cgkq, qCgk);
	      prop_contract_02(ContrC, Cgkq, prop);
	    
	      qpb_complex Pq[NS*NC][NS*NC];
	      qpb_complex PqCgk[NS*NC][NS*NC];

	      qpb_complex A, B, C, D, E, F;
	    
	      /* Positive/Negative parity state */
	      for(int i=0; i<2; i++)
		{
		  switch(i)
		    {
		    case 0:
		      prop_ProjTp_G(Pq, prop);
		      prop_ProjTp_G(PqCgk, qCgk);
		      break;
		    case 1:
		      prop_ProjTm_G(Pq, prop);
		      prop_ProjTm_G(PqCgk, qCgk);
		      break;
		    }
		
		  A = (qpb_complex){0., 0.};
		  B = (qpb_complex){0., 0.};
		  C = (qpb_complex){0., 0.};
		  D = (qpb_complex){0., 0.};
		  E = (qpb_complex){0., 0.};
		  F = (qpb_complex){0., 0.};
		  for(int a0=0; a0<NC; a0++)
		    for(int a1=0; a1<NC; a1++)
		      for(int mu=0; mu<NS; mu++)
			for(int nu=0; nu<NS; nu++)
			  {
			    A.re += CMULR(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrA[IDX(a1, nu)][IDX(a0, nu)]);
			    A.im += CMULI(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrA[IDX(a1, nu)][IDX(a0, nu)]);

			    B.re += CMULR(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrB[IDX(a1, nu)][IDX(a0, nu)]);
			    B.im += CMULI(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrB[IDX(a1, nu)][IDX(a0, nu)]);

			    C.re += CMULR(PqCgk[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, nu)][IDX(a0, mu)]);
			    C.im += CMULI(PqCgk[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, nu)][IDX(a0, mu)]);

			    D.re += CMULR(PqCgk[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, mu)][IDX(a0, nu)]);
			    D.im += CMULI(PqCgk[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, mu)][IDX(a0, nu)]);

			    E.re += CMULR(Pq[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, mu)][IDX(a0, nu)]);
			    E.im += CMULI(Pq[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, mu)][IDX(a0, nu)]);

			    F.re += CMULR(Pq[IDX(a0, mu)][IDX(a1, nu)], ContrA[IDX(a1, nu)][IDX(a0, mu)]);
			    F.im += CMULI(Pq[IDX(a0, mu)][IDX(a1, nu)], ContrA[IDX(a1, nu)][IDX(a0, mu)]);
			  }
		
		  A = CADD(A, B);
		  C = CADD(C, D);
		  E = CADD(E, F);

		  corr_x[(i+k*2)*lt + t][lv] = CADD(CADD(A, C), E);
		}
	    
	    }
	}
    }
	
  return;
}
