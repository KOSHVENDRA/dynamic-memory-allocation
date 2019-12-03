#include<stdio.h>
#include<math.h>
int main()
{
  printf("size of data types");
  printf("%ld\n",sizeof(char));
  printf("%ld\n",sizeof(int));

  printf("%ld\n",sizeof(long int));
  printf("%ld\n",sizeof(float));
  printf("%ld\n",sizeof(double));

  printf("max. value of data types\n");
  
  printf("%f\n",((pow(2,sizeof(char)*8))/2)-1);
   printf("%f\n",((pow(2,sizeof(int)*8))/2)-1);
    printf("%f\n",((pow(2,sizeof(long int)*8))/2)-1);
    printf("%f\n",((pow(2,sizeof(float)*8))/2)-1);
     printf("%f\n",((pow(2,sizeof(double)*8))/2)-1);


     printf("mim. value of data types\n");

     
      printf("%f\n",(-1*(pow(2,sizeof(char)*8))/2));
       printf("%f\n",(-1*(pow(2,sizeof(int)*8))/2));
        printf("%f\n",(-1*(pow(2,sizeof(long int)*8))/2));
	 printf("%f\n",(-1*(pow(2,sizeof(float)*8))/2));
	  printf("%f\n",(-1*(pow(2,sizeof(char)*8))/2));   

  
}
