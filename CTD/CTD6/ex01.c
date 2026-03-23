#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int NbElts;
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &NbElts);

    double *tab = malloc(NbElts * sizeof(double));

    if (tab != NULL) {
      for (int i = 0; i < NbElts; i++) {
        printf("Entrez l'élément %d: ", i);
        scanf("%lf", &tab[i]);
      }

      for (int i = 0; i < NbElts; i++)
        printf("%lf ", tab[i]);
    }
    free(tab);
    return 0;
}
