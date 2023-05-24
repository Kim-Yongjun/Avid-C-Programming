#include <stdio.h>

void oct(int a) {
  int result[2] = {0};
  int cnt = 0;
  int m = a;
  while (a > 8) {
    result[cnt] = a % 8;
    a /= 8;
    cnt++;
  }
  result[cnt] = a;

  printf("%d를 8진수로 나타내면: ", m);
  for (int i = 1; i >= 0; i--) {
    printf("%d", result[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
  for (int i = 0; i < 13; i++) {
    oct(a[i]);
  }
  return 0;
}