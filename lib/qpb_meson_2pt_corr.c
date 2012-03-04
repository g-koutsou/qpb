#include <math.h>
#include <stdio.h>
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_errors.h>
#include <qpb_alloc.h>
#include <qpb_gamma_matrices.h>

#define QPB_N_MESON_2PT_CHANNELS 7
enum qpb_meson_2pt_channels {
  G5_G5,
  G5_G4G5,
  G4G5_G5,
  G4G5_G4G5,
  G1_G1,
  G2_G2,
  G3_G3
};

/*
 *  Computes meson 2pt function for gammas: 
 *  g5-g5, g5-g4g5, g4g5-g5, g4g5-g4g5, g1-g1, g2-g2, g3-g3
 *
 *  The function does not return anything. It writes the correlation functions
 *  to a file (as ascii).
 *
 *  Updated for non-zero momentum correlator. Correlator calculated explicitely
 *  for all momentum vectors (i.e. non-FFT)
 *  
 */  
void
qpb_meson_2pt_corr(qpb_spinor_field *light, qpb_spinor_field *heavy, int max_q2, char outfile[])
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
  qpb_complex **corr[QPB_N_MESON_2PT_CHANNELS];
  int N = (NS*NS*NS*NS);
  qpb_complex prod[N];
  int ndirac = 0;
  int mu[N],nu[N],ku[N],lu[N];
  qpb_complex gamma_5x[NS][NS];
  qpb_complex gamma_5y[NS][NS];
  qpb_complex gamma_5z[NS][NS];
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

  for(int ich=0; ich<QPB_N_MESON_2PT_CHANNELS; ich++)
    {
      
      corr[ich] = qpb_alloc(nmom * sizeof(qpb_complex *));
      for(int p=0; p<nmom; p++)
	corr[ich][p] = qpb_alloc(lt * sizeof(qpb_complex));

      ndirac = 0;
      switch(ich)
	{
	case G5_G5:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(i==j && k==l)
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = (qpb_complex){1.,0.};
			ndirac++;
		      }
		  }
	  break;
	case G5_G4G5:	
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(i==j && CNORM(qpb_gamma_t[k][l]) > 0.5)
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = qpb_gamma_t[k][l];
			ndirac++;
		      }
		  }
	  break;
	case G4G5_G5:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(CNORM(qpb_gamma_t[i][j]) > 0.5 && k==l )
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = qpb_gamma_t[i][j];
			ndirac++;
		      }
		  }
	  break;
	case G4G5_G4G5:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(CNORM(CMUL(qpb_gamma_t[i][j],qpb_gamma_t[k][l])) > 0.5 )
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = CMUL(qpb_gamma_t[i][j],qpb_gamma_t[k][l]);
			ndirac++;
		      }
		  }
	  break;
	case G1_G1:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      {
		gamma_5x[i][j] = (qpb_complex){0., 0.};
		for(int k=0; k<NS; k++)
		  {
		    gamma_5x[i][j].re += 
		      CMULR(qpb_gamma_5[i][k], qpb_gamma_x[k][j]);
		    gamma_5x[i][j].im += 
		      CMULI(qpb_gamma_5[i][k], qpb_gamma_x[k][j]);
		  }
	      }
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(CNORM(CMUL(gamma_5x[i][j],gamma_5x[k][l])) > 0.5 )
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = CNEGATE(CMUL(gamma_5x[i][j],gamma_5x[k][l]));
			ndirac++;
		      }
		  }
	  break;
	case G2_G2:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      {
		gamma_5y[i][j] = (qpb_complex){0., 0.};
		for(int k=0; k<NS; k++)
		  {
		    gamma_5y[i][j].re += 
		      CMULR(qpb_gamma_5[i][k], qpb_gamma_y[k][j]);
		    gamma_5y[i][j].im += 
		      CMULI(qpb_gamma_5[i][k], qpb_gamma_y[k][j]);
		  }
	      }
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(CNORM(CMUL(gamma_5y[i][j],gamma_5y[k][l])) > 0.5 )
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = CNEGATE(CMUL(gamma_5y[i][j],gamma_5y[k][l]));
			ndirac++;
		      }
		  }
	  break;
	case G3_G3:
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      {
		gamma_5z[i][j] = (qpb_complex){0., 0.};
		for(int k=0; k<NS; k++)
		  {
		    gamma_5z[i][j].re += 
		      CMULR(qpb_gamma_5[i][k], qpb_gamma_z[k][j]);
		    gamma_5z[i][j].im += 
		      CMULI(qpb_gamma_5[i][k], qpb_gamma_z[k][j]);
		  }
	      }
	  for(int i=0; i<NS; i++)
	    for(int j=0; j<NS; j++)
	      for(int k=0; k<NS; k++)
		for(int l=0; l<NS; l++)
		  {
		    if(CNORM(CMUL(gamma_5z[i][j],gamma_5z[k][l])) > 0.5 )
		      {
			mu[ndirac] = i;
			nu[ndirac] = j;
			ku[ndirac] = k;
			lu[ndirac] = l;
			prod[ndirac] = CNEGATE(CMUL(gamma_5z[i][j],gamma_5z[k][l]));
			ndirac++;
		      }
		  }
	  break;
	}
