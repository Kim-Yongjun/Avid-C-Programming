#include <stdio.h>

int SquareByValue(int num) { return num * num; }

void SquareByReference(int *num) { *num *= *num; }

int main() {
  int value;
  int num, num1;
  scanf("%d", &num);
  num1 = num;
  value = SquareByValue(num);
  SquareByReference(&num1);
  printf("call_by_value: %d\ncall_by_reference: %d\n", value, num1);
  return 0;
}