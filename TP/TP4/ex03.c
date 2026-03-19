#include <stdio.h>

void MinMaxAdr(int Tab[], int NbElt, int **pMin, int **pMax)
{
    if (NbElt <= 0) return;

    *pMin = &Tab[0];
    *pMax = &Tab[0];

    for (int i = 1; i < NbElt; i++)
    {
        if (Tab[i] < **pMin)
            *pMin = &Tab[i];
        if (Tab[i] > **pMax)
            *pMax = &Tab[i];
    }
}

int main()
{
    int T[] = {4, 7, 1, 9, 3};
    int *min, *max;

    MinMaxAdr(T, 5, &min, &max);

    printf("Min = %d, adresse = %p\n", *min, (void*)min);
    printf("Max = %d, adresse = %p\n", *max, (void*)max);

    return 0;
}
