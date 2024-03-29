#ifndef _QPB_GLOBALS_H
#define _QPB_GLOBALS_H 1
#include <qpb_operators.h>

extern qpb_problem_params problem_params;
extern unsigned int *skin_to_ext[2*ND];
extern unsigned int *nneigh[2*ND];
extern unsigned int *blk_to_ext;
extern unsigned short int am_master;
extern unsigned short int **permutations[ND+1];
extern enum qpb_operators which_dslash_op;

typedef struct {
  unsigned short int dirs[N_DIR_COMB_2][2];
  unsigned short int index[ND][ND];
} dir_comb_2_t;

extern dir_comb_2_t dir_comb_2;

typedef struct {
  unsigned short int hops[N_HYPERCUBE_NEIGH][ND];
  unsigned long int index[ND][ND][ND][ND];
} hypercube_neigh_t;

extern hypercube_neigh_t hypercube_neigh;

#define print(FMT, ...) if(am_master) printf(FMT, ##__VA_ARGS__); fflush(stdout)
#define error(FMT, ...) if(am_master) fprintf(stderr, FMT, ##__VA_ARGS__); fflush(stderr)

#define print_sun(a)						\
  for(int i=0; i<NC; i++)					\
    {								\
      for(int j=0; j<NC; j++)					\
	printf(" %+e%+e*J ", a[j+i*NC].re, a[j+i*NC].im);	\
      printf("\n");						\
    }

#define X_INDEX(i, L) (i % L[3])
#define Y_INDEX(i, L) ((i - X_INDEX(i, L)) / L[3]) % L[2]
#define Z_INDEX(i, L) (((i - X_INDEX(i, L)) / L[3]) - Y_INDEX(i, L)) / L[2] % L[1]
#define T_INDEX(i, L) ((((i - X_INDEX(i, L)) / L[3]) - Y_INDEX(i, L)) / L[2] - Z_INDEX(i, L))/L[1]

#define LEXICO(x, L)				\
  x[3]						\
  + x[2] * L[3]					\
  + x[1] * L[3] * L[2]				\
  + x[0] * L[3] * L[2] * L[1]

extern qpb_random_state rng_state;

#define DEBUG_HERE()							\
  int pid = getpid();							\
  printf("[id = %3d] pid = %6d\n", problem_params.proc_id, pid);	\
  volatile int DebugWait = 1;						\
  while (DebugWait);

#endif /* _QPB_GLOBALS_H */
