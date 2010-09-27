#ifndef _QPB_SPINOR_LINALG_H
#define _QPB_SPINOR_LINALG_H 1
#include <qpb_types.h>
#include <qpb_spinor_xdotx.h>
#include <qpb_spinor_xdoty.h>
#include <qpb_spinor_xeqy.h>
#include <qpb_spinor_xmy.h>
#include <qpb_spinor_axpy.h>
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
#if NC == 1
#define GAMMAX(q, p)				\
  (q+ 0)->re = -(p+ 3)->im;			\
  (q+ 0)->im =  (p+ 3)->re;			\
  (q+ 1)->re = -(p+ 2)->im;			\
  (q+ 1)->im =  (p+ 2)->re;			\
  (q+ 2)->re =  (p+ 1)->im;			\
  (q+ 2)->im = -(p+ 1)->re;			\
  (q+ 3)->re =  (p+ 0)->im;			\
  (q+ 3)->im = -(p+ 0)->re;

#define GAMMAX_PEQ(q, p)			\
  (q+ 0)->re += -(p+ 3)->im;			\
  (q+ 0)->im +=  (p+ 3)->re;			\
  (q+ 1)->re += -(p+ 2)->im;			\
  (q+ 1)->im +=  (p+ 2)->re;			\
  (q+ 2)->re +=  (p+ 1)->im;			\
  (q+ 2)->im += -(p+ 1)->re;			\
  (q+ 3)->re +=  (p+ 0)->im;			\
  (q+ 3)->im += -(p+ 0)->re;

#define GAMMAX_MEQ(q, p)			\
  (q+ 0)->re -= -(p+ 3)->im;			\
  (q+ 0)->im -=  (p+ 3)->re;			\
  (q+ 1)->re -= -(p+ 2)->im;			\
  (q+ 1)->im -=  (p+ 2)->re;			\
  (q+ 2)->re -=  (p+ 1)->im;			\
  (q+ 2)->im -= -(p+ 1)->re;			\
  (q+ 3)->re -=  (p+ 0)->im;			\
  (q+ 3)->im -= -(p+ 0)->re;

#define GAMMAY(q, p)				\
  (q+ 0)->re =  (p+ 3)->re;			\
  (q+ 0)->im =  (p+ 3)->im;			\
  (q+ 1)->re = -(p+ 2)->re;			\
  (q+ 1)->im = -(p+ 2)->im;			\
  (q+ 2)->re = -(p+ 1)->re;			\
  (q+ 2)->im = -(p+ 1)->im;			\
  (q+ 3)->re =  (p+ 0)->re;			\
  (q+ 3)->im =  (p+ 0)->im;

#define GAMMAY_PEQ(q, p)			\
  (q+ 0)->re +=  (p+ 3)->re;			\
  (q+ 0)->im +=  (p+ 3)->im;			\
  (q+ 1)->re += -(p+ 2)->re;			\
  (q+ 1)->im += -(p+ 2)->im;			\
  (q+ 2)->re += -(p+ 1)->re;			\
  (q+ 2)->im += -(p+ 1)->im;			\
  (q+ 3)->re +=  (p+ 0)->re;			\
  (q+ 3)->im +=  (p+ 0)->im;

#define GAMMAY_MEQ(q, p)			\
  (q+ 0)->re -=  (p+ 3)->re;			\
  (q+ 0)->im -=  (p+ 3)->im;			\
  (q+ 1)->re -= -(p+ 2)->re;			\
  (q+ 1)->im -= -(p+ 2)->im;			\
  (q+ 2)->re -= -(p+ 1)->re;			\
  (q+ 2)->im -= -(p+ 1)->im;			\
  (q+ 3)->re -=  (p+ 0)->re;			\
  (q+ 3)->im -=  (p+ 0)->im;

#define GAMMAZ(q, p)				\
  (q+ 0)->re = -(p+ 2)->im;			\
  (q+ 0)->im =  (p+ 2)->re;			\
  (q+ 1)->re =  (p+ 3)->im;			\
  (q+ 1)->im = -(p+ 3)->re;			\
  (q+ 2)->re =  (p+ 0)->im;			\
  (q+ 2)->im = -(p+ 0)->re;			\
  (q+ 3)->re = -(p+ 1)->im;			\
  (q+ 3)->im =  (p+ 1)->re;

#define GAMMAZ_PEQ(q, p)			\
  (q+ 0)->re += -(p+ 2)->im;			\
  (q+ 0)->im +=  (p+ 2)->re;			\
  (q+ 1)->re +=  (p+ 3)->im;			\
  (q+ 1)->im += -(p+ 3)->re;			\
  (q+ 2)->re +=  (p+ 0)->im;			\
  (q+ 2)->im += -(p+ 0)->re;			\
  (q+ 3)->re += -(p+ 1)->im;			\
  (q+ 3)->im +=  (p+ 1)->re;

#define GAMMAZ_MEQ(q, p)			\
  (q+ 0)->re -= -(p+ 2)->im;			\
  (q+ 0)->im -=  (p+ 2)->re;			\
  (q+ 1)->re -=  (p+ 3)->im;			\
  (q+ 1)->im -= -(p+ 3)->re;			\
  (q+ 2)->re -=  (p+ 0)->im;			\
  (q+ 2)->im -= -(p+ 0)->re;			\
  (q+ 3)->re -= -(p+ 1)->im;			\
  (q+ 3)->im -=  (p+ 1)->re;

#define GAMMAT(q, p)				\
  (q+ 0)->re =  (p+ 0)->re;			\
  (q+ 0)->im =  (p+ 0)->im;			\
  (q+ 1)->re =  (p+ 1)->re;			\
  (q+ 1)->im =  (p+ 1)->im;			\
  (q+ 2)->re = -(p+ 2)->re;			\
  (q+ 2)->im = -(p+ 2)->im;			\
  (q+ 3)->re = -(p+ 3)->re;			\
  (q+ 3)->im = -(p+ 3)->im;

#define GAMMAT_PEQ(q, p)			\
  (q+ 0)->re +=  (p+ 0)->re;			\
  (q+ 0)->im +=  (p+ 0)->im;			\
  (q+ 1)->re +=  (p+ 1)->re;			\
  (q+ 1)->im +=  (p+ 1)->im;			\
  (q+ 2)->re += -(p+ 2)->re;			\
  (q+ 2)->im += -(p+ 2)->im;			\
  (q+ 3)->re += -(p+ 3)->re;			\
  (q+ 3)->im += -(p+ 3)->im;

#define GAMMAT_MEQ(q, p)			\
  (q+ 0)->re -=  (p+ 0)->re;			\
  (q+ 0)->im -=  (p+ 0)->im;			\
  (q+ 1)->re -=  (p+ 1)->re;			\
  (q+ 1)->im -=  (p+ 1)->im;			\
  (q+ 2)->re -= -(p+ 2)->re;			\
  (q+ 2)->im -= -(p+ 2)->im;			\
  (q+ 3)->re -= -(p+ 3)->re;			\
  (q+ 3)->im -= -(p+ 3)->im;

#define COLSPIN_SCALE(z, a, x)			\
  (z+0)->re = a*(x+0)->re;			\
  (z+0)->im = a*(x+0)->im;			\
						\
  (z+1)->re = a*(x+1)->re;			\
  (z+1)->im = a*(x+1)->im;			\
						\
  (z+2)->re = a*(x+2)->re;			\
  (z+2)->im = a*(x+2)->im;			\
						\
  (z+3)->re = a*(x+3)->re;			\
  (z+3)->im = a*(x+3)->im;

#define COLSPIN_AXPY(z, a, x, y)		\
  (z+0)->re = a*(x+0)->re + (y+0)->re;		\
  (z+0)->im = a*(x+0)->im + (y+0)->im;		\
						\
  (z+1)->re = a*(x+1)->re + (y+1)->re;		\
  (z+1)->im = a*(x+1)->im + (y+1)->im;		\
						\
  (z+2)->re = a*(x+2)->re + (y+2)->re;		\
  (z+2)->im = a*(x+2)->im + (y+2)->im;		\
						\
  (z+3)->re = a*(x+3)->re + (y+3)->re;		\
  (z+3)->im = a*(x+3)->im + (y+3)->im;

#define COLSPIN_AXPBY(z, a, x, b, y)		\
  (z+0)->re = a*(x+0)->re + b*(y+0)->re;	\
  (z+0)->im = a*(x+0)->im + b*(y+0)->im;	\
						\
  (z+1)->re = a*(x+1)->re + b*(y+1)->re;	\
  (z+1)->im = a*(x+1)->im + b*(y+1)->im;	\
						\
  (z+2)->re = a*(x+2)->re + b*(y+2)->re;	\
  (z+2)->im = a*(x+2)->im + b*(y+2)->im;	\
						\
  (z+3)->re = a*(x+3)->re + b*(y+3)->re;	\
  (z+3)->im = a*(x+3)->im + b*(y+3)->im;

#define COLSPIN_ADD(z, x, y)			\
  (z+0)->re = (x+0)->re + (y+0)->re;		\
  (z+0)->im = (x+0)->im + (y+0)->im;		\
						\
  (z+1)->re = (x+1)->re + (y+1)->re;		\
  (z+1)->im = (x+1)->im + (y+1)->im;		\
						\
  (z+2)->re = (x+2)->re + (y+2)->re;		\
  (z+2)->im = (x+2)->im + (y+2)->im;		\
						\
  (z+3)->re = (x+3)->re + (y+3)->re;		\
  (z+3)->im = (x+3)->im + (y+3)->im;

#define COLSPIN_ZERO(x)				\
  (x+0)->re = 0.;				\
  (x+0)->im = 0.;				\
  						\
  (x+1)->re = 0.;				\
  (x+1)->im = 0.;				\
  						\
  (x+2)->re = 0.;				\
  (x+2)->im = 0.;				\
  						\
  (x+3)->re = 0.;				\
  (x+3)->im = 0.;

#define COLSPIN_SUB(z, x, y)			\
  (z+0)->re = (x+0)->re - (y+0)->re;		\
  (z+0)->im = (x+0)->im - (y+0)->im;		\
						\
  (z+1)->re = (x+1)->re - (y+1)->re;		\
  (z+1)->im = (x+1)->im - (y+1)->im;		\
						\
  (z+2)->re = (x+2)->re - (y+2)->re;		\
  (z+2)->im = (x+2)->im - (y+2)->im;		\
						\
  (z+3)->re = (x+3)->re - (y+3)->re;		\
  (z+3)->im = (x+3)->im - (y+3)->im;

#define COL_MPLY(l, u, q)			\
  (l+0)->re =					\
    u->re*(q+0)->re - u->im*(q+0)->im;		\
  (l+0)->im =					\
    u->re*(q+0)->im + u->im*(q+0)->re;		\
						\
  (l+1)->re =					\
    u->re*(q+1)->re - u->im*(q+1)->im;		\
  (l+1)->im =					\
    u->re*(q+1)->im + u->im*(q+1)->re;		\
						\
  (l+2)->re =					\
    u->re*(q+2)->re - u->im*(q+2)->im;		\
  (l+2)->im =					\
    u->re*(q+2)->im + u->im*(q+2)->re;		\
						\
  (l+3)->re =					\
    u->re*(q+3)->re - u->im*(q+3)->im;		\
  (l+3)->im =					\
    u->re*(q+3)->im + u->im*(q+3)->re;

