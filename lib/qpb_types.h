#ifndef _QPB_TYPES_H
#define _QPB_TYPES_H 1
#include <mpi.h>
#define qpb_float float
#define qpb_double double

#define MAX_NUM_THREADS 16
#define QPB_MAX_STRING 256
#define QPB_MASTER_PROC 0

#define NS 4 /* spin components */
#define NC 3 /* colors */
#define ND 4 /* dimensions, if you change this, 
		also see qpb_diagonal_links*/
/* 
   The number of distinct combinations 
   between two directions (number of
   surfaces that can be realized in ND 
   dimensions)
*/
#define N_DIR_COMB_2 ((ND*(ND-1))/2) 
/* 
   Number of one-hop neighbors 
   in taxi-driver metric: 
	  i) three integers for each direction (-hop, +hop, no-hop)
	 ii) excluding no-hop in all directions (minus one)
	iii) only define when first hop is forward (half)
   => (3**ND - 1)/2
*/
#define N_HYPERCUBE_NEIGH ((3*3*3*3-1)/2) 

typedef struct{
  float re;
  float im;
} qpb_complex_float;

typedef struct{
  double re;
  double im;
} qpb_complex_double;

typedef qpb_complex_float qpb_link_float[NC*NC];
typedef qpb_complex_double qpb_link_double[NC*NC];

typedef qpb_complex_float qpb_spinor_float[NC*NS];
typedef qpb_complex_double qpb_spinor_double[NC*NS];

typedef struct{
  qpb_link_float (*bulk)[ND];
  qpb_link_float (*boundaries)[ND];  
  void *boundary_start[2*ND];
  qpb_complex_float *zero_field;  
  void **index0;
  void **index;
} qpb_gauge_field_float;

typedef struct{
  qpb_link_double (*bulk)[ND];
  qpb_link_double (*boundaries)[ND];
  void *boundary_start[2*ND];
  qpb_complex_double *zero_field;  
  void **index0;
  void **index;
} qpb_gauge_field_double;

typedef struct{
  qpb_spinor_float *bulk;
  qpb_spinor_float *boundaries;
  void *boundary_start[2*ND];
  qpb_complex_float *zero_field;
  void **index0;
  void **index;
  MPI_Request recv_req[2*ND];
} qpb_spinor_field_float;

typedef struct{
  qpb_spinor_double *bulk;
  qpb_spinor_double *boundaries;
  void *boundary_start[2*ND];
  qpb_complex_double *zero_field;
  void **index0;
  void **index;
  MPI_Request recv_req[2*ND];
} qpb_spinor_field_double;

typedef struct{
  qpb_link_float (*bulk)[N_DIR_COMB_2];
  void **index;
} qpb_clover_term_float;

typedef struct{
  qpb_link_double (*bulk)[N_DIR_COMB_2];
  void **index;
} qpb_clover_term_double;

typedef struct{
  qpb_link_float (*bulk)[N_HYPERCUBE_NEIGH];
  qpb_link_float (*boundaries)[N_HYPERCUBE_NEIGH];
  void *boundary_start[2*ND];
  void **index;
} qpb_diagonal_links_float;

typedef struct{
  qpb_link_double (*bulk)[N_HYPERCUBE_NEIGH];
  qpb_link_double (*boundaries)[N_HYPERCUBE_NEIGH];
  void *boundary_start[2*ND];
  void **index;
} qpb_diagonal_links_double;


typedef struct{
  unsigned short int g_dim[ND];
  unsigned short int l_dim[ND];
  unsigned short int ext_dim[ND];
  unsigned short int procs[ND];
  unsigned short int coords[ND];
  unsigned short int par_dir[ND];
  unsigned int proc_neigh[2*ND];
  unsigned int b_vol, g_vol, l_vol, ext_vol, nprocs, proc_id;
  MPI_Comm mpi_comm_cart;
} qpb_problem_params;

#include <gsl/gsl_rng.h>
typedef struct{
  gsl_rng *gsl_rng_state[MAX_NUM_THREADS];
} qpb_random_state;

enum qpb_field_init_opts{
  QPB_ZERO = 0,
  QPB_UNIT = 1,
  QPB_FILE = 2,
  QPB_RAND = 3
};

#ifdef SINGLE_PRECISION
	typedef qpb_complex_float qpb_complex;
	typedef qpb_link_float qpb_link;
	typedef qpb_gauge_field_float qpb_gauge_field;
	typedef qpb_clover_term_float qpb_clover_term;
	typedef qpb_diagonal_links_float qpb_diagonal_links;
	typedef qpb_spinor_float qpb_spinor;
	typedef qpb_spinor_field_float qpb_spinor_field;
#else
	typedef qpb_complex_double qpb_complex;
	typedef qpb_link_double qpb_link;
	typedef qpb_gauge_field_double qpb_gauge_field;
	typedef qpb_clover_term_double qpb_clover_term;
	typedef qpb_diagonal_links_double qpb_diagonal_links;
	typedef qpb_spinor_double qpb_spinor;
	typedef qpb_spinor_field_double qpb_spinor_field;
#endif /* SINGLE_PRECISION */

#define CNORM2(a)  ((a).re*(a).re + (a).im*(a).im)
#define CNORM(a)  (sqrt((a).re*(a).re + (a).im*(a).im))
#define CMULR(a, b) ((a).re*(b).re - (a).im*(b).im)
#define CMULI(a, b) ((a).re*(b).im + (a).im*(b).re)
#define CMUL(a, b)  ((qpb_complex){CMULR((a), (b)), CMULI((a), (b))})
#define CSCALE(a, b)  ((qpb_complex){(a).re*((b)), (a).im*((b))})
#define CADD(a, b)  ((qpb_complex){((a).re+(b).re), ((a).im+(b).im)})
#define CSUB(a, b)  ((qpb_complex){((a).re-(b).re), ((a).im-(b).im)})
#define CNEGATE(a)  ((qpb_complex){-(a).re, -(a).im})
#define CCONJ(a)  ((qpb_complex){(a).re, -(a).im})
#define CDEV(a, b) CSCALE(CMUL((a), CCONJ((b))), 1./CNORM2((b)))
#define CDEVR(a, b) (CMULR((a), CCONJ((b)))/CNORM2((b)))
#define CDEVI(a, b) (CMULI((a), CCONJ((b)))/CNORM2((b)))
#define CSQRTR(a) sqrt(CNORM2(a))*cos(atan2((a).im, (a).re)/2.)
#define CSQRTI(a) sqrt(CNORM2(a))*sin(atan2((a).im, (a).re)/2.)
#define CSQRT(a) (qpb_complex){(CSQRTR(a)), (CSQRTI(a))}
#define CARG(a) (atan2((a).im, (a).re))
#define CPOWR(a, b) (pow(CNORM(a), b)*cos(CARG(a)*b))
#define CPOWI(a, b) (pow(CNORM(a), b)*sin(CARG(a)*b))
#define MIN(a, b) ((a)>(b)?(b):(a))
#define MAX(a, b) ((a)<(b)?(b):(a))

#endif /* _QPB_TYPES_H */
