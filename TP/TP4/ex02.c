#include <stdio.h>

void Convertir1(int secondes, int *h, int *m, int *s)
{
    *h = secondes / 3600;
    secondes = secondes % 3600;

    *m = secondes / 60;
    *s = secondes % 60;
}

void Convertir2(int secondes, int resultat[3])
{
    resultat[0] = secondes / 3600;
    secondes = secondes % 3600;

    resultat[1] = secondes / 60;
    resultat[2] = secondes % 60;
}

int main()
{
    int secondes;

    printf("Entrez une durée en secondes : ");
    scanf("%d", &secondes);

    int h, m, s;
    Convertir1(secondes, &h, &m, &s);

    printf("Convertir1 : %d h %d min %d s\n", h, m, s);

    int res[3];
    Convertir2(secondes, res);

    printf("Convertir2 : %d h %d min %d s\n", res[0], res[1], res[2]);

    return 0;
}
