#ifdef OPENMP
#include <omp.h>
#endif
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_gauge_field.h>
#include <qpb_gauge_field_copy.h>
#include <qpb_sun_linalg.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_sun_project.h>	
#include <qpb_plaquette.h>

/*
 * APE smear once
 *
 * Performs: Proj[ (I-alpha) + alpha/6 \sum stpl * U^dagger ] * U
 *
 */
void
qpb_apesmear(qpb_gauge_field out, qpb_gauge_field in, qpb_double alpha)
{
  qpb_complex u0[NC*NC], u1[NC*NC], staple[NC*NC], one_minus_alpha[NC*NC];
  int lvol = problem_params.l_vol;
  
  /* initialize unit * (1 - alpha) matrix */
  for(int c0=0; c0<NC; c0++)
    {
      for(int c1=0; c1<NC; c1++)
	one_minus_alpha[c1 + c0*NC] = (qpb_complex){0.0, 0.0};

      one_minus_alpha[c0 + c0*NC] = (qpb_complex){1.0 - alpha, 0.0};
    }
  
  for(int mu=0; mu<ND; mu++)
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	
	for(int c=0; c<NC*NC; c++)
	  staple[c] = (qpb_complex){0.0, 0.0};

	/* create the staple term for this mu direction */
	for(int nu=mu==0?1:0; nu<ND; nu==mu-1?nu+=2:nu++)
	  {
	    qpb_complex *u, *w;
	    u = (qpb_complex *)((qpb_link *) in.index[v] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu][v]] + mu);
	    sun_mul_uu(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[mu][v]] + nu);
	    sun_mul_ud(u1, u0, u);

	    sun_upequ(staple, u1);

	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + mu);
	    sun_mul_du(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][nneigh[mu][v]]] + nu);
	    sun_mul_uu(u1, u0, u);

	    sun_upequ(staple, u1);
	  }
	
	/* multiply staple with u^+*alpha/6 and add to 1-alpha */
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	qpb_complex scale = (qpb_complex){alpha/6.0, 0.0};
	sun_mul_ud(u1, staple, u);
	sun_mul_au(w, scale, u1);	
	sun_upequ(w, one_minus_alpha);	

	qpb_sun_project((qpb_link *)w, 1);
      }

  for(int lv=0; lv<lvol; lv++)
    for(int mu=0; mu<ND; mu++)
      {
	int v = blk_to_ext[lv];
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	sun_mul_uu(u0, w, u);
	sun_uequ(w, u0);
      }

  return;
};

/*
 * APE smear niter times
 *
 * wraps qpb_apesmear for arbitrary number of iterations
 * "aux" is required if "in" is to be left untouched
 */
void
qpb_apesmear_niter(qpb_gauge_field out, qpb_gauge_field in, qpb_double alpha, int niter)
{
  qpb_gauge_field aux = qpb_gauge_field_init();
  qpb_gauge_field_copy(aux, in);
  qpb_gauge_field U[2] = {aux, out};

  for(int i=0; i<niter; i++)
    {
      qpb_comm_halo_gauge_field(U[i%2]);
      qpb_apesmear(U[(i+1)%2], U[i%2], alpha);
    }

  qpb_gauge_field_copy(out, U[niter%2]);
  qpb_gauge_field_finalize(aux);
  return;
};

/*
 * APE smear once
 *
 * Performs: Proj[ (I-alpha) + alpha/4 \sum stpl * U^dagger ] * U, 
 * for non-temporal directions
 */
void
qpb_apesmear_3d(qpb_gauge_field out, qpb_gauge_field in, qpb_double alpha)
{
  qpb_complex u0[NC*NC], u1[NC*NC], staple[NC*NC], one_minus_alpha[NC*NC];
  int lvol = problem_params.l_vol;
  
  /* initialize unit * (1 - alpha) matrix */
  for(int c0=0; c0<NC; c0++)
    {
      for(int c1=0; c1<NC; c1++)
	one_minus_alpha[c1 + c0*NC] = (qpb_complex){0.0, 0.0};

      one_minus_alpha[c0 + c0*NC] = (qpb_complex){1.0 - alpha, 0.0};
    }

  for(int mu=1; mu<ND; mu++)
#ifdef OPENMP
#pragma omp parallel for private(u0, u1, staple)
#endif  
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	
	for(int c=0; c<NC*NC; c++)
	  staple[c] = (qpb_complex){0.0, 0.0};

	/* create the staple term for this mu direction */
	for(int nu=mu==1?2:1; nu<ND; nu==mu-1?nu+=2:nu++)
	  {
	    qpb_complex *u, *w;
	    u = (qpb_complex *)((qpb_link *) in.index[v] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu][v]] + mu);
	    sun_mul_uu(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[mu][v]] + nu);
	    sun_mul_ud(u1, u0, u);

	    sun_upequ(staple, u1);

	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + nu);
	    w = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][v]] + mu);
	    sun_mul_du(u0, u, w);
	    u = (qpb_complex *)((qpb_link *) in.index[nneigh[nu+ND][nneigh[mu][v]]] + nu);
	    sun_mul_uu(u1, u0, u);

	    sun_upequ(staple, u1);
	  }
	
	/* multiply staple with u^+*alpha/4 and add to 1-alpha */
	qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	qpb_complex scale = (qpb_complex){alpha/4.0, 0.0};
	sun_mul_ud(u1, staple, u);
	sun_mul_au(w, scale, u1);	
	sun_upequ(w, one_minus_alpha);	

	qpb_sun_project((qpb_link *)w, 1);
      }


#ifdef OPENMP
#pragma omp parallel for private(u0, u1)
#endif  
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      sun_uequ(out.index[v] + 0, in.index[v] + 0);
      for(int mu=1; mu<ND; mu++)
	{
	  qpb_complex *u = (qpb_complex *)((qpb_link *) in.index[v] + mu);
	  qpb_complex *w = (qpb_complex *)((qpb_link *) out.index[v] + mu);
	  
	  sun_mul_uu(u0, w, u);
	  sun_uequ(w, u0);
	}
    }
  return;
};

/*
 * APE smear niter times
 *
 * wraps qpb_apesmear for arbitrary number of iterations
 * "aux" is required if "in" is to be left untouched
 */
void
qpb_apesmear_3d_niter(qpb_gauge_field out, qpb_gauge_field in, qpb_double alpha, int niter)
{
  qpb_gauge_field aux = qpb_gauge_field_init();
  qpb_gauge_field_copy(aux, in);
  qpb_gauge_field U[2] = {aux, out};

  for(int i=0; i<niter; i++)
    {      
      qpb_comm_halo_gauge_field(U[i%2]);
      qpb_apesmear_3d(U[(i+1)%2], U[i%2], alpha);
      /*
	qpb_double plaquette = qpb_plaquette(U[(i+1)%2]);
	print(" %3d %f\n", i, plaquette);
      */
    }

  qpb_gauge_field_copy(out, U[niter%2]);
  qpb_gauge_field_finalize(aux);
  return;
};
