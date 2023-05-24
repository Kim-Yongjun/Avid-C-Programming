#include <stdio.h>

int main() {
  int cnt, sum = 0;
  scanf("%d", &cnt);
  for (int i = 0; i < cnt; i++) {
    int t = 0;
    scanf("%d", &t);
    sum += t;
  }
  printf("%d\n", sum);
  return 0;
}