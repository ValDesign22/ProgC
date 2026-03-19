#include <stdio.h>

int main(void)
{
    #define N 3

    double M[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    double v[N] = {1, 2, 3};
    double r[N];

    for (int i = 0; i < N; i++) {
        r[i] = 0;
        for (int j = 0; j < N; j++) {
            r[i] += M[i][j] * v[j];
        }
    }

    printf("Matrice M :\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", M[i][j]);
        }
        printf("\n");
    }

    printf("Vecteur v :\n");
    for (int i = 0; i < N; i++) {
        printf("%f\n", v[i]);
    }

    printf("Résultat du produit de la matrice par le vecteur :\n");
    for (int i = 0; i < N; i++) {
        printf("%f\n", r[i]);
    }

    return 0;
}
