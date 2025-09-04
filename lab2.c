// Task - Write a multithreaded program that prints “Hello World” from each thread.

#include <omp.h>  // Header file for OpenMP functions
#include <stdio.h> 

int main() {
    // Start parallel region
    omp_set_num_threads(16);
    #pragma omp parallel
{
 int tid = omp_get_thread_num();  //--> Returns the thread ID (0, 1, 2, ...)

 int nthreads = omp_get_num_threads(); //-->Returns total number of threads

 printf("Hello World from thread %d / %d\n", tid, nthreads);
 }
 return 0;
}