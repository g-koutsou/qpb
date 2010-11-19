#ifndef _QPB_SPINOR_BLAS_H
#define _QPB_SPINOR_BLAS_H 1
#include <qpb_types.h>

#if NC == 1
__inline__ void
spinor_ax(qpb_complex *z, qpb_double a, qpb_complex *x)
{
  (z+0)->re = a*(x+0)->re;
  (z+0)->im = a*(x+0)->im;

  (z+1)->re = a*(x+1)->re;
  (z+1)->im = a*(x+1)->im;

  (z+2)->re = a*(x+2)->re;
  (z+2)->im = a*(x+2)->im;

  (z+3)->re = a*(x+3)->re;
  (z+3)->im = a*(x+3)->im;
  
  return;
}

__inline__ void
spinor_axpy(qpb_complex *z, qpb_double a, qpb_complex *x, qpb_complex *y)
{
  (z+0)->re = a*(x+0)->re + (y+0)->re;
  (z+0)->im = a*(x+0)->im + (y+0)->im;

  (z+1)->re = a*(x+1)->re + (y+1)->re;
  (z+1)->im = a*(x+1)->im + (y+1)->im;

  (z+2)->re = a*(x+2)->re + (y+2)->re;
  (z+2)->im = a*(x+2)->im + (y+2)->im;

  (z+3)->re = a*(x+3)->re + (y+3)->re;
  (z+3)->im = a*(x+3)->im + (y+3)->im;
  
  return;
}

__inline__ void
spinor_axpby(qpb_complex *z, qpb_double a, qpb_complex *x, qpb_double b, qpb_complex *y)
{
  (z+0)->re = a*(x+0)->re + b*(y+0)->re;
  (z+0)->im = a*(x+0)->im + b*(y+0)->im;

  (z+1)->re = a*(x+1)->re + b*(y+1)->re;
  (z+1)->im = a*(x+1)->im + b*(y+1)->im;

  (z+2)->re = a*(x+2)->re + b*(y+2)->re;
  (z+2)->im = a*(x+2)->im + b*(y+2)->im;

  (z+3)->re = a*(x+3)->re + b*(y+3)->re;
  (z+3)->im = a*(x+3)->im + b*(y+3)->im;
  
  return;
}

__inline__ void
spinor_xpy(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+0)->re = (x+0)->re + (y+0)->re;
  (z+0)->im = (x+0)->im + (y+0)->im;
				    
  (z+1)->re = (x+1)->re + (y+1)->re;
  (z+1)->im = (x+1)->im + (y+1)->im;
				    
  (z+2)->re = (x+2)->re + (y+2)->re;
  (z+2)->im = (x+2)->im + (y+2)->im;
				    
  (z+3)->re = (x+3)->re + (y+3)->re;
  (z+3)->im = (x+3)->im + (y+3)->im;

  return;
}

__inline__ void
spinor_set_zero(qpb_complex *x)
{
  (x+0)->re = 0.;
  (x+0)->im = 0.;
  		 
  (x+1)->re = 0.;
  (x+1)->im = 0.;
  		 
  (x+2)->re = 0.;
  (x+2)->im = 0.;
  		 
  (x+3)->re = 0.;
  (x+3)->im = 0.;

  return;
}

__inline__ void
spinor_xmy(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+0)->re = (x+0)->re - (y+0)->re;
  (z+0)->im = (x+0)->im - (y+0)->im;
				    
  (z+1)->re = (x+1)->re - (y+1)->re;
  (z+1)->im = (x+1)->im - (y+1)->im;
				    
  (z+2)->re = (x+2)->re - (y+2)->re;
  (z+2)->im = (x+2)->im - (y+2)->im;
				    
  (z+3)->re = (x+3)->re - (y+3)->re;
  (z+3)->im = (x+3)->im - (y+3)->im;
  
  return;
}
#endif /* NC == 1 */

#if NC == 3
__inline__ void
spinor_ax(qpb_complex *z, qpb_double a, qpb_complex *x)
{  
  (z+ 0)->re = a*(x+ 0)->re;
  (z+ 0)->im = a*(x+ 0)->im;
  (z+ 1)->re = a*(x+ 1)->re;
  (z+ 1)->im = a*(x+ 1)->im;
  (z+ 2)->re = a*(x+ 2)->re;
  (z+ 2)->im = a*(x+ 2)->im;
			    
  (z+ 3)->re = a*(x+ 3)->re;
  (z+ 3)->im = a*(x+ 3)->im;
  (z+ 4)->re = a*(x+ 4)->re;
  (z+ 4)->im = a*(x+ 4)->im;
  (z+ 5)->re = a*(x+ 5)->re;
  (z+ 5)->im = a*(x+ 5)->im;
			    
  (z+ 6)->re = a*(x+ 6)->re;
  (z+ 6)->im = a*(x+ 6)->im;
  (z+ 7)->re = a*(x+ 7)->re;
  (z+ 7)->im = a*(x+ 7)->im;
  (z+ 8)->re = a*(x+ 8)->re;
  (z+ 8)->im = a*(x+ 8)->im;
			    
  (z+ 9)->re = a*(x+ 9)->re;
  (z+ 9)->im = a*(x+ 9)->im;
  (z+10)->re = a*(x+10)->re;
  (z+10)->im = a*(x+10)->im;
  (z+11)->re = a*(x+11)->re;
  (z+11)->im = a*(x+11)->im;

  return;
}

