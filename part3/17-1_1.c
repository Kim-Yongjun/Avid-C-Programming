#include <stdio.h>

void MaxAndMin(int *arr, int size, int **a, int **b) {
  int *max;
  int *min;
  max = min = &arr[0];
  for (int i = 0; i < size; i++) {
    max = *max < arr[i] ? &arr[i] : max;
    min = *min > arr[i] ? &arr[i] : min;
  }
  *a = max;
  *b = min;
}

int main() {
  int *maxptr;
  int *minptr;
  int arr[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  MaxAndMin(arr, 5, &maxptr, &minptr);
  printf("%d %d", *maxptr, *minptr);
  return 0;
}