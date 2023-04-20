#include "matrixMultiplication.h"

void matrixMultiplication(int matrix1[N], int matrix2[N], int *result) {

    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += (matrix1[i] * matrix2[i]);
    }

    *result = sum;
}