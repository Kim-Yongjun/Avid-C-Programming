#include <stdio.h>

int main() {
  int sum = 0;
  int num = 2;
  do {
    sum += num;
    num += 2;
  } while (sum != 2550);

  printf("%d\n", sum);
  return 0;
}
