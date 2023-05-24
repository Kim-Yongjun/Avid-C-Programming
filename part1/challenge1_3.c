#include <stdio.h>

int main() {
  int a, b, tmp;
  scanf("%d %d", &a, &b);
  do {
    tmp = a;
    a = b % a;
    b = tmp;
  } while (a != 0);

  printf("%d\n", b);
  return 0;
}
