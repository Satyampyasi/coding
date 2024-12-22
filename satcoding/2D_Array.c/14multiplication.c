#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for both matrices
    printf("Enter the number of rows and columns for the 1st matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and columns for the 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    // Matrix multiplication condition
    if (c1 != r2) {
        printf("Matrices cannot be multiplied. Number of columns in 1st matrix must be equal to number of rows in 2nd matrix.\n");
        return 0;
    }

    // Input for the 1st matrix
    int arr[r1][c1];
    printf("Enter elements of the 1st matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input for the 2nd matrix
    int brr[r2][c2];
    printf("Enter elements of the 2nd matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Initialize result matrix
    int res[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // Output the result matrix
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
