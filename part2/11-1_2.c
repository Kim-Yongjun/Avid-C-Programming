#include <stdio.h>

int main() {
  char arr[] = "Good time";
  int len = sizeof(arr) / sizeof(char);
  printf("%d %d", len, sizeof(arr));
  for (int i = 0; i < len; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
  return 0;
}