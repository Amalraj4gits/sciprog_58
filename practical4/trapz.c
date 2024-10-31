#include <stdio.h>
#include <math.h>

float degtorad(float degarg);
float trapzrule(int N,float Tanarry[N+1]);

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
            Tanarry[i] =tan(degtorad(degree));
	    printf("Tanarry[%d] = %f\n" ,i ,Tanarry[i]); 

     }
     
 float area = trapzrule(N,Tanarry);
 printf("\n sum of x(0) and x(12)= %f\n", area);

     
    for (i=1; i<N; i++){
     area= area+2*Tanarry[i];

}
 
printf(" The sum area after loop: %f\n", area);
float multi_rad = degtorad((b-a)/(2*N));
 area=multi_rad*area;
 

 printf("\nTraperzoidal result is %f\n", area);
 printf("Real result is : %f\n", log(2.0));


	return 0;

}	
float degtorad(float degarg) {
	float pi = 3.1415927;
	return((pi*degarg)/(180.0));
}
float trapzrule(int N, float Tanarry[N+1]){
	float area;
	int i;
 area = Tanarry[0] + Tanarry[N];
 printf("\n sum of x(0) and x(12)= %f\n", area);


    for (i=1; i<N; i++){
     area = area+2*Tanarry[i];
  }
  float multi_rad=degtorad((60.0-0.0)/(2*N));
  area=multi_rad*area;
  return area;
 }

    
