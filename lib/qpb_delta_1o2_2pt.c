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
/*
 * Computes the contractions for:
 *
 *     <\chi_j | \bar{\chi}_k>
 *
 * where \chi_j = 1/\sqrt{3}[ 2(q0 C\gamma_j q1)q0 + (q0 C\gamma_j q0)q1 ]
 *
 * For the notation below, the first term will be mentioned as term A, and the second term B,
 * so the correlator gives: 1/3[4AA + 2AB + 2BA + BB]
 *
 * In terms of baryon channels, this interpolating operator gives:
 * - \Delta^+		when q0 = u, q1 = d
 * - \Delta^0		when q0 = d, q1 = u
 *
 * - \Sigma^{*+}	when q0 = u, q1 = s
 * - \Sigma^{*-}	when q0 = d, q1 = s
 *
 * - \Xi^{*0}		when q0 = s, q1 = u
 * - \Xi^{*-}		when q0 = s, q1 = d
 *
 * - \Sigma^{*++}_c	when q0 = u, q1 = c
 * - \Sigma^{*0}_c	when q0 = d, q1 = c
 *
 * - \Xi^{*++}_{cc}	when q0 = c, q1 = u
 * - \Xi^{*+}_{cc}	when q0 = c, q1 = d
 *
 * - \Omega^{*0}_{c}	when q0 = s, q1 = c
 * - \Omega^{*+}_{cc}	when q0 = c, q1 = s
 */
