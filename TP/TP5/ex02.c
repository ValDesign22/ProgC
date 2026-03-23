#include <stdio.h>
#include <stdlib.h>

double *CreerTableau(int NbElts)
{
  double *tab = (double *)malloc(NbElts * sizeof(double));
  if (tab == NULL) {
    printf("Erreur d'allocation de memoire\n");
    exit(1);
  }
  return tab;
}

void SaisirTableau(double *Tab, int NbElts)
{
  for (int i = 0; i < NbElts; i++) {
    printf("Entrez l'element %d : ", i);
    scanf("%lf", &Tab[i]);
  }
}

void AfficherTableau(double *Tab, int NbElts)
{
  for (int i = 0; i < NbElts; i++) {
    printf("Tab[%d] = %lf\n", i, Tab[i]);
  }
}

void LibererTableau(double *Tab)
{
  free(Tab);
}

int main(void)
{
  int NbElts;
  printf("Entrez le nombre d'elements : ");
  scanf("%d", &NbElts);

  double *Tab = CreerTableau(NbElts);
  SaisirTableau(Tab, NbElts);
  AfficherTableau(Tab, NbElts);
  LibererTableau(Tab);

  return 0;
}
