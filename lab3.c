#include<omp.h>
#include<stdio.h>
int main(){
    
    omp_set_num_threads(10);   // Tell OpenMP to use 10 threads
    int i = 1;

    #pragma omp parallel   // Start parallel region
    {
        #pragma omp critical   // Only ONE thread at a time can enter here

        {
            int tid = omp_get_thread_num();   // Get thread ID
            printf("Value of %d from thread %d\n", i, tid);
            i = i + 1;   // Increase i safely (because critical ensures no two threads change it at the same time)
        }
    }
    return 0;
}
