#include <stdio.h>

int main(void) {
  int ligne;

  printf("Entrez un nombre de lignes : ");
  scanf("%d", &ligne);

  for (int i = 1; i <= ligne; i++) {
    for (int j = 1; j <= ligne - i; j++)
      printf(" ");
    for (int k = 1; k <= 2 * i - 1; k++)
      printf("*");
    printf("\n");
  }

	return 0;
}
