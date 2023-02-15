#include "matrix.h"

int main(void){
  matrix* m1 = matrix_new_random(10,15,0,20);
  matrix* m2 = matrix_new_random(10,15,0,20);
  printf("First matrix:\n");
  matrix_print(m1);
  printf("Multi matrix:\n");
  matrix_mul(m1,m2);
  matrix_print(m1);
  printf("Transposed matrix:\n");
  matrix_trans(m1);
  matrix_print(m1);
}
