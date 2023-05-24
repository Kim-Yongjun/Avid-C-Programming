#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  for (int i = 9; i > 0; i--) {
    printf("%d * %d = %d\n", num, i, num * i);
  }
  return 0;
}