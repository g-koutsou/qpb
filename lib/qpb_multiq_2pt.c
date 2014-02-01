#include <math.h>
#include <stdio.h>
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <qpb_alloc.h>
#include <qpb_gamma_matrices.h>
#include <qpb_stop_watch.h>
#include <qpb_ft.h>
#include <qpb_tetraq_mol_2pt.h>

#define QPB_N_MULTIQ_2PT_CHANNELS 2
enum qpb_multiq_2pt_channels {
  TETRAQ_MOL_TR,
  TETRAQ_MOL_TRTR
};

void *
corr_alloc(int n, int lv)
{
  qpb_complex **corr = qpb_alloc(sizeof(qpb_complex *)*n);
  for(int i=0; i<n; i++)
    {
      corr[i] = qpb_alloc(sizeof(qpb_complex)*lv);
      for(int j=0; j<lv; j++)
	corr[i][j] = (qpb_complex){0., 0.};
    }
  return corr;
}

void
corr_free(qpb_complex **corr, int n, int lv)
{
  for(int i=0; i<n; i++)
    free(corr[i]);

  free(corr);
  return;
}
/*
 *  Computes multiquark 2pt functions:
 *
 *  The function does not return anything. It writes the correlation functions
 *  to a file (as ascii).
 *  
 */  
void
qpb_multiq_2pt(qpb_spinor_field *prop, int max_q2, char outfile[])
{
  /* This should never happen. For now the package is built so that
     only x, y and z are parallelized accross MPI and t along OpenMP */
  if(problem_params.par_dir[0] == 1)
    {
      error(" %s() not implemented for distributed t-direction, quiting\n", __func__);
      exit(QPB_NOT_IMPLEMENTED_ERROR);
    }
  
  int lvol = problem_params.l_vol;
  int lt = problem_params.l_dim[0];
  int lvol3d = lvol/lt;
  qpb_complex **corr_p[QPB_N_MULTIQ_2PT_CHANNELS];
  int nmom = 0, nq = (int)sqrt(max_q2)+1;
  int (*mom)[4];
  /*
    Count momentum vectors <= max_q2
   */
  for(int z=-nq; z<nq; z++)
    for(int y=-nq; y<nq; y++)
      for(int x=-nq; x<nq; x++)
	{
	  double q2 = x*x+y*y+z*z;
	  if(q2 <= max_q2)
	    nmom++;
	}
  
  mom = qpb_alloc(sizeof(int)*4*nmom);
  nmom = 0;

  /*
    Store momentum vectors <= max_q2
   */
  for(int z=-nq; z<nq; z++)
    for(int y=-nq; y<nq; y++)
      for(int x=-nq; x<nq; x++)
	{
	  double q2 = x*x+y*y+z*z;
	  if(q2 <= max_q2)
	    {
	      mom[nmom][3] = x;
	      mom[nmom][2] = y;
	      mom[nmom][1] = z;
	      mom[nmom][0] = q2;
	      nmom++;
	    }
	}
  

  /*
    Sort in ascending q^2 value
   */
  for(int i=0; i<nmom; i++)
    {
      int x = mom[i][0]; /* the q^2 value */
      int k = i;
      for(int j=i+1; j<nmom; j++)
	if(mom[j][0] < x)
	  {
	    k = j;
	    x = mom[j][0];
	  }
      int swap[] = {mom[k][0], mom[k][1], mom[k][2], mom[k][3]};
      for(int j=0; j<4; j++) mom[k][j] = mom[i][j];
      for(int j=0; j<4; j++) mom[i][j] = swap[j];
    }

  
  for(int ich=0; ich<QPB_N_MULTIQ_2PT_CHANNELS; ich++)
    {      
      corr_p[ich] = qpb_alloc(nmom * sizeof(qpb_complex *));
      for(int p=0; p<nmom; p++)
	{
	  corr_p[ich][p] = qpb_alloc(lt * sizeof(qpb_complex));
	  for(int t=0; t<lt; t++)
	    corr_p[ich][p][t] = (qpb_complex){0., 0.};
	}
    }

  double t0;
  for(int ich=0; ich<QPB_N_MULTIQ_2PT_CHANNELS;)
    {      
      qpb_complex **corr_x;
      int nch = 0;
      switch(ich)
	{
	case TETRAQ_MOL_TR:
	case TETRAQ_MOL_TRTR:
	  nch = 2;
	  corr_x = corr_alloc(nch*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_tetraq_mol_2pt(corr_x, prop);
	  t0 = qpb_stop_watch(t0);
	  print(" Tetraquark molecule contractions done in: %g sec\n", t0);	  
	  break;
	}

      qpb_complex **corr_k = corr_alloc(nch*lt, nmom);
      qpb_ft(corr_k, corr_x, nch*lt, mom, nmom);
      
      for(int i=0; i<nch; i++)
	for(int t=0; t<lt; t++)
	  for(int p=0; p<nmom; p++)
	    {
	      corr_p[i+ich][p][t] = corr_k[i*lt + t][p];
	    }
      
      ich += nch;
      corr_free(corr_k, nch*lt, nmom);
      corr_free(corr_x, nch*lt, lvol3d);
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
      for(int p=0; p<nmom; p++)
	for(int ich=0; ich<QPB_N_MULTIQ_2PT_CHANNELS; ich++)
	  {
	    switch(ich)
	      {
	      case TETRAQ_MOL_TR:
		strcpy(ctag ,"MOLECULE_TR");
		break;
	      case TETRAQ_MOL_TRTR:
		strcpy(ctag ,"MOLECULE_TRTR");
		break;
	      }
	    if(am_master)
	      {
		fprintf(fp, " %+2d %+2d %+2d %3d ",
			mom[p][3], mom[p][2], mom[p][1], t);
		    
		fprintf(fp, " %+e %+e ", corr_p[ich][p][t].re, corr_p[ich][p][t].im);
		    
		fprintf(fp, " %20s\n", ctag);
	      }
	  }
    }

  if(am_master)
    fclose(fp);
  
  for(int ich=0; ich<QPB_N_MULTIQ_2PT_CHANNELS; ich++)
    {
      for(int p=0; p<nmom; p++)
	free(corr_p[ich][p]);

      free(corr_p[ich]);
    }
  free(mom);
  return;
}
