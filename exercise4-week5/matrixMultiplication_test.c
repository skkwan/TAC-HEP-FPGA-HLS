#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matrixMultiplication.h"

int main() {

    FILE *outFile;

    int m1[N][N];
    int m2[N];
    int result[N]; 

    // Fill the test matrices 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m1[i][j] = ((i * N) + j);
        }
        m2[i] = i;

    }

    outFile = fopen("matrixMul_out.dat", "w");
    matrixMultiplication(m1, m2, result);
    for (int idx = 0; idx < N; idx++) {
        fprintf(outFile, "%i %i\n", idx, result[idx]);
    }
    fclose(outFile);

    printf("Comparing against output data\n");

    if (system("diff -w matrixMul_out.dat matrixMul_out_ref.dat")) {
        fprintf(stdout, "*******************************************\n");
        fprintf(stdout, "FAIL: Output DOES NOT match the reference output\n");
        fprintf(stdout, "*******************************************\n");
        return 1;
    } 
    else {
        fprintf(stdout, "*******************************************\n");
        fprintf(stdout, "PASS: The output matches the reference output!\n");
        fprintf(stdout, "*******************************************\n");
        return 0;
    }
}