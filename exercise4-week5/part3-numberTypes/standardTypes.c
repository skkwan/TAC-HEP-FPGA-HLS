#include "standardTypes.h"

void testStandardTypes(int x, int y, int* sum, int* product, int* modulus, int* remainder) {

    *sum = (x + y);
    *product = (x * y);
    *modulus = (x / y);
    *remainder = (x % y);

}


