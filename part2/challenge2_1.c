#include <stdio.h>

void EvenNum(const int *arr, int len) {
  int i;
  printf("짝수: ");
  for (i = 0; i < len; i++) {
    if (arr[i] % 2 == 0) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
}

void OddNum(const int *arr, int len) {
  int i;
  printf("홀수: ");
  for (i = 0; i < len; i++) {
    if (arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
}

int main() {
  int num[10];
  for (int i = 0; i < 10; i++) {
    printf("입력: ");
    scanf("%d", &num[i]);
  }
  OddNum(&num, 10);
  EvenNum(&num, 10);
  return 0;
}