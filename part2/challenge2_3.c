#include <stdio.h>

void ShowData(int result[]) {
  for (int i = 0; i < 10; i++) {
    printf("%d", result[i]);
  }
  printf("\n");
}

int main() {
  int result[10];
  int i = 0, j = 9;
  for (int k = 0; k < 10; k++) {
    int num;
    scanf("%d", &num);
    if (num % 2 != 0) {
      result[i] = num;
      i++;
    } else {
      result[j] = num;
      j--;
    }
  }
  ShowData(result);
  return 0;
}