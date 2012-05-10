#include <math.h>
#ifdef OPENMP
#	include <omp.h>
#endif
#include <qpb_types.h>
#include <qpb_alloc.h>
#include <qpb_globals.h>

#ifdef QPB_FT_FFTW
#include <fftw3.h>
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
  int rank = problem_params.proc_id;
  int nprocs = problem_params.nprocs;
  int Lz = problem_params.g_dim[1];
  int Ly = problem_params.g_dim[2];
  int Lx = problem_params.g_dim[3];

  int lz = problem_params.l_dim[1];
  int ly = problem_params.l_dim[2];
  int lx = problem_params.l_dim[3];
  int vol3d = Lx*Ly*Lz;
  int lvol3d = lx*ly*lz;
  MPI_Comm comm_cart = problem_params.mpi_comm_cart;

  int nprocs_n = 0;
  for(int i=1; i<nprocs+1; i++)
    if((n % i) == 0)
      nprocs_n = i;

  int n_loc = n / nprocs_n;

  fftw_complex *corr[n_loc];
  qpb_complex *swap = NULL;
  if(rank < nprocs_n)
    for(int i=0; i<n_loc; i++)
      corr[i] = fftw_malloc(sizeof(fftw_complex)*vol3d);

  if(rank < nprocs_n)
    swap = qpb_alloc(sizeof(qpb_complex)*vol3d);

  for(int i=0; i<n_loc; i++)
    for(int j=0; j<nprocs_n; j++)
      {
	MPI_Gather(in[i+j*n_loc], lvol3d*sizeof(qpb_complex), MPI_BYTE, 
		   swap, lvol3d*sizeof(qpb_complex), MPI_BYTE, j, MPI_COMM_WORLD);     
	if(rank == j)
	  {
	    for(int p=0; p<nprocs; p++)
	      {
		int coords[ND-1];
		qpb_complex *ptr = swap + p*lvol3d;
		MPI_Cart_coords(comm_cart, p, ND-1, coords);
		int zoff = coords[0]*lz;
		int yoff = coords[1]*ly;
		int xoff = coords[2]*lx;
		for(int z=zoff; z<lz+zoff; z++)
		  for(int y=yoff; y<ly+yoff; y++)
		    for(int x=xoff; x<lx+xoff; x++)
		      {
			corr[i][x + y*Lx + z*Lx*Ly][0] = ptr->re;
			corr[i][x + y*Lx + z*Lx*Ly][1] = ptr->im;
			ptr++;
		      }
	      } 
	  }
	MPI_Barrier(MPI_COMM_WORLD);
      }

  if(rank < nprocs_n)
    for(int i=0; i<n_loc; i++)
      {
	fftw_plan plan = fftw_plan_dft_3d(Lz, Ly, Lx, corr[i], corr[i], 
					  FFTW_FORWARD, FFTW_ESTIMATE);
	fftw_execute(plan);
	fftw_destroy_plan(plan);
      }

  if(rank < nprocs_n)
    for(int i=0; i<n_loc; i++)
      for(int p=0; p<nmom; p++)
	{
	  int kx = (Lx + mom[p][3]) % Lx;
	  int ky = (Ly + mom[p][2]) % Ly;
	  int kz = (Lz + mom[p][1]) % Lz;
	  out[i][p] = (qpb_complex){corr[i][kx + ky*Lx + kz*Lx*Ly][0],
				    corr[i][kx + ky*Lx + kz*Lx*Ly][1]};
	}

  for(int p=1; p<nprocs_n; p++)
    for(int i=0; i<n_loc; i++)
      {
	if(rank == 0)
	  MPI_Recv(out[p*n_loc+i], nmom*sizeof(qpb_complex), MPI_BYTE, p, p, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
	if(rank == p)
	  MPI_Send(out[i], nmom*sizeof(qpb_complex), MPI_BYTE, 0, p, MPI_COMM_WORLD);
      }

  if(rank < nprocs_n)
    {
      for(int i=0; i<n_loc; i++)
	fftw_free(corr[i]);
      free(swap);
    }
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
