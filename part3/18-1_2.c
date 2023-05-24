#include <stdio.h>

void SimpleFuncOne(???,???){};
void SimpleFuncTwo(???,???){};

/*
  ???에 들어갈 매개 변수는?
  void SimpleFuncOne(int *a,int *b){};
  void SimpleFuncTwo(int (*a)[4],int (*b)[4]){};
*/

int main() {
  int arr1[3];
  int arr2[4];
  int arr3[3][4];
  int arr4[2][4];

  SimpleFuncOne(arr1, arr2);
  SimpleFuncTwo(arr3, arr4);
  return 0;
}