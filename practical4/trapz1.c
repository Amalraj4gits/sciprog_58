#include <stdio.h>
#include <math.h>




 int main ()

{       
	int N = 12; 
       	float a= 0.0;
        float b=60.0;
        float Tanarry[N+1];
	float degree;


int i;

     for ( i=0; i<N; i=i+1){
	    degree = i*5.0;
            Tanarry[i] =tan(M_PI*degree/180.0);
	    printf("Tanarry[%d] = %f\n" ,i ,Tanarry[i]); 

     }
     
 float area = Tanarry[0] + Tanarry[N];
 printf("\n sum of x(0) and x(12)= %f\n", area);

     
    for (i=1; i<N; i++){
     area= area+2*Tanarry[i];

}
 
printf(" The sum area after loop: %f/n", area);
float multi_rad = (M_PI*((b-a)/(2*N)))/180.0;
 area=multi_rad*area;
 

 printf("\nTraperzoidal result is %f\n", area);
 printf("Real result is %f/n", log(2.0));







	return 0;

}	
