include ./Makefile.in

DIRS = mainprogs lib

all: 
	-for d in $(DIRS); do (cd $$d && $(MAKE)); done

debug: 
	-for d in $(DIRS); do (cd $$d && $(MAKE) debug); done

prof: 
	-for d in $(DIRS); do (cd $$d && $(MAKE) prof); done

clean:
	-for d in $(DIRS); do (cd $$d && $(MAKE) clean); done

cleanall: clean
	-for d in $(DIRS); do (cd $$d && $(MAKE) cleanall); done
