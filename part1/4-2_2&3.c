#include <stdio.h>

void binaryToInt(char d[]) {
  int num = 0;
  int cnt = 1;
  for (int i = 8; i >= 0; i--) {
    if (d[i] == '1') {
      num += cnt;
    };
    cnt *= 2;
  }
  printf("%d\n", num);
}

int main() {
  char aa[] = "b00000010";
  binaryToInt(aa);

  return 0;
}