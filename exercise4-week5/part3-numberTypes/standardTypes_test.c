#include "standardTypes.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *outFile;


    int x = 267;
    int y = 324;
    int sum;
    int product;
    int modulus;
    int remainder;

    testStandardTypes(x, y, &sum, &product, &modulus, &remainder);

    outFile = fopen("standardTypes_out.dat", "w");
    fprintf(outFile, "sum: %i\n", sum);
    fprintf(outFile, "product: %i\n", product);
    fprintf(outFile, "modulus: %i\n", modulus);
    fprintf(outFile, "remainder: %i\n", remainder);
    fclose(outFile);

    printf("Comparing against output data\n");

    if (system("diff -w standardTypes_out.dat standardTypes_out_ref.dat")) {
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
