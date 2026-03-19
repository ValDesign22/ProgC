#include <stdio.h>

int main(void) {
  int a = 0, b = 0;
  printf("Entrez deux nombres entiers : ");
  scanf("%d %d", &a, &b);
  int temp = a;
  a = b;
  b = temp;
  printf("Après permutation : a = %d, b = %d\n", a, b);
  return 0;
}
