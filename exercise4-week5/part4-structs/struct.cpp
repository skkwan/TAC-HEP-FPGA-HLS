#include "struct.h"

/*
 * Square each element of the struct set_t.
 */
void squareStructElements(set_t in, set_t& out) {

    out.e0 = (in.e0 * in.e0);
    out.e1 = (in.e1 * in.e1);
    out.e2 = (in.e2 * in.e2);
    out.e3 = (in.e3 * in.e3);
    out.e4 = (in.e4 * in.e4);
    out.e5 = (in.e5 * in.e5);
    out.e6 = (in.e6 * in.e6);
    out.e7 = (in.e7 * in.e7);
    out.e8 = (in.e8 * in.e8);
    out.e9 = (in.e9 * in.e9);

}