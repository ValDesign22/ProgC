#include <stdio.h>
#include <math.h>

int main(void) {
  int num = 0;
  printf("Entrez un nombre entier : ");
  scanf("%d", &num);
  if (num < 0) {
    printf("Erreur : le nombre doit être positif.\n");
    return 1;
  }
  double racine = sqrt(num);
  printf("La racine carrée de %d est %f\n", num, racine);
}
