#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_apply_clover_term(qpb_spinor_field out_spinor, qpb_spinor_field in_spinor,
		      qpb_clover_term clover_term, qpb_double c_sw)
{
  int lvol = problem_params.l_vol;
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor aux_spinor0, aux_spinor1;
      qpb_complex *sp0 = (qpb_complex *)&aux_spinor0;
      qpb_complex *sp1 = (qpb_complex *)&aux_spinor1;
      qpb_complex *link;
      qpb_complex *in = (qpb_complex *)in_spinor.index[v];
      int mu, nu;
      
      /* XY */
      mu = 3; nu = 2;
      link = (qpb_complex *) ((qpb_link *)clover_term.index[v] + clover_idx[mu][nu]);
      SIGMAXY(sp0, in);
      COL_MPLY(sp1 , link, sp0);
	
      /* XZ */
      mu = 3; nu = 1;
      link = (qpb_complex *) ((qpb_link *)clover_term.index[v] + clover_idx[mu][nu]);
      SIGMAXZ(sp0, in);
      COL_MPLY_PEQ(sp1 , link, sp0);
      
      /* XT */
      mu = 3; nu = 0;
      link = (qpb_complex *) ((qpb_link *)clover_term.index[v] + clover_idx[mu][nu]);
      SIGMAXT(sp0, in);
      COL_MPLY_PEQ(sp1 , link, sp0);
	  
      /* YZ */
      mu = 2; nu = 1;
      link = (qpb_complex *) ((qpb_link *)clover_term.index[v] + clover_idx[mu][nu]);
      SIGMAYZ(sp0, in);
      COL_MPLY_PEQ(sp1 , link, sp0);
	  
      /* YT */
      mu = 2; nu = 0;
      link = (qpb_complex *) ((qpb_link *)clover_term.index[v] + clover_idx[mu][nu]);
      SIGMAYT(sp0, in);
      COL_MPLY_PEQ(sp1 , link, sp0);
	  
      /* ZT */
      mu = 1; nu = 0;
      link = (qpb_complex *) ((qpb_link *)clover_term.index[v] + clover_idx[mu][nu]);
      SIGMAZT(sp0, in);
      COL_MPLY_PEQ(sp1 , link, sp0);

      qpb_complex *out = (qpb_complex *)out_spinor.index[v];	  	  
      for(int cs=0; cs<NS*NC; cs++)
	{
	  (out+cs)->re -= (sp1+cs)->re * c_sw/2.;
	  (out+cs)->im -= (sp1+cs)->im * c_sw/2.;
	}
    }
  return;
}
