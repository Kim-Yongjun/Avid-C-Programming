#include <stdio.h>

int main() {
  // cream 500, shrimp 700, coke 400
  // total : 1900
  for (int a = 0; a < 5; a++) {
    for (int b = 0; b < 3; b++) {
      for (int c = 0; c < 6; c++) {
        int total = 1900;
        total = total - 500 * a - 700 * b - 400 * c;
        if (total == 0) {
          printf("크림빵: %d, 새우깡: %d, 콜라: %d 살 수 있다.\n", a + 1, b + 1, c + 1);
        }
      }
    }
  }

  return 0;
}
