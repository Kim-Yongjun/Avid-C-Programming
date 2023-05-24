#include <stdio.h>

int bitOrByte(int num, char s) {
  int tmp = 1;
  if (s == 'b') {
    for (int i = 0; i < num; i++) {
      tmp *= 2;
    }
  } else if (s == 'B') {
    for (int i = 0; i < num * 8; i++) {
      tmp *= 2;
    }
  } else {
    return 0;
  }
  printf("%d\n", tmp);
  return 1;
}

int main() {
  while (1) {
    int num;
    char s;
    printf("숫자 뒤에 단위를 적어 주세요 (비트:b // 바이트: B) ");
    scanf("%d %c", &num, &s);
    if (s == 'b' || s == "B") {
      bitOrByte(num, s);
      break;
    };
  };
  return 0;
}