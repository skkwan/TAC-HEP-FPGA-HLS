#include "lec8Ex1.h"

void lec8Ex1 (
  unsigned int in[N],
  short a,
  short b,
  unsigned int c,
  unsigned int out[N]
  ) {

#pragma HLS ARRAY_PARTITION variable=in block factor=3 dim=1
#pragma HLS ARRAY_PARTITION variable=out block factor=3 dim=1

   unsigned int x, y;
   unsigned int tmp1, tmp2, tmp3;

for_Loop: for (unsigned int i=0 ; i < N; i++) {
	x = in[i];
	tmp1 = func(1, 2);
	tmp2 = func(2, 3);
	tmp3 = func(1, 4);

	y = a*x + b + squared(c) + tmp1 + tmp2 + tmp3;

	out[i] = y;
      }
}

unsigned int squared(unsigned int a)
{
  unsigned int res = 0;
  res = a*a;
  return res;
}

unsigned int func(short a, short b){
  unsigned int res;
  res= a*a;
  res= res*b*a;
  res= res + 3;

  return res;
}




