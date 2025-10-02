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


## LAB # 4 - Parallel For loop in OpenMP

- Lab Objective: To understand and work with the parallel execution of for loop in OpenMP.
- Task - Write a parallel for loop employing 4 threads for 10 loop iterations.

## Explanation Step-by-Step Working (in 4 steps)

1. num_threads(4) → 4 threads created
The loop will run using 4 threads in parallel.

2. #pragma omp parallel for
The loop iterations (i = 1 to 10) are divided among the 4 threads.

3. Inside the loop
Each thread picks up some values of i, prints its thread ID and the iteration number.

4. Output
The order is not fixed, because threads run in parallel. But all i = 1 to 10 will be executed.

- **By default OpenMP parallel use static scheduling** 
>     Thread 0 → i = 1, 2, 3
>     Thread 1 → i = 4, 5, 6
>     Thread 2 → i = 7, 8
>     Thread 3 → i = 9, 10
-  **Jab tak aap schedule(dynamic) ya schedule(guided) na likho**
>     The thread 0 → i = 2
>     The thread 1 → i = 1,5,6,7,8,9,10
>     The thread 2 → i = 3
>     The thread 3 → i = 4

**Also Mam can assign a task to Print**

## LAB # 5 - Reduction across threads for Parallel For loop synchronization

- Lab Objective: To understand and work with the parallel reduction operator in OpenMP.
- Task - Write a parallel for loop employing 4 threads for 10 loop iterations.

## Explanation Step-by-Step Working (in 4 steps)

1. int n = 10;
Loop chalega i = 1 se 10 tak.

2. Loop parallel run hoga multiple threads ke sath.

3. reduction(+: total) ka matlab:

- Har thread apna private copy of total banata hai.
- Har thread apne hisaab se sum calculate karta hai.
- End mein sab results combine karke (reduce) ek final total bana dete hain.

4. Loop Execution
Har thread kuch i values lega, unka sum apne private total mein add karega.

5. Reduction Step
OpenMP automatically sab threads ke partial totals ko add karke ek global total banata hai.