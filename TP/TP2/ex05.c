#include <stdio.h>

int main(void) {
  int i, j, N;

  do {
    printf("Entrez N (0 <= N <= 18) : ");
    scanf("%d", &N);
    if (N < 0 || N > 18)
      printf("N doit être compris entre 0 et 18.\n");
  } while (N < 0 || N > 18);

  printf("  x |");
  for (i = 0; i <= N; i++) {
    printf("%4d", i);
  }
  printf("\n");

  printf("-----");
  for (i = 0; i <= N; i++)
    printf("----");
  printf("\n");

  for (i = 0; i <= N; i++) {
    printf("%3d |", i);
    for (j = 0; j <= N; j++) {
      printf("%4d", i * j);
    }
    printf("\n");
  }

  return 0;
}
