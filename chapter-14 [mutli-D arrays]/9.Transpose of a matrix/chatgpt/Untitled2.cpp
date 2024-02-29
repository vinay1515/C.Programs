#include <stdio.h>

int main()
{
    int matrix[3][5], transpose[5][3];
    int i, j;

    printf("Enter elements of matrix:\n");

    // Get matrix elements from user
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose of matrix
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Print original matrix
    printf("Original matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose of matrix
    printf("Transpose of matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

