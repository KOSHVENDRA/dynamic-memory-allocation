#include<stdio.h>
#include<stdlib.h>
#include"function.h"

double *kosh(int *data,int n)
{
  double sum=0;int i;
  for(i=0;i<100;i++)
    {
    sum=sum+data[i];

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

  return val;


}


