#include <stdio.h>

int main(void) {
  int num = 0;
  printf("Entrez un nombre entier : ");
  scanf("%d", &num);
  int carre = num * num;
  printf("Le carré de %d est %d\n", num, carre);
}
