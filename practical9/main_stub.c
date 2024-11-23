#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define MAX_FILE_NAME 100

int getlines(char filename[MAX_FILE_NAME]);

int main() {
    // define our file variable
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);

    // TODO:Open the file
    int n = getlines(filename);
    
    if (n <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }
     int i;
    // TODO:Allocate memory for the matrix (2D array)
    int **matrix = (int **)malloc(n * sizeof(int *));
    for ( i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    // Open the file
    f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the first line for matrix size (skip it if necessary)
    fscanf(f, "%d", &n);

    // Read the matrix elements from the file into the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &matrix[i][j]);
        }
    }

    // Close the file
    fclose(f);

    // Print the matrix for verification
//    printf("Matrix read from the file:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
//            printf("%d ", matrix[i][j]);
        }
//        printf("\n");
    }

    // Check if the matrix is a magic square
    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    // Freeing each row separately before freeing the array of pointers 
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
//##!
int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;
    while ((ch_read = fgetc(fp)) != EOF) {
        if (ch_read == '\n') {
            count++;
        }
    }
//TODO:Close the file
    fclose(fp);
    return count;
}

