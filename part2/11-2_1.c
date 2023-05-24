#include <stdio.h>

int main() {
  char arr[40];
  int idx = 0, len = 0;
  scanf("%s", arr);
  while (arr[idx] != 0) {
    len++;
    idx++;
  }
  printf("%d\n", len);
  return 0;
}