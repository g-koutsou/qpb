#!/bin/bash -l
#SBATCH --job-name=GWChStand400
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=16
#SBATCH --time=09:00:00
#SBATCH --partition=p100
#SBATCH --error=logs/runStand400.err
#SBATCH --output=logs/runStand400.txt

module purge
module load Anaconda3
module load h5py
module load GSL
module load Autotools
module load gompi

# # Standard
# for ((N = 26 ; N <= 35 ; N=N+1)); do
#     cat _paramsStand.ini_ | sed "s@_CHEB_ORDER_@${N}@" > params_files/paramsStand_N${N}.ini
#     mpirun -n 8 --bind-to core --report-bindings ./ginsparg-wilson-relation geom=2,2,2 params_files/paramsStand_N${N}.ini
# done

# # Brillouin
# for ((N = 259 ; N <= 262 ; N=N+1)); do
#     cat _paramsBri.ini_ | sed "s@_CHEB_ORDER_@${N}@" > params_files/paramsBri_N${N}.ini
#     mpirun -n 8 --bind-to core --report-bindings ./ginsparg-wilson-relation geom=2,2,2 params_files/paramsBri_N${N}.ini
# done


mpirun -n 8 --bind-to core --report-bindings ./ginsparg-wilson-relation geom=2,2,2 params.ini
