#include <stdio.h>

int main() {
    char ligne[81];
    int nb = 0;
    char c;

    printf("Tapez une ligne (max 80 caractères) : ");
    while ((c = getchar()) != '\n') {
        if (nb < 80) {
            ligne[nb] = c;
            nb++;
        }
    }
    ligne[nb] = '\0';

    printf("Texte saisi : %s\n", ligne);
    printf("Nombre de caractères : %d\n", nb);

    printf("Texte inversé : ");
    for (int i = nb - 1; i >= 0; i--) {
        putchar(ligne[i]);
    }
    printf("\n");

    int debut = 0;
    int fin = nb - 1;
    int palindrome = 1;

    while (debut < fin) {
        while (ligne[debut] == ' ' && debut < fin) debut++;
        while (ligne[fin] == ' ' && debut < fin) fin--;

        if (ligne[debut] != ligne[fin]) {
            palindrome = 0;
            break;
        }
        debut++;
        fin--;
    }

    if (palindrome)
        printf("La ligne est un palindrome.\n");
    else
        printf("La ligne n'est pas un palindrome.\n");

    return 0;
}
