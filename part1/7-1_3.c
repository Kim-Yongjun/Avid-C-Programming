#include <stdio.h>

int main() {
  int sum = 0;
  while (1) {
    int i;
    scanf("%d", &i);
    if (i == 0) {
      printf("%d\n", sum);
      break;
    }
    sum += i;
  }
  return 0;
}