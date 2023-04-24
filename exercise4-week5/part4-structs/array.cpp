#include "array.h"

/*
 * Square each element of array_in.
 */
void squareArrayElements(int array_in[N], int array_out[N]) {

    for (int i = 0; i < N; i++) {
        array_out[i] = (array_in[i] * array_in[i]);
    }

}