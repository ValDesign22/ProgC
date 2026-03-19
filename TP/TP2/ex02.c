#include <stdio.h>

#define END_CHAR '#'

int main(void) {
  char c;
  int lettres = 0, voyelles = 0;

  printf("Entrez un texte (terminez par '%c') : ", END_CHAR);
  while ((c = getchar()) != END_CHAR) {
    if (c >= 'a' && c <= 'z') {
      lettres++;
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        voyelles++;
      }
    }
  }

  printf("Nombre de lettres : %d\n", lettres);
  printf("Nombre de voyelles : %d\n", voyelles);

	return 0;
}
