#include <stdio.h>

int main(void) {
  unsigned char num = 0;
  printf("Entrez un nombre entier : ");
  scanf("%hhu", &num);
  unsigned char carre = num * num;
  printf("Le carré de %d est %d\n", num, carre);
  // avec 8 on obtient 64 mais avec 16 on obtient 0 car le résultat dépasse la capacité de stockage d'un unsigned char (255 < 16*16=256) et provoque un débordement, ce qui entraîne une valeur incorrecte.
  return 0;
}
