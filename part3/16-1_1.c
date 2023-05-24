#include <stdio.h>

int main() {
  int gugu[9][3];
  for (int i = 2; i < 5; i++) {
    for (int j = 1; j < 10; j++) {
      gugu[j][i] = i * j;
    }
  }
  for (int i = 2; i < 5; i++) {
    for (int j = 1; j < 10; j++) {
      printf("%d * %d = %2d  ", i, j, gugu[j][i]);
    }
    printf("\n");
  }
  return 0;
}