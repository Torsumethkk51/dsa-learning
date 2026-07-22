#include "array_lib_head.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_int_array(int *arr, int n_size) {
  for (int i = 0; i < n_size; i++) {
    printf("%d ", arr[i]);
    if (i == n_size - 1) {
      printf("\n");
    }
  }
}


int *gen_int_array(int n_size, random_range random_range) {
  int 
    n = 20, 
    m = 20, 
    rand_min = random_range.min, 
    rand_max = random_range.max, 
    i;

  int *arr = (int*)malloc(sizeof(int) * n);

  srand(time(NULL));

  for (i = 0; i < n; i++) {
    arr[i] = rand() % (rand_max - rand_min + 1) + rand_min;
  }

  return arr;
}