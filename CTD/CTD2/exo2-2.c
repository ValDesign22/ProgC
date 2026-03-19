#include <stdio.h>

int main(void)
{
    char c;
    printf("Entrez un caractère : ");
    scanf("%c", &c);
    while (getchar() != '\n');
    if (c >= 'a' && c <= 'z') {
        printf("Le caractère '%c' est une lettre minuscule.\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("Le caractère '%c' est une lettre majuscule.\n", c);
    } else if (c >= '0' && c <= '9') {
        printf("Le caractère '%c' est un chiffre.\n", c);
    } else {
        printf("Le caractère '%c' est un autre caractère.\n", c);
    }
    return 0;
}
