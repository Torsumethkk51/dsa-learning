#include "../../lib/array_lib_head.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  int *arr = gen_int_array(n, (random_range) { 0, 1000 });

  printf("Before sort:\n");
  print_int_array(arr, n);

  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      } else {
        break;
      }
    }
  }

  printf("After sort:\n");
  print_int_array(arr, n);

  free(arr);

  return 0;
}