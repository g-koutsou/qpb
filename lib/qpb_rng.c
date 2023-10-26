#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <qpb_types.h>
#include <qpb_globals.h>

qpb_random_state rng_state;

void
qpb_rng_init(unsigned int seed)
{
  rng_state.gsl_rng_state[0] = gsl_rng_alloc(gsl_rng_ranlux389);
  /* 
     Every process initialized THE SAME random number generator with THE SAME seed
     This means care should be taken when drawing random numbers, as the same sequence wil be generated
     See e.g. qpb_spinor_field_set_z4() on how this is overcome
  */
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

/* Random number in {0, 1, 2, 3} */
int 
qpb_get_rand4()
{
  int rand = gsl_rng_uniform_int(rng_state.gsl_rng_state[0], 4);
  return rand;
}

/* Gaussian random number with width sigma */
qpb_double 
qpb_get_gaussian(qpb_double sigma)
{
  qpb_double rand = gsl_ran_gaussian(rng_state.gsl_rng_state[0], sigma);
  return rand;
}

