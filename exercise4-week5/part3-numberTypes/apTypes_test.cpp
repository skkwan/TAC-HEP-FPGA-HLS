#include "apTypes.h"
#include "ap_int.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

int main() {

    FILE *outFile;

    ap_int<25> x = 267;
    ap_int<25> y = 324;
    ap_int<25> sum;
    ap_int<25> product;
    ap_int<25> modulus;
    ap_int<25> remainder;

    testApTypes(x, y, &sum, &product, &modulus, &remainder);

    std::ofstream outfile("apTypes_out.dat");
    outfile << "sum: " << sum << std::endl;
    outfile << "product: " << product << std::endl;
    outfile << "modulus: " << modulus << std::endl;
    outfile << "remainder: " << remainder << std::endl;
    outfile.close();

    printf("Comparing against output data\n");

    if (system("diff -w apTypes_out.dat apTypes_out_ref.dat")) {
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


    return 0;

}