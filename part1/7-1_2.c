#include <stdio.h>

int main() {
  int i, num = 1;
  scanf("%d", &i);
  while (num <= i) {
    printf("%d\n", 3 * num);
    num++;
  }
  return 0;
}