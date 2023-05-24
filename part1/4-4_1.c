#include <stdio.h>

int main() {
  int i;
  printf("원하는 정수를 입력하세요");
  scanf("%d", &i);
  printf("\n역수는 %d\n", ~i + 1);

  return 0;
}