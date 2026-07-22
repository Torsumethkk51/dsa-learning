#ifndef ARRAY_LIB_HEAD
#define ARRAY_LIB_HEAD

typedef struct {
  int min;
  int max;
} random_range;

void print_int_array(int *arr, int n_size);

int *gen_int_array(int n_size, random_range random_range);

#endif
