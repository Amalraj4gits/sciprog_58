#include <stdio.h>
#include <math.h>




 int main (void)

{       int N = 12; 
       	float a= 0;
        float b=60;
   
        float b_radian;	  
        b_radian=b*(M_PI/180);	  
printf("The value of b in radian is %f\n",b_radian);


float sum = tan(a)+tan(b_radian);
printf("The value of tan(a) + tanb(b) is %f\n", sum);


int i;

     for ( i=5; i<60; i=i+5)
  {

     sum += 2*tan(i*M_PI/180);


}
 
 sum= ((b_radian-a)/(2*N))*sum;
printf("The calculated value of log2 is %f\n ", sum );
printf("The actual value of log2 is %f\n", logf(2));








	return 0;

}	
