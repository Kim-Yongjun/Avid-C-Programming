#include <stdio.h>
#include <string.h>

void ShowData(const char *arr, int len) {
  int a = 0;
  for (int i = 0; i < len / 2; i++) {
    if (arr[i] == arr[len - 1 - i]) {
      a = 1;
      continue;
    } else {
      a = 0;
      break;
    }
  }
  if (a) {
    printf("회문입니다.\n");
  } else {
    printf("회문아닙니다.\n");
  }
}

int main() {
  char *arr[50];
  int leng;
  scanf("%s", &arr);
  leng = strlen(arr);
  ShowData(arr, leng);

  return 0;
}