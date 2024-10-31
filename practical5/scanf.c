#include <stdio.h>
int main(void) {
	int i ;
        int ierr; 
	double a; 
// get the values from user
printf("Enter an int and double\n");
ierr=scanf("%d %f",&i,&a);
if (ierr != 2) printf("Unexpected input!!"); 
}
