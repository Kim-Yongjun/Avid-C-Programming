#include <stdio.h>

int maxNum(int a, int b, int c) {
  int max = a > b ? a : b;
  max = c > max ? c : max;
  return max;
}

int minNum(int a, int b, int c) {
  int min = a < b ? a : b;
  min = c < min ? c : min;
  return min;
}

int main() {
  int max, min;
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  max = maxNum(a, b, c);
  min = minNum(a, b, c);
  printf("가장 큰 수: %d, 가장 작은 수: %d\n", max, min);
  return 0;
}
