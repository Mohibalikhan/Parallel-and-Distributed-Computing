#include<omp.h>
#include<stdio.h>
int main()
// This is a actual lab
// {
    
//     #pragma omp parallel for num_threads(4) //schedule (dynamic)
//     for (int i =1 ;i<=10;i++){
//       int tid = omp_get_thread_num();   // Get thread ID
//             printf("The thread %d executes i = %d\n", tid,i);
//     }
//     return 0;
// }


// This is a Madam Task
{

  int num;
  printf("Enter a Number: ");
  scanf("%d",&num);

  //Parallel for loop with 5 threads
    
  #pragma omp parallel for num_threads(5)
    for (int i =1 ;i<=10;i++){
      int tid = omp_get_thread_num();   // Get thread ID
      int result = num*i;
      printf("Thread %d executes: %d x %d = %d\n", tid,num,i,result);
    }
    return 0;
}
