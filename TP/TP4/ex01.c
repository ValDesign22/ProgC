#include <stdio.h>

void AfficherTab(int Tab[], int NbElt)
{
  if (NbElt <= 0) return;

  for (int i = 0; i < NbElt; i++)
    printf("%d ", Tab[i]);

  printf("\n");
}

int Min(int Tab[], int NbElt)
{
  if (NbElt <= 0) return 0;

  int min = Tab[0];

  for (int i = 1; i < NbElt; i++)
  {
    if (Tab[i] < min)
      min = Tab[i];
  }

  return min;
}

int Max(int Tab[], int NbElt)
{
  if (NbElt <= 0) return 0;

  int max = Tab[0];

  for (int i = 1; i < NbElt; i++)
  {
    if (Tab[i] > max)
      max = Tab[i];
  }

  return max;
}

void MinMax(int Tab[], int NbElt, int *pMin, int *pMax)
{
  if (NbElt <= 0) return;

  *pMin = Tab[0];
  *pMax = Tab[0];
  for (int i = 1; i < NbElt; i++)
  {
    if (Tab[i] < *pMin)
      *pMin = Tab[i];
    if (Tab[i] > *pMax)
      *pMax = Tab[i];
  }
}

int SupprimerVal(int Tab[], int *pNbElt, int Val)
{
  int i, j = 0;
  int nbSuppr = 0;

  for (i = 0; i < *pNbElt; i++)
  {
    if (Tab[i] != Val)
      Tab[j++] = Tab[i];
    else
      nbSuppr++;
  }

  *pNbElt = j;

  return nbSuppr;
}

int main()
{
    int T[] = {4, 7, 1, 9, 3, 1, 7};
    int NbElt = 7;

    printf("Tableau initial : ");
    AfficherTab(T, NbElt);

    printf("Min (fonction Min) = %d\n", Min(T, NbElt));
    printf("Max (fonction Max) = %d\n", Max(T, NbElt));

    int min, max;
    MinMax(T, NbElt, &min, &max);
    printf("MinMax -> Min = %d, Max = %d\n", min, max);

    int val;
    printf("Valeur à supprimer : ");
    scanf("%d", &val);

    int nbSuppr = SupprimerVal(T, &NbElt, val);

    printf("Nombre de suppressions : %d\n", nbSuppr);
    printf("Tableau après suppression : ");
    AfficherTab(T, NbElt);

    return 0;
}
