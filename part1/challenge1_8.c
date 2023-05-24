#include <stdio.h>
int squre(int num) {
  if (num == 0) {
    return 1;
  }
  return 2 * squre(num - 1);
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", squre(a));
  return 0;
}
