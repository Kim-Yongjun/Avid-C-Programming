#include <stdio.h>

int main() {
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (i + j == 9) {
        printf("%d %d는 만족함\n", i, j);
      }
    }
  }
  return 0;
}
