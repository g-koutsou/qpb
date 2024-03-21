include ../Makefile.in

ifndef V
       V = 0
endif

ifeq ($(V), 1) 
	E = @echo > /dev/null
	C = 
else
	E = @echo
	C = @
	MAKE += --no-print-directory
endif

DIRS = gauge-smear invert mesons eigens baryons overlap-kl multiq

all: 
	-$(C)for d in $(DIRS); do ($(MAKE) -C $$d); done

debug: 
	-$(C)for d in $(DIRS); do ($(MAKE) -C $$d debug); done

prof: 
	-$(C)for d in $(DIRS); do ($(MAKE) -C $$d prof); done

clean:
	-$(C)for d in $(DIRS); do ($(MAKE) -C $$d clean); done

cleanall: clean
	-$(C)for d in $(DIRS); do ($(MAKE) -C $$d cleanall); done
