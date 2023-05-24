#include <stdio.h>

int main() {
  int arr[5][5];
  for (int i = 0; i < 4; i++) {
    printf("국 영 수 사 순서로 점수 입력");
    scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
    arr[i][4] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
  }
  for (int i = 0; i < 4; i++) {
    arr[4][i] = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i];
  }
  arr[4][4] = arr[4][0] + arr[4][1] + arr[4][2] + arr[4][3];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}