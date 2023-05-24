#include <stdio.h>

int main() {
  int a, b, c, result;
  scanf("%d %d %d", &a, &b, &c);
  result = (a - b) * (b + c) * (c % a);
  printf("(%d-%d)*(%d+%d)*(%d%%%d) = %d\n", a, b, b, c, c, a, result);
  return 0;
}