void
qpb_delta_1o2_2pt(qpb_complex **corr_x, qpb_spinor_field *spinor0, qpb_spinor_field *spinor1)
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
	  qpb_complex q0[NS*NC][NS*NC];
	  qpb_complex q1[NS*NC][NS*NC];
	  for(int cs0=0; cs0<NC*NS; cs0++)
	    for(int cs1=0; cs1<NC*NS; cs1++)
	      {
		q0[cs0][cs1] = ((qpb_complex *)(spinor0[cs1].index[v]))[cs0];
		q1[cs0][cs1] = ((qpb_complex *)(spinor1[cs1].index[v]))[cs0];
	      }


	  for(int j=0; j<3; j++)
	    {
	      qpb_complex Cgjq0[NS*NC][NS*NC];
	      qpb_complex Cgjq1[NS*NC][NS*NC];	      
	      switch(j)
		{
		case 0:
		  prop_Cgx_G(Cgjq0, q0);
		  prop_Cgx_G(Cgjq1, q1);
		  break;
		case 1:
		  prop_Cgy_G(Cgjq0, q0);
		  prop_Cgy_G(Cgjq1, q1);
		  break;
		case 2:
		  prop_Cgz_G(Cgjq0, q0);
		  prop_Cgz_G(Cgjq1, q1);
		  break;
		default: /* to suppress "may be used uninitialized" compiler warning */
		  break;
		}

	      for(int k=0; k<3; k++)
		{
		  qpb_complex Cgjq0Cgk[NS*NC][NS*NC];
		  qpb_complex q0Cgk[NS*NC][NS*NC];
	    
		  qpb_complex Cgjq1Cgk[NS*NC][NS*NC];
		  qpb_complex q1Cgk[NS*NC][NS*NC];
	    
		  switch(k)
		    {
		    case 0:
		      prop_G_Cgx(q0Cgk, q0);
		      prop_G_Cgx(q1Cgk, q1);

		      prop_G_Cgx(Cgjq0Cgk, Cgjq0);
		      prop_G_Cgx(Cgjq1Cgk, Cgjq1);
		      break;
		    case 1:
		      prop_G_Cgy(q0Cgk, q0);
		      prop_G_Cgy(q1Cgk, q1);

		      prop_G_Cgy(Cgjq0Cgk, Cgjq0);
		      prop_G_Cgy(Cgjq1Cgk, Cgjq1);
		      break;
		    case 2:
		      prop_G_Cgz(q0Cgk, q0);
		      prop_G_Cgz(q1Cgk, q1);

		      prop_G_Cgz(Cgjq0Cgk, Cgjq0);
		      prop_G_Cgz(Cgjq1Cgk, Cgjq1);
		      break;
		    default: /* to suppress "may be used uninitialized" compiler warning */
		      break;
		    }

		  qpb_complex ContrAA[NS*NC][NS*NC];
		  qpb_complex ContrBB0[NS*NC][NS*NC];
		  qpb_complex ContrBB1[NS*NC][NS*NC];
		  qpb_complex ContrAB[NS*NC][NS*NC];
		  qpb_complex ContrBA[NS*NC][NS*NC];
		  
		  prop_contract_02(ContrAA, Cgjq1Cgk, q0);	 // Needed in term AA
		  prop_contract_02(ContrBB0, Cgjq0Cgk, q0);	 // Needed in term BB
		  prop_contract_02(ContrBB1, Cgjq0, q0Cgk);	 // Needed in term BB
		  prop_contract_13(ContrAB, q0Cgk, q0);		 // Needed in term AB
		  prop_contract_02(ContrBA, Cgjq0, q0); 	 // Needed in term BA

	    
		  qpb_complex Pq0[NS*NC][NS*NC];
		  qpb_complex Pq1[NS*NC][NS*NC];

		  qpb_complex Cgjq1P[NS*NC][NS*NC];
		  qpb_complex Pq1Cgk[NS*NC][NS*NC];

		  qpb_complex AA0, AA1;
		  qpb_complex BB0, BB1;
		  qpb_complex AB0, AB1;
		  qpb_complex BA0, BA1;
	    
		  /* Positive/Negative parity state */
		  for(int i=0; i<2; i++)
		    {
		      switch(i)
			{
			case 0:
			  prop_ProjTp_G(Pq0, q0);
			  prop_ProjTp_G(Pq1, q1);

			  prop_ProjTp_G(Pq1Cgk, q1Cgk);
			  prop_G_ProjTp(Cgjq1P, Cgjq1);
			  break;
			case 1:
			  prop_ProjTm_G(Pq0, q0);
			  prop_ProjTm_G(Pq1, q1);

			  prop_ProjTm_G(Pq1Cgk, q1Cgk);
			  prop_G_ProjTm(Cgjq1P, Cgjq1);
			  break;
			}
		
		      AA0 = (qpb_complex){0., 0.};
		      AA1 = (qpb_complex){0., 0.};
		      BB0 = (qpb_complex){0., 0.};
		      BB1 = (qpb_complex){0., 0.};
		      AB0 = (qpb_complex){0., 0.};
		      AB1 = (qpb_complex){0., 0.};
		      BA0 = (qpb_complex){0., 0.};
		      BA1 = (qpb_complex){0., 0.};

		      for(int a0=0; a0<NC; a0++)
			for(int a1=0; a1<NC; a1++)
			  for(int mu=0; mu<NS; mu++)
			    for(int nu=0; nu<NS; nu++)
			      {
				AA0.re += CMULR( Pq0[IDX(a0, mu)][IDX(a1, mu)] , ContrAA[IDX(a1, nu)][IDX(a0, nu)] );
				AA0.im += CMULI( Pq0[IDX(a0, mu)][IDX(a1, mu)] , ContrAA[IDX(a1, nu)][IDX(a0, nu)] );

				AA1.re += CMULR( Pq0[IDX(a0, mu)][IDX(a1, nu)] , ContrAA[IDX(a1, nu)][IDX(a0, mu)] );
				AA1.im += CMULI( Pq0[IDX(a0, mu)][IDX(a1, nu)] , ContrAA[IDX(a1, nu)][IDX(a0, mu)] );

				BB0.re += CMULR( Pq1[IDX(a0, mu)][IDX(a1, mu)] ,  ContrBB0[IDX(a1, nu)][IDX(a0, nu)] );
				BB0.im += CMULI( Pq1[IDX(a0, mu)][IDX(a1, mu)] ,  ContrBB0[IDX(a1, nu)][IDX(a0, nu)] );

				BB1.re += CMULR( Pq1[IDX(a0, mu)][IDX(a1, mu)] ,  ContrBB1[IDX(a1, nu)][IDX(a0, nu)] );
				BB1.im += CMULI( Pq1[IDX(a0, mu)][IDX(a1, mu)] ,  ContrBB1[IDX(a1, nu)][IDX(a0, nu)] );
				
				AB0.re += CMULR( Cgjq1P[IDX(a0, mu)][IDX(a1, nu)] , ContrAB[IDX(a1, mu)][IDX(a0, nu)] );
				AB0.im += CMULI( Cgjq1P[IDX(a0, mu)][IDX(a1, nu)] , ContrAB[IDX(a1, mu)][IDX(a0, nu)] );
				
				AB1.re += CMULR( Cgjq1P[IDX(a0, mu)][IDX(a1, nu)] , ContrAB[IDX(a1, nu)][IDX(a0, mu)] );
				AB1.im += CMULI( Cgjq1P[IDX(a0, mu)][IDX(a1, nu)] , ContrAB[IDX(a1, nu)][IDX(a0, mu)] );
				
				BA0.re += CMULR( Pq1Cgk[IDX(a0, mu)][IDX(a1, nu)] , ContrBA[IDX(a1, mu)][IDX(a0, nu)] );
				BA0.im += CMULI( Pq1Cgk[IDX(a0, mu)][IDX(a1, nu)] , ContrBA[IDX(a1, mu)][IDX(a0, nu)] );
				
				BA1.re += CMULR( Pq1Cgk[IDX(a0, mu)][IDX(a1, nu)] , ContrBA[IDX(a1, nu)][IDX(a0, mu)] );
				BA1.im += CMULI( Pq1Cgk[IDX(a0, mu)][IDX(a1, nu)] , ContrBA[IDX(a1, nu)][IDX(a0, mu)] );
			      }
		      
		      AA0 = CADD(AA0, AA1);
		      BB0 = CADD(BB0, BB1);
		      AB0 = CADD(AB0, AB1);
		      BA0 = CADD(BA0, BA1);

		      AA0 = CSCALE(AA0, (4.0/3.0));
		      AB0 = CSCALE(AB0, (2.0/3.0));
		      BA0 = CSCALE(BA0, (2.0/3.0));
		      BB0 = CSCALE(BB0, (1.0/3.0));

		      corr_x[(i+k*2+j*3*2)*lt + t][lv] = CADD(CADD(CADD(AA0, BB0), AB0), BA0);
		    }
	    
		}
	    }
	}
    }
  return;
}