#define COL_MPLY_DAG(l, u, q)			\
  (l+0)->re =					\
    u->re*(q+0)->re + u->im*(q+0)->im;		\
  (l+0)->im =					\
    u->re*(q+0)->im - u->im*(q+0)->re;		\
						\
  (l+1)->re =					\
    u->re*(q+1)->re + u->im*(q+1)->im;		\
  (l+1)->im =					\
    u->re*(q+1)->im - u->im*(q+1)->re;		\
						\
  (l+2)->re =					\
    u->re*(q+2)->re + u->im*(q+2)->im;		\
  (l+2)->im =					\
    u->re*(q+2)->im - u->im*(q+2)->re;		\
						\
  (l+3)->re =					\
    u->re*(q+3)->re + u->im*(q+3)->im;		\
  (l+3)->im =					\
    u->re*(q+3)->im - u->im*(q+3)->re;

#define COL_MPLY_PEQ(l, u, q)						\
  (l+0)->re +=								\
    u->re*(q+0)->re - u->im*(q+0)->im;					\
  (l+0)->im +=								\
    u->re*(q+0)->im + u->im*(q+0)->re;					\
									\
  (l+1)->re +=								\
    u->re*(q+1)->re - u->im*(q+1)->im;					\
  (l+1)->im +=								\
    u->re*(q+1)->im + u->im*(q+1)->re;					\
									\
  (l+2)->re +=								\
    u->re*(q+2)->re - u->im*(q+2)->im;					\
  (l+2)->im +=								\
    u->re*(q+2)->im + u->im*(q+2)->re;					\
									\
  (l+3)->re +=								\
    u->re*(q+3)->re - u->im*(q+3)->im;					\
  (l+3)->im +=								\
    u->re*(q+3)->im + u->im*(q+3)->re;

#define COL_MPLY_MEQ(l, u, q)						\
  (l+0)->re -=								\
    u->re*(q+0)->re - u->im*(q+0)->im;					\
  (l+0)->im -=								\
    u->re*(q+0)->im + u->im*(q+0)->re;					\
									\
  (l+1)->re -=								\
    u->re*(q+1)->re - u->im*(q+1)->im;					\
  (l+1)->im -=								\
    u->re*(q+1)->im + u->im*(q+1)->re;					\
									\
  (l+2)->re -=								\
    u->re*(q+2)->re - u->im*(q+2)->im;					\
  (l+2)->im -=								\
    u->re*(q+2)->im + u->im*(q+2)->re;					\
									\
  (l+3)->re -=								\
    u->re*(q+3)->re - u->im*(q+3)->im;					\
  (l+3)->im -=								\
    u->re*(q+3)->im + u->im*(q+3)->re;
/*
 *    SIGMA_XY
 */
#define SIGMAXY(q, p)				\
  (q+0)->re = -(p+0)->re;			\
  (q+0)->im = -(p+0)->im;			\
  (q+1)->re =  (p+1)->re;			\
  (q+1)->im =  (p+1)->im;			\
  (q+2)->re = -(p+2)->re;			\
  (q+2)->im = -(p+2)->im;			\
  (q+3)->re =  (p+3)->re;			\
  (q+3)->im =  (p+3)->im;
  
/*
 *    SIGMA_XZ
 */
#define SIGMAXZ(q, p)				\
  (q+0)->re =  (p+1)->im;			\
  (q+0)->im = -(p+1)->re;			\
  (q+1)->re = -(p+0)->im;			\
  (q+1)->im =  (p+0)->re;			\
  (q+2)->re =  (p+3)->im;			\
  (q+2)->im = -(p+3)->re;			\
  (q+3)->re = -(p+2)->im;			\
  (q+3)->im =  (p+2)->re;
  
/*
 *    SIGMA_XT
 */
#define SIGMAXT(q, p)				\
  (q+0)->re =  (p+3)->re;			\
  (q+0)->im =  (p+3)->im;			\
  (q+1)->re =  (p+2)->re;			\
  (q+1)->im =  (p+2)->im;			\
  (q+2)->re =  (p+1)->re;			\
  (q+2)->im =  (p+1)->im;			\
  (q+3)->re =  (p+0)->re;			\
  (q+3)->im =  (p+0)->im;
  
/*
 *    SIGMA_YZ
 */
#define SIGMAYZ(q, p)				\
  (q+0)->re = -(p+1)->re;			\
  (q+0)->im = -(p+1)->im;			\
  (q+1)->re = -(p+0)->re;			\
  (q+1)->im = -(p+0)->im;			\
  (q+2)->re = -(p+3)->re;			\
  (q+2)->im = -(p+3)->im;			\
  (q+3)->re = -(p+2)->re;			\
  (q+3)->im = -(p+2)->im;

/*
 *    SIGMA_YT
 */
#define SIGMAYT(q, p)				\
  (q+0)->re = (p+3)->im;			\
  (q+0)->im =-(p+3)->re;			\
  (q+1)->re =-(p+2)->im;			\
  (q+1)->im = (p+2)->re;			\
  (q+2)->re = (p+1)->im;			\
  (q+2)->im =-(p+1)->re;			\
  (q+3)->re =-(p+0)->im;			\
  (q+3)->im = (p+0)->re;

/*
 *    SIGMA_ZT
 */
#define SIGMAZT(q, p)				\
  (q+0)->re =  (p+2)->re;			\
  (q+0)->im =  (p+2)->im;			\
  (q+1)->re = -(p+3)->re;			\
  (q+1)->im = -(p+3)->im;			\
  (q+2)->re =  (p+0)->re;			\
  (q+2)->im =  (p+0)->im;			\
  (q+3)->re = -(p+1)->re;			\
  (q+3)->im = -(p+1)->im;

#elif NC == 3
#define GAMMAX(q, p)				\
  (q+ 0)->re = -(p+ 9)->im;			\
  (q+ 0)->im =  (p+ 9)->re;			\
  (q+ 1)->re = -(p+10)->im;			\
  (q+ 1)->im =  (p+10)->re;			\
  (q+ 2)->re = -(p+11)->im;			\
  (q+ 2)->im =  (p+11)->re;			\
  (q+ 3)->re = -(p+ 6)->im;			\
  (q+ 3)->im =  (p+ 6)->re;			\
  (q+ 4)->re = -(p+ 7)->im;			\
  (q+ 4)->im =  (p+ 7)->re;			\
  (q+ 5)->re = -(p+ 8)->im;			\
  (q+ 5)->im =  (p+ 8)->re;			\
  (q+ 6)->re =  (p+ 3)->im;			\
  (q+ 6)->im = -(p+ 3)->re;			\
  (q+ 7)->re =  (p+ 4)->im;			\
  (q+ 7)->im = -(p+ 4)->re;			\
  (q+ 8)->re =  (p+ 5)->im;			\
  (q+ 8)->im = -(p+ 5)->re;			\
  (q+ 9)->re =  (p+ 0)->im;			\
  (q+ 9)->im = -(p+ 0)->re;			\
  (q+10)->re =  (p+ 1)->im;			\
  (q+10)->im = -(p+ 1)->re;			\
  (q+11)->re =  (p+ 2)->im;			\
  (q+11)->im = -(p+ 2)->re;

#define GAMMAX_PEQ(q, p)			\
  (q+ 0)->re +=	-(p+ 9)->im;			\
  (q+ 0)->im +=	 (p+ 9)->re;			\
  (q+ 1)->re +=	-(p+10)->im;			\
  (q+ 1)->im +=	 (p+10)->re;			\
  (q+ 2)->re +=	-(p+11)->im;			\
  (q+ 2)->im +=	 (p+11)->re;			\
  (q+ 3)->re +=	-(p+ 6)->im;			\
  (q+ 3)->im +=	 (p+ 6)->re;			\
  (q+ 4)->re +=	-(p+ 7)->im;			\
  (q+ 4)->im +=	 (p+ 7)->re;			\
  (q+ 5)->re +=	-(p+ 8)->im;			\
  (q+ 5)->im +=	 (p+ 8)->re;			\
  (q+ 6)->re +=	 (p+ 3)->im;			\
  (q+ 6)->im +=	-(p+ 3)->re;			\
  (q+ 7)->re +=	 (p+ 4)->im;			\
  (q+ 7)->im +=	-(p+ 4)->re;			\
  (q+ 8)->re +=	 (p+ 5)->im;			\
  (q+ 8)->im +=	-(p+ 5)->re;			\
  (q+ 9)->re +=	 (p+ 0)->im;			\
  (q+ 9)->im +=	-(p+ 0)->re;			\
  (q+10)->re +=	 (p+ 1)->im;			\
  (q+10)->im +=	-(p+ 1)->re;			\
  (q+11)->re +=	 (p+ 2)->im;			\
  (q+11)->im +=	-(p+ 2)->re;

#define GAMMAX_MEQ(q, p)			\
  (q+ 0)->re -=	-(p+ 9)->im;			\
  (q+ 0)->im -=	 (p+ 9)->re;			\
  (q+ 1)->re -=	-(p+10)->im;			\
  (q+ 1)->im -=	 (p+10)->re;			\
  (q+ 2)->re -=	-(p+11)->im;			\
  (q+ 2)->im -=	 (p+11)->re;			\
  (q+ 3)->re -=	-(p+ 6)->im;			\
  (q+ 3)->im -=	 (p+ 6)->re;			\
  (q+ 4)->re -=	-(p+ 7)->im;			\
  (q+ 4)->im -=	 (p+ 7)->re;			\
  (q+ 5)->re -=	-(p+ 8)->im;			\
  (q+ 5)->im -=	 (p+ 8)->re;			\
  (q+ 6)->re -=	 (p+ 3)->im;			\
  (q+ 6)->im -=	-(p+ 3)->re;			\
  (q+ 7)->re -=	 (p+ 4)->im;			\
  (q+ 7)->im -=	-(p+ 4)->re;			\
  (q+ 8)->re -=	 (p+ 5)->im;			\
  (q+ 8)->im -=	-(p+ 5)->re;			\
  (q+ 9)->re -=	 (p+ 0)->im;			\
  (q+ 9)->im -=	-(p+ 0)->re;			\
  (q+10)->re -=	 (p+ 1)->im;			\
  (q+10)->im -=	-(p+ 1)->re;			\
  (q+11)->re -=	 (p+ 2)->im;			\
  (q+11)->im -=	-(p+ 2)->re;

#define GAMMAY(q, p)				\
  (q+ 0)->re =  (p+ 9)->re;			\
  (q+ 0)->im =  (p+ 9)->im;			\
  (q+ 1)->re =  (p+10)->re;			\
  (q+ 1)->im =  (p+10)->im;			\
  (q+ 2)->re =  (p+11)->re;			\
  (q+ 2)->im =  (p+11)->im;			\
  (q+ 3)->re = -(p+ 6)->re;			\
  (q+ 3)->im = -(p+ 6)->im;			\
  (q+ 4)->re = -(p+ 7)->re;			\
  (q+ 4)->im = -(p+ 7)->im;			\
  (q+ 5)->re = -(p+ 8)->re;			\
  (q+ 5)->im = -(p+ 8)->im;			\
  (q+ 6)->re = -(p+ 3)->re;			\
  (q+ 6)->im = -(p+ 3)->im;			\
  (q+ 7)->re = -(p+ 4)->re;			\
  (q+ 7)->im = -(p+ 4)->im;			\
  (q+ 8)->re = -(p+ 5)->re;			\
  (q+ 8)->im = -(p+ 5)->im;			\
  (q+ 9)->re =  (p+ 0)->re;			\
  (q+ 9)->im =  (p+ 0)->im;			\
  (q+10)->re =  (p+ 1)->re;			\
  (q+10)->im =  (p+ 1)->im;			\
  (q+11)->re =  (p+ 2)->re;			\
  (q+11)->im =  (p+ 2)->im;

