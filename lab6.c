// Task – Demonstrating Shared variable

// 🧩 What happens here:
// x is shared, so all threads modify the same variable.
// Each thread adds its thread ID (tid) to x.
// 👉 All threads are fighting over the same variable this causes race condition.
// Because multiple threads run simultaneously, they may interfere with each other (this is called a race condition).
// So, the final value of x is unpredictable — depends on the order threads execute.

// #include <stdio.h>
// #include <omp.h>
// int main()
// {
// omp_set_num_threads(5);
//  int i;
//  int x = 0;
//  #pragma omp parallel shared(x)
//  {
//  int tid = omp_get_thread_num();
//  x = x + tid; // Shared variable modified by all threads
//  printf("Thread %d updated x to %d\n", tid, x);
//  }
//  printf("\nFinal value of x (shared): %d\n", x);
//  return 0;
// }



// Task – Demonstrating Private variable

// 🧩 What happens here:
// Each thread has its own x, starting from an uninitialized value (in this case, garbage or 0 depending on compiler).
// Threads do not interfere with each other.
// After the parallel region ends, the x inside threads is destroyed — the main x remains unchanged.
// 👉 No one shares memory — each thread works independently.


#include <stdio.h>
#include <omp.h>
int main() 
{
    omp_set_num_threads(5);
    int x = 0;
    #pragma omp parallel firstprivate(x)
    {
        int tid = omp_get_thread_num();
        x = x + tid; // Each thread has its own private copy
        printf("Thread %d has private x = %d\n", tid, x);
    }
    printf("\nFinal value of x (main thread): %d\n", x);
    return 0;
}