__inline__ void
spinor_axpy(qpb_complex *z, qpb_double a, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = a*(x+ 0)->re + (y+ 0)->re;
  (z+ 0)->im = a*(x+ 0)->im + (y+ 0)->im;
  (z+ 1)->re = a*(x+ 1)->re + (y+ 1)->re;
  (z+ 1)->im = a*(x+ 1)->im + (y+ 1)->im;
  (z+ 2)->re = a*(x+ 2)->re + (y+ 2)->re;
  (z+ 2)->im = a*(x+ 2)->im + (y+ 2)->im;
					 
  (z+ 3)->re = a*(x+ 3)->re + (y+ 3)->re;
  (z+ 3)->im = a*(x+ 3)->im + (y+ 3)->im;
  (z+ 4)->re = a*(x+ 4)->re + (y+ 4)->re;
  (z+ 4)->im = a*(x+ 4)->im + (y+ 4)->im;
  (z+ 5)->re = a*(x+ 5)->re + (y+ 5)->re;
  (z+ 5)->im = a*(x+ 5)->im + (y+ 5)->im;
					 
  (z+ 6)->re = a*(x+ 6)->re + (y+ 6)->re;
  (z+ 6)->im = a*(x+ 6)->im + (y+ 6)->im;
  (z+ 7)->re = a*(x+ 7)->re + (y+ 7)->re;
  (z+ 7)->im = a*(x+ 7)->im + (y+ 7)->im;
  (z+ 8)->re = a*(x+ 8)->re + (y+ 8)->re;
  (z+ 8)->im = a*(x+ 8)->im + (y+ 8)->im;
					 
  (z+ 9)->re = a*(x+ 9)->re + (y+ 9)->re;
  (z+ 9)->im = a*(x+ 9)->im + (y+ 9)->im;
  (z+10)->re = a*(x+10)->re + (y+10)->re;
  (z+10)->im = a*(x+10)->im + (y+10)->im;
  (z+11)->re = a*(x+11)->re + (y+11)->re;
  (z+11)->im = a*(x+11)->im + (y+11)->im;

  return;
}

__inline__ void
spinor_axpby(qpb_complex *z, qpb_double a, qpb_complex *x, qpb_double b, qpb_complex *y)
{
  (z+ 0)->re = a*(x+ 0)->re + b*(y+ 0)->re;  
  (z+ 0)->im = a*(x+ 0)->im + b*(y+ 0)->im;
  (z+ 1)->re = a*(x+ 1)->re + b*(y+ 1)->re;
  (z+ 1)->im = a*(x+ 1)->im + b*(y+ 1)->im;
  (z+ 2)->re = a*(x+ 2)->re + b*(y+ 2)->re;
  (z+ 2)->im = a*(x+ 2)->im + b*(y+ 2)->im;
					   
  (z+ 3)->re = a*(x+ 3)->re + b*(y+ 3)->re;
  (z+ 3)->im = a*(x+ 3)->im + b*(y+ 3)->im;
  (z+ 4)->re = a*(x+ 4)->re + b*(y+ 4)->re;
  (z+ 4)->im = a*(x+ 4)->im + b*(y+ 4)->im;
  (z+ 5)->re = a*(x+ 5)->re + b*(y+ 5)->re;
  (z+ 5)->im = a*(x+ 5)->im + b*(y+ 5)->im;
					   
  (z+ 6)->re = a*(x+ 6)->re + b*(y+ 6)->re;
  (z+ 6)->im = a*(x+ 6)->im + b*(y+ 6)->im;
  (z+ 7)->re = a*(x+ 7)->re + b*(y+ 7)->re;
  (z+ 7)->im = a*(x+ 7)->im + b*(y+ 7)->im;
  (z+ 8)->re = a*(x+ 8)->re + b*(y+ 8)->re;
  (z+ 8)->im = a*(x+ 8)->im + b*(y+ 8)->im;
					   
  (z+ 9)->re = a*(x+ 9)->re + b*(y+ 9)->re;
  (z+ 9)->im = a*(x+ 9)->im + b*(y+ 9)->im;
  (z+10)->re = a*(x+10)->re + b*(y+10)->re;
  (z+10)->im = a*(x+10)->im + b*(y+10)->im;
  (z+11)->re = a*(x+11)->re + b*(y+11)->re;
  (z+11)->im = a*(x+11)->im + b*(y+11)->im;
  
  return;
}

