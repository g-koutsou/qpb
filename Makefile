include ./Makefile.in

DIRS = mainprogs lib
TESTSDIR = testprogs lib
.PHONY: testprogs

all: 
	-for d in $(DIRS); do (cd $$d && $(MAKE)); done

testprogs:
	-for d in $(TESTSDIR); do (cd $$d && $(MAKE)); done

debug: 
	-for d in $(DIRS); do (cd $$d && $(MAKE) debug); done

prof: 
	-for d in $(DIRS); do (cd $$d && $(MAKE) prof); done

clean:
	-for d in $(DIRS); do (cd $$d && $(MAKE) clean); done

cleanall: clean
	-for d in $(DIRS); do (cd $$d && $(MAKE) cleanall); done
