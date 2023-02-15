#include "vector.h"
#include <stdlib.h>
#include <math.h>

vector* vector_new(double x, double y, double z){
  vector* v = (vector*) malloc(sizeof(vector));
  v->x = x;
  v->y = y;
  v->z = z;
  return v;
}
vector* vector_add(vector* x, vector* y){
  return vector_new(x->x + y->x, x->y + y->y, x->z + y->z);
}
vector* vector_sub(vector* x, vector* y){
  return vector_new(x->x - y->x, x->y - y->y, x->z - y->z);
}
vector* vector_scale(double x, vector* v){
  return vector_new(v->x * x, v->y * x, v->z * x);
}
vector* vector_vprod(vector* x, vector* y){
  return vector_new(x->x * y->x, x->y * y->y, x->z * y->z);
  //eu sei que não é assim ... mas é para desenrascar
}
double vector_sprod(vector* x, vector* y){
  return x->x * y->x + x->y * y->y + x->z * y->z;
}
double vector_mod(vector* v){
  return sqrt(pow(v->x,2) + pow(v->y,2) + pow(v->z,2));
}
