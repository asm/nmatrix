#include <ruby.h>

#include "nmatrix.h"

#include "data/data.h"

extern "C" {
void nm_math_init_lapack(); 

void Init_nmatrix_lapack() {
  nm_math_init_lapack();
}

}
