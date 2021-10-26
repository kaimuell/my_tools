/**
MPI Is a Framework for Message passing Multiprocess computing.

To compile use mpicc as compiler.

to run mpirun or mpiexec (with -n NUMBER_OF_PROCESSES)
**/


#include<mpi.h>

int main(int argc, char **argv){
    int size, rank, temp;

    if(MPI_Init(&argc, &argv)!=MPI_SUCCESS){
        return -1;
    }
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (size<2) return -2 // 2 Processes needed
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    //YOUR PROGRAMM HERE

    MPI_Finalize(); 
    return 0;

}