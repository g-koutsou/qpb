#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_linalg.h>

void
qpb_spinor_axpy(qpb_spinor_field z, qpb_complex alpha, 
		qpb_spinor_field x, qpb_spinor_field y)
{
  int evol = problem_params.ext_vol;
  for(int v=0; v<evol; v++)
    {
      qpb_complex *z_ptr = (qpb_complex *)z.index[v];
      for(int cs=0; cs<NC*NS; cs++)
	{
	  qpb_complex xx = *((qpb_complex *)x.index[v]+cs);
	  qpb_complex yy = *((qpb_complex *)y.index[v]+cs);
	  
	  *(z_ptr + cs) = CADD(CMUL(alpha, xx), yy);
	}      
    }
  return;
}

