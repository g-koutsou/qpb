#ifdef OPENMP
#	include <omp.h>
#endif
#include <string.h>
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_spinor_gammas.h>
#include <qpb_spinor_linalg.h>
#include <qpb_apply_dslash_site.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_apply_clover_term_tzyx.h>

void 
qpb_apply_clover_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
			void *U, qpb_double mass, 
			qpb_clover_term clover_term, qpb_double c_sw)
{
  qpb_gauge_field gauge = *(qpb_gauge_field *)U;
  qpb_comm_halo_spinor_field_start(spinor_in);
  int lvol = problem_params.l_vol;
  unsigned short int *y = problem_params.par_dir;
  unsigned short int *l_dim = problem_params.l_dim;
  int x[ND];

#ifdef OPENMP
#pragma omp parallel for private(x)
#endif
  for(int x0=y[0]; x0<l_dim[0]-y[0]; x0++)
    for(x[1]=y[1]; x[1]<l_dim[1]-y[1]; x[1]++)
      for(x[2]=y[2]; x[2]<l_dim[2]-y[2]; x[2]++)
	for(x[3]=y[3]; x[3]<l_dim[3]-y[3]; x[3]++)
	  {
	    x[0] = x0;
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }

  qpb_comm_halo_spinor_field_wait(spinor_in);

  for(int dir=1; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      {
#ifdef OPENMP
#pragma omp parallel for
#endif
	for(int i=0; i<lvol/l_dim[dir]; i++)
	  {
	    int v;
	    qpb_complex *spinor_ptr;

	    v = skin_to_ext[dir+ND][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	    /*
	     */
	    v = skin_to_ext[dir][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }
      }

#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor aux_spinor;
      qpb_complex *sp = (qpb_complex *)&aux_spinor;
      spinor_set_zero(sp);

      qpb_apply_clover_term_xy(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_xz(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_xt(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_yz(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_yt(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_zt(sp, spinor_in.index, clover_term.index, v);

      spinor_ax(spinor_out.index[v], 0.5, spinor_out.index[v]);
      spinor_axpy(spinor_out.index[v], (mass+4.0), spinor_in.index[v], spinor_out.index[v]);
      spinor_axpy(spinor_out.index[v], (-c_sw/2.0), sp, spinor_out.index[v]);
    }
  
  return;
}

/*
  Same but multiply by gamma_5 to the left
*/
void 
qpb_apply_gamma5_clover_dslash(qpb_spinor_field spinor_out, qpb_spinor_field spinor_in,
			       void *U, qpb_double mass,
			       qpb_clover_term clover_term, qpb_double c_sw)
{
  qpb_gauge_field gauge = *(qpb_gauge_field *)U;
  qpb_comm_halo_spinor_field_start(spinor_in);
  int lvol = problem_params.l_vol;
  unsigned short int *y = problem_params.par_dir;
  unsigned short int *l_dim = problem_params.l_dim;
  int x[ND];

#ifdef OPENMP
#pragma omp parallel for private(x)
#endif
  for(int x0=y[0]; x0<l_dim[0]-y[0]; x0++)
    for(x[1]=y[1]; x[1]<l_dim[1]-y[1]; x[1]++)
      for(x[2]=y[2]; x[2]<l_dim[2]-y[2]; x[2]++)
	for(x[3]=y[3]; x[3]<l_dim[3]-y[3]; x[3]++)
	  {
	    x[0] = x0;
	    int v = blk_to_ext[LEXICO(x, l_dim)];
	    qpb_complex *spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }

  qpb_comm_halo_spinor_field_wait(spinor_in);

  for(int dir=1; dir<ND; dir++)
    if(problem_params.par_dir[dir])
      {
#ifdef OPENMP
#pragma omp parallel for
#endif
	for(int i=0; i<lvol/l_dim[dir]; i++)
	  {
	    int v;
	    qpb_complex *spinor_ptr;

	    v = skin_to_ext[dir+ND][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	    /*
	     */
	    v = skin_to_ext[dir][i];
	    spinor_ptr = (qpb_complex *)spinor_out.index[v];

	    qpb_apply_dslash_site(spinor_ptr, spinor_in.index, gauge.index, v);
	  }
      }

#ifdef OPENMP
#pragma omp parallel for
#endif
  for(int lv=0; lv<lvol; lv++)
    {
      int v = blk_to_ext[lv];
      qpb_spinor aux_spinor;
      qpb_complex *sp = (qpb_complex *)&aux_spinor;
      spinor_set_zero(sp);

      qpb_apply_clover_term_xy(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_xz(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_xt(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_yz(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_yt(sp, spinor_in.index, clover_term.index, v);
      qpb_apply_clover_term_zt(sp, spinor_in.index, clover_term.index, v);

      qpb_complex *out = (qpb_complex *)(spinor_out.index[v]);
      qpb_complex *in = (qpb_complex *)(spinor_in.index[v]);
      spinor_ax(out, 0.5, out);

      qpb_complex aux[NC*NS];
      memcpy(aux, out, NC*NS*sizeof(qpb_complex));
      for(int cs=0; cs<NC*NS/2; cs++)
	{
	  out[cs].re = in[NC*NS/2+cs].re*(mass+4.0) + aux[NC*NS/2+cs].re 
	    - c_sw/2.*sp[NC*NS/2+cs].re;
	  out[cs].im = in[NC*NS/2+cs].im*(mass+4.0) + aux[NC*NS/2+cs].im
	    - c_sw/2.*sp[NC*NS/2+cs].im;
	}
      for(int cs=NC*NS/2; cs<NC*NS; cs++)
	{
	  out[cs].re = in[cs-NC*NS/2].re*(mass+4.0) + aux[cs-NC*NS/2].re 
	    - c_sw/2.*sp[cs-NC*NS/2].re;
	  out[cs].im = in[cs-NC*NS/2].im*(mass+4.0) + aux[cs-NC*NS/2].im
	    - c_sw/2.*sp[cs-NC*NS/2].im;
	}
    }
  
  return;
}
