#include <stdio.h>

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int *ptr = &arr[5];
  int *ptrr = &arr[0];
  for (int i = 0; i < 3; i++) {
    int tmp = *ptr;
    *ptr-- = *ptrr;
    *ptrr++ = tmp;
  }
  for (int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}