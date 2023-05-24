#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d나누기%d의 몫: %d \t나머지:%d\n", a, b, a / b, a % b);
  return 0;
}