__inline__ void
spinor_xpy(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = (x+ 0)->re + (y+ 0)->re;
  (z+ 0)->im = (x+ 0)->im + (y+ 0)->im;
  (z+ 1)->re = (x+ 1)->re + (y+ 1)->re;
  (z+ 1)->im = (x+ 1)->im + (y+ 1)->im;
  (z+ 2)->re = (x+ 2)->re + (y+ 2)->re;
  (z+ 2)->im = (x+ 2)->im + (y+ 2)->im;
				       
  (z+ 3)->re = (x+ 3)->re + (y+ 3)->re;
  (z+ 3)->im = (x+ 3)->im + (y+ 3)->im;
  (z+ 4)->re = (x+ 4)->re + (y+ 4)->re;
  (z+ 4)->im = (x+ 4)->im + (y+ 4)->im;
  (z+ 5)->re = (x+ 5)->re + (y+ 5)->re;
  (z+ 5)->im = (x+ 5)->im + (y+ 5)->im;
				       
  (z+ 6)->re = (x+ 6)->re + (y+ 6)->re;
  (z+ 6)->im = (x+ 6)->im + (y+ 6)->im;
  (z+ 7)->re = (x+ 7)->re + (y+ 7)->re;
  (z+ 7)->im = (x+ 7)->im + (y+ 7)->im;
  (z+ 8)->re = (x+ 8)->re + (y+ 8)->re;
  (z+ 8)->im = (x+ 8)->im + (y+ 8)->im;
				       
  (z+ 9)->re = (x+ 9)->re + (y+ 9)->re;
  (z+ 9)->im = (x+ 9)->im + (y+ 9)->im;
  (z+10)->re = (x+10)->re + (y+10)->re;
  (z+10)->im = (x+10)->im + (y+10)->im;
  (z+11)->re = (x+11)->re + (y+11)->re;
  (z+11)->im = (x+11)->im + (y+11)->im;

  return;
}

__inline__ void
spinor_set_zero(qpb_complex *x)
{
  (x+ 0)->re = 0.;
  (x+ 0)->im = 0.;
  (x+ 1)->re = 0.;
  (x+ 1)->im = 0.;
  (x+ 2)->re = 0.;
  (x+ 2)->im = 0.;
		  
  (x+ 3)->re = 0.;
  (x+ 3)->im = 0.;
  (x+ 4)->re = 0.;
  (x+ 4)->im = 0.;
  (x+ 5)->re = 0.;
  (x+ 5)->im = 0.;
		  
  (x+ 6)->re = 0.;
  (x+ 6)->im = 0.;
  (x+ 7)->re = 0.;
  (x+ 7)->im = 0.;
  (x+ 8)->re = 0.;
  (x+ 8)->im = 0.;
		  
  (x+ 9)->re = 0.;
  (x+ 9)->im = 0.;
  (x+10)->re = 0.;
  (x+10)->im = 0.;
  (x+11)->re = 0.;
  (x+11)->im = 0.;

  return;
}

__inline__ void
spinor_xmy(qpb_complex *z, qpb_complex *x, qpb_complex *y)
{
  (z+ 0)->re = (x+ 0)->re - (y+ 0)->re;  
  (z+ 0)->im = (x+ 0)->im - (y+ 0)->im;
  (z+ 1)->re = (x+ 1)->re - (y+ 1)->re;
  (z+ 1)->im = (x+ 1)->im - (y+ 1)->im;
  (z+ 2)->re = (x+ 2)->re - (y+ 2)->re;
  (z+ 2)->im = (x+ 2)->im - (y+ 2)->im;
				       
  (z+ 3)->re = (x+ 3)->re - (y+ 3)->re;
  (z+ 3)->im = (x+ 3)->im - (y+ 3)->im;
  (z+ 4)->re = (x+ 4)->re - (y+ 4)->re;
  (z+ 4)->im = (x+ 4)->im - (y+ 4)->im;
  (z+ 5)->re = (x+ 5)->re - (y+ 5)->re;
  (z+ 5)->im = (x+ 5)->im - (y+ 5)->im;
				       
  (z+ 6)->re = (x+ 6)->re - (y+ 6)->re;
  (z+ 6)->im = (x+ 6)->im - (y+ 6)->im;
  (z+ 7)->re = (x+ 7)->re - (y+ 7)->re;
  (z+ 7)->im = (x+ 7)->im - (y+ 7)->im;
  (z+ 8)->re = (x+ 8)->re - (y+ 8)->re;
  (z+ 8)->im = (x+ 8)->im - (y+ 8)->im;
				       
  (z+ 9)->re = (x+ 9)->re - (y+ 9)->re;
  (z+ 9)->im = (x+ 9)->im - (y+ 9)->im;
  (z+10)->re = (x+10)->re - (y+10)->re;
  (z+10)->im = (x+10)->im - (y+10)->im;
  (z+11)->re = (x+11)->re - (y+11)->re;
  (z+11)->im = (x+11)->im - (y+11)->im;

  return;
}
#endif /* NC == 3 */

#endif /* _QPB_SPINOR_BLAS_H */
