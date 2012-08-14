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

#define QPB_N_BARYON_2PT_CHANNELS 39
enum qpb_baryon_2pt_channels {
  /* Octet baryons */
  NUCL,				// 1 state
  NUCL_STAR,			// 1 state
  SIGMA_PLUS_MINUS,		// 1 state
  XI_ZERO_MINUS,		// 1 state
  /* Decuplet baryons */
  DELTA_PLUS_ZERO_11,		// 9 states [one for each C\gamma_j x C\gamma_k, k,j=x,y,z]
  DELTA_PLUS_ZERO_12,
  DELTA_PLUS_ZERO_13,
  DELTA_PLUS_ZERO_21,
  DELTA_PLUS_ZERO_22,
  DELTA_PLUS_ZERO_23,
  DELTA_PLUS_ZERO_31,
  DELTA_PLUS_ZERO_32,
  DELTA_PLUS_ZERO_33,
  SIGMA_STAR_PLUS_MINUS_11,	// 9 states [one for each C\gamma_j x C\gamma_k, k,j=x,y,z]
  SIGMA_STAR_PLUS_MINUS_12,
  SIGMA_STAR_PLUS_MINUS_13,
  SIGMA_STAR_PLUS_MINUS_21,
  SIGMA_STAR_PLUS_MINUS_22,
  SIGMA_STAR_PLUS_MINUS_23,
  SIGMA_STAR_PLUS_MINUS_31,
  SIGMA_STAR_PLUS_MINUS_32,
  SIGMA_STAR_PLUS_MINUS_33,
  XI_STAR_ZERO_MINUS_11,	// 9 states [one for each C\gamma_j x C\gamma_k, k,j=x,y,z]
  XI_STAR_ZERO_MINUS_12,
  XI_STAR_ZERO_MINUS_13,
  XI_STAR_ZERO_MINUS_21,
  XI_STAR_ZERO_MINUS_22,
  XI_STAR_ZERO_MINUS_23,
  XI_STAR_ZERO_MINUS_31,
  XI_STAR_ZERO_MINUS_32,
  XI_STAR_ZERO_MINUS_33,
  DELTA_PLUSPLUS_MINUS_11,	// 4 states [one for each C\gamma_\mu]
  DELTA_PLUSPLUS_MINUS_22,
  DELTA_PLUSPLUS_MINUS_33,
  DELTA_PLUSPLUS_MINUS_44,
  OMEGA_11,			// 4 states [one for each C\gamma_\mu]
  OMEGA_22,
  OMEGA_33,
  OMEGA_44
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

	case DELTA_PLUS_ZERO_11:
	case DELTA_PLUS_ZERO_12:
	case DELTA_PLUS_ZERO_13:

	case DELTA_PLUS_ZERO_21:
	case DELTA_PLUS_ZERO_22:
	case DELTA_PLUS_ZERO_23:

