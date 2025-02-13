#include <stdio.h>

// Function to perform matrix addition (C = A + B)
void matrixAddition(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];
}

// Function to perform matrix subtraction (C = A - B)
void matrixSubtraction(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            C[i][j] = A[i][j] - B[i][j];
}

// Function to perform matrix multiplication (C = A * B)
void matrixMultiplication(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            C[i][j] = 0; // Initialize C to 0
            for(int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

// Function to find the sum of diagonal elements of a matrix
int sumDiagonal(int matrix[3][3]) {
    int sum = 0;
    for(int i = 0; i < 3; i++)
        sum += matrix[i][i];
    return sum;
}

// Function to find the lower triangular matrix of a matrix
void lowerTriangular(int matrix[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(i < j)
                matrix[i][j] = 0;
}

// Function to find the upper triangular matrix of a matrix
void upperTriangular(int matrix[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(i > j)
                matrix[i][j] = 0;
}

// Function to check the symmetry of a matrix
int isSymmetric(int matrix[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(matrix[i][j] != matrix[j][i])
                return 0; // Not symmetric
    return 1; // Symmetric
}

// Function to display a matrix
void displayMatrix(int matrix[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    // a. C = A + B
    matrixAddition(A, B, C);
    printf("Matrix C (A + B):\n");
    displayMatrix(C);

    // b. C = A - B
    matrixSubtraction(A, B, C);
    printf("\nMatrix C (A - B):\n");
    displayMatrix(C);

    // c. C = A * B
    matrixMultiplication(A, B, C);
    printf("\nMatrix C (A * B):\n");
    displayMatrix(C);

    // d. Sum of diagonal elements of A
    int diagonalSum = sumDiagonal(A);
    printf("\nSum of diagonal elements of A: %d\n", diagonalSum);

    // e. Lower triangular matrix of A
    lowerTriangular(A);
    printf("\nLower triangular matrix of A:\n");
    displayMatrix(A);

    // f. Upper triangular matrix of B
    upperTriangular(B);
    printf("\nUpper triangular matrix of B:\n");
    displayMatrix(B);

    // g. Check symmetry of Array C
    int symmetric = isSymmetric(C);
    if (symmetric)
        printf("\nMatrix C is symmetric.\n");
    else
        printf("\nMatrix C is not symmetric.\n");

    return 0;
}
