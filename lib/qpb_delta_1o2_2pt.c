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

		  qpb_complex AA0[NS][NS], AA1[NS][NS];
		  qpb_complex BB0[NS][NS], BB1[NS][NS];
		  qpb_complex AB0[NS][NS], AB1[NS][NS];
		  qpb_complex BA0[NS][NS], BA1[NS][NS];
		  for(int mu=0; mu<NS; mu++)
		    for(int nu=0; nu<NS; nu++)
		      {
			AA0[mu][nu] = (qpb_complex){0.,0.};
			AA1[mu][nu] = (qpb_complex){0.,0.};

			BA0[mu][nu] = (qpb_complex){0.,0.};
			BA1[mu][nu] = (qpb_complex){0.,0.};

			AB0[mu][nu] = (qpb_complex){0.,0.};
			AB1[mu][nu] = (qpb_complex){0.,0.};

			BB0[mu][nu] = (qpb_complex){0.,0.};
			BB1[mu][nu] = (qpb_complex){0.,0.};
		      }
	    

		  for(int a0=0; a0<NC; a0++)
		    for(int a1=0; a1<NC; a1++)
		      for(int mu=0; mu<NS; mu++)
			for(int nu=0; nu<NS; nu++)
			  for(int ku=0; ku<NS; ku++)
			    {
			      AA0[mu][nu].re += CMULR( q0[IDX(a0, mu)][IDX(a1, nu)] , ContrAA[IDX(a1, ku)][IDX(a0, ku)] );
			      AA0[mu][nu].im += CMULI( q0[IDX(a0, mu)][IDX(a1, nu)] , ContrAA[IDX(a1, ku)][IDX(a0, ku)] );
			      
			      AA1[mu][nu].re += CMULR( q0[IDX(a0, mu)][IDX(a1, ku)] , ContrAA[IDX(a1, ku)][IDX(a0, nu)] );
			      AA1[mu][nu].im += CMULI( q0[IDX(a0, mu)][IDX(a1, ku)] , ContrAA[IDX(a1, ku)][IDX(a0, nu)] );
			      
			      BB0[mu][nu].re += CMULR( q1[IDX(a0, mu)][IDX(a1, nu)] ,  ContrBB0[IDX(a1, ku)][IDX(a0, ku)] );
			      BB0[mu][nu].im += CMULI( q1[IDX(a0, mu)][IDX(a1, nu)] ,  ContrBB0[IDX(a1, ku)][IDX(a0, ku)] );
			      
			      BB1[mu][nu].re += CMULR( q1[IDX(a0, mu)][IDX(a1, nu)] ,  ContrBB1[IDX(a1, ku)][IDX(a0, ku)] );
			      BB1[mu][nu].im += CMULI( q1[IDX(a0, mu)][IDX(a1, nu)] ,  ContrBB1[IDX(a1, ku)][IDX(a0, ku)] );
			      
			      AB0[mu][nu].re += CMULR( Cgjq1[IDX(a0, ku)][IDX(a1, mu)] , ContrAB[IDX(a1, ku)][IDX(a0, nu)] );
			      AB0[mu][nu].im += CMULI( Cgjq1[IDX(a0, ku)][IDX(a1, mu)] , ContrAB[IDX(a1, ku)][IDX(a0, nu)] );
			      
			      AB1[mu][nu].re += CMULR( Cgjq1[IDX(a0, ku)][IDX(a1, mu)] , ContrAB[IDX(a1, nu)][IDX(a0, ku)] );
			      AB1[mu][nu].im += CMULI( Cgjq1[IDX(a0, ku)][IDX(a1, mu)] , ContrAB[IDX(a1, nu)][IDX(a0, ku)] );
			      
			      BA0[mu][nu].re += CMULR( q1Cgk[IDX(a0, mu)][IDX(a1, ku)] , ContrBA[IDX(a1, ku)][IDX(a0, nu)] );
			      BA0[mu][nu].im += CMULI( q1Cgk[IDX(a0, mu)][IDX(a1, ku)] , ContrBA[IDX(a1, ku)][IDX(a0, nu)] );
			      
			      BA1[mu][nu].re += CMULR( q1Cgk[IDX(a0, mu)][IDX(a1, ku)] , ContrBA[IDX(a1, nu)][IDX(a0, ku)] );
			      BA1[mu][nu].im += CMULI( q1Cgk[IDX(a0, mu)][IDX(a1, ku)] , ContrBA[IDX(a1, nu)][IDX(a0, ku)] );
			    }
		  
		  for(int mu=0; mu<NS; mu++)
		    for(int nu=0; nu<NS; nu++)
		      {
			AA0[mu][nu] = CADD(AA0[mu][nu], AA1[mu][nu]);
			BB0[mu][nu] = CADD(BB0[mu][nu], BB1[mu][nu]);
			AB0[mu][nu] = CADD(AB0[mu][nu], AB1[mu][nu]);
			BA0[mu][nu] = CADD(BA0[mu][nu], BA1[mu][nu]);
			
			AA0[mu][nu] = CSCALE(AA0[mu][nu], (4.0/3.0));
			AB0[mu][nu] = CSCALE(AB0[mu][nu], (2.0/3.0));
			BA0[mu][nu] = CSCALE(BA0[mu][nu], (2.0/3.0));
			BB0[mu][nu] = CSCALE(BB0[mu][nu], (1.0/3.0));
			
			corr_x[(k+j*3)*16*lt + (mu*4 + nu)*lt + t][lv] = CADD(CADD(CADD(AA0[mu][nu], BB0[mu][nu]), AB0[mu][nu]), BA0[mu][nu]);
		      }
		}
	      
	    }
	}
    }
  return;
}
