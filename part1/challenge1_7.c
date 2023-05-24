#include <stdio.h>

int main() {
  int a, b = 2, cnt = 0;
  scanf("%d", &a);
  while (b <= a) {
    b *= 2;
    cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}
