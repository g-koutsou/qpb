#ifndef _QPB_OVERLAP_CHEBYSHEV_H
#define _QPB_OVERLAP_CHEBYSHEV_H 1

#include <qpb_types.h>
#include <qpb_overlap_Chebyshev_defs.h>

void qpb_overlap_Chebyshev_init(void *, qpb_clover_term, qpb_double, qpb_double, qpb_double, qpb_double, int, int);
void qpb_overlap_Chebyshev_finalize();

void qpb_massive_overlap_Chebyshev(qpb_spinor_field, qpb_spinor_field);
void qpb_massless_overlap_Chebyshev(qpb_spinor_field, qpb_spinor_field);
void qpb_Chebyshev_sign_function_of_H(qpb_spinor_field, qpb_spinor_field);
void qpb_Chebyshev_polynomial_term_without_caching(qpb_spinor_field, qpb_spinor_field, int);
void qpb_Chebyshev_polynomial_term(qpb_spinor_field, qpb_spinor_field, int);
void qpb_overlap_X(qpb_spinor_field, qpb_spinor_field);
void qpb_overlap_H(qpb_spinor_field, qpb_spinor_field);
void qpb_overlap_kernel(qpb_spinor_field, qpb_spinor_field);

qpb_complex expansion_Chebyshev_coeff_n(int);
qpb_double Chebyshev_r(qpb_double);
qpb_double scalar_Chebyshev_polynomial_term(qpb_double, int);
qpb_double scalar_Chebyshev_polynomial_term_with_caching(int, int);

void tridiag_eigenv(double *, double *, double *, int);
void qpb_extreme_eigenvalues_of_H_squared(qpb_double *, qpb_double *, qpb_double, int);

#endif /* _QPB_OVERLAP_CHEBYSHEV_H */