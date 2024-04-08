#include <string.h>
#ifdef OPENMP
#	include <omp.h>
#endif
#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_sun_linalg.h>
#include <qpb_gauge_field.h>
#include <qpb_sun_project.h>
#include <qpb_sun_cheap_project.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_comm_halo_diagonal_links.h>
/*
  each site has four slots, indicating the direction
  of the link variable. Each slot takes one of the
  three values -1, 0 or +1, indicating the direction
  in which to hop (or not hop, if it is 0).
  
  Notes:
  a) The direction order is [t, z, y, x]
  
  b) There are 80 such combinations: 3x3x3x3 = 81,
     minus the combination [0, 0, 0, 0]
  
  c) The direction [st, sz, sy, sx] is equivalent to:
	i) hopping to the site in direction [st, sz, sy, sx]
       ii) then taking the link in direction [-st, -sz, -sy, -sx]
      iii) and taking the dagger of this link
  
  d) because of c) one need only define half the links

  e) we define only the links where the first non-zero direction
     is positive. That is, no links are defined for directions where
     the first non-zero slot is negative. If the link is required for
     a direction where the first non-zero slot is negative, one must
     follow c). Examples of legal and illegal directions:

     Legal:
	[ 0,  0,  1,  1]
	[ 1, -1, -1, -1]
	[ 0,  1, -1,  0]
     Illegal:
	[ 0, -1,  0, -1]
	[ 0,  0,  0, -1]
	[-1,  1,  1,  1]
*/

void
qpb_diagonal_links_get(qpb_diagonal_links diagonal_links, qpb_gauge_field fwd_gauge, int project)
{
  int lvol = problem_params.l_vol;
  /* 
     Construct the backwards gauge field 
  */
  qpb_gauge_field gauge[2];
  gauge[0] = fwd_gauge;
  gauge[1] = qpb_gauge_field_init();
  
  qpb_comm_halo_gauge_field(gauge[0]);
  for(int lv=0; lv<lvol; lv++)
    for(int dir=0; dir<ND; dir++)
      {
	qpb_complex *u0, *u1;
	int v = blk_to_ext[lv];
	u0 = (qpb_complex *)((qpb_link *) gauge[0].index[nneigh[ND+dir][v]] + dir);
	u1 = (qpb_complex *)((qpb_link *) gauge[1].index[v] + dir);
	sun_ueqd(u1, u0);
      }
  qpb_comm_halo_gauge_field(gauge[1]);

  for(int hyper_dir=0; hyper_dir<N_HYPERCUBE_NEIGH; hyper_dir++)
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	qpb_link *dl_ptr = (qpb_link *)diagonal_links.index[v] + hyper_dir;
	memset(dl_ptr, '\0', sizeof(qpb_link));
      }
      
  for(int hyper_dir=0; hyper_dir<N_HYPERCUBE_NEIGH; hyper_dir++)
    {
      /* count the non-zero hops */
      int n_dir = 0;
      for(int d=0; d<ND; d++)
	n_dir += hypercube_neigh.hops[hyper_dir][d] == 0 ? 0 : 1;
      
      /* store the directions of the non-zero hops */
      int hops[n_dir];
      n_dir = 0;
      for(int d=0; d<ND; d++)
	if(hypercube_neigh.hops[hyper_dir][d] != 0)
	  {
	    hops[n_dir] = d + (hypercube_neigh.hops[hyper_dir][d]-1)*ND;
	    n_dir++;
	  }

      /* n! (n-factorial) */
      int n_fact = 1;
      for(int i=1; i<=n_dir; i++)
	n_fact *= i;
      
      int perm[n_fact][n_dir];
      for(int i_perm=0; i_perm<n_fact; i_perm++)
	for(int i_dir=0; i_dir<n_dir; i_dir++)
	  perm[i_perm][i_dir] = permutations[n_dir][i_perm][i_dir];

      /* go over permutations of directions */
      for(int i_perm=0; i_perm<n_fact; i_perm++)
	{
	  int perm_hops[n_dir]; /*  hops ordered according to current permutation */
	  for(int d=0; d<n_dir; d++)
	    perm_hops[d] = hops[perm[i_perm][d]];

#ifdef OPENMP
#pragma omp parallel for
#endif	  
	  for(int lv=0; lv<lvol; lv++)
	    {
	      int v = blk_to_ext[lv];
	      qpb_link a, b;
	      qpb_complex *u[2];
	      u[0] = (qpb_complex *)&b;
	      u[1] = (qpb_complex *)&a;
	      sun_uequ(u[0], ((qpb_complex *)
			      ((qpb_link *)gauge[perm_hops[0]/ND].index[v]
			       +perm_hops[0]%ND)));
	      for(int d=1; d<n_dir; d++)
		{
		  v = nneigh[perm_hops[d-1]][v];
		  qpb_complex *u_curr = (qpb_complex *)
		    ((qpb_link *)gauge[perm_hops[d]/ND].index[v]+perm_hops[d]%ND);
		  sun_mul_uu(u[1], u[0], u_curr);
		  sun_uequ(u[0], u[1]);
		}
	      v = blk_to_ext[lv];
	      qpb_complex *dl_ptr = (qpb_complex *)
		((qpb_link *) diagonal_links.index[v]+hyper_dir);
	      sun_upequ(dl_ptr, u[0]);
	    }
	}
      /*
       * Diagonal link is the average over the n_fact
       * combinations. Normalize by n_fact here.
       */
#ifdef OPENMP
#pragma omp parallel for
#endif	  
      for(int lv=0; lv<lvol; lv++)
	{
	  qpb_complex u[NC*NC];
	  qpb_complex a = (qpb_complex){1./n_fact, 0.};
	  int v = blk_to_ext[lv];
	  qpb_complex *dl_ptr = (qpb_complex *)
	    ((qpb_link *) diagonal_links.index[v]+hyper_dir);
	  sun_uequ(u, dl_ptr);
	  sun_mul_au(dl_ptr, a, u);
	}      
    }

  /*
   * If project is not zero, will project the constructed diagonal links to SU(N)
   */
  if(project) {
#ifdef OPENMP
#pragma omp parallel for
#endif
    for(int lv=0; lv<lvol; lv++)
      {
	int v = blk_to_ext[lv];
	qpb_link *dl_ptr = ((qpb_link *)diagonal_links.index[v]);
	qpb_sun_project(dl_ptr, N_HYPERCUBE_NEIGH);
	//qpb_sun_cheap_project(dl_ptr, N_HYPERCUBE_NEIGH);
      }
  }
  qpb_gauge_field_finalize(gauge[1]);

  qpb_comm_halo_diagonal_links(diagonal_links);
  return;
}
