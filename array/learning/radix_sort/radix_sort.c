#include "../../lib/array_lib_head.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  int n = 20;
  int *arr = gen_int_array(n, (random_range) { 0, 1000 });
  int max = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Before sort:\n");
  print_int_array(arr, n);

  for (int exp = 1; max / exp > 0; exp *= 10) {
    int temp[n];
    int counter[10]= {0};

    for (int i = 0; i < n; i++) {
      int digit = (arr[i] / exp) % 10;
      counter[digit]++;
    }

    for (int i = 1; i < 10; i++) {
      counter[i] += counter[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
      int digit = (arr[i] / exp) % 10;
      temp[counter[digit] - 1] = arr[i];
      counter[digit]--;
    }

    for (int i = 0; i < n; i++) {
      arr[i] = temp[i];
    }
  }

  printf("After sort:\n");
  print_int_array(arr, n);

  free(arr);

  return 0;
}