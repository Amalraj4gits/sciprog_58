#include <stdio.h>

int main() {
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k;

    // Initializing matrix A
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    // Initializing matrix B
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // Initializing matrix C to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0.0;
        }
    }

    // Matrix multiplication: C = A * B
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("\nThis is matrix A:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("\nThis is matrix B:\n\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }

    // Print matrix C (result of A * B)
    printf("\nThis is matrix C (result of A * B):\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

