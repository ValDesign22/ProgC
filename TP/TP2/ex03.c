#include <stdio.h>

int main(void) {
  int n;
  double note, somme = 0.0;

  printf("Combien de notes voulez-vous saisir ? ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    do {
      printf("Entrez la note %d (entre 0 et 20) : ", i);
      scanf("%lf", &note);
      if (note < 0 || note > 20) {
        printf("Note invalide. Veuillez entrer une note entre 0 et 20.\n");
      }
    } while (note < 0 || note > 20);

    somme += note;
  }

  double moyenne = somme / n;
  printf("La moyenne des notes est : %.2f\n", moyenne);

  return 0;
}
