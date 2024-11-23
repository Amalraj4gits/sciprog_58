#include <stdio.h>

// Iterative function to find the GCD of two integers
int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Modulo operation to find remainder
        a = temp;   // Assign remainder to a
    }
    return a;  // When b becomes 0, a is the GCD
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    printf("The GCD of %d and %d is: %d\n", a, b, gcd_iterative(a, b));
    
    return 0;
}

