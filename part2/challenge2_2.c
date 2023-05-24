#include <stdio.h>

int result[10];
void DtoB(int num) {
  for (int i = 9; i >= 0; i--) {
    if (num >= 1) {
      result[i] = num % 2;
      num /= 2;
    } else {
      result[i] = 0;
    }
  }
}

void ShowData(int result[]) {
  int a = 1;
  for (int i = 0; i < 10; i++) {
    if (a && result[i] == 0) {
      continue;
    }
    a = 0;
    printf("%d", result[i]);
  }
  printf("\n");
}

int main() {
  int num;
  scanf("%d", &num);
  DtoB(num);
  ShowData(result);
  return 0;
}