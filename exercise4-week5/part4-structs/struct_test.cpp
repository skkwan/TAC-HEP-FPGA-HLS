#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *outFile;

    set_t set_in;
    set_t set_out;

    set_out.e0 = 0; 
    set_out.e1 = 0; 
    set_out.e2 = 0; 
    set_out.e3 = 0; 
    set_out.e4 = 0; 
    set_out.e5 = 0; 
    set_out.e6 = 0; 
    set_out.e7 = 0; 
    set_out.e8 = 0; 
    set_out.e9 = 0; 

    set_in.e0 = 0; 
    set_in.e1 = 1; 
    set_in.e2 = 2; 
    set_in.e3 = 3; 
    set_in.e4 = 4; 
    set_in.e5 = 5; 
    set_in.e6 = 6; 
    set_in.e7 = 7; 
    set_in.e8 = 8; 
    set_in.e9 = 9;

    squareStructElements(set_in, set_out);

    outFile = fopen("struct_out.dat", "w");
    
    fprintf(outFile, "%i %i\n", set_in.e0, set_out.e0);
    fprintf(outFile, "%i %i\n", set_in.e1, set_out.e1);
    fprintf(outFile, "%i %i\n", set_in.e2, set_out.e2);
    fprintf(outFile, "%i %i\n", set_in.e3, set_out.e3);
    fprintf(outFile, "%i %i\n", set_in.e4, set_out.e4);
    fprintf(outFile, "%i %i\n", set_in.e5, set_out.e5);
    fprintf(outFile, "%i %i\n", set_in.e6, set_out.e6);
    fprintf(outFile, "%i %i\n", set_in.e7, set_out.e7);
    fprintf(outFile, "%i %i\n", set_in.e8, set_out.e8);
    fprintf(outFile, "%i %i\n", set_in.e9, set_out.e9);

    fclose(outFile);

    printf("Comparing against output data\n");

    if (system("diff -w struct_out.dat struct_out_ref.dat")) {
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