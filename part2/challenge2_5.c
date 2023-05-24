#include <stdio.h>

void BubbleSort(int arr[], int len) {
  int i, j;
  int tmp;
  for (i = 0; i < len; i++) {
    for (j = 0; j < (len - i - 1); j++) {
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

void DesSort(int arr[], int len) {
  int i, j;
  int tmp;
  for (i = 0; i < len; i++) {
    for (j = 0; j < (len - i - 1); j++) {
      if (arr[j] < arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

void ShowData(const int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {3, 5, 33, 2, 1, 5, 6};
  int len = sizeof(arr) / sizeof(int);
  printf("%d\n", len);
  BubbleSort(arr, len);
  ShowData(arr, len);
  DesSort(arr, len);
  ShowData(arr, len);
  return 0;
}