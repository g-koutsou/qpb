#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_sun_linalg.h>

#define PRINT_MAT_NC(a)				\
  for(int i=0; i<NC; i++)			\
    {						\
      for(int j=0; j<NC; j++)			\
	printf(" %+f%+f*J ", 			\
	       (a+j+i*NC)->re,			\
	       (a+j+i*NC)->im);			\
	  printf("\n");				\
    }						\
  printf("\n");					\
      
void
qpb_clover_term_get(qpb_clover_term clover_term, qpb_gauge_field gauge)
{
  int lvol = problem_params.l_vol;
  
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_complex *u0, *u1, *c;
      qpb_complex aux0[NC*NC], aux1[NC*NC];
      for(int idx=0; idx<N_DIR_COMB_2; idx++)
	{
	  int mu = dir_comb_2.dirs[idx][1];
	  int nu = dir_comb_2.dirs[idx][0];
	  
	  c = (qpb_complex *)((qpb_link *)clover_term.index[v] + idx);
	    
	  /* 
	     Top right plaquette 
	  */
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[v] + mu);
	  u1 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[mu][v]] + nu);
	  sun_mul_uu(aux0, u0, u1);
	    
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu][v]] + mu);
	  sun_mul_ud(aux1, aux0, u0);

	  u0 = (qpb_complex *)((qpb_link *)gauge.index[v] + nu);
	  sun_mul_ud(aux0, aux1, u0);

	  sun_uequ(c, aux0);

	  /* 
	     Bottom left plaquette 
	  */
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu+ND][v]] + nu);
	  u1 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu+ND][nneigh[mu+ND][v]]]
			       + mu);
	  sun_mul_dd(aux0, u0, u1);
	    
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu+ND][nneigh[mu+ND][v]]]
			       + nu);
	  sun_mul_uu(aux1, aux0, u0);

	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[mu+ND][v]] + mu);
	  sun_mul_uu(aux0, aux1, u0);

	  sun_umequ(c, aux0);

	  /* 
	     Top left plaquette 
	  */
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[v] + nu);
	  u1 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu][nneigh[mu+ND][v]]]
			       + mu);
	  sun_mul_ud(aux0, u0, u1);
	    
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[mu+ND][v]] + nu);
	  sun_mul_ud(aux1, aux0, u0);

	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[mu+ND][v]] + mu);
	  sun_mul_uu(aux0, aux1, u0);

	  sun_upequ(c, aux0);

	  /* 
	     Bottom right plaquette 
	  */
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[v] + mu);
	  u1 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[mu][nneigh[nu+ND][v]]] 
			       + nu);
	  sun_mul_ud(aux0, u0, u1);
	    
	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu+ND][v]] + mu);
	  sun_mul_ud(aux1, aux0, u0);

	  u0 = (qpb_complex *)((qpb_link *)gauge.index[nneigh[nu+ND][v]] + nu);
	  sun_mul_uu(aux0, aux1, u0);

	  sun_umequ(c, aux0);

	  /*
	    C = -(i/4) ( P - P^+ )/2
	  */
	  sun_uequ(aux0, c);
	  sun_ueqd(aux1, c);
	  sun_umequ(aux0, aux1);
	  qpb_complex z = (qpb_complex){0, -1./(2.*4.)};
	  sun_mul_au(c, z, aux0);
	}
    }
  return;
}
