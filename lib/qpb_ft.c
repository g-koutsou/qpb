#include <math.h>
#ifdef OPENMP
#	include <omp.h>
#endif
#include <qpb_types.h>
#include <qpb_globals.h>

#ifdef QPB_FT_FFTW
#include <fftw3.h>
#endif


#ifdef QPB_FT_FFTW
/*
 *
 * To use FFTW in parallel, the lattice needs to be redistributed;
 * this Fourier-transform function takes a number (n) of 3D blocks;
 * the n blocks shall be destributed over as many prosesses as possible;
 * then the parallel FFTW is called, destributing the z-axis over remaining processes
 *
 */
void
qpb_ft(qpb_complex **out, qpb_complex **in, int n, int mom[][4], int nmom)
{
  int nprocs = problem_params.nprocs;
  int Lz = problem_params.g_dim[1];
  int Ly = problem_params.g_dim[2];
  int Lx = problem_params.g_dim[3];

  int lz = problem_params.l_dim[1];
  int ly = problem_params.l_dim[2];
  int lx = problem_params.l_dim[3];

  int mn = 0;
  for(int i=1; i<nprocs+1; i++)
    {
      if((n % i) == 0)
	mn = i;
    }
  int mz = 1;
  for(int i=1; (i<nprocs+1) & (i*mn <= nprocs); i++)
    if((Lz % i) == 0)
      mz = i;

  int n_loc = n / mn;
  int lz_loc = Lz / mz;

  
  
  return;
}
#else
void
qpb_ft(qpb_complex **out, qpb_complex **in, int n, int mom[][4], int nmom)
{
  int lvol = problem_params.l_vol;
  int lt = problem_params.l_dim[0];
  int lvol3d = lvol/lt;
  double pi = atan(1.0)*4.0;
  
  for(int p=0; p<nmom; p++)
    {
      for(int i=0; i<n; i++)
	out[i][p] = (qpb_complex){0., 0.};
      
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
#ifdef OPENMP
#	pragma omp parallel for
#endif
	  for(int i=0; i<n; i++)
	    {
	      qpb_complex c;
	      c = CMUL(phase, in[i][lv]);
	      out[i][p].re += c.re;
	      out[i][p].im += c.im;
	    }
	}
    }
  /*
   * Do this outside of OpenMP
   */
  for(int p=0; p<nmom; p++)
    for(int i=0; i<n; i++)
      {
	qpb_complex recv;	  
	MPI_Reduce(&out[i][p].re, &recv.re, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	MPI_Reduce(&out[i][p].im, &recv.im, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
	MPI_Bcast(&recv.re, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	MPI_Bcast(&recv.im, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
	out[i][p] = recv;
      }
  
  return;
}
#endif
