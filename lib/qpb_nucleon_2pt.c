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

void
qpb_nucleon_2pt(qpb_complex **corr_x, qpb_spinor_field *quark1, qpb_spinor_field *quark2)
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
	qpb_complex prop1[NS*NC][NS*NC];
	qpb_complex prop2[NS*NC][NS*NC];
	qpb_complex Cg5qCg5[NS*NC][NS*NC];
	qpb_complex q0[NS*NC][NS*NC];
	qpb_complex q1[NS*NC][NS*NC];
	for(int cs0=0; cs0<NC*NS; cs0++)
	  for(int cs1=0; cs1<NC*NS; cs1++)
	    {
	      prop1[cs0][cs1] = ((qpb_complex *)(quark1[cs1].index[v]))[cs0];
	      prop2[cs0][cs1] = ((qpb_complex *)(quark2[cs1].index[v]))[cs0];
	    }

	prop_Cg5_G(q0, prop1);
	prop_G_Cg5(Cg5qCg5, q0);
	prop_contract_13(q0, Cg5qCg5, prop2);

	/* Positive parity state */
	prop_G_ProjTp(q1, prop2);

	qpb_complex first_term;
	qpb_complex second_term;
	first_term = (qpb_complex){0., 0.};
	second_term = (qpb_complex){0., 0.};

	for(int mu=0; mu<NS; mu++)
	  for(int nu=0; nu<NS; nu++)
	    for(int a0=0; a0<NC; a0++)
	      for(int a1=0; a1<NC; a1++)
		{
		  first_term = CADD(first_term, 
				     CMUL(q0[a0+mu*NC][a1+mu*NC],
					  q1[a1+nu*NC][a0+nu*NC]));

		  second_term = CADD(second_term, 
				     CMUL(q0[a0+mu*NC][a1+nu*NC],
					  q1[a1+mu*NC][a0+nu*NC]));
		}
	corr_x[0*lt + t][lv] = CADD(first_term, second_term);

	/* Negative parity state */
	prop_G_ProjTm(q1, prop2);

	first_term = (qpb_complex){0., 0.};
	second_term = (qpb_complex){0., 0.};

	for(int mu=0; mu<NS; mu++)
	  for(int nu=0; nu<NS; nu++)
	    for(int a0=0; a0<NC; a0++)
	      for(int a1=0; a1<NC; a1++)
		{
		  first_term = CADD(first_term, 
				     CMUL(q0[a0+mu*NC][a1+mu*NC],
					  q1[a1+nu*NC][a0+nu*NC]));

		  second_term = CADD(second_term, 
				     CMUL(q0[a0+mu*NC][a1+nu*NC],
					  q1[a1+mu*NC][a0+nu*NC]));
		}

	corr_x[1*lt + t][lv] = CADD(first_term, second_term);
      }

  return;
}
