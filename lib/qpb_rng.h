#ifndef _QPB_RNG_H
#define _QPB_RNG_H 1
#include <qpb_types.h>

void qpb_rng_init(unsigned int);
void qpb_rng_finalize();
qpb_double qpb_get_rand();
qpb_double qpb_get_gaussian(qpb_double);
int qpb_get_rand4();

#endif /* _QPB_RNG_H */
