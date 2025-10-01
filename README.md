# Parallel-and-Distributed-Computing

## LAB # 2 - Implementing Hello World in OpenMP

- Lab Objective: To understand and work with the core syntax of OpenMP for multithreaded
programming.

- Task - Write a multithreaded program that prints “Hello World” from each thread.

- Write Program From Lab and open the vscode cmd and write

- gcc yourfilename.c -fopenmp -o filename

- ### gcc lab2.c -fopenmp -o lab2 (in my case)
- The Above command create a exe file of your program after that you run the program by write **filename.exe** in cmd
- ### lab2.exe (in my case)


## Output me clearly dikh raha hai:

- Tumhaari machine par 16 threads available hain (CPU cores/threads ke hisaab se).
- Har ek thread apka Name print kar raha hai.
- Order random aa raha hai (kabhi 0 pehle, kabhi 15 pehle), kyunki threads parallel run hote hain, sequential order guarantee nahi hoti.


## LAB # 3 - Mutual exclusion in OpenMP

- Lab Objective: To understand and work with the thread synchronization in OpenMP for multithreaded programming.
- Task - Write a synchronized multithreaded program providing mutual exclusion using critical clause.

## Explanation
### 1. omp_set_num_threads(10);
- We ask OpenMP to create 10 threads.
### 2. Parallel region starts
- #pragma omp parallel → All 10 threads are active and try to run the code inside.

### 3. #pragma omp critical
   - Critical section = only one thread at a time can enter this block. so i is updated safely (no clash)

### 4. Work done
- Each thread prints i and its thread ID, then increments i.
- At the end, 10 different lines are printed, with i going from 1 → 10.