#define GAMMAY_PEQ(q, p)			\
  (q+ 0)->re +=  (p+ 9)->re;			\
  (q+ 0)->im +=  (p+ 9)->im;			\
  (q+ 1)->re +=  (p+10)->re;			\
  (q+ 1)->im +=  (p+10)->im;			\
  (q+ 2)->re +=  (p+11)->re;			\
  (q+ 2)->im +=  (p+11)->im;			\
  (q+ 3)->re += -(p+ 6)->re;			\
  (q+ 3)->im += -(p+ 6)->im;			\
  (q+ 4)->re += -(p+ 7)->re;			\
  (q+ 4)->im += -(p+ 7)->im;			\
  (q+ 5)->re += -(p+ 8)->re;			\
  (q+ 5)->im += -(p+ 8)->im;			\
  (q+ 6)->re += -(p+ 3)->re;			\
  (q+ 6)->im += -(p+ 3)->im;			\
  (q+ 7)->re += -(p+ 4)->re;			\
  (q+ 7)->im += -(p+ 4)->im;			\
  (q+ 8)->re += -(p+ 5)->re;			\
  (q+ 8)->im += -(p+ 5)->im;			\
  (q+ 9)->re +=  (p+ 0)->re;			\
  (q+ 9)->im +=  (p+ 0)->im;			\
  (q+10)->re +=  (p+ 1)->re;			\
  (q+10)->im +=  (p+ 1)->im;			\
  (q+11)->re +=  (p+ 2)->re;			\
  (q+11)->im +=  (p+ 2)->im;

#define GAMMAY_MEQ(q, p)			\
  (q+ 0)->re -=  (p+ 9)->re;			\
  (q+ 0)->im -=  (p+ 9)->im;			\
  (q+ 1)->re -=  (p+10)->re;			\
  (q+ 1)->im -=  (p+10)->im;			\
  (q+ 2)->re -=  (p+11)->re;			\
  (q+ 2)->im -=  (p+11)->im;			\
  (q+ 3)->re -= -(p+ 6)->re;			\
  (q+ 3)->im -= -(p+ 6)->im;			\
  (q+ 4)->re -= -(p+ 7)->re;			\
  (q+ 4)->im -= -(p+ 7)->im;			\
  (q+ 5)->re -= -(p+ 8)->re;			\
  (q+ 5)->im -= -(p+ 8)->im;			\
  (q+ 6)->re -= -(p+ 3)->re;			\
  (q+ 6)->im -= -(p+ 3)->im;			\
  (q+ 7)->re -= -(p+ 4)->re;			\
  (q+ 7)->im -= -(p+ 4)->im;			\
  (q+ 8)->re -= -(p+ 5)->re;			\
  (q+ 8)->im -= -(p+ 5)->im;			\
  (q+ 9)->re -=  (p+ 0)->re;			\
  (q+ 9)->im -=  (p+ 0)->im;			\
  (q+10)->re -=  (p+ 1)->re;			\
  (q+10)->im -=  (p+ 1)->im;			\
  (q+11)->re -=  (p+ 2)->re;			\
  (q+11)->im -=  (p+ 2)->im;

#define GAMMAZ(q, p)				\
  (q+ 0)->re = -(p+ 6)->im;			\
  (q+ 0)->im =  (p+ 6)->re;			\
  (q+ 1)->re = -(p+ 7)->im;			\
  (q+ 1)->im =  (p+ 7)->re;			\
  (q+ 2)->re = -(p+ 8)->im;			\
  (q+ 2)->im =  (p+ 8)->re;			\
  (q+ 3)->re =  (p+ 9)->im;			\
  (q+ 3)->im = -(p+ 9)->re;			\
  (q+ 4)->re =  (p+10)->im;			\
  (q+ 4)->im = -(p+10)->re;			\
  (q+ 5)->re =  (p+11)->im;			\
  (q+ 5)->im = -(p+11)->re;			\
  (q+ 6)->re =  (p+ 0)->im;			\
  (q+ 6)->im = -(p+ 0)->re;			\
  (q+ 7)->re =  (p+ 1)->im;			\
  (q+ 7)->im = -(p+ 1)->re;			\
  (q+ 8)->re =  (p+ 2)->im;			\
  (q+ 8)->im = -(p+ 2)->re;			\
  (q+ 9)->re = -(p+ 3)->im;			\
  (q+ 9)->im =  (p+ 3)->re;			\
  (q+10)->re = -(p+ 4)->im;			\
  (q+10)->im =  (p+ 4)->re;			\
  (q+11)->re = -(p+ 5)->im;			\
  (q+11)->im =  (p+ 5)->re;

#define GAMMAZ_PEQ(q, p)			\
  (q+ 0)->re += -(p+ 6)->im;			\
  (q+ 0)->im +=  (p+ 6)->re;			\
  (q+ 1)->re += -(p+ 7)->im;			\
  (q+ 1)->im +=  (p+ 7)->re;			\
  (q+ 2)->re += -(p+ 8)->im;			\
  (q+ 2)->im +=  (p+ 8)->re;			\
  (q+ 3)->re +=  (p+ 9)->im;			\
  (q+ 3)->im += -(p+ 9)->re;			\
  (q+ 4)->re +=  (p+10)->im;			\
  (q+ 4)->im += -(p+10)->re;			\
  (q+ 5)->re +=  (p+11)->im;			\
  (q+ 5)->im += -(p+11)->re;			\
  (q+ 6)->re +=  (p+ 0)->im;			\
  (q+ 6)->im += -(p+ 0)->re;			\
  (q+ 7)->re +=  (p+ 1)->im;			\
  (q+ 7)->im += -(p+ 1)->re;			\
  (q+ 8)->re +=  (p+ 2)->im;			\
  (q+ 8)->im += -(p+ 2)->re;			\
  (q+ 9)->re += -(p+ 3)->im;			\
  (q+ 9)->im +=  (p+ 3)->re;			\
  (q+10)->re += -(p+ 4)->im;			\
  (q+10)->im +=  (p+ 4)->re;			\
  (q+11)->re += -(p+ 5)->im;			\
  (q+11)->im +=  (p+ 5)->re;

#define GAMMAZ_MEQ(q, p)			\
  (q+ 0)->re -= -(p+ 6)->im;			\
  (q+ 0)->im -=  (p+ 6)->re;			\
  (q+ 1)->re -= -(p+ 7)->im;			\
  (q+ 1)->im -=  (p+ 7)->re;			\
  (q+ 2)->re -= -(p+ 8)->im;			\
  (q+ 2)->im -=  (p+ 8)->re;			\
  (q+ 3)->re -=  (p+ 9)->im;			\
  (q+ 3)->im -= -(p+ 9)->re;			\
  (q+ 4)->re -=  (p+10)->im;			\
  (q+ 4)->im -= -(p+10)->re;			\
  (q+ 5)->re -=  (p+11)->im;			\
  (q+ 5)->im -= -(p+11)->re;			\
  (q+ 6)->re -=  (p+ 0)->im;			\
  (q+ 6)->im -= -(p+ 0)->re;			\
  (q+ 7)->re -=  (p+ 1)->im;			\
  (q+ 7)->im -= -(p+ 1)->re;			\
  (q+ 8)->re -=  (p+ 2)->im;			\
  (q+ 8)->im -= -(p+ 2)->re;			\
  (q+ 9)->re -= -(p+ 3)->im;			\
  (q+ 9)->im -=  (p+ 3)->re;			\
  (q+10)->re -= -(p+ 4)->im;			\
  (q+10)->im -=  (p+ 4)->re;			\
  (q+11)->re -= -(p+ 5)->im;			\
  (q+11)->im -=  (p+ 5)->re;

#define GAMMAT(q, p)				\
  (q+ 0)->re =  (p+ 0)->re;			\
  (q+ 0)->im =  (p+ 0)->im;			\
  (q+ 1)->re =  (p+ 1)->re;			\
  (q+ 1)->im =  (p+ 1)->im;			\
  (q+ 2)->re =  (p+ 2)->re;			\
  (q+ 2)->im =  (p+ 2)->im;			\
  (q+ 3)->re =  (p+ 3)->re;			\
  (q+ 3)->im =  (p+ 3)->im;			\
  (q+ 4)->re =  (p+ 4)->re;			\
  (q+ 4)->im =  (p+ 4)->im;			\
  (q+ 5)->re =  (p+ 5)->re;			\
  (q+ 5)->im =  (p+ 5)->im;			\
  (q+ 6)->re = -(p+ 6)->re;			\
  (q+ 6)->im = -(p+ 6)->im;			\
  (q+ 7)->re = -(p+ 7)->re;			\
  (q+ 7)->im = -(p+ 7)->im;			\
  (q+ 8)->re = -(p+ 8)->re;			\
  (q+ 8)->im = -(p+ 8)->im;			\
  (q+ 9)->re = -(p+ 9)->re;			\
  (q+ 9)->im = -(p+ 9)->im;			\
  (q+10)->re = -(p+10)->re;			\
  (q+10)->im = -(p+10)->im;			\
  (q+11)->re = -(p+11)->re;			\
  (q+11)->im = -(p+11)->im;

#define GAMMAT_PEQ(q, p)			\
  (q+ 0)->re +=  (p+ 0)->re;			\
  (q+ 0)->im +=  (p+ 0)->im;			\
  (q+ 1)->re +=  (p+ 1)->re;			\
  (q+ 1)->im +=  (p+ 1)->im;			\
  (q+ 2)->re +=  (p+ 2)->re;			\
  (q+ 2)->im +=  (p+ 2)->im;			\
  (q+ 3)->re +=  (p+ 3)->re;			\
  (q+ 3)->im +=  (p+ 3)->im;			\
  (q+ 4)->re +=  (p+ 4)->re;			\
  (q+ 4)->im +=  (p+ 4)->im;			\
  (q+ 5)->re +=  (p+ 5)->re;			\
  (q+ 5)->im +=  (p+ 5)->im;			\
  (q+ 6)->re += -(p+ 6)->re;			\
  (q+ 6)->im += -(p+ 6)->im;			\
  (q+ 7)->re += -(p+ 7)->re;			\
  (q+ 7)->im += -(p+ 7)->im;			\
  (q+ 8)->re += -(p+ 8)->re;			\
  (q+ 8)->im += -(p+ 8)->im;			\
  (q+ 9)->re += -(p+ 9)->re;			\
  (q+ 9)->im += -(p+ 9)->im;			\
  (q+10)->re += -(p+10)->re;			\
  (q+10)->im += -(p+10)->im;			\
  (q+11)->re += -(p+11)->re;			\
  (q+11)->im += -(p+11)->im;

