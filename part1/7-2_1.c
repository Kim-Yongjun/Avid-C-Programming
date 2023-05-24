#include <stdio.h>

int main() {
  int sum = 0;
  int cnt = 0;
  while (cnt < 5) {
    int t = 0;
    while (t < 1) {
      scanf("%d", &t);
    }
    sum += t;
    cnt++;
  }

  printf("%d\n", sum);

  return 0;
}