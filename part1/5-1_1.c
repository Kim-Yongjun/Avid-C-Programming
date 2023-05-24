#include <stdio.h>

int main() {
  int ux, uy, dx, dy;
  printf("상단 x와 y 좌표를 입력하세요: ");
  scanf("%d %d", &ux, &uy);
  printf("하단 x와 y 좌표를 입력하세요: ");
  scanf("%d %d", &dx, &dy);
  printf("직사각형의 넓이는: %d\n2", (dx - ux) * (dy - uy));
  return 0;
}