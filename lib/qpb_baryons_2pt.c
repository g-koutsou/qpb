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

#define QPB_N_BARYON_2PT_CHANNELS 13
enum qpb_baryon_2pt_channels {
  NUCL,			// 1 state
  DELTA1_1o2,		// 4 states [one for each C\gamma_\mu]
  DELTA2_1o2,
  DELTA3_1o2,
  DELTA4_1o2,
  DELTA1_3o2,		// 4 states [one for each C\gamma_\mu]
  DELTA2_3o2,
  DELTA3_3o2,
  DELTA4_3o2,
  OMEGA1,		// 4 states [one for each C\gamma_\mu]
  OMEGA2,
  OMEGA3,
  OMEGA4
};

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
  qpb_complex ***corr_x;
  int nmom = 0, nq = (int)sqrt(max_q2)+1;
  int (*mom)[4];
  double pi = atan(1.0)*4.0;
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

  
  corr_x = qpb_alloc(lt * sizeof(qpb_complex **));
  for(int t=0; t<lt; t++)
    {
      corr_x[t] = qpb_alloc(lvol3d * sizeof(qpb_complex *));
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
      int nch = 0;
      switch(ich)
	{
	case NUCL:
	  nch = 1;
          for(int t=0; t<lt; t++)
	    for(int v=0; v<lvol3d; v++)
	      corr_x[t][v] = qpb_alloc(2 * nch * sizeof(qpb_complex));
	  
	  t0 = qpb_stop_watch(0);
	  qpb_nucleon_2pt(corr_x, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Nucleon contractions done in: %g sec\n", t0);	  
	  break;

	case DELTA1_1o2:
	case DELTA2_1o2:
	case DELTA3_1o2:
	case DELTA4_1o2:
	  nch = 4;
          for(int t=0; t<lt; t++)
	    for(int v=0; v<lvol3d; v++)
	      corr_x[t][v] = qpb_alloc(2 * nch * sizeof(qpb_complex));

	  t0 = qpb_stop_watch(0);
	  qpb_delta_1o2_2pt(corr_x, light);
	  t0 = qpb_stop_watch(t0);
	  print(" Delta Iz = 1/2 contractions done in: %g sec\n", t0);	  
	  break;

	case DELTA1_3o2:
	case DELTA2_3o2:
	case DELTA3_3o2:
	case DELTA4_3o2:
	  nch = 4;
          for(int t=0; t<lt; t++)
	    for(int v=0; v<lvol3d; v++)
	      corr_x[t][v] = qpb_alloc(2 * nch * sizeof(qpb_complex));

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
          for(int t=0; t<lt; t++)
	    for(int v=0; v<lvol3d; v++)
	      corr_x[t][v] = qpb_alloc(2 * nch * sizeof(qpb_complex));

	  t0 = qpb_stop_watch(0);
	  qpb_delta_3o2_2pt(corr_x, heavy);
	  t0 = qpb_stop_watch(t0);
	  print(" Omega contractions done in: %g sec\n", t0);
	  break;
	}

#ifdef OPENMP
#	pragma omp parallel for
#endif
      for(int t=0; t<lt; t++)
	{
	  for(int p=0; p<nmom; p++)
	    {
	      for(int lv=0; lv<lvol3d; lv++)
		{
		  unsigned short int *gdim = problem_params.g_dim;
		  unsigned short int *ldim = problem_params.l_dim;
		  int lx = X_INDEX(lv, ldim);
		  int ly = Y_INDEX(lv, ldim);
		  int lz = Z_INDEX(lv, ldim);
		  unsigned short int *coords = problem_params.coords;

		  int x = coords[3]*ldim[3]+lx;
		  int y = coords[2]*ldim[2]+ly;
		  int z = coords[1]*ldim[1]+lz;

		  qpb_double phi = (double)((double)x*mom[p][3]/gdim[3] + 
					    (double)y*mom[p][2]/gdim[2] + 
					    (double)z*mom[p][1]/gdim[1]);
		  
		  phi = phi*2*pi;
		  qpb_complex phase = {cos(phi),-sin(phi)};

		  for(int i=0; i<nch; i++)
		    {
		      qpb_complex c;
		      c = CMUL(phase, corr_x[t][lv][0 + i*2]);
		      corr_p[ich + i][p][t].re += c.re;
		      corr_p[ich + i][p][t].im += c.im;
		      
		      c = CMUL(phase, corr_x[t][lv][1 + i*2]);
		      corr_m[ich + i][p][t].re += c.re;
		      corr_m[ich + i][p][t].im += c.im;
		    }
		}
	    }
	}
      /*
       * Do this outside of OpenMP
       */
      for(int t=0; t<lt; t++)
	for(int p=0; p<nmom; p++)
	  for(int i=0; i<nch; i++)
	    {
	      qpb_complex recv;	  
	      MPI_Reduce(&corr_p[ich + i][p][t].re, &recv.re, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	      MPI_Reduce(&corr_p[ich + i][p][t].im, &recv.im, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	      MPI_Bcast(&recv.re, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	      MPI_Bcast(&recv.im, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	      corr_p[ich + i][p][t] = recv;
	      
	      MPI_Reduce(&corr_m[ich + i][p][t].re, &recv.re, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	      MPI_Reduce(&corr_m[ich + i][p][t].im, &recv.im, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	      MPI_Bcast(&recv.re, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	      MPI_Bcast(&recv.im, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	      corr_m[ich + i][p][t] = recv;
	    }
      for(int t=0; t<lt; t++)
	for(int v=0; v<lvol3d; v++)
	  free(corr_x[t][v]);

      ich += nch;
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
	      case DELTA1_1o2:
		strcpy(ctag ,"DELTA1_1o2");
		break;
	      case DELTA2_1o2:
		strcpy(ctag ,"DELTA2_1o2");
		break;
	      case DELTA3_1o2:
		strcpy(ctag ,"DELTA3_1o2");
		break;
	      case DELTA4_1o2:
		strcpy(ctag ,"DELTA4_1o2");
		break;
	      case DELTA1_3o2:
		strcpy(ctag ,"DELTA1_3o2");
		break;
	      case DELTA2_3o2:
		strcpy(ctag ,"DELTA2_3o2");
		break;
	      case DELTA3_3o2:
		strcpy(ctag ,"DELTA3_3o2");
		break;
	      case DELTA4_3o2:
		strcpy(ctag ,"DELTA4_3o2");
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

  for(int t=0; t<lt; t++)
    {
      free(corr_x[t]);
    }
  free(corr_x);
  
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
