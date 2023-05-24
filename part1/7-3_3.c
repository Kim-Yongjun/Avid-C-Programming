#include <stdio.h>

int main() {
  int mul = 1;
  int num = 2;
  do {
    do {
      printf("%d * %d = %d\t", num, mul, num * mul);
      num++;
    } while (num <= 9);
    mul++;
    num = 2;
    printf("\n");
  } while (mul <= 9);
  return 0;
}
