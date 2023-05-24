#include <stdio.h>

void ShowData(const int *ptr) {
  int *rptr = ptr;
  printf("%d ", *rptr);
  *rptr = 20;
}

/*
  *ptr을 const로 선언하여 변수의 변경 가능성을 막았지만
  *rptr의 경우 const선언이 없다.
  이로 인해 본래 의도의 결과를 얻을 수 없다.
  이후 *ptr의 값은 10이 아닌 20이 된다.
*/

int main() {
  int num = 10;
  int *ptr = &num;
  ShowData(ptr);
  return 0;
}