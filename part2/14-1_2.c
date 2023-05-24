#include <stdio.h>

void Swap3(int *num1, int *num2, int *num3) {
  int tmp;
  tmp = *num1;
  *num1 = *num2;
  *num2 = *num3;
  *num3 = tmp;
}

int main() {
  int num1, num2, num3;
  scanf("%d %d %d", &num1, &num2, &num3);

  Swap3(&num1, &num2, &num3);

  printf("SWAP\n%d %d %d\n", num1, num2, num3);
  return 0;
}