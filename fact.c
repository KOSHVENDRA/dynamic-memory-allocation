#include<stdio.h>
#include<time.h>
  
double fact(int n)
{if(n==1)
    return 1;
  int fac=1;
  fac=n*fact(n-1);
    return fac;
}
int main()
{
  double total_time;
  clock_t start, end;
  start = clock();
  printf("%f",fact(45));
  end = clock();
  double k=((double)(end-start)) / CLOCKS_PER_SEC;
  printf("\ntime taken by code in running is:%f",k);
  return 0;
}