#define GAMMAT_MEQ(q, p)			\
  (q+ 0)->re -=  (p+ 0)->re;			\
  (q+ 0)->im -=  (p+ 0)->im;			\
  (q+ 1)->re -=  (p+ 1)->re;			\
  (q+ 1)->im -=  (p+ 1)->im;			\
  (q+ 2)->re -=  (p+ 2)->re;			\
  (q+ 2)->im -=  (p+ 2)->im;			\
  (q+ 3)->re -=  (p+ 3)->re;			\
  (q+ 3)->im -=  (p+ 3)->im;			\
  (q+ 4)->re -=  (p+ 4)->re;			\
  (q+ 4)->im -=  (p+ 4)->im;			\
  (q+ 5)->re -=  (p+ 5)->re;			\
  (q+ 5)->im -=  (p+ 5)->im;			\
  (q+ 6)->re -= -(p+ 6)->re;			\
  (q+ 6)->im -= -(p+ 6)->im;			\
  (q+ 7)->re -= -(p+ 7)->re;			\
  (q+ 7)->im -= -(p+ 7)->im;			\
  (q+ 8)->re -= -(p+ 8)->re;			\
  (q+ 8)->im -= -(p+ 8)->im;			\
  (q+ 9)->re -= -(p+ 9)->re;			\
  (q+ 9)->im -= -(p+ 9)->im;			\
  (q+10)->re -= -(p+10)->re;			\
  (q+10)->im -= -(p+10)->im;			\
  (q+11)->re -= -(p+11)->re;			\
  (q+11)->im -= -(p+11)->im;

#define COLSPIN_SCALE(z, a, x)			\
  (z+ 0)->re = a*(x+ 0)->re;			\
  (z+ 0)->im = a*(x+ 0)->im;			\
  (z+ 1)->re = a*(x+ 1)->re;			\
  (z+ 1)->im = a*(x+ 1)->im;			\
  (z+ 2)->re = a*(x+ 2)->re;			\
  (z+ 2)->im = a*(x+ 2)->im;			\
						\
  (z+ 3)->re = a*(x+ 3)->re;			\
  (z+ 3)->im = a*(x+ 3)->im;			\
  (z+ 4)->re = a*(x+ 4)->re;			\
  (z+ 4)->im = a*(x+ 4)->im;			\
  (z+ 5)->re = a*(x+ 5)->re;			\
  (z+ 5)->im = a*(x+ 5)->im;			\
						\
  (z+ 6)->re = a*(x+ 6)->re;			\
  (z+ 6)->im = a*(x+ 6)->im;			\
  (z+ 7)->re = a*(x+ 7)->re;			\
  (z+ 7)->im = a*(x+ 7)->im;			\
  (z+ 8)->re = a*(x+ 8)->re;			\
  (z+ 8)->im = a*(x+ 8)->im;			\
						\
  (z+ 9)->re = a*(x+ 9)->re;			\
  (z+ 9)->im = a*(x+ 9)->im;			\
  (z+10)->re = a*(x+10)->re;			\
  (z+10)->im = a*(x+10)->im;			\
  (z+11)->re = a*(x+11)->re;			\
  (z+11)->im = a*(x+11)->im;

#define COLSPIN_AXPY(z, a, x, y)		\
  (z+ 0)->re = a*(x+ 0)->re + (y+ 0)->re;	\
  (z+ 0)->im = a*(x+ 0)->im + (y+ 0)->im;	\
  (z+ 1)->re = a*(x+ 1)->re + (y+ 1)->re;	\
  (z+ 1)->im = a*(x+ 1)->im + (y+ 1)->im;	\
  (z+ 2)->re = a*(x+ 2)->re + (y+ 2)->re;	\
  (z+ 2)->im = a*(x+ 2)->im + (y+ 2)->im;	\
						\
  (z+ 3)->re = a*(x+ 3)->re + (y+ 3)->re;	\
  (z+ 3)->im = a*(x+ 3)->im + (y+ 3)->im;	\
  (z+ 4)->re = a*(x+ 4)->re + (y+ 4)->re;	\
  (z+ 4)->im = a*(x+ 4)->im + (y+ 4)->im;	\
  (z+ 5)->re = a*(x+ 5)->re + (y+ 5)->re;	\
  (z+ 5)->im = a*(x+ 5)->im + (y+ 5)->im;	\
						\
  (z+ 6)->re = a*(x+ 6)->re + (y+ 6)->re;	\
  (z+ 6)->im = a*(x+ 6)->im + (y+ 6)->im;	\
  (z+ 7)->re = a*(x+ 7)->re + (y+ 7)->re;	\
  (z+ 7)->im = a*(x+ 7)->im + (y+ 7)->im;	\
  (z+ 8)->re = a*(x+ 8)->re + (y+ 8)->re;	\
  (z+ 8)->im = a*(x+ 8)->im + (y+ 8)->im;	\
						\
  (z+ 9)->re = a*(x+ 9)->re + (y+ 9)->re;	\
  (z+ 9)->im = a*(x+ 9)->im + (y+ 9)->im;	\
  (z+10)->re = a*(x+10)->re + (y+10)->re;	\
  (z+10)->im = a*(x+10)->im + (y+10)->im;	\
  (z+11)->re = a*(x+11)->re + (y+11)->re;	\
  (z+11)->im = a*(x+11)->im + (y+11)->im;

#define COLSPIN_AXPBY(z, a, x, b, y)		\
  (z+ 0)->re = a*(x+ 0)->re + b*(y+ 0)->re;	\
  (z+ 0)->im = a*(x+ 0)->im + b*(y+ 0)->im;	\
  (z+ 1)->re = a*(x+ 1)->re + b*(y+ 1)->re;	\
  (z+ 1)->im = a*(x+ 1)->im + b*(y+ 1)->im;	\
  (z+ 2)->re = a*(x+ 2)->re + b*(y+ 2)->re;	\
  (z+ 2)->im = a*(x+ 2)->im + b*(y+ 2)->im;	\
						\
  (z+ 3)->re = a*(x+ 3)->re + b*(y+ 3)->re;	\
  (z+ 3)->im = a*(x+ 3)->im + b*(y+ 3)->im;	\
  (z+ 4)->re = a*(x+ 4)->re + b*(y+ 4)->re;	\
  (z+ 4)->im = a*(x+ 4)->im + b*(y+ 4)->im;	\
  (z+ 5)->re = a*(x+ 5)->re + b*(y+ 5)->re;	\
  (z+ 5)->im = a*(x+ 5)->im + b*(y+ 5)->im;	\
						\
  (z+ 6)->re = a*(x+ 6)->re + b*(y+ 6)->re;	\
  (z+ 6)->im = a*(x+ 6)->im + b*(y+ 6)->im;	\
  (z+ 7)->re = a*(x+ 7)->re + b*(y+ 7)->re;	\
  (z+ 7)->im = a*(x+ 7)->im + b*(y+ 7)->im;	\
  (z+ 8)->re = a*(x+ 8)->re + b*(y+ 8)->re;	\
  (z+ 8)->im = a*(x+ 8)->im + b*(y+ 8)->im;	\
						\
  (z+ 9)->re = a*(x+ 9)->re + b*(y+ 9)->re;	\
  (z+ 9)->im = a*(x+ 9)->im + b*(y+ 9)->im;	\
  (z+10)->re = a*(x+10)->re + b*(y+10)->re;	\
  (z+10)->im = a*(x+10)->im + b*(y+10)->im;	\
  (z+11)->re = a*(x+11)->re + b*(y+11)->re;	\
  (z+11)->im = a*(x+11)->im + b*(y+11)->im;

#define COLSPIN_ADD(z, x, y)			\
  (z+ 0)->re = (x+ 0)->re + (y+ 0)->re;		\
  (z+ 0)->im = (x+ 0)->im + (y+ 0)->im;		\
  (z+ 1)->re = (x+ 1)->re + (y+ 1)->re;		\
  (z+ 1)->im = (x+ 1)->im + (y+ 1)->im;		\
  (z+ 2)->re = (x+ 2)->re + (y+ 2)->re;		\
  (z+ 2)->im = (x+ 2)->im + (y+ 2)->im;		\
						\
  (z+ 3)->re = (x+ 3)->re + (y+ 3)->re;		\
  (z+ 3)->im = (x+ 3)->im + (y+ 3)->im;		\
  (z+ 4)->re = (x+ 4)->re + (y+ 4)->re;		\
  (z+ 4)->im = (x+ 4)->im + (y+ 4)->im;		\
  (z+ 5)->re = (x+ 5)->re + (y+ 5)->re;		\
  (z+ 5)->im = (x+ 5)->im + (y+ 5)->im;		\
						\
  (z+ 6)->re = (x+ 6)->re + (y+ 6)->re;		\
  (z+ 6)->im = (x+ 6)->im + (y+ 6)->im;		\
  (z+ 7)->re = (x+ 7)->re + (y+ 7)->re;		\
  (z+ 7)->im = (x+ 7)->im + (y+ 7)->im;		\
  (z+ 8)->re = (x+ 8)->re + (y+ 8)->re;		\
  (z+ 8)->im = (x+ 8)->im + (y+ 8)->im;		\
						\
  (z+ 9)->re = (x+ 9)->re + (y+ 9)->re;		\
  (z+ 9)->im = (x+ 9)->im + (y+ 9)->im;		\
  (z+10)->re = (x+10)->re + (y+10)->re;		\
  (z+10)->im = (x+10)->im + (y+10)->im;		\
  (z+11)->re = (x+11)->re + (y+11)->re;		\
  (z+11)->im = (x+11)->im + (y+11)->im;

#define COLSPIN_ZERO(x)				\
  (x+ 0)->re = 0.;				\
  (x+ 0)->im = 0.;				\
  (x+ 1)->re = 0.;				\
  (x+ 1)->im = 0.;				\
  (x+ 2)->re = 0.;				\
  (x+ 2)->im = 0.;				\
  						\
  (x+ 3)->re = 0.;				\
  (x+ 3)->im = 0.;				\
  (x+ 4)->re = 0.;				\
  (x+ 4)->im = 0.;				\
  (x+ 5)->re = 0.;				\
  (x+ 5)->im = 0.;				\
  						\
  (x+ 6)->re = 0.;				\
  (x+ 6)->im = 0.;				\
  (x+ 7)->re = 0.;				\
  (x+ 7)->im = 0.;				\
  (x+ 8)->re = 0.;				\
  (x+ 8)->im = 0.;				\
  						\
  (x+ 9)->re = 0.;				\
  (x+ 9)->im = 0.;				\
  (x+10)->re = 0.;				\
  (x+10)->im = 0.;				\
  (x+11)->re = 0.;				\
  (x+11)->im = 0.;

