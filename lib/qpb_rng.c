#include <gsl/gsl_rng.h>

#include <qpb_types.h>
#include <qpb_globals.h>

void
qpb_rng_init(unsigned int seed)
{
  rng_state.gsl_rng_state[0] = gsl_rng_alloc(gsl_rng_ranlux389);
  unsigned int process_seed = seed;

  srand(seed);
  for (int i=0; i<problem_params.proc_id; i++)
    process_seed = rand();

  gsl_rng_set(rng_state.gsl_rng_state[0], seed);
  return;
}

void
qpb_rng_finalize()
{
  gsl_rng_free(rng_state.gsl_rng_state[0]);
  return;
}

qpb_double 
qpb_get_rand()
{
  qpb_double rand = gsl_rng_uniform(rng_state.gsl_rng_state[0]);
  return (2.*rand - 1.);  
}

