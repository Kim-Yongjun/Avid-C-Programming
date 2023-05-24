#include <stdio.h>

int main() {
  char arr[40];
  int idx = 0, len = 0;
  scanf("%s", arr);
  while (arr[idx] != 0) {
    len++;
    idx++;
  }
  for (int i = 0; i < len / 2; i++) {
    char tmp;
    tmp = arr[i];

    arr[i] = arr[len - 1 - i];

    arr[len - 1 - i] = tmp;
  }
  printf("%s\n", arr);
  return 0;
}