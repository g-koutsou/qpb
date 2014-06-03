#include <math.h>
#include <stdio.h>
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <qpb_alloc.h>
#include <qpb_gamma_matrices.h>

#define QPB_N_STOCH_MESON_2PT_CHANNELS 2
enum qpb_meson_2pt_stoch {
  G5_G5,
  G5_G4G5,
};

/*
 *  Computes meson stochastic 2pt function for gammas: 
 *  g5-g5, g5-g4g5
 *  via the one-end trick
 *
 *  The function does not return anything. It writes the correlation functions
 *  to a file (as ascii).
 */  
void
qpb_mesons_2pt_stoch(qpb_spinor_field *light, qpb_spinor_field *heavy, int n_vec, char outfile[])
{
  if(heavy == NULL)
    heavy = light;

  /* This should never happen. The package is written so that
     only x, y and z are parallelized accross MPI and t along OpenMP */
  if(problem_params.par_dir[0] == 1)
    {
      error(" %s() not implemented for distributed t-direction, quiting\n", __func__);
      exit(QPB_NOT_IMPLEMENTED_ERROR);
    }
  
  int lvol = problem_params.l_vol;
  int lt = problem_params.l_dim[0];
  int lvol3d = lvol/lt;
  qpb_complex *corr[QPB_N_STOCH_MESON_2PT_CHANNELS];
  int N = (NS*NS);
  qpb_complex prod[N];
  int ndirac = 0;
  int mu[N],nu[N];
  
  for(int ich=0; ich<QPB_N_STOCH_MESON_2PT_CHANNELS; ich++)
    {
      
      corr[ich] = qpb_alloc(lt * sizeof(qpb_complex));

      ndirac = 0;
      switch(ich)
	{
	case G5_G5:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      {
		if(i==j)
		  {
		    mu[ndirac] = i;
		    nu[ndirac] = j;
		    prod[ndirac] = (qpb_complex){1.,0.};
		    ndirac++;
		  }
	      }
	  break;
	case G5_G4G5:	
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      {
		if(CNORM(qpb_gamma_t[i][j]) > 0.5)
		  {
		    mu[ndirac] = i;
		    nu[ndirac] = j;
		    prod[ndirac] = qpb_gamma_t[i][j];
		    ndirac++;
		  }
	      }
	  break;
	}

      for(int t=0; t<lt; t++)
	corr[ich][t] = (qpb_complex){0., 0.};

#ifdef OPENMP
#	pragma omp parallel for
#endif
      for(int t=0; t<lt; t++)
	{
	  for(int lv=0; lv<lvol3d; lv++)
	    {
	      int v = blk_to_ext[lv + t*lvol3d];
	      for(int s=0; s<n_vec; s++)
		for(int col0=0; col0<NC; col0++)
		  for(int id=0; id<ndirac; id++)
		    {
		      int i = mu[id];
		      int j = nu[id];
		      qpb_complex x = ((qpb_complex *)(light[s].index[v]))[col0+NC*i];
		      qpb_complex y = ((qpb_complex *)(heavy[s].index[v]))[col0+NC*j];
		      /* c = x * conj(y) */
		      qpb_complex c = {x.re*y.re + x.im*y.im, x.im*y.re - x.re*y.im};
		      /* corr = c*prod */
		      corr[ich][t].re += CMULR(prod[id], c);
		      corr[ich][t].im += CMULI(prod[id], c);
		    }	    
	    }
	}
      /*
       * Do this outside of OpenMP
       */
      for(int t=0; t<lt; t++)
	{
	  qpb_complex recv;	  
	  MPI_Allreduce(&corr[ich][t].re, &recv.re, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
	  MPI_Allreduce(&corr[ich][t].im, &recv.im, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
	  corr[ich][t] = recv;
	}
    }
  
  FILE *fp = NULL;
  if(am_master)
    {
      if((fp = fopen(outfile, "w")) == NULL)
	{
	  error("%s: error opening file in \"w\" mode\n", outfile);
	  MPI_Abort(MPI_COMM_WORLD, QPB_FILE_ERROR);
	  exit(QPB_FILE_ERROR);
	}
    }
  for(int t=0; t<lt; t++)
    {
      char ctag[QPB_MAX_STRING];
      for(int ich=0; ich<QPB_N_STOCH_MESON_2PT_CHANNELS; ich++)
	{
	  switch(ich)
	    {
	    case G5_G5:
	      strcpy(ctag ,"g5-g5");
	      break;
	    case G5_G4G5:
	      strcpy(ctag ,"g5-g4g5");
	      break;
	    }
	  if(am_master)
	    fprintf(fp, " %+2d %+2d %+2d %3d %+12.8e %+12.8e %s\n", 0, 0, 0, t, corr[ich][t].re, corr[ich][t].im, ctag);
	}
    }
  if(am_master)
    fclose(fp);
  
  for(int ich=0; ich<QPB_N_STOCH_MESON_2PT_CHANNELS; ich++)
    free(corr[ich]);

  return;
}
