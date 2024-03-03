#include <stdio.h>

#define R1 2 // Number of rows in Matrix-1
#define C1 3 // Number of columns in Matrix-1
#define R2 3 // Number of rows in Matrix-2
#define C2 2 // Number of columns in Matrix-2

int main() {
    int i, j, k;
    int matrix1[R1][C1], matrix2[R2][C2], result[R1][C2];

    printf("Enter elements for Matrix-1:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for Matrix-2:\n");
    for (i = 0; i < R2; i++) {
        for (j = 0; j < C2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Display Matrix-1
    printf("Matrix-1:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C1; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display Matrix-2
    printf("Matrix-2:\n");
    for (i = 0; i < R2; i++) {
        for (j = 0; j < C2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            result[i][j] = 0;
            for (k = 0; k < C1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
