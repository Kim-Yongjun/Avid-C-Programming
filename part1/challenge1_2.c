#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int i, j;
  i = a < b ? a : b;
  j = a > b ? a : b;
  for (int k = 1; k < 10; k++) {
    for (int p = i; p < j + 1; p++) {
      printf("%d * %d = %d\t", p, k, p * k);
    }
    printf("\n");
  }
  return 0;
}
