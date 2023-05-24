#include <stdio.h>

int main() {
  int kor, mat, eng;
  double avg;
  scanf("%d %d %d", &kor, &mat, &eng);
  avg = (kor + mat + eng) / 3.0;
  if (avg >= 90.0) {
    printf("A\n");
  } else if (avg >= 80.0) {
    printf("B\n");
  } else if (avg >= 70.0) {
    printf("C\n");
  } else if (avg >= 50.0) {
    printf("C\n");
  } else {
    printf("F\n");
  };
  return 0;
}
