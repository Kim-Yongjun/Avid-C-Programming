#include <stdio.h>

int main() {
  double a, b;
  printf("실수 두개를 입력하세요: ");
  scanf("%lf %lf", &a, &b);
  printf(" + %lf\n", a + b);
  printf(" - %lf\n", a - b);
  printf(" * %lf\n", a * b);
  printf(" / %lf\n", a / b);
  return 0;
}