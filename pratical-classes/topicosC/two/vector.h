/* definition of new type vector */
typedef struct {
  double x;
  double y;
  double z;
} vector;
/* definition of the vector API */
vector* vector_new(double x, double y, double z);
vector* vector_add(vector* x, vector* y);
vector* vector_sub(vector* x, vector* y);
vector* vector_scale(double x, vector* v);
vector* vector_vprod(vector* x, vector* y);
double vector_sprod(vector* x, vector* y);
double vector_mod(vector* v);