	case DELTA_PLUS_ZERO_31:
	case DELTA_PLUS_ZERO_32:
	case DELTA_PLUS_ZERO_33:
	  nch = 9;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_1o2_2pt(corr_x, light, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Delta +/0 contractions done in: %g sec\n", t0);	  
	  break;

	case SIGMA_STAR_PLUS_MINUS_11:
	case SIGMA_STAR_PLUS_MINUS_12:
	case SIGMA_STAR_PLUS_MINUS_13:

	case SIGMA_STAR_PLUS_MINUS_21:
	case SIGMA_STAR_PLUS_MINUS_22:
	case SIGMA_STAR_PLUS_MINUS_23:

	case SIGMA_STAR_PLUS_MINUS_31:
	case SIGMA_STAR_PLUS_MINUS_32:
	case SIGMA_STAR_PLUS_MINUS_33:
	  nch = 9;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_1o2_2pt(corr_x, light, heavy);
	  t0 = qpb_stop_watch(t0);
	  print(" Sigma* +/- contractions done in: %g sec\n", t0);	  
	  break;


	case XI_STAR_ZERO_MINUS_11:
	case XI_STAR_ZERO_MINUS_12:
	case XI_STAR_ZERO_MINUS_13:

	case XI_STAR_ZERO_MINUS_21:
	case XI_STAR_ZERO_MINUS_22:
	case XI_STAR_ZERO_MINUS_23:

	case XI_STAR_ZERO_MINUS_31:
	case XI_STAR_ZERO_MINUS_32:
	case XI_STAR_ZERO_MINUS_33:
	  nch = 9;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_1o2_2pt(corr_x, heavy, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Xi* 0/- contractions done in: %g sec\n", t0);	  
	  break;

	case DELTA_PLUSPLUS_MINUS_11:
	case DELTA_PLUSPLUS_MINUS_22:
	case DELTA_PLUSPLUS_MINUS_33:
	case DELTA_PLUSPLUS_MINUS_44:
	  nch = 4;
	  corr_x = corr_alloc(nch*2*lt, lvol3d);

	  t0 = qpb_stop_watch(0);
	  qpb_delta_3o2_2pt(corr_x, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Delta ++/- contractions done in: %g sec\n", t0);	  
	  break;

	case OMEGA_11:
	case OMEGA_22:
	case OMEGA_33:
	case OMEGA_44:
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
		strcpy(ctag ,"NUCLEON_[+/0]");
		break;
	      case NUCL_STAR:
		strcpy(ctag ,"NUCLEON*_[+/0]");
		break;
	      case SIGMA_PLUS_MINUS:
		strcpy(ctag ,"SIGMA_[+/-]");
		break;
	      case XI_ZERO_MINUS:
		strcpy(ctag ,"XI_[0/-]");
		break;

	      case DELTA_PLUS_ZERO_11:
		strcpy(ctag ,"DELTA_11_[+/0]");
		break;
	      case DELTA_PLUS_ZERO_12:
		strcpy(ctag ,"DELTA_12_[+/0]");
		break;
	      case DELTA_PLUS_ZERO_13:
		strcpy(ctag ,"DELTA_13_[+/0]");
		break;

	      case DELTA_PLUS_ZERO_21:
		strcpy(ctag ,"DELTA_21_[+/0]");
		break;
	      case DELTA_PLUS_ZERO_22:
		strcpy(ctag ,"DELTA_22_[+/0]");
		break;
	      case DELTA_PLUS_ZERO_23:
		strcpy(ctag ,"DELTA_23_[+/0]");
		break;

	      case DELTA_PLUS_ZERO_31:
		strcpy(ctag ,"DELTA_31_[+/0]");
		break;
	      case DELTA_PLUS_ZERO_32:
		strcpy(ctag ,"DELTA_32_[+/0]");
		break;
	      case DELTA_PLUS_ZERO_33:
		strcpy(ctag ,"DELTA_33_[+/0]");
		break;

	      case SIGMA_STAR_PLUS_MINUS_11:
		strcpy(ctag ,"SIGMA*_11_[+/-]");
		break;
	      case SIGMA_STAR_PLUS_MINUS_12:
		strcpy(ctag ,"SIGMA*_12_[+/-]");
		break;
	      case SIGMA_STAR_PLUS_MINUS_13:
		strcpy(ctag ,"SIGMA*_13_[+/-]");
		break;

	      case SIGMA_STAR_PLUS_MINUS_21:
		strcpy(ctag ,"SIGMA*_21_[+/-]");
		break;
	      case SIGMA_STAR_PLUS_MINUS_22:
		strcpy(ctag ,"SIGMA*_22_[+/-]");
		break;
	      case SIGMA_STAR_PLUS_MINUS_23:
		strcpy(ctag ,"SIGMA*_23_[+/-]");
		break;

	      case SIGMA_STAR_PLUS_MINUS_31:
		strcpy(ctag ,"SIGMA*_31_[+/-]");
		break;
	      case SIGMA_STAR_PLUS_MINUS_32:
		strcpy(ctag ,"SIGMA*_32_[+/-]");
		break;
	      case SIGMA_STAR_PLUS_MINUS_33:
		strcpy(ctag ,"SIGMA*_33_[+/-]");
		break;

	      case XI_STAR_ZERO_MINUS_11:
		strcpy(ctag ,"XI*_11_[0/-]");
		break;
	      case XI_STAR_ZERO_MINUS_12:
		strcpy(ctag ,"XI*_12_[0/-]");
		break;
	      case XI_STAR_ZERO_MINUS_13:
		strcpy(ctag ,"XI*_13_[0/-]");
		break;

	      case XI_STAR_ZERO_MINUS_21:
		strcpy(ctag ,"XI*_21_[0/-]");
		break;
	      case XI_STAR_ZERO_MINUS_22:
		strcpy(ctag ,"XI*_22_[0/-]");
		break;
	      case XI_STAR_ZERO_MINUS_23:
		strcpy(ctag ,"XI*_23_[0/-]");
		break;

	      case XI_STAR_ZERO_MINUS_31:
		strcpy(ctag ,"XI*_31_[0/-]");
		break;
	      case XI_STAR_ZERO_MINUS_32:
		strcpy(ctag ,"XI*_32_[0/-]");
		break;
	      case XI_STAR_ZERO_MINUS_33:
		strcpy(ctag ,"XI*_33_[0/-]");
		break;

	      case DELTA_PLUSPLUS_MINUS_11:
		strcpy(ctag ,"DELTA_11_[++/-]");
		break;
	      case DELTA_PLUSPLUS_MINUS_22:
		strcpy(ctag ,"DELTA_22_[++/-]");
		break;
	      case DELTA_PLUSPLUS_MINUS_33:
		strcpy(ctag ,"DELTA_33_[++/-]");
		break;
	      case DELTA_PLUSPLUS_MINUS_44:
		strcpy(ctag ,"DELTA_44_[++/-]");
		break;

	      case OMEGA_11:
		strcpy(ctag ,"OMEGA_11");
		break;
	      case OMEGA_22:
		strcpy(ctag ,"OMEGA_22");
		break;
	      case OMEGA_33:
		strcpy(ctag ,"OMEGA_33");
		break;
	      case OMEGA_44:
		strcpy(ctag ,"OMEGA_44");
		break;
	      }
	    if(am_master)
	      fprintf(fp, " %+2d %+2d %+2d %3d %+e %+e %+e %+e %20s\n", 
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
