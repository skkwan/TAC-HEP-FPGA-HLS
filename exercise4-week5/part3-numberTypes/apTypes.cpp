#include "standardTypes.h"
#include <stdio.h>
#include <stdlib.h>
#include <ap_int.h>

void testApTypes(ap_int<25> x, ap_int<25> y, ap_int<25>* sum, ap_int<25>* product, ap_int<25>* modulus, ap_int<25>* remainder) {

    *sum = (x + y);
    *product = (x * y);
    *modulus = (x / y);
    *remainder = (x % y);

}


