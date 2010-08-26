include ../Makefile.in

all: libqpb.a

SOURCES = qpb_init\
	qpb_rng\
	qpb_byte_order\
	qpb_alloc\
	qpb_parser\
	qpb_msg_passing_init\
	qpb_init\
	qpb_comm_halo_gauge_field\
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
	qpb_clover_term_get\
	qpb_apply_dirac\
	qpb_apply_laplace\
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

# pull in dependency info for *existing* .o files
include $(wildcard *.d)

libqpb.a: ${addsuffix .o, $(SOURCES)}
	$(AR) cr $@  ${addsuffix .o, $(SOURCES)} &&\
	$(RANLIB) $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(CC) -MM $*.o $(CFLAGS) $< > $*.d

clean:
	$(RM) *.o *.d

cleanall: clean
	$(RM) libqpb.a
