#include<omp.h>
#include<stdio.h>
int main()
{
    int n =10;
    int total =0;

    for (int i =1 ;i<=n;i++){
      total = total +i;
    }
    printf("The total is %d\n",total);
    return 0;
}
