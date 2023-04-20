#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matrixMultiplication.h"

int main() {

    FILE *outFile;

    int m1[N] = {1, 2, 3, 4, 5};
    int m2[N] = {6, 7, 8, 9, 10};
    int sum = 0;

    outFile = fopen("matrixMul_out.dat", "w");
    matrixMultiplication(m1, m2, &sum);
    fprintf(outFile, "%i\n", sum);
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