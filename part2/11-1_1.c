#include <limits.h>
#include <stdio.h>

int main() {
  int arr[5];
  int max = INT_MIN, min = INT_MAX, sum = 0;
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 5; i++) {
    sum += arr[i];
    max = max < arr[i] ? arr[i] : max;
    min = min > arr[i] ? arr[i] : min;
  }
  printf("최댓값: %d, 최솟값: %d, 총 합: %d\n", max, min, sum);
  return 0;
}