#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double mat[10][10];
    const double epsilon = 1e-10;

    printf("Ordre de la matrice : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ligne %d : ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    int symetrique = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fabs(mat[i][j] - mat[j][i]) >= epsilon) {
                symetrique = 0;
                break;
            }
        }
        if (!symetrique) break;
    }

    if (symetrique)
        printf("Cette matrice est symetrique.\n");
    else
        printf("Cette matrice n'est pas symetrique.\n");

    return 0;
}
