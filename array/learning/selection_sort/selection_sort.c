#include "../../lib/array_lib_head.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  int *arr = gen_int_array(n, (random_range) { 1, 1000 });

  printf("Before sort:\n");
  print_int_array(arr, n);

  for (int i = 0; i < n; i++) {
    int min_index = i;

    for (int j = i; j < n; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }

  printf("After sort:\n");
  print_int_array(arr, n);

  free(arr);

  return 0;
}