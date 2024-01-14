Dependencies:
* OpenMPI (mpicc)
* C-lime (https://github.com/usqcd-software/c-lime)
* GNU Autotools
* GSL (GNU Scientific Library)

Instructions:
* Clone 'qpb' project locally to the directory of your preference, say 'qpb_build'.
* Change to a different directory of your preference other than and outside 'qpb', for simplicity say: qpb_build/.
* Go to: https://github.com/usqcd-software/c-lime and clone C-lime locally.
* Change directory to 'c-lime'.
* Now you need to build C-lime:
- First do: ./autogen.sh
+ If you get error: "line 3: autoreconf: command not found", then GNU Autotools is not installed
+ If you get additional errors of the form "macro ... is obsolete", you need first to run the "autoupdate" command from the terminal. Then run again: ./autogen.sh. No output or warning means it run properly and, among others,  a 'configure' binary file must now appear.
- Next you need to decide where to install C-lime such that 'qpb' can find it easily. Suggestion, in an 'install' directory inside 'qpb': qpb_build/qpb/install.
- Then set the a variable 'LIMEPREFIX' to the FULL path of the aforementioned 'install' directory.
- While still in the 'c-lime' directory, run: './configure --prefix=$LIMEPREFIX CC=mpicc CFLAGS=-O3'. NOTE the use of 'mpicc'; 'gcc' will not work with QPB.
- Run 'make' and 'make install'. Ignore 'Nothing to be done for ...' warnings. Now C-lime should have been installed properly.
* Next, change directory to qpb_build/qpb.
* You need to choose which of the 'Makefile.in. ...' files you would like to link with a 'Makefile.in' file recognized by the Makefiles. You can run for example: 'ln -s Makefile.in.CYCLONE Makefile.in', but you necessarily need to make sure that the 'CFLAGS' and 'LDFLAGS' contain the correct full paths to the 'qpb/install/include/' and 'qpb/install/lib/' directories. After running the command a 'Makefile.in' should appear.
* Now you can run the Makefiles. In order to take thing step by step, it might be better to change directory to 'qpb/lib/' first and run 'make' there. If you get an error: './qpb_types.h:131:10: fatal error: gsl/gsl_rng.h: No such file or directory', then of course GSL is not installed. It should take about 2 mins for the make to run for the first time inside 'qpb/lib/'.
* Finally, you change directory to one of the 'qpb/mainprogs' and run make there to ready all the 'mainprogs' programs, or change to one of the 'mainprogs' directories of your choice such as: 'overlap-kl'
* Each 'mainprogs' directory contains a 'params.ini' file for controlling the parameters of the program. An example of how to run one of these programs using MPI is the following:
# mpirun -n 8 --bind-to core --report-bindings ./ginsparg-wilson-relation geom=2,2,2 params.ini

