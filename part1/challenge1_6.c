#include <stdio.h>

int main() {
  int s;
  scanf("%d", &s);
  printf("[h: %d, m: %d, s: %d]\n", ((s / 60) / 60), (s / 60) % 60, s % 60);
  return 0;
}
