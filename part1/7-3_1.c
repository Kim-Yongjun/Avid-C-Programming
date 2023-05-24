#include <stdio.h>

void func1() {
  int sum = 0;
  while (1) {
    int num;
    scanf("%d", &num);
    if (num == 0) {
      printf("%d\n", sum);
      break;
    }
    sum += num;
  }
}

void func2() {
  int num, sum = 0;
  scanf("%d", &num);
  while (num != 0) {
    sum += num;
    scanf("%d", &num);
  }
  printf("%d\n", sum);
}

int main() {
  func2();
  return 0;
}
