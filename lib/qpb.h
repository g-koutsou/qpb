#ifndef _QPB_H
#define _QPB_H 1

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <mpi.h>

#ifdef OPENMP
#	include <omp.h>
#endif

#include <qpb_types.h>
#include <qpb_globals.h>
#include <qpb_init.h>
#include <qpb_alloc.h>
#include <qpb_rng.h>
#include <qpb_parser.h>
#include <qpb_errors.h>
#include <qpb_msg_passing_init.h>
#include <qpb_init.h>
#include <qpb_stop_watch.h>
#include <qpb_comm_halo_gauge_field.h>
#include <qpb_comm_halo_diagonal_links.h>
#include <qpb_comm_halo_spinor_field.h>
#include <qpb_gauge_field.h>
#include <qpb_spinor_field.h>
#include <qpb_spinor_field_set_delta.h>
#include <qpb_spinor_field_set_zero.h>
#include <qpb_spinor_field_set_random.h>
#include <qpb_diagonal_links.h>
#include <qpb_diagonal_links_get.h>
#include <qpb_gauge_field_set_unit.h>
#include <qpb_read_gauge.h>
#include <qpb_read_spinor.h>
#include <qpb_write_spinor.h>
#include <qpb_write_n_spinor.h>
#include <qpb_apply_clover_term.h>
#include <qpb_clover_term.h>
#include <qpb_clover_term_get.h>
#include <qpb_apply_bri_dslash.h>
#include <qpb_plaquette.h>
#include <qpb_bicgstab.h>
#include <qpb_finalize.h>

#endif /* _QPB_H */
