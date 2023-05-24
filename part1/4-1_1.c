#include <stdio.h>

void binary(int a) {
  int result[5] = {0};
  int cnt = 0;
  int m = a;
  while (a > 1) {
    result[cnt] = a % 2;
    a /= 2;
    cnt++;
  }
  if (a == 1) {
    result[cnt] = 1;
  }
  printf("%d를 2진수로 나타내면: ", m);
  for (int i = 4; i >= 0; i--) {
    printf("%d", result[i]);
  }
  printf("\t");
}

void hex(int a) {
  char result[] = "00";
  int cnt = 0;
  int m = a;
  char hexa[] = "0123456789ABCDEF";
  while (a >= 16) {
    result[cnt] = hexa[a % 16];
    a /= 16;
    cnt++;
  }
  result[cnt] = hexa[a];
  printf("%d를 16진수로 나타내면: ", m);
  for (int i = 1; i >= 0; i--) {
    printf("%c", result[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  for (int i = 0; i < 13; i++) {
    binary(a[i]);
    hex(a[i]);
  }
  return 0;
}