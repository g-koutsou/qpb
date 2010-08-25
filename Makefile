include ./Makefile.in

DIRS = mainprogs lib

all: 
	-for d in $(DIRS); do (cd $$d && $(MAKE)); done

clean:
	-for d in $(DIRS); do (cd $$d && $(MAKE) clean); done

cleanall: clean
	-for d in $(DIRS); do (cd $$d && $(MAKE) cleanall); done