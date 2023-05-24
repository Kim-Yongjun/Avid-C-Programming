#include <stdio.h>

int main() {
  int num = 10;
  int* ptr1 = &num;
  int* ptr2 = ptr1;

  (*ptr1)++;
  (*ptr2)++;  // ptr2는 ptr1과 같은 의미;; 따라서 같은 num의 주소를 가짐; 따라서 12;
  printf("%d\n", ptr2);
  return 0;
}