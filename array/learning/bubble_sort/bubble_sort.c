#include "../../lib/array_lib_head.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  int *arr = gen_int_array(n, (random_range) { 1, 1000 });

  printf("Before sorting:\n");
  print_int_array(arr, n);

  for (int i = 0; i < n; i++) {
    bool swapped = false;
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    if (!swapped) break;
  }

  printf("After sorting:\n");
  print_int_array(arr, n);

  free(arr);

  return 0;
}