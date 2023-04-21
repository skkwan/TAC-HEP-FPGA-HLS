#include "matrixMultiplication.h"

/* 
 * Multiply a NxN matrix with a 1xN matrix (this gives two for loops, which we want for this exercise)
 */
void matrixMultiplication(int matrix1[N][N], int matrix2[N], int result[N]) {

    int element;

    // loop_output is over the dimensions of the output array
    loop_output: for (int iOut = 0; iOut < N; iOut++) {

        // Compute the output element at result[iOut]
        loop_inner: for (int i = 0; i < N; i++) {

#pragma HLS loop_flatten
            // To make this a perfect for loop, only the inner loop can have content 
            if (i == 0) element = 0; 

            element += (matrix1[iOut][i] * matrix2[i]); 
        }

        result[iOut] = element; 
    }
}