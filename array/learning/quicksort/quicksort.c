#include "../../lib/array_lib_head.h"
#include <stdio.h>

void quicksort(int *arr, int start, int end) {
  if (end - start <= 1) return;

  int ipivot = end - 1;
  int pivot = arr[ipivot];
  int i = start - 1;

  for (int j = start; j < ipivot; j++) {
    if (arr[j] < pivot) {
      i++;
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }

  int temp = arr[i + 1];
  arr[i + 1] = pivot;
  arr[ipivot] = temp;

  ipivot = i + 1;

  quicksort(arr, start, ipivot);
  quicksort(arr, ipivot + 1, end);
}

int main() {
  int n = 20;
  int *arr = gen_int_array(n, (random_range) { 0, 1000 });

  printf("Before sort:\n");
  print_int_array(arr, n);

  quicksort(arr, 0, n);

  printf("After sort:\n");
  print_int_array(arr, n);

  return 0;
}