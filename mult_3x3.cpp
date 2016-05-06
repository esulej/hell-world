#include "mult_3x3.hpp"
#include <ap_fixed.h>

//ap_fixed<12 , 2, AP_RND> coeff_t;
//ap_fixed<20, 10, AP_RND> mult_res_t;

int mult_3x3(short a_r[3], short a_g[3], short a_b[3], char r, char g, char b, int res[3]){
  int out;
  loop: for (int i=0; i<3; i++){
    out = a_r[i]*r + a_g[i]*g + a_b[i]*b;
    res[i] = out;
  }
}
