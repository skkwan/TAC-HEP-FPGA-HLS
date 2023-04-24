#include "array.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *outFile;

    int array_in[N];
    int array_out[N];

    for (int i = 0; i < N; i++) {
        array_in[i] = i;
        array_out[i] = 0;
    }

    squareArrayElements(array_in, array_out);

    outFile = fopen("array_out.dat", "w");
    for (int j = 0; j < N; j++) {
        fprintf(outFile, "%i %i %i\n", j, array_in[j], array_out[j]);
    }
    fclose(outFile);

    printf("Comparing against output data\n");

    if (system("diff -w array_out.dat array_out_ref.dat")) {
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