#include <stdio.h>

int main() {
  int cnt = 0;
  while (cnt < 5) {
    int i = 0;
    while (i < cnt) {
      printf("0");
      i++;
    }
    printf("*\n");
    cnt++;
  }
  return 0;
}