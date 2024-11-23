#include <stdio.h>
#include <stdlib.h>  
#include <math.h>    

// allocate memory for an array  type double
double* allocatearray(int size) {
    return (double*)malloc(size * sizeof(double));
}

//  fill the allocated array with ones
void fillwithones(double* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 1.0;
    }
}

// Function to print the array
void printarray(double* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%lf ", array[i]);
    }
    printf("\n");
}

// Function to free the allocated memory
void freeMemory(double* array) {
    free(array);
}

// Function to estimate e using the Taylor series
double estimate_e(int order) {
    double estimate = 1.0;  // f(1) starts as 1

    // Compute the terms of the series for x=1 (e.g., f(1) = 1 + 1 + 1/2! + 1/3! + ...)
    double term = 1.0;  // Start with the 0th term, which is 1
    for (int i = 1; i <= order; i++) {
        term /= i;  // Update term to be 1/i!
        estimate += term;
    }

    return estimate;
}

int main() {
    int order;
    double* terms;
    double estimate, true_value = 2.71828;  // True value of 'e' for comparison

    // input the order of the polynomial
    printf("Enter the order of the polynomial (1 to 15): ");
    scanf("%d", &order);

    //  within valid range
    if (order < 1 || order > 15) {
        printf("Invalid order. Please enter a number between 1 and 15.\n");
        return 1;
    }

    // Dynamically allocate  terms
    terms = allocatearray(order + 1);  

    
    fillwithones(terms, order + 1);

    // Compute the estimate of e using the Taylor series
    estimate = estimate_e(order);

    
    printf("Estimate of e with %d terms: %.6f\n", order, estimate);
    printf("True value of e: %.6f\n", true_value);

    // Print the individual terms 
    printf("Terms of the series: \n");
    for (int i = 0; i <= order; i++) {
        printf("Term %d: %.6f\n", i, 1.0 / tgamma(i + 1));  // Using tgamma to compute i!
    }

    // Free the allocated memory
    freeMemory(terms);

    return 0;
}

