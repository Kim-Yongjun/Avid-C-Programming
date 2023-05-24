#include <stdio.h>

int fibo(int n) {
  int a = 0, b = 1, tmp;
  if (n == 1) {
    printf("%d\t", a);
  } else if (n == 2) {
    printf("%d\t%d\t", a, b);
  } else {
    printf("%d\t%d\t", a, b);
    for (int i = 0; i < n - 2; i++) {
      printf("%d\t", a + b);
      tmp = a;
      a = b;
      b = tmp + b;
    }
  }
}

int main() {
  int num;
  scanf("%d", &num);
  fibo(num);
  return 0;
}
