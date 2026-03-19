#include <stdio.h>

double carre(double input) {
    return input * input;
}

int main(void) {
    double input;
    printf("Entrez un nombre: ");
    scanf("%lf", &input);
    double result = carre(input);
    printf("Le carré de %.2lf est %.2lf\n", input, result);
    return 0;
}