#define COLSPIN_SUB(z, x, y)			\
  (z+ 0)->re = (x+ 0)->re - (y+ 0)->re;		\
  (z+ 0)->im = (x+ 0)->im - (y+ 0)->im;		\
  (z+ 1)->re = (x+ 1)->re - (y+ 1)->re;		\
  (z+ 1)->im = (x+ 1)->im - (y+ 1)->im;		\
  (z+ 2)->re = (x+ 2)->re - (y+ 2)->re;		\
  (z+ 2)->im = (x+ 2)->im - (y+ 2)->im;		\
						\
  (z+ 3)->re = (x+ 3)->re - (y+ 3)->re;		\
  (z+ 3)->im = (x+ 3)->im - (y+ 3)->im;		\
  (z+ 4)->re = (x+ 4)->re - (y+ 4)->re;		\
  (z+ 4)->im = (x+ 4)->im - (y+ 4)->im;		\
  (z+ 5)->re = (x+ 5)->re - (y+ 5)->re;		\
  (z+ 5)->im = (x+ 5)->im - (y+ 5)->im;		\
						\
  (z+ 6)->re = (x+ 6)->re - (y+ 6)->re;		\
  (z+ 6)->im = (x+ 6)->im - (y+ 6)->im;		\
  (z+ 7)->re = (x+ 7)->re - (y+ 7)->re;		\
  (z+ 7)->im = (x+ 7)->im - (y+ 7)->im;		\
  (z+ 8)->re = (x+ 8)->re - (y+ 8)->re;		\
  (z+ 8)->im = (x+ 8)->im - (y+ 8)->im;		\
						\
  (z+ 9)->re = (x+ 9)->re - (y+ 9)->re;		\
  (z+ 9)->im = (x+ 9)->im - (y+ 9)->im;		\
  (z+10)->re = (x+10)->re - (y+10)->re;		\
  (z+10)->im = (x+10)->im - (y+10)->im;		\
  (z+11)->re = (x+11)->re - (y+11)->re;		\
  (z+11)->im = (x+11)->im - (y+11)->im;

#define COL_MPLY(l, u, q)				\
  /* */							\
							\
  (l+ 0)->re =						\
    (u+0)->re*(q+ 0)->re - (u+0)->im*(q+ 0)->im +	\
    (u+1)->re*(q+ 1)->re - (u+1)->im*(q+ 1)->im +	\
    (u+2)->re*(q+ 2)->re - (u+2)->im*(q+ 2)->im;	\
  (l+ 0)->im =						\
    (u+0)->re*(q+ 0)->im + (u+0)->im*(q+ 0)->re +	\
    (u+1)->re*(q+ 1)->im + (u+1)->im*(q+ 1)->re +	\
    (u+2)->re*(q+ 2)->im + (u+2)->im*(q+ 2)->re;	\
							\
  (l+ 1)->re =						\
    (u+3)->re*(q+ 0)->re - (u+3)->im*(q+ 0)->im +	\
    (u+4)->re*(q+ 1)->re - (u+4)->im*(q+ 1)->im +	\
    (u+5)->re*(q+ 2)->re - (u+5)->im*(q+ 2)->im;	\
  (l+ 1)->im =						\
    (u+3)->re*(q+ 0)->im + (u+3)->im*(q+ 0)->re +	\
    (u+4)->re*(q+ 1)->im + (u+4)->im*(q+ 1)->re +	\
    (u+5)->re*(q+ 2)->im + (u+5)->im*(q+ 2)->re;	\
							\
  (l+ 2)->re =						\
    (u+6)->re*(q+ 0)->re - (u+6)->im*(q+ 0)->im +	\
    (u+7)->re*(q+ 1)->re - (u+7)->im*(q+ 1)->im +	\
    (u+8)->re*(q+ 2)->re - (u+8)->im*(q+ 2)->im;	\
  (l+ 2)->im =						\
    (u+6)->re*(q+ 0)->im + (u+6)->im*(q+ 0)->re +	\
    (u+7)->re*(q+ 1)->im + (u+7)->im*(q+ 1)->re +	\
    (u+8)->re*(q+ 2)->im + (u+8)->im*(q+ 2)->re;	\
  /* */							\
							\
  (l+ 3)->re =						\
    (u+0)->re*(q+ 3)->re - (u+0)->im*(q+ 3)->im +	\
    (u+1)->re*(q+ 4)->re - (u+1)->im*(q+ 4)->im +	\
    (u+2)->re*(q+ 5)->re - (u+2)->im*(q+ 5)->im;	\
  (l+ 3)->im =						\
    (u+0)->re*(q+ 3)->im + (u+0)->im*(q+ 3)->re +	\
    (u+1)->re*(q+ 4)->im + (u+1)->im*(q+ 4)->re +	\
    (u+2)->re*(q+ 5)->im + (u+2)->im*(q+ 5)->re;	\
							\
  (l+ 4)->re =						\
    (u+3)->re*(q+ 3)->re - (u+3)->im*(q+ 3)->im +	\
    (u+4)->re*(q+ 4)->re - (u+4)->im*(q+ 4)->im +	\
    (u+5)->re*(q+ 5)->re - (u+5)->im*(q+ 5)->im;	\
  (l+ 4)->im =						\
    (u+3)->re*(q+ 3)->im + (u+3)->im*(q+ 3)->re +	\
    (u+4)->re*(q+ 4)->im + (u+4)->im*(q+ 4)->re +	\
    (u+5)->re*(q+ 5)->im + (u+5)->im*(q+ 5)->re;	\
							\
  (l+ 5)->re =						\
    (u+6)->re*(q+ 3)->re - (u+6)->im*(q+ 3)->im +	\
    (u+7)->re*(q+ 4)->re - (u+7)->im*(q+ 4)->im +	\
    (u+8)->re*(q+ 5)->re - (u+8)->im*(q+ 5)->im;	\
  (l+ 5)->im =						\
    (u+6)->re*(q+ 3)->im + (u+6)->im*(q+ 3)->re +	\
    (u+7)->re*(q+ 4)->im + (u+7)->im*(q+ 4)->re +	\
    (u+8)->re*(q+ 5)->im + (u+8)->im*(q+ 5)->re;	\
  /* */							\
							\
  (l+ 6)->re =						\
    (u+0)->re*(q+ 6)->re - (u+0)->im*(q+ 6)->im +	\
    (u+1)->re*(q+ 7)->re - (u+1)->im*(q+ 7)->im +	\
    (u+2)->re*(q+ 8)->re - (u+2)->im*(q+ 8)->im;	\
  (l+ 6)->im =						\
    (u+0)->re*(q+ 6)->im + (u+0)->im*(q+ 6)->re +	\
    (u+1)->re*(q+ 7)->im + (u+1)->im*(q+ 7)->re +	\
    (u+2)->re*(q+ 8)->im + (u+2)->im*(q+ 8)->re;	\
							\
  (l+ 7)->re =						\
    (u+3)->re*(q+ 6)->re - (u+3)->im*(q+ 6)->im +	\
    (u+4)->re*(q+ 7)->re - (u+4)->im*(q+ 7)->im +	\
    (u+5)->re*(q+ 8)->re - (u+5)->im*(q+ 8)->im;	\
  (l+ 7)->im =						\
    (u+3)->re*(q+ 6)->im + (u+3)->im*(q+ 6)->re +	\
    (u+4)->re*(q+ 7)->im + (u+4)->im*(q+ 7)->re +	\
    (u+5)->re*(q+ 8)->im + (u+5)->im*(q+ 8)->re;	\
							\
  (l+ 8)->re =						\
    (u+6)->re*(q+ 6)->re - (u+6)->im*(q+ 6)->im +	\
    (u+7)->re*(q+ 7)->re - (u+7)->im*(q+ 7)->im +	\
    (u+8)->re*(q+ 8)->re - (u+8)->im*(q+ 8)->im;	\
  (l+ 8)->im =						\
    (u+6)->re*(q+ 6)->im + (u+6)->im*(q+ 6)->re +	\
    (u+7)->re*(q+ 7)->im + (u+7)->im*(q+ 7)->re +	\
    (u+8)->re*(q+ 8)->im + (u+8)->im*(q+ 8)->re;	\
  /* */							\
							\
  (l+ 9)->re =						\
    (u+0)->re*(q+ 9)->re - (u+0)->im*(q+ 9)->im +	\
    (u+1)->re*(q+10)->re - (u+1)->im*(q+10)->im +	\
    (u+2)->re*(q+11)->re - (u+2)->im*(q+11)->im;	\
  (l+ 9)->im =						\
    (u+0)->re*(q+ 9)->im + (u+0)->im*(q+ 9)->re +	\
    (u+1)->re*(q+10)->im + (u+1)->im*(q+10)->re +	\
    (u+2)->re*(q+11)->im + (u+2)->im*(q+11)->re;	\
							\
  (l+10)->re =						\
    (u+3)->re*(q+ 9)->re - (u+3)->im*(q+ 9)->im +	\
    (u+4)->re*(q+10)->re - (u+4)->im*(q+10)->im +	\
    (u+5)->re*(q+11)->re - (u+5)->im*(q+11)->im;	\
  (l+10)->im =						\
    (u+3)->re*(q+ 9)->im + (u+3)->im*(q+ 9)->re +	\
    (u+4)->re*(q+10)->im + (u+4)->im*(q+10)->re +	\
    (u+5)->re*(q+11)->im + (u+5)->im*(q+11)->re;	\
							\
  (l+11)->re =						\
    (u+6)->re*(q+ 9)->re - (u+6)->im*(q+ 9)->im +	\
    (u+7)->re*(q+10)->re - (u+7)->im*(q+10)->im +	\
    (u+8)->re*(q+11)->re - (u+8)->im*(q+11)->im;	\
  (l+11)->im =						\
    (u+6)->re*(q+ 9)->im + (u+6)->im*(q+ 9)->re +	\
    (u+7)->re*(q+10)->im + (u+7)->im*(q+10)->re +	\
    (u+8)->re*(q+11)->im + (u+8)->im*(q+11)->re;


