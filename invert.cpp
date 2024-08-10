#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include "invert.h"

void printMatrixB(InvType matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%8.4f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printMatrixA(MatInputType matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%8d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void getAdjoint(MatInputType A[N][N], MatInputType Adj[N][N]) {
    // Adjoint Matrix is the transpose of a matrix
    Adjoint_Row:
    for(int i = 0; i < N; ++i) {

        Adjoint_Column:
        for(int j = 0; j < N; ++j) {
            Adj[i][j] = A[j][i];
        }
    }
}

void getDeterminant(MatInputType A[N][N], DetType determinant) {
    // This finds the determinant using gausian elimination
    determinant = 1;
    int i, j, k;

    for (i = 0; i < N; i++) {
        // Find pivot
        int max_row = i;
        for (k = i + 1; k < N; k++) {
            if (fabs(A[k][i]) > fabs(A[max_row][i])) {
                max_row = k;
            }
        }

        // Swap maximum row with current row
        if (max_row != i) {
            for (k = i; k < N; k++) {
                double temp = A[i][k];
                A[i][k] = A[max_row][k];
                A[max_row][k] = temp;
            }
            determinant = - determinant; // Change sign of determinant
        }

        // Make all rows below this one 0 in current column
        for (k = i + 1; k < N; k++) {
            double factor = A[k][i] / A[i][i];
            for (j = i; j < N; j++) {
                A[k][j] -= factor * A[i][j];
            }
        }
    }

    // Multiply diagonal elements
    for (i = 0; i < N; i++) {
        determinant *= A[i][i];
    }

}

void inverse(InvType B[N][N], MatInputType A[N][N]){
    MatInputType Adj[N][N];
    DetType determinant;

    getAdjoint(A, Adj);

    getDeterminant(A, determinant);

    inv_Row:
    for(int i = 0; i < N; ++i) {

        inv_Column:
        for(int j = 0; j < N; ++j) {
            Adj[i][j] = (InvType) Adj[i][j] / determinant;
        }
    }

}

int main() {
    MatInputType A[N][N] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };

    InvType B[N][N];

    printf("Original Matrix A:\n");
    printMatrixA(A);

    inverse(B, A);

    printf("\nInverse Matrix B:\n");
    printMatrixB(B);

    return 0;
}