#ifndef _QPB_SPINOR_LINALG_H
#define _QPB_SPINOR_LINALG_H 1
#include <qpb_types.h>
#include <qpb_spinor_blas.h>
#include <qpb_spinor_xdotx.h>
#include <qpb_spinor_xdoty.h>
#include <qpb_spinor_xeqy.h>
#include <qpb_spinor_xmy.h>
#include <qpb_spinor_axpy.h>
#include <qpb_spinor_sun_mul.h>
#include <qpb_spinor_gamma5.h>
/*
 *
 *            ( 0  0  0  i)             ( 0  0  0  1)
 *            ( 0  0  i  0)             ( 0  0 -1  0)
 * gamma_x =  ( 0 -i  0  0)  gamma_y =  ( 0 -1  0  0)
 *            (-i  0  0  0)             ( 1  0  0  0)
 *
 *
 *            ( 0  0  i  0)             ( 1  0  0  0)
 *            ( 0  0  0 -i)             ( 0  1  0  0)
 * gamma_z =  (-i  0  0  0)  gamma_t =  ( 0  0 -1  0)
 *            ( 0  i  0  0)             ( 0  0  0 -1)
 *
 *
 */


/*
 * sigma_{mu, nu} = i/2 * [ gamma_mu,  gamma_nu ]
 *
 *             (-1  0  0  0)              ( 0 -i  0  0)               ( 0  0  0  1)
 *             ( 0  1  0  0)              ( i  0  0  0)	              ( 0  0  1  0)
 * sigma_xy =  ( 0  0 -1  0)  sigma_xz =  ( 0  0  0 -i)	  sigma_xt =  ( 0  1  0  0)
 *             ( 0  0  0  1)              ( 0  0  i  0)	              ( 1  0  0  0)
 *
 *
 *                                        ( 0 -1  0  0)               ( 0  0  0 -i)
 *                                        (-1  0  0  0)               ( 0  0  i  0)
 *                            sigma_yz =  ( 0  0  0 -1)   sigma_yt =  ( 0 -i  0  0)
 *                                        ( 0  0 -1  0)               ( i  0  0  0)
 *
 *
 *                                                                    ( 0  0  1  0)
 *                                                                    ( 0  0  0 -1)
 *                                                        sigma_zt =  ( 1  0  0  0)
 *                                                                    ( 0 -1  0  0)
 *
 */
#endif /* _QPB_SPINOR_LINALG_H */