#define COL_MPLY_DAG(l, u, q)				\
  /* */							\
							\
  (l+ 0)->re =						\
    (u+0)->re*(q+ 0)->re + (u+0)->im*(q+ 0)->im +	\
    (u+3)->re*(q+ 1)->re + (u+3)->im*(q+ 1)->im +	\
    (u+6)->re*(q+ 2)->re + (u+6)->im*(q+ 2)->im;	\
  (l+ 0)->im =						\
    (u+0)->re*(q+ 0)->im - (u+0)->im*(q+ 0)->re +	\
    (u+3)->re*(q+ 1)->im - (u+3)->im*(q+ 1)->re +	\
    (u+6)->re*(q+ 2)->im - (u+6)->im*(q+ 2)->re;	\
							\
  (l+ 1)->re =						\
    (u+1)->re*(q+ 0)->re + (u+1)->im*(q+ 0)->im +	\
    (u+4)->re*(q+ 1)->re + (u+4)->im*(q+ 1)->im +	\
    (u+7)->re*(q+ 2)->re + (u+7)->im*(q+ 2)->im;	\
  (l+ 1)->im =						\
    (u+1)->re*(q+ 0)->im - (u+1)->im*(q+ 0)->re +	\
    (u+4)->re*(q+ 1)->im - (u+4)->im*(q+ 1)->re +	\
    (u+7)->re*(q+ 2)->im - (u+7)->im*(q+ 2)->re;	\
							\
  (l+ 2)->re =						\
    (u+2)->re*(q+ 0)->re + (u+2)->im*(q+ 0)->im +	\
    (u+5)->re*(q+ 1)->re + (u+5)->im*(q+ 1)->im +	\
    (u+8)->re*(q+ 2)->re + (u+8)->im*(q+ 2)->im;	\
  (l+ 2)->im =						\
    (u+2)->re*(q+ 0)->im - (u+2)->im*(q+ 0)->re +	\
    (u+5)->re*(q+ 1)->im - (u+5)->im*(q+ 1)->re +	\
    (u+8)->re*(q+ 2)->im - (u+8)->im*(q+ 2)->re;	\
  /* */							\
							\
  (l+ 3)->re =						\
    (u+0)->re*(q+ 3)->re + (u+0)->im*(q+ 3)->im +	\
    (u+3)->re*(q+ 4)->re + (u+3)->im*(q+ 4)->im +	\
    (u+6)->re*(q+ 5)->re + (u+6)->im*(q+ 5)->im;	\
  (l+ 3)->im =						\
    (u+0)->re*(q+ 3)->im - (u+0)->im*(q+ 3)->re +	\
    (u+3)->re*(q+ 4)->im - (u+3)->im*(q+ 4)->re +	\
    (u+6)->re*(q+ 5)->im - (u+6)->im*(q+ 5)->re;	\
							\
  (l+ 4)->re =						\
    (u+1)->re*(q+ 3)->re + (u+1)->im*(q+ 3)->im +	\
    (u+4)->re*(q+ 4)->re + (u+4)->im*(q+ 4)->im +	\
    (u+7)->re*(q+ 5)->re + (u+7)->im*(q+ 5)->im;	\
  (l+ 4)->im =						\
    (u+1)->re*(q+ 3)->im - (u+1)->im*(q+ 3)->re +	\
    (u+4)->re*(q+ 4)->im - (u+4)->im*(q+ 4)->re +	\
    (u+7)->re*(q+ 5)->im - (u+7)->im*(q+ 5)->re;	\
							\
  (l+ 5)->re =						\
    (u+2)->re*(q+ 3)->re + (u+2)->im*(q+ 3)->im +	\
    (u+5)->re*(q+ 4)->re + (u+5)->im*(q+ 4)->im +	\
    (u+8)->re*(q+ 5)->re + (u+8)->im*(q+ 5)->im;	\
  (l+ 5)->im =						\
    (u+2)->re*(q+ 3)->im - (u+2)->im*(q+ 3)->re +	\
    (u+5)->re*(q+ 4)->im - (u+5)->im*(q+ 4)->re +	\
    (u+8)->re*(q+ 5)->im - (u+8)->im*(q+ 5)->re;	\
  /* */							\
							\
  (l+ 6)->re =						\
    (u+0)->re*(q+ 6)->re + (u+0)->im*(q+ 6)->im +	\
    (u+3)->re*(q+ 7)->re + (u+3)->im*(q+ 7)->im +	\
    (u+6)->re*(q+ 8)->re + (u+6)->im*(q+ 8)->im;	\
  (l+ 6)->im =						\
    (u+0)->re*(q+ 6)->im - (u+0)->im*(q+ 6)->re +	\
    (u+3)->re*(q+ 7)->im - (u+3)->im*(q+ 7)->re +	\
    (u+6)->re*(q+ 8)->im - (u+6)->im*(q+ 8)->re;	\
							\
  (l+ 7)->re =						\
    (u+1)->re*(q+ 6)->re + (u+1)->im*(q+ 6)->im +	\
    (u+4)->re*(q+ 7)->re + (u+4)->im*(q+ 7)->im +	\
    (u+7)->re*(q+ 8)->re + (u+7)->im*(q+ 8)->im;	\
  (l+ 7)->im =						\
    (u+1)->re*(q+ 6)->im - (u+1)->im*(q+ 6)->re +	\
    (u+4)->re*(q+ 7)->im - (u+4)->im*(q+ 7)->re +	\
    (u+7)->re*(q+ 8)->im - (u+7)->im*(q+ 8)->re;	\
							\
  (l+ 8)->re =						\
    (u+2)->re*(q+ 6)->re + (u+2)->im*(q+ 6)->im +	\
    (u+5)->re*(q+ 7)->re + (u+5)->im*(q+ 7)->im +	\
    (u+8)->re*(q+ 8)->re + (u+8)->im*(q+ 8)->im;	\
  (l+ 8)->im =						\
    (u+2)->re*(q+ 6)->im - (u+2)->im*(q+ 6)->re +	\
    (u+5)->re*(q+ 7)->im - (u+5)->im*(q+ 7)->re +	\
    (u+8)->re*(q+ 8)->im - (u+8)->im*(q+ 8)->re;	\
  /* */							\
							\
  (l+ 9)->re =						\
    (u+0)->re*(q+ 9)->re + (u+0)->im*(q+ 9)->im +	\
    (u+3)->re*(q+10)->re + (u+3)->im*(q+10)->im +	\
    (u+6)->re*(q+11)->re + (u+6)->im*(q+11)->im;	\
  (l+ 9)->im =						\
    (u+0)->re*(q+ 9)->im - (u+0)->im*(q+ 9)->re +	\
    (u+3)->re*(q+10)->im - (u+3)->im*(q+10)->re +	\
    (u+6)->re*(q+11)->im - (u+6)->im*(q+11)->re;	\
							\
  (l+10)->re =						\
    (u+1)->re*(q+ 9)->re + (u+1)->im*(q+ 9)->im +	\
    (u+4)->re*(q+10)->re + (u+4)->im*(q+10)->im +	\
    (u+7)->re*(q+11)->re + (u+7)->im*(q+11)->im;	\
  (l+10)->im =						\
    (u+1)->re*(q+ 9)->im - (u+1)->im*(q+ 9)->re +	\
    (u+4)->re*(q+10)->im - (u+4)->im*(q+10)->re +	\
    (u+7)->re*(q+11)->im - (u+7)->im*(q+11)->re;	\
							\
  (l+11)->re =						\
    (u+2)->re*(q+ 9)->re + (u+2)->im*(q+ 9)->im +	\
    (u+5)->re*(q+10)->re + (u+5)->im*(q+10)->im +	\
    (u+8)->re*(q+11)->re + (u+8)->im*(q+11)->im;	\
  (l+11)->im =						\
    (u+2)->re*(q+ 9)->im - (u+2)->im*(q+ 9)->re +	\
    (u+5)->re*(q+10)->im - (u+5)->im*(q+10)->re +	\
    (u+8)->re*(q+11)->im - (u+8)->im*(q+11)->re;

#define COL_MPLY_PEQ(l,u,q)						\
  /* */									\
									\
  (l+ 0)->re +=								\
    (u+0)->re*(q+ 0)->re - (u+0)->im*(q+ 0)->im +			\
    (u+1)->re*(q+ 1)->re - (u+1)->im*(q+ 1)->im +			\
    (u+2)->re*(q+ 2)->re - (u+2)->im*(q+ 2)->im;			\
  (l+ 0)->im +=								\
    (u+0)->re*(q+ 0)->im + (u+0)->im*(q+ 0)->re +			\
    (u+1)->re*(q+ 1)->im + (u+1)->im*(q+ 1)->re +			\
    (u+2)->re*(q+ 2)->im + (u+2)->im*(q+ 2)->re;			\
									\
  (l+ 1)->re +=								\
    (u+3)->re*(q+ 0)->re - (u+3)->im*(q+ 0)->im +			\
    (u+4)->re*(q+ 1)->re - (u+4)->im*(q+ 1)->im +			\
    (u+5)->re*(q+ 2)->re - (u+5)->im*(q+ 2)->im;			\
  (l+ 1)->im +=								\
    (u+3)->re*(q+ 0)->im + (u+3)->im*(q+ 0)->re +			\
    (u+4)->re*(q+ 1)->im + (u+4)->im*(q+ 1)->re +			\
    (u+5)->re*(q+ 2)->im + (u+5)->im*(q+ 2)->re;			\
									\
  (l+ 2)->re +=								\
    (u+6)->re*(q+ 0)->re - (u+6)->im*(q+ 0)->im +			\
    (u+7)->re*(q+ 1)->re - (u+7)->im*(q+ 1)->im +			\
    (u+8)->re*(q+ 2)->re - (u+8)->im*(q+ 2)->im;			\
  (l+ 2)->im +=								\
    (u+6)->re*(q+ 0)->im + (u+6)->im*(q+ 0)->re +			\
    (u+7)->re*(q+ 1)->im + (u+7)->im*(q+ 1)->re +			\
    (u+8)->re*(q+ 2)->im + (u+8)->im*(q+ 2)->re;			\
  /* */									\
									\
  (l+ 3)->re +=								\
    (u+0)->re*(q+ 3)->re - (u+0)->im*(q+ 3)->im +			\
    (u+1)->re*(q+ 4)->re - (u+1)->im*(q+ 4)->im +			\
    (u+2)->re*(q+ 5)->re - (u+2)->im*(q+ 5)->im;			\
  (l+ 3)->im +=								\
    (u+0)->re*(q+ 3)->im + (u+0)->im*(q+ 3)->re +			\
    (u+1)->re*(q+ 4)->im + (u+1)->im*(q+ 4)->re +			\
    (u+2)->re*(q+ 5)->im + (u+2)->im*(q+ 5)->re;			\
									\
  (l+ 4)->re +=								\
    (u+3)->re*(q+ 3)->re - (u+3)->im*(q+ 3)->im +			\
    (u+4)->re*(q+ 4)->re - (u+4)->im*(q+ 4)->im +			\
    (u+5)->re*(q+ 5)->re - (u+5)->im*(q+ 5)->im;			\
  (l+ 4)->im +=								\
    (u+3)->re*(q+ 3)->im + (u+3)->im*(q+ 3)->re +			\
    (u+4)->re*(q+ 4)->im + (u+4)->im*(q+ 4)->re +			\
    (u+5)->re*(q+ 5)->im + (u+5)->im*(q+ 5)->re;			\
									\
  (l+ 5)->re +=								\
    (u+6)->re*(q+ 3)->re - (u+6)->im*(q+ 3)->im +			\
    (u+7)->re*(q+ 4)->re - (u+7)->im*(q+ 4)->im +			\
    (u+8)->re*(q+ 5)->re - (u+8)->im*(q+ 5)->im;			\
  (l+ 5)->im +=								\
    (u+6)->re*(q+ 3)->im + (u+6)->im*(q+ 3)->re +			\
    (u+7)->re*(q+ 4)->im + (u+7)->im*(q+ 4)->re +			\
    (u+8)->re*(q+ 5)->im + (u+8)->im*(q+ 5)->re;			\
  /* */									\
									\
  (l+ 6)->re +=								\
    (u+0)->re*(q+ 6)->re - (u+0)->im*(q+ 6)->im +			\
    (u+1)->re*(q+ 7)->re - (u+1)->im*(q+ 7)->im +			\
    (u+2)->re*(q+ 8)->re - (u+2)->im*(q+ 8)->im;			\
  (l+ 6)->im +=								\
    (u+0)->re*(q+ 6)->im + (u+0)->im*(q+ 6)->re +			\
    (u+1)->re*(q+ 7)->im + (u+1)->im*(q+ 7)->re +			\
    (u+2)->re*(q+ 8)->im + (u+2)->im*(q+ 8)->re;			\
									\
  (l+ 7)->re +=								\
    (u+3)->re*(q+ 6)->re - (u+3)->im*(q+ 6)->im +			\
    (u+4)->re*(q+ 7)->re - (u+4)->im*(q+ 7)->im +			\
    (u+5)->re*(q+ 8)->re - (u+5)->im*(q+ 8)->im;			\
  (l+ 7)->im +=								\
    (u+3)->re*(q+ 6)->im + (u+3)->im*(q+ 6)->re +			\
    (u+4)->re*(q+ 7)->im + (u+4)->im*(q+ 7)->re +			\
    (u+5)->re*(q+ 8)->im + (u+5)->im*(q+ 8)->re;			\
									\
  (l+ 8)->re +=								\
    (u+6)->re*(q+ 6)->re - (u+6)->im*(q+ 6)->im +			\
    (u+7)->re*(q+ 7)->re - (u+7)->im*(q+ 7)->im +			\
    (u+8)->re*(q+ 8)->re - (u+8)->im*(q+ 8)->im;			\
  (l+ 8)->im +=								\
    (u+6)->re*(q+ 6)->im + (u+6)->im*(q+ 6)->re +			\
    (u+7)->re*(q+ 7)->im + (u+7)->im*(q+ 7)->re +			\
    (u+8)->re*(q+ 8)->im + (u+8)->im*(q+ 8)->re;			\
  /* */									\
									\
  (l+ 9)->re +=								\
    (u+0)->re*(q+ 9)->re - (u+0)->im*(q+ 9)->im +			\
    (u+1)->re*(q+10)->re - (u+1)->im*(q+10)->im +			\
    (u+2)->re*(q+11)->re - (u+2)->im*(q+11)->im;			\
  (l+ 9)->im +=								\
    (u+0)->re*(q+ 9)->im + (u+0)->im*(q+ 9)->re +			\
    (u+1)->re*(q+10)->im + (u+1)->im*(q+10)->re +			\
    (u+2)->re*(q+11)->im + (u+2)->im*(q+11)->re;			\
									\
  (l+10)->re +=								\
    (u+3)->re*(q+ 9)->re - (u+3)->im*(q+ 9)->im +			\
    (u+4)->re*(q+10)->re - (u+4)->im*(q+10)->im +			\
    (u+5)->re*(q+11)->re - (u+5)->im*(q+11)->im;			\
  (l+10)->im +=								\
    (u+3)->re*(q+ 9)->im + (u+3)->im*(q+ 9)->re +			\
    (u+4)->re*(q+10)->im + (u+4)->im*(q+10)->re +			\
    (u+5)->re*(q+11)->im + (u+5)->im*(q+11)->re;			\
									\
  (l+11)->re +=								\
    (u+6)->re*(q+ 9)->re - (u+6)->im*(q+ 9)->im +			\
    (u+7)->re*(q+10)->re - (u+7)->im*(q+10)->im +			\
    (u+8)->re*(q+11)->re - (u+8)->im*(q+11)->im;			\
  (l+11)->im +=								\
    (u+6)->re*(q+ 9)->im + (u+6)->im*(q+ 9)->re +			\
    (u+7)->re*(q+10)->im + (u+7)->im*(q+10)->re +			\
    (u+8)->re*(q+11)->im + (u+8)->im*(q+11)->re;

