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
qpb_delta_1o2_2pt(qpb_complex ***corr_x, qpb_spinor_field *spinor)
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
	      qpb_complex ContrD[NS*NC][NS*NC];

	      prop_contract_13(ContrA, CgkqCgk, prop);
	      prop_contract_13(ContrB, qCgk, prop);
	      prop_contract_02(ContrC, Cgkq, prop);
	      prop_contract_02(ContrD, Cgkq, qCgk);
	    
	      qpb_complex qP[NS*NC][NS*NC];
	      qpb_complex Pq[NS*NC][NS*NC];

	      qpb_complex CgkqP[NS*NC][NS*NC];
	      qpb_complex PqCgk[NS*NC][NS*NC];

	      qpb_complex A, B, C, D, E, F, G, H;
	    
	      /* Positive/Negative parity state */
	      for(int i=0; i<2; i++)
		{
		  switch(i)
		    {
		    case 0:
		      prop_G_ProjTp(qP, prop);
		      prop_ProjTp_G(Pq, prop);
		    
		      prop_G_ProjTp(CgkqP, Cgkq);
		      prop_ProjTp_G(PqCgk, qCgk);
		      break;
		    case 1:
		      prop_G_ProjTm(qP, prop);
		      prop_ProjTm_G(Pq, prop);
		    
		      prop_G_ProjTm(CgkqP, Cgkq);
		      prop_ProjTm_G(PqCgk, qCgk);
		      break;
		    }
		
		  A = (qpb_complex){0., 0.};
		  B = (qpb_complex){0., 0.};
		  C = (qpb_complex){0., 0.};
		  D = (qpb_complex){0., 0.};
		  E = (qpb_complex){0., 0.};
		  F = (qpb_complex){0., 0.};
		  G = (qpb_complex){0., 0.};
		  H = (qpb_complex){0., 0.};

		  for(int a0=0; a0<NC; a0++)
		    for(int a1=0; a1<NC; a1++)
		      for(int mu=0; mu<NS; mu++)
			for(int nu=0; nu<NS; nu++)
			  {
			    A.re += CMULR(qP[IDX(a0, mu)][IDX(a1, mu)], ContrA[IDX(a1, nu)][IDX(a0, nu)]);
			    A.im += CMULI(qP[IDX(a0, mu)][IDX(a1, mu)], ContrA[IDX(a1, nu)][IDX(a0, nu)]);

			    B.re += CMULR(qP[IDX(a0, mu)][IDX(a1, nu)], ContrA[IDX(a1, mu)][IDX(a0, nu)]);
			    B.im += CMULI(qP[IDX(a0, mu)][IDX(a1, nu)], ContrA[IDX(a1, mu)][IDX(a0, nu)]);

			    C.re += CMULR(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, mu)][IDX(a0, nu)]);
			    C.im += CMULI(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, mu)][IDX(a0, nu)]);

			    D.re += CMULR(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, nu)][IDX(a0, mu)]);
			    D.im += CMULI(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrB[IDX(a1, nu)][IDX(a0, mu)]);

			    E.re += CMULR(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, mu)][IDX(a0, nu)]);
			    E.im += CMULI(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, mu)][IDX(a0, nu)]);

			    F.re += CMULR(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, nu)][IDX(a0, mu)]);
			    F.im += CMULI(CgkqP[IDX(a0, mu)][IDX(a1, nu)], ContrC[IDX(a1, nu)][IDX(a0, mu)]);		      

			    G.re += CMULR(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrA[IDX(a1, nu)][IDX(a0, nu)]);
			    G.im += CMULI(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrA[IDX(a1, nu)][IDX(a0, nu)]);

			    H.re += CMULR(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrD[IDX(a1, nu)][IDX(a0, nu)]);
			    H.im += CMULI(Pq[IDX(a0, mu)][IDX(a1, mu)], ContrD[IDX(a1, nu)][IDX(a0, nu)]);		      
			  }
		
		  A = CSCALE(A, 4.0);
		  B = CSCALE(B, 4.0);
		  A = CADD(A, B);

		  C = CSCALE(C, 2.0);
		  D = CSCALE(D, 2.0);
		  C = CADD(C, D);

		  E = CSCALE(E, 2.0);
		  F = CSCALE(F, 2.0);
		  E = CADD(E, F);

		  G = CADD(G, H);
		  corr_x[t][lv][i+k*2] = CSCALE(CADD(CADD(CADD(A, C), E), G), (1.0/3.0));
		}
	    
	    }
	}
    }
	
  return;
}