#ifdef OPENMP
#	pragma omp parallel for
#endif
      for(int t=0; t<lt; t++)
	{
	  for(int p=0; p<nmom; p++)
	    {
	      corr[ich][p][t] = (qpb_complex){0., 0.};
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
		  qpb_complex phase = {cos(phi),
				       -sin(phi)};

		  int v = blk_to_ext[lv + t*lvol3d];
		  for(int col0=0; col0<NC; col0++)
		    for(int col1=0; col1<NC; col1++)
		      for(int id=0; id<ndirac; id++)
			{
			  int i = mu[id];
			  int j = nu[id];
			  int k = ku[id];
			  int l = lu[id];
			  qpb_complex hp = ((qpb_complex *)(light[col0+NC*l].index[v]))[col1+NC*i];
			  qpb_complex lp = ((qpb_complex *)(heavy[col0+NC*k].index[v]))[col1+NC*j];
			  /* c = x * conj(y) */
			  qpb_complex c = {hp.re*lp.re + hp.im*lp.im, hp.im*lp.re - hp.re*lp.im};
			  c = CMUL(c, phase);
			  /* corr = c*prod */
			  corr[ich][p][t].re += CMULR(prod[id], c);
			  corr[ich][p][t].im += CMULI(prod[id], c);
			}
		}
	    }
	}
      /*
       * Do this outside of OpenMP
       */
      for(int t=0; t<lt; t++)
	for(int p=0; p<nmom; p++)
	  {
	    qpb_complex recv;	  
	    MPI_Reduce(&corr[ich][p][t].re, &recv.re, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	    MPI_Reduce(&corr[ich][p][t].im, &recv.im, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	    MPI_Bcast(&recv.re, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	    MPI_Bcast(&recv.im, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	    corr[ich][p][t] = recv;
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
      for(int p=0; p<nmom; p++)
	for(int ich=0; ich<QPB_N_MESON_2PT_CHANNELS; ich++)
	  {
	    switch(ich)
	      {
	      case G5_G5:
		strcpy(ctag ,"g5-g5");
		break;
	      case G5_G4G5:
		strcpy(ctag ,"g5-g4g5");
		break;
	      case G4G5_G5:
		strcpy(ctag ,"g4g5-g5");
		break;
	      case G4G5_G4G5:
		strcpy(ctag ,"g4g5-g4g5");
		break;
	      case G1_G1:
		strcpy(ctag ,"g1-g1");
		break;
	      case G2_G2:
		strcpy(ctag ,"g2-g2");
		break;
	      case G3_G3:
		strcpy(ctag ,"g3-g3");
		break;
	      }
	    if(am_master)
	      fprintf(fp, " %+2d %+2d %+2d %3d %+e %+e %s\n", 
		      mom[p][3], mom[p][2], mom[p][1], t, corr[ich][p][t].re, corr[ich][p][t].im, ctag);
	  }
    }
  if(am_master)
    fclose(fp);
  
  for(int ich=0; ich<QPB_N_MESON_2PT_CHANNELS; ich++)
    {
      for(int p=0; p<nmom; p++)
	free(corr[ich][p]);
      free(corr[ich]);
    }
  free(mom);
  return;
}
