# Parallel-and-Distributed-Computing"

## LAB # 2 - Implementing Hello World in OpenMP

- Lab Objective: To understand and work with the core syntax of OpenMP for multithreaded
programming.

- Task - Write a multithreaded program that prints “Hello World” from each thread.

- Write Program From Lab and open the vscode cmd and write

- gcc yourfilename.c -fopenmp -o filename

- ### gcc lab2.c -fopenmp -o lab2
- The Above command create a exe file of your program after that you run the program
- filename.exe
- lab2.exe


## Output me clearly dikh raha hai:

Tumhaari machine par 16 threads available hain (CPU cores/threads ke hisaab se).

Har ek thread apna Hello World print kar raha hai.

Order random aa raha hai (kabhi 0 pehle, kabhi 15 pehle), kyunki threads parallel run hote hain, sequential order guarantee nahi hoti.