#define COL_MPLY_MEQ(l,u,q)						\
  /* */									\
									\
  (l+ 0)->re -=								\
    (u+0)->re*(q+ 0)->re - (u+0)->im*(q+ 0)->im +			\
    (u+1)->re*(q+ 1)->re - (u+1)->im*(q+ 1)->im +			\
    (u+2)->re*(q+ 2)->re - (u+2)->im*(q+ 2)->im;			\
  (l+ 0)->im -=								\
    (u+0)->re*(q+ 0)->im + (u+0)->im*(q+ 0)->re +			\
    (u+1)->re*(q+ 1)->im + (u+1)->im*(q+ 1)->re +			\
    (u+2)->re*(q+ 2)->im + (u+2)->im*(q+ 2)->re;			\
									\
  (l+ 1)->re -=								\
    (u+3)->re*(q+ 0)->re - (u+3)->im*(q+ 0)->im +			\
    (u+4)->re*(q+ 1)->re - (u+4)->im*(q+ 1)->im +			\
    (u+5)->re*(q+ 2)->re - (u+5)->im*(q+ 2)->im;			\
  (l+ 1)->im -=								\
    (u+3)->re*(q+ 0)->im + (u+3)->im*(q+ 0)->re +			\
    (u+4)->re*(q+ 1)->im + (u+4)->im*(q+ 1)->re +			\
    (u+5)->re*(q+ 2)->im + (u+5)->im*(q+ 2)->re;			\
									\
  (l+ 2)->re -=								\
    (u+6)->re*(q+ 0)->re - (u+6)->im*(q+ 0)->im +			\
    (u+7)->re*(q+ 1)->re - (u+7)->im*(q+ 1)->im +			\
    (u+8)->re*(q+ 2)->re - (u+8)->im*(q+ 2)->im;			\
  (l+ 2)->im -=								\
    (u+6)->re*(q+ 0)->im + (u+6)->im*(q+ 0)->re +			\
    (u+7)->re*(q+ 1)->im + (u+7)->im*(q+ 1)->re +			\
    (u+8)->re*(q+ 2)->im + (u+8)->im*(q+ 2)->re;			\
  /* */									\
									\
  (l+ 3)->re -=								\
    (u+0)->re*(q+ 3)->re - (u+0)->im*(q+ 3)->im +			\
    (u+1)->re*(q+ 4)->re - (u+1)->im*(q+ 4)->im +			\
    (u+2)->re*(q+ 5)->re - (u+2)->im*(q+ 5)->im;			\
  (l+ 3)->im -=								\
    (u+0)->re*(q+ 3)->im + (u+0)->im*(q+ 3)->re +			\
    (u+1)->re*(q+ 4)->im + (u+1)->im*(q+ 4)->re +			\
    (u+2)->re*(q+ 5)->im + (u+2)->im*(q+ 5)->re;			\
									\
  (l+ 4)->re -=								\
    (u+3)->re*(q+ 3)->re - (u+3)->im*(q+ 3)->im +			\
    (u+4)->re*(q+ 4)->re - (u+4)->im*(q+ 4)->im +			\
    (u+5)->re*(q+ 5)->re - (u+5)->im*(q+ 5)->im;			\
  (l+ 4)->im -=								\
    (u+3)->re*(q+ 3)->im + (u+3)->im*(q+ 3)->re +			\
    (u+4)->re*(q+ 4)->im + (u+4)->im*(q+ 4)->re +			\
    (u+5)->re*(q+ 5)->im + (u+5)->im*(q+ 5)->re;			\
									\
  (l+ 5)->re -=								\
    (u+6)->re*(q+ 3)->re - (u+6)->im*(q+ 3)->im +			\
    (u+7)->re*(q+ 4)->re - (u+7)->im*(q+ 4)->im +			\
    (u+8)->re*(q+ 5)->re - (u+8)->im*(q+ 5)->im;			\
  (l+ 5)->im -=								\
    (u+6)->re*(q+ 3)->im + (u+6)->im*(q+ 3)->re +			\
    (u+7)->re*(q+ 4)->im + (u+7)->im*(q+ 4)->re +			\
    (u+8)->re*(q+ 5)->im + (u+8)->im*(q+ 5)->re;			\
  /* */									\
									\
  (l+ 6)->re -=								\
    (u+0)->re*(q+ 6)->re - (u+0)->im*(q+ 6)->im +			\
    (u+1)->re*(q+ 7)->re - (u+1)->im*(q+ 7)->im +			\
    (u+2)->re*(q+ 8)->re - (u+2)->im*(q+ 8)->im;			\
  (l+ 6)->im -=								\
    (u+0)->re*(q+ 6)->im + (u+0)->im*(q+ 6)->re +			\
    (u+1)->re*(q+ 7)->im + (u+1)->im*(q+ 7)->re +			\
    (u+2)->re*(q+ 8)->im + (u+2)->im*(q+ 8)->re;			\
									\
  (l+ 7)->re -=								\
    (u+3)->re*(q+ 6)->re - (u+3)->im*(q+ 6)->im +			\
    (u+4)->re*(q+ 7)->re - (u+4)->im*(q+ 7)->im +			\
    (u+5)->re*(q+ 8)->re - (u+5)->im*(q+ 8)->im;			\
  (l+ 7)->im -=								\
    (u+3)->re*(q+ 6)->im + (u+3)->im*(q+ 6)->re +			\
    (u+4)->re*(q+ 7)->im + (u+4)->im*(q+ 7)->re +			\
    (u+5)->re*(q+ 8)->im + (u+5)->im*(q+ 8)->re;			\
									\
  (l+ 8)->re -=								\
    (u+6)->re*(q+ 6)->re - (u+6)->im*(q+ 6)->im +			\
    (u+7)->re*(q+ 7)->re - (u+7)->im*(q+ 7)->im +			\
    (u+8)->re*(q+ 8)->re - (u+8)->im*(q+ 8)->im;			\
  (l+ 8)->im -=								\
    (u+6)->re*(q+ 6)->im + (u+6)->im*(q+ 6)->re +			\
    (u+7)->re*(q+ 7)->im + (u+7)->im*(q+ 7)->re +			\
    (u+8)->re*(q+ 8)->im + (u+8)->im*(q+ 8)->re;			\
  /* */									\
									\
  (l+ 9)->re -=								\
    (u+0)->re*(q+ 9)->re - (u+0)->im*(q+ 9)->im +			\
    (u+1)->re*(q+10)->re - (u+1)->im*(q+10)->im +			\
    (u+2)->re*(q+11)->re - (u+2)->im*(q+11)->im;			\
  (l+ 9)->im -=								\
    (u+0)->re*(q+ 9)->im + (u+0)->im*(q+ 9)->re +			\
    (u+1)->re*(q+10)->im + (u+1)->im*(q+10)->re +			\
    (u+2)->re*(q+11)->im + (u+2)->im*(q+11)->re;			\
									\
  (l+10)->re -=								\
    (u+3)->re*(q+ 9)->re - (u+3)->im*(q+ 9)->im +			\
    (u+4)->re*(q+10)->re - (u+4)->im*(q+10)->im +			\
    (u+5)->re*(q+11)->re - (u+5)->im*(q+11)->im;			\
  (l+10)->im -=								\
    (u+3)->re*(q+ 9)->im + (u+3)->im*(q+ 9)->re +			\
    (u+4)->re*(q+10)->im + (u+4)->im*(q+10)->re +			\
    (u+5)->re*(q+11)->im + (u+5)->im*(q+11)->re;			\
									\
  (l+11)->re -=								\
    (u+6)->re*(q+ 9)->re - (u+6)->im*(q+ 9)->im +			\
    (u+7)->re*(q+10)->re - (u+7)->im*(q+10)->im +			\
    (u+8)->re*(q+11)->re - (u+8)->im*(q+11)->im;			\
  (l+11)->im -=								\
    (u+6)->re*(q+ 9)->im + (u+6)->im*(q+ 9)->re +			\
    (u+7)->re*(q+10)->im + (u+7)->im*(q+10)->re +			\
    (u+8)->re*(q+11)->im + (u+8)->im*(q+11)->re;

/*
 *    SIGMA_XY
 */
