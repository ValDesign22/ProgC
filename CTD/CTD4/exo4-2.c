#include <stdio.h>

int Tri2(int a, int b) {
    return (a < b) ? a : b;
}

int main(void) {
    int a, b;
    printf("Entrez deux nombres: ");
    scanf("%d %d", &a, &b);
    int result = Tri2(a, b);
    printf("Le plus petit des deux nombres est: %d\n", result);
    return 0;
}
