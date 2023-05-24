#include <stdio.h>

int main() {
  int num = 2;
  int cnt = 0;
  while (1) {
    int tmp = 1;
    if (cnt == 10) {
      break;
    }
    for (int i = 2; i < num; i++) {
      if (num != i && num % i == 0) {
        tmp = 0;
        break;
      }
    }
    if (tmp) {
      printf("%d\t", num);
      cnt++;
    }
    num++;
  }
  return 0;
}
