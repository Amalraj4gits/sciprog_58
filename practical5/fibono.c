#include <stdio.h>
#include <stdlib.h>// lib for exit 
//Program to get fibonaci series
void fibi(int *a, int *b);

int main(void) {
    int n;
    printf("Please enter a positive integer n \n");
    scanf("%d", &n);

    if (n < 1) {
        printf("n must be bigger than 1 \n");
        exit(1);
    }

    int f0 = 0; // Fibo 0
    int f1 = 1; // Fibo 1
    printf("The Fibonacci series is: \n");
    printf("%d,%d \n", f0, f1);
     
    int i;
    for ( i = 2; i <= n; i++) {
        fibi(&f1, &f0);
        printf("%d \n", f1);
//        
//            
//        
    }

//    printf("\n"); // Adding a new line
    return 0;
}

void fibi(int *a, int *b) {
    int next;
      next = *a + *b;
    *b = *a;
    *a = next;
}