#define SIGMAXY(q, p)					\
  (q+NC*0+0)->re = -(p+NC*0+0)->re;			\
  (q+NC*0+0)->im = -(p+NC*0+0)->im;			\
  (q+NC*1+0)->re =  (p+NC*1+0)->re;			\
  (q+NC*1+0)->im =  (p+NC*1+0)->im;			\
  (q+NC*2+0)->re = -(p+NC*2+0)->re;			\
  (q+NC*2+0)->im = -(p+NC*2+0)->im;			\
  (q+NC*3+0)->re =  (p+NC*3+0)->re;			\
  (q+NC*3+0)->im =  (p+NC*3+0)->im;			\
							\
  (q+NC*0+1)->re = -(p+NC*0+1)->re;			\
  (q+NC*0+1)->im = -(p+NC*0+1)->im;			\
  (q+NC*1+1)->re =  (p+NC*1+1)->re;			\
  (q+NC*1+1)->im =  (p+NC*1+1)->im;			\
  (q+NC*2+1)->re = -(p+NC*2+1)->re;			\
  (q+NC*2+1)->im = -(p+NC*2+1)->im;			\
  (q+NC*3+1)->re =  (p+NC*3+1)->re;			\
  (q+NC*3+1)->im =  (p+NC*3+1)->im;			\
							\
  (q+NC*0+2)->re = -(p+NC*0+2)->re;			\
  (q+NC*0+2)->im = -(p+NC*0+2)->im;			\
  (q+NC*1+2)->re =  (p+NC*1+2)->re;			\
  (q+NC*1+2)->im =  (p+NC*1+2)->im;			\
  (q+NC*2+2)->re = -(p+NC*2+2)->re;			\
  (q+NC*2+2)->im = -(p+NC*2+2)->im;			\
  (q+NC*3+2)->re =  (p+NC*3+2)->re;			\
  (q+NC*3+2)->im =  (p+NC*3+2)->im;



/*
 *    SIGMA_XZ
 */
#define SIGMAXZ(q, p)					\
  (q+NC*0+0)->re =  (p+NC*1+0)->im;			\
  (q+NC*0+0)->im = -(p+NC*1+0)->re;			\
  (q+NC*1+0)->re = -(p+NC*0+0)->im;			\
  (q+NC*1+0)->im =  (p+NC*0+0)->re;			\
  (q+NC*2+0)->re =  (p+NC*3+0)->im;			\
  (q+NC*2+0)->im = -(p+NC*3+0)->re;			\
  (q+NC*3+0)->re = -(p+NC*2+0)->im;			\
  (q+NC*3+0)->im =  (p+NC*2+0)->re;			\
							\
  (q+NC*0+1)->re =  (p+NC*1+1)->im;			\
  (q+NC*0+1)->im = -(p+NC*1+1)->re;			\
  (q+NC*1+1)->re = -(p+NC*0+1)->im;			\
  (q+NC*1+1)->im =  (p+NC*0+1)->re;			\
  (q+NC*2+1)->re =  (p+NC*3+1)->im;			\
  (q+NC*2+1)->im = -(p+NC*3+1)->re;			\
  (q+NC*3+1)->re = -(p+NC*2+1)->im;			\
  (q+NC*3+1)->im =  (p+NC*2+1)->re;			\
							\
  (q+NC*0+2)->re =  (p+NC*1+2)->im;			\
  (q+NC*0+2)->im = -(p+NC*1+2)->re;			\
  (q+NC*1+2)->re = -(p+NC*0+2)->im;			\
  (q+NC*1+2)->im =  (p+NC*0+2)->re;			\
  (q+NC*2+2)->re =  (p+NC*3+2)->im;			\
  (q+NC*2+2)->im = -(p+NC*3+2)->re;			\
  (q+NC*3+2)->re = -(p+NC*2+2)->im;			\
  (q+NC*3+2)->im =  (p+NC*2+2)->re;


  
/*
 *    SIGMA_XT
 */
#define SIGMAXT(q, p)					\
  (q+NC*0+0)->re =  (p+NC*3+0)->re;			\
  (q+NC*0+0)->im =  (p+NC*3+0)->im;			\
  (q+NC*1+0)->re =  (p+NC*2+0)->re;			\
  (q+NC*1+0)->im =  (p+NC*2+0)->im;			\
  (q+NC*2+0)->re =  (p+NC*1+0)->re;			\
  (q+NC*2+0)->im =  (p+NC*1+0)->im;			\
  (q+NC*3+0)->re =  (p+NC*0+0)->re;			\
  (q+NC*3+0)->im =  (p+NC*0+0)->im;			\
							\
  (q+NC*0+1)->re =  (p+NC*3+1)->re;			\
  (q+NC*0+1)->im =  (p+NC*3+1)->im;			\
  (q+NC*1+1)->re =  (p+NC*2+1)->re;			\
  (q+NC*1+1)->im =  (p+NC*2+1)->im;			\
  (q+NC*2+1)->re =  (p+NC*1+1)->re;			\
  (q+NC*2+1)->im =  (p+NC*1+1)->im;			\
  (q+NC*3+1)->re =  (p+NC*0+1)->re;			\
  (q+NC*3+1)->im =  (p+NC*0+1)->im;			\
							\
  (q+NC*0+2)->re =  (p+NC*3+2)->re;			\
  (q+NC*0+2)->im =  (p+NC*3+2)->im;			\
  (q+NC*1+2)->re =  (p+NC*2+2)->re;			\
  (q+NC*1+2)->im =  (p+NC*2+2)->im;			\
  (q+NC*2+2)->re =  (p+NC*1+2)->re;			\
  (q+NC*2+2)->im =  (p+NC*1+2)->im;			\
  (q+NC*3+2)->re =  (p+NC*0+2)->re;			\
  (q+NC*3+2)->im =  (p+NC*0+2)->im;


  
/*
 *    SIGMA_YZ
 */
#define SIGMAYZ(q, p)					\
  (q+NC*0+0)->re = -(p+NC*1+0)->re;			\
  (q+NC*0+0)->im = -(p+NC*1+0)->im;			\
  (q+NC*1+0)->re = -(p+NC*0+0)->re;			\
  (q+NC*1+0)->im = -(p+NC*0+0)->im;			\
  (q+NC*2+0)->re = -(p+NC*3+0)->re;			\
  (q+NC*2+0)->im = -(p+NC*3+0)->im;			\
  (q+NC*3+0)->re = -(p+NC*2+0)->re;			\
  (q+NC*3+0)->im = -(p+NC*2+0)->im;			\
							\
  (q+NC*0+1)->re = -(p+NC*1+1)->re;			\
  (q+NC*0+1)->im = -(p+NC*1+1)->im;			\
  (q+NC*1+1)->re = -(p+NC*0+1)->re;			\
  (q+NC*1+1)->im = -(p+NC*0+1)->im;			\
  (q+NC*2+1)->re = -(p+NC*3+1)->re;			\
  (q+NC*2+1)->im = -(p+NC*3+1)->im;			\
  (q+NC*3+1)->re = -(p+NC*2+1)->re;			\
  (q+NC*3+1)->im = -(p+NC*2+1)->im;			\
							\
  (q+NC*0+2)->re = -(p+NC*1+2)->re;			\
  (q+NC*0+2)->im = -(p+NC*1+2)->im;			\
  (q+NC*1+2)->re = -(p+NC*0+2)->re;			\
  (q+NC*1+2)->im = -(p+NC*0+2)->im;			\
  (q+NC*2+2)->re = -(p+NC*3+2)->re;			\
  (q+NC*2+2)->im = -(p+NC*3+2)->im;			\
  (q+NC*3+2)->re = -(p+NC*2+2)->re;			\
  (q+NC*3+2)->im = -(p+NC*2+2)->im;



/*
 *    SIGMA_YT
 */
#define SIGMAYT(q, p)					\
  (q+NC*0+0)->re = (p+NC*3+0)->im;			\
  (q+NC*0+0)->im =-(p+NC*3+0)->re;			\
  (q+NC*1+0)->re =-(p+NC*2+0)->im;			\
  (q+NC*1+0)->im = (p+NC*2+0)->re;			\
  (q+NC*2+0)->re = (p+NC*1+0)->im;			\
  (q+NC*2+0)->im =-(p+NC*1+0)->re;			\
  (q+NC*3+0)->re =-(p+NC*0+0)->im;			\
  (q+NC*3+0)->im = (p+NC*0+0)->re;			\
							\
  (q+NC*0+1)->re = (p+NC*3+1)->im;			\
  (q+NC*0+1)->im =-(p+NC*3+1)->re;			\
  (q+NC*1+1)->re =-(p+NC*2+1)->im;			\
  (q+NC*1+1)->im = (p+NC*2+1)->re;			\
  (q+NC*2+1)->re = (p+NC*1+1)->im;			\
  (q+NC*2+1)->im =-(p+NC*1+1)->re;			\
  (q+NC*3+1)->re =-(p+NC*0+1)->im;			\
  (q+NC*3+1)->im = (p+NC*0+1)->re;			\
							\
  (q+NC*0+2)->re = (p+NC*3+2)->im;			\
  (q+NC*0+2)->im =-(p+NC*3+2)->re;			\
  (q+NC*1+2)->re =-(p+NC*2+2)->im;			\
  (q+NC*1+2)->im = (p+NC*2+2)->re;			\
  (q+NC*2+2)->re = (p+NC*1+2)->im;			\
  (q+NC*2+2)->im =-(p+NC*1+2)->re;			\
  (q+NC*3+2)->re =-(p+NC*0+2)->im;			\
  (q+NC*3+2)->im = (p+NC*0+2)->re;



/*
 *    SIGMA_ZT
 */
#define SIGMAZT(q, p)					\
  (q+NC*0+0)->re =  (p+NC*2+0)->re;			\
  (q+NC*0+0)->im =  (p+NC*2+0)->im;			\
  (q+NC*1+0)->re = -(p+NC*3+0)->re;			\
  (q+NC*1+0)->im = -(p+NC*3+0)->im;			\
  (q+NC*2+0)->re =  (p+NC*0+0)->re;			\
  (q+NC*2+0)->im =  (p+NC*0+0)->im;			\
  (q+NC*3+0)->re = -(p+NC*1+0)->re;			\
  (q+NC*3+0)->im = -(p+NC*1+0)->im;			\
							\
  (q+NC*0+1)->re =  (p+NC*2+1)->re;			\
  (q+NC*0+1)->im =  (p+NC*2+1)->im;			\
  (q+NC*1+1)->re = -(p+NC*3+1)->re;			\
  (q+NC*1+1)->im = -(p+NC*3+1)->im;			\
  (q+NC*2+1)->re =  (p+NC*0+1)->re;			\
  (q+NC*2+1)->im =  (p+NC*0+1)->im;			\
  (q+NC*3+1)->re = -(p+NC*1+1)->re;			\
  (q+NC*3+1)->im = -(p+NC*1+1)->im;			\
							\
  (q+NC*0+2)->re =  (p+NC*2+2)->re;			\
  (q+NC*0+2)->im =  (p+NC*2+2)->im;			\
  (q+NC*1+2)->re = -(p+NC*3+2)->re;			\
  (q+NC*1+2)->im = -(p+NC*3+2)->im;			\
  (q+NC*2+2)->re =  (p+NC*0+2)->re;			\
  (q+NC*2+2)->im =  (p+NC*0+2)->im;			\
  (q+NC*3+2)->re = -(p+NC*1+2)->re;			\
  (q+NC*3+2)->im = -(p+NC*1+2)->im;
#endif
#endif /* _QPB_SPINOR_LINALG_H */
