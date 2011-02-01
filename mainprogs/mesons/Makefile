include ../../Makefile.in

TARGET = mesons
all: $(TARGET) lib

debug: CC += $(DEBUGFLAGS)
debug: MAKE += debug
debug: all

prof: CC += $(PROFFLAGS)
prof: MAKE += prof
prof: all

LIBDIR = ../../lib

CFLAGS += -I$(LIBDIR)
LDFLAGS += -L$(LIBDIR)
LIBS := -lqpb $(LIBS)

SOURCES = main 

$(TARGET): ${addsuffix .o, $(SOURCES)} lib
	$(CC) $(CFLAGS) -o $@  ${addsuffix .o, $(SOURCES)} $(LDFLAGS) $(LIBS)

lib:
	cd $(LIBDIR) && $(MAKE)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o && cd $(LIBDIR) && $(MAKE) clean

cleanall: clean
	$(RM) $(TARGET) && cd $(LIBDIR) && $(MAKE) cleanall
