#include <stdio.h>

int main() {
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (j % 2 != 0) {
        continue;
      }
      if (i > j) {
        printf("            \t");
        continue;
      }
      printf("%d * %d = %d\t", j, i, j * i);
    }
    printf("\n");
  }
  return 0;
}
