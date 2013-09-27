include ../Makefile.in

PWD := $(shell pwd)
ifndef V
       V = 0
endif

ifeq ($(V), 1) 
	E = @echo > /dev/null
	C = 
else
	E = @echo
	C = @
endif

ifndef DSLASH_CFLAGS
DSLASH_CFLAGS = $(CFLAGS)
endif

all: libqpb.a
	@:

debug: CFLAGS += $(DEBUGFLAGS)
debug: all

prof: CFLAGS += $(PROFFLAGS)
prof: all

SOURCES = qpb_init\
	qpb_rng\
	qpb_byte_order\
	qpb_alloc\
	qpb_parser\
	qpb_msg_passing_init\
	qpb_init\
	qpb_comm_halo_gauge_field\
	qpb_comm_halo_diagonal_links\
	qpb_apesmear\
	qpb_gauge_field_copy\
	qpb_gauge_field_shift\
	qpb_timebc_set_gauge_field\
	qpb_spinor_field\
	qpb_spinor_field_set_delta\
	qpb_spinor_field_set_zero\
	qpb_spinor_field_set_random\
	qpb_spinor_field_set_gaussian\
	qpb_spinor_field_set_z4\
	qpb_spinor_field_set_z4t\
	qpb_gauge_field_set_unit\
	qpb_gauge_field\
	qpb_comm_halo_spinor_field\
	qpb_read_gauge\
	qpb_read_raw_gauge\
	qpb_read_ildg_gauge\
	qpb_write_gauge\
	qpb_read_spinor\
	qpb_read_n_spinor\
	qpb_write_spinor\
	qpb_write_n_spinor\
	qpb_plaquette\
	qpb_clover_term\
	qpb_diagonal_links\
	qpb_sun_project\
	qpb_clover_term_get\
	qpb_diagonal_links_get\
	qpb_apply_dslash\
	qpb_apply_bri_dslash\
	qpb_apply_clover_dslash\
	qpb_apply_clover_bri_dslash\
	qpb_apply_clover_term\
	qpb_bicgstab\
	qpb_bicgstab_kl11_mult\
	qpb_bicgstab_overlap_outer\
	qpb_mscongrad\
	qpb_congrad\
	qpb_overlap_kl\
	qpb_bicgg5\
	qpb_lanczos\
	qpb_dslash_wrappers\
	qpb_mesons_2pt_corr\
	qpb_mesons_2pt_stoch\
	qpb_baryons_2pt\
	qpb_nucleon_2pt\
	qpb_delta_1o2_2pt\
	qpb_delta_3o2_2pt\
	qpb_multiq_2pt\
	qpb_tetraq_mol_2pt\
	qpb_spinor_xdotx\
	qpb_spinor_xdoty\
	qpb_spinor_xdotg5y\
	qpb_spinor_axpy\
	qpb_spinor_axpby\
	qpb_spinor_ax\
	qpb_spinor_xmy\
	qpb_spinor_xpy\
	qpb_spinor_xeqy\
	qpb_spinor_gamma5\
	qpb_gauss_smear\
	qpb_ft\
	qpb_stop_watch\
	qpb_finalize

PYTARGETS = qpb_apply_bri_dslash_site\
	qpb_prop_ops\
	qpb_prop_contract\
	qpb_spinor_gammas\
	qpb_spinor_sigmas\
	qpb_spinor_sun_mul\
	qpb_sun_mul\
	qpb_sun_utils

py: ${addsuffix .h, $(PYTARGETS)}

# pull in dependency info for *existing* .o files
include $(wildcard *.d)

libqpb.a: ${addsuffix .h, $(PYTARGETS)} ${addsuffix .o, $(SOURCES)}
	$(E) LD $@
	$(C)$(AR) cr $@  ${addsuffix .o, $(SOURCES)}
	$(C)$(RANLIB) $@

%_dslash.o: %_dslash.c
	$(E) CC $<
	$(C)$(CC) $(DSLASH_CFLAGS) -c $< -o $@
	$(C)$(CC) -MM $(DSLASH_CFLAGS) $< > $*_dslash.d

%.o: %.c
	$(E) CC $<
	$(C)$(CC) $(CFLAGS) -c $< -o $@
	$(C)$(CC) -MM $(CFLAGS) $< > $*.d

# Assumes missing .h and .c files should be python-generated
%.h: ../python/%.py
	$(E) PY $<
	$(C)python2 $< > $@

%.c: ../python/%.py
	$(E) PY $<
	$(C)python2 $< > $@

pyclean:
	$(E) PYCLEAN
	$(C)$(RM) ${addsuffix .h, $(PYTARGETS)}

clean:
	$(E) CLEAN in $(PWD)
	$(C)$(RM) *.o *.d

cleanall: clean
	$(E) CLEANALL in $(PWD)
	$(C)$(RM) libqpb.a
