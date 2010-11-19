include ../Makefile.in

all: libqpb.a

debug: CC += $(DEBUGFLAGS)
debug: all

prof: CC += $(PROFFLAGS)
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
	qpb_spinor_field\
	qpb_spinor_field_set_delta\
	qpb_spinor_field_set_zero\
	qpb_spinor_field_set_random\
	qpb_gauge_field_set_unit\
	qpb_gauge_field\
	qpb_comm_halo_spinor_field\
	qpb_read_gauge\
	qpb_read_spinor\
	qpb_write_spinor\
	qpb_plaquette\
	qpb_clover_term\
	qpb_diagonal_links\
	qpb_sun_project\
	qpb_clover_term_get\
	qpb_diagonal_links_get\
	qpb_apply_dirac_laplace\
	qpb_apply_clover_term\
	qpb_bicgstab\
	qpb_spinor_xdotx\
	qpb_spinor_xdoty\
	qpb_spinor_axpy\
	qpb_spinor_xmy\
	qpb_spinor_xeqy\
	qpb_stop_watch\
	qpb_finalize

PYTARGETS = qpb_spinor_gammas\
	qpb_spinor_sigmas\
	qpb_spinor_sun_mul\
	qpb_sun_mul\
	qpb_sun_utils

# pull in dependency info for *existing* .o files
include $(wildcard *.d)

libqpb.a: ${addsuffix .h, $(PYTARGETS)} ${addsuffix .o, $(SOURCES)}
	$(AR) cr $@  ${addsuffix .o, $(SOURCES)} &&\
	$(RANLIB) $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(CC) -MM $(CFLAGS) $< > $*.d

# Assumes missing .h and .c files should be python-generated
%.h: ../python/%.py
	python $<

%.c: ../python/%.py
	python $<

pyclean:
	$(RM) ${addsuffix .h, $(PYTARGETS)}

clean:
	$(RM) *.o *.d

cleanall: clean pyclean
	$(RM) libqpb.a
