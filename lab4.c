#include<omp.h>
#include<stdio.h>
int main()
{
    
    #pragma omp parallel for num_threads(4) //schedule (dynamic)
    for (int i =1 ;i<=10;i++){
      int tid = omp_get_thread_num();   // Get thread ID
            printf("The thread %d executes i = %d\n", tid,i);
    }
    return 0;
}
