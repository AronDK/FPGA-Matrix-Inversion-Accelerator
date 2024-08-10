#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 100

double determinant(double matrix[MAX_SIZE][MAX_SIZE], int n) {
    double det = 1.0;
    int i, j, k;

    for (i = 0; i < n; i++) {
        // Find pivot
        int max_row = i;
        for (k = i + 1; k < n; k++) {
            if (fabs(matrix[k][i]) > fabs(matrix[max_row][i])) {
                max_row = k;
            }
        }

        // Swap maximum row with current row
        if (max_row != i) {
            for (k = i; k < n; k++) {
                double temp = matrix[i][k];
                matrix[i][k] = matrix[max_row][k];
                matrix[max_row][k] = temp;
            }
            det = -det; // Change sign of determinant
        }

        // Make all rows below this one 0 in current column
        for (k = i + 1; k < n; k++) {
            double factor = matrix[k][i] / matrix[i][i];
            for (j = i; j < n; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Multiply diagonal elements
    for (i = 0; i < n; i++) {
        det *= matrix[i][i];
    }

    return det;
}

int main() {
    double matrix[MAX_SIZE][MAX_SIZE];
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    double det = determinant(matrix, n);
    printf("Determinant: %f\n", det);

    return 0;
}