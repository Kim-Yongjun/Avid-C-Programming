#include <stdio.h>

int main() {
  int st, nd;
  int sum = 0;
  scanf("%d %d", &st, &nd);
  for (st; st <= nd; st++) {
    sum += st;
  }
  printf("%d\n", sum);
  return 0;
}
