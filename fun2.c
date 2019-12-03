#include<stdio.h>
#include<stdlib.h>
#include"function.h"

int main()
{
  int i,*p;
  p=(int*)malloc(100*sizeof(int));
for(i=1;i<101;i++)
  {
    p[i]=i*i;
    printf("%d\n",p[i]);
    
  }
double *poin;
poin=kosh(p,100);
printf("mean is %f\nvar is %f",poin[0],poin[1]);

}
