#ifndef _QPB_LANCZOS_H
#define _QPB_LANCZOS_H 1
#include <qpb_types.h>
void qpb_lanczos_init();
void qpb_lanczos(qpb_double *, qpb_double *, void *, qpb_clover_term, 
		 qpb_double, qpb_double, int);
void qpb_lanczos_finalize();
#endif /* _QPB_LANCZOS_H */
