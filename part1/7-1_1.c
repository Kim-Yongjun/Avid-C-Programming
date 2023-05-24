#include <stdio.h>

int main() {
  int i, num = 0;
  scanf("%d", &i);
  while (num < i) {
    printf("Hello World\n");
    num++;
  }
  return 0;
}