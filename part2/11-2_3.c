#include <stdio.h>

int main() {
  char arr[30];
  int result = 0;
  int idx = 0, len = 0;
  scanf("%s", arr);
  while (arr[idx] != 0) {
    len++;
    idx++;
  }
  for (int i = 0; i < len; i++) {
    result = result > arr[i] ? result : arr[i];
  }
  printf("%c\n", result);
  return 0;
}