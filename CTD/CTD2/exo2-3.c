#include <stdio.h>

int main(void)
{
    int sum = 0, num;

    printf("Entrez des entiers (terminer par un entier négatif) :\n");

    scanf("%d", &num);
    while (num >= 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("La somme des entiers est : %d\n", sum);
    return 0;
}
