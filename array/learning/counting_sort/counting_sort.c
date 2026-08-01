#include "../../lib/array_lib_head.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 20, c = 0;
  random_range r = { 0, 20 };
  int *arr = gen_int_array(n, r);

  printf("Before sort:\n");
  print_int_array(arr, n);

  int *buckets = gen_int_array(r.max + 1, (random_range) { 0, 0 });

  for (int i = 0; i < n; i++) {
    buckets[arr[i]]++;
  }

  for (int i = 0; i < r.max + 1; i++) {
    if (buckets[i] == 0) continue;
    for (int j = 0; j < buckets[i]; j++) {
      arr[c] = i;
      c++;
    }
  }

  printf("After sort:\n");
  print_int_array(arr, n);

  free(arr);
  free(buckets);

  return 0;
}