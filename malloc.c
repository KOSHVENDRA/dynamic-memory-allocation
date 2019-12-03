#include<stdio.h>
#include<stdlib.h>
double  * kosh(int *data ,int n){
  double sum=0;int i;
  for(i=0;i<100;i++)
    
    {sum=sum+data[i];
    }
  double mean=sum/100;

double var=0;
for(i=0;i<100;i++)

  {
    var=var+(data[i]*data[i]);

  }
double variance=var/100;

 static double val[2];
 val[0]=mean;
   val[1]=variance;
   printf("%f",val[0]);
   return val;

}
int main()
{
  
  int i,*p;
  p=(int*)malloc(100*sizeof(int));
  for(i=1;i<=100;i++)
    {

      p[i-1]=i*i;
      printf("%d\n ",p[i-1]);
      
    }
  double *poin;
  poin=kosh(p,100);
  printf("\nmean is %f\nvar. is %f",poin[0],poin[1]);;
  free(p);
  return 0;

}







  
