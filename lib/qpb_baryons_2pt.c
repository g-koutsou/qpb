#include <math.h>
#include <stdio.h>
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <qpb_alloc.h>
#include <qpb_nucleon_2pt.h>
#include <qpb_delta_1o2_2pt.h>
#include <qpb_delta_3o2_2pt.h>
#include <qpb_gamma_matrices.h>
#include <qpb_stop_watch.h>
#include <qpb_ft.h>

#define QPB_N_BARYON_2PT_CHANNELS 21
enum qpb_baryon_2pt_channels {
  NUCL,			// 1 state
  NUCL_STAR,		// 1 state
  SIGMA_PLUS_MINUS,	// 1 state
  XI_ZERO_MINUS,	// 1 state
  DELTA11_1o2,		// 9 states [one for each C\gamma_j x C\gamma_k, k,j=x,y,z]
  DELTA12_1o2,
  DELTA13_1o2,
  DELTA21_1o2,
  DELTA22_1o2,
  DELTA23_1o2,
  DELTA31_1o2,
  DELTA32_1o2,
  DELTA33_1o2,
  DELTA1_3o2,		// 4 states [one for each C\gamma_\mu]
  DELTA2_3o2,
  DELTA3_3o2,
  DELTA4_3o2,
  OMEGA1,		// 4 states [one for each C\gamma_\mu]
  OMEGA2,
  OMEGA3,
  OMEGA4
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
 *  Computes baryon 2pt function:
 *
 *  The function does not return anything. It writes the correlation functions
 *  to a file (as ascii).
 *  
 */  
void
qpb_baryons_2pt(qpb_spinor_field *light, qpb_spinor_field *heavy, int max_q2, char outfile[])
{
  if(heavy == NULL)
    heavy = light;

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
  qpb_complex **corr_p[QPB_N_BARYON_2PT_CHANNELS];
  qpb_complex **corr_m[QPB_N_BARYON_2PT_CHANNELS];
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

  
  for(int ich=0; ich<QPB_N_BARYON_2PT_CHANNELS; ich++)
    {      
      corr_p[ich] = qpb_alloc(nmom * sizeof(qpb_complex *));
      corr_m[ich] = qpb_alloc(nmom * sizeof(qpb_complex *));
      for(int p=0; p<nmom; p++)
	{
	  corr_p[ich][p] = qpb_alloc(lt * sizeof(qpb_complex));
	  corr_m[ich][p] = qpb_alloc(lt * sizeof(qpb_complex));
	  for(int t=0; t<lt; t++)
	    {
	      corr_p[ich][p][t] = (qpb_complex){0., 0.};
	      corr_m[ich][p][t] = (qpb_complex){0., 0.};
	    }
	}
    }

  double t0;
  for(int ich=0; ich<QPB_N_BARYON_2PT_CHANNELS;)
    {      
      qpb_complex **corr_x;
      int nch = 0;
      switch(ich)
	{
	case NUCL:
	  nch = 1;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_nucleon_2pt(corr_x, light, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Nucleon contractions done in: %g sec\n", t0);	  
	  break;

	case NUCL_STAR:
	  nch = 1;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_nucleon_star_2pt(corr_x, light, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Nucleon* contractions done in: %g sec\n", t0);	  
	  break;

	case SIGMA_PLUS_MINUS:
	  nch = 1;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_nucleon_2pt(corr_x, heavy, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Sigma +/- contractions done in: %g sec\n", t0);	  
	  break;

	case XI_ZERO_MINUS:
	  nch = 1;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_nucleon_2pt(corr_x, light, heavy);
	  t0 = qpb_stop_watch(t0);
	  print(" Xi 0/- contractions done in: %g sec\n", t0);	  
	  break;

	case DELTA11_1o2:
	case DELTA12_1o2:
	case DELTA13_1o2:

	case DELTA21_1o2:
	case DELTA22_1o2:
	case DELTA23_1o2:

	case DELTA31_1o2:
	case DELTA32_1o2:
	case DELTA33_1o2:

	  nch = 9;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_1o2_2pt(corr_x, light, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Delta Iz = 1/2 contractions done in: %g sec\n", t0);	  
	  break;

	case DELTA1_3o2:
	case DELTA2_3o2:
	case DELTA3_3o2:
	case DELTA4_3o2:
	  nch = 4;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_3o2_2pt(corr_x, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Delta Iz = 3/2 contractions done in: %g sec\n", t0);	  
	  break;

	case OMEGA1:
	case OMEGA2:
	case OMEGA3:
	case OMEGA4:
	  nch = 4;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_3o2_2pt(corr_x, heavy);
	  t0 = qpb_stop_watch(t0);
	  print(" Omega contractions done in: %g sec\n", t0);
	  break;
	}

      qpb_complex **corr_k = corr_alloc(nch*lt*2, nmom);
      qpb_ft(corr_k, corr_x, nch*lt*2, mom, nmom);
      
      for(int i=0; i<nch; i++)
	for(int t=0; t<lt; t++)
	  for(int p=0; p<nmom; p++)
	    {
	      corr_p[i+ich][p][t] = corr_k[i*lt*2 + lt*0 + t][p];
	      corr_m[i+ich][p][t] = corr_k[i*lt*2 + lt*1 + t][p];
	    }

      ich += nch;
      corr_free(corr_k, 2*nch*lt, nmom);
      corr_free(corr_x, 2*nch*lt, lvol3d);
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
	for(int ich=0; ich<QPB_N_BARYON_2PT_CHANNELS; ich++)
	  {
	    switch(ich)
	      {
	      case NUCL:
		strcpy(ctag ,"NUCLEON");
		break;
	      case NUCL_STAR:
		strcpy(ctag ,"NUCLEON*");
		break;
	      case SIGMA_PLUS_MINUS:
		strcpy(ctag ,"SIGMA+/-");
		break;
	      case XI_ZERO_MINUS:
		strcpy(ctag ,"XI0/-");
		break;

	      case DELTA11_1o2:
		strcpy(ctag ,"DELTA11+/0");
		break;
	      case DELTA12_1o2:
		strcpy(ctag ,"DELTA12+/0");
		break;
	      case DELTA13_1o2:
		strcpy(ctag ,"DELTA13+/0");
		break;

	      case DELTA21_1o2:
		strcpy(ctag ,"DELTA21+/0");
		break;
	      case DELTA22_1o2:
		strcpy(ctag ,"DELTA22+/0");
		break;
	      case DELTA23_1o2:
		strcpy(ctag ,"DELTA23+/0");
		break;

	      case DELTA31_1o2:
		strcpy(ctag ,"DELTA31+/0");
		break;
	      case DELTA32_1o2:
		strcpy(ctag ,"DELTA32+/0");
		break;
	      case DELTA33_1o2:
		strcpy(ctag ,"DELTA33+/0");
		break;

	      case DELTA1_3o2:
		strcpy(ctag ,"DELTA1++/-");
		break;
	      case DELTA2_3o2:
		strcpy(ctag ,"DELTA2++/-");
		break;
	      case DELTA3_3o2:
		strcpy(ctag ,"DELTA3++/-");
		break;
	      case DELTA4_3o2:
		strcpy(ctag ,"DELTA4++/-");
		break;
	      case OMEGA1:
		strcpy(ctag ,"OMEGA1");
		break;
	      case OMEGA2:
		strcpy(ctag ,"OMEGA2");
		break;
	      case OMEGA3:
		strcpy(ctag ,"OMEGA3");
		break;
	      case OMEGA4:
		strcpy(ctag ,"OMEGA4");
		break;
	      }
	    if(am_master)
	      fprintf(fp, " %+2d %+2d %+2d %3d %+e %+e %+e %+e %15s\n", 
		      mom[p][3], mom[p][2], mom[p][1], t, 
		      corr_p[ich][p][t].re, corr_p[ich][p][t].im, 
		      corr_m[ich][p][t].re, corr_m[ich][p][t].im, ctag);
	  }
    }
  if(am_master)
    fclose(fp);
  
  for(int ich=0; ich<QPB_N_BARYON_2PT_CHANNELS; ich++)
    {
      for(int p=0; p<nmom; p++)
	{
	  free(corr_p[ich][p]);
	  free(corr_m[ich][p]);
	}
      free(corr_p[ich]);
      free(corr_m[ich]);
    }
  free(mom);
  return;
}
