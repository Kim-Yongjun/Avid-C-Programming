#include <stdio.h>

int CelToFah(double a) { return 1.8 * a + 32; }

int FahToCel(double a) { return (a - 32) / 1.8; }

int main() {
  double result, a;
  int b;
  scanf("%d %lf", &b, &a);
  if (b == 1) {
    result = FahToCel(a);
    printf("화씨 %lf는 섭씨로 %lf이다.\n", a, result);
  } else {
    result = CelToFah(a);
    printf("섭씨 %lf는 화씨로 %lf이다.\n", a, result);
  }
  return 0;
}
