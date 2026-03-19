#include <stdio.h>

#define MAX_SIZE 100
#define END_CHAR '$'

int main(void) {
    float input[MAX_SIZE];
    int count = 0;
    float sum = 0.0;
    float average;

    printf("Entrez les valeurs (terminant par '%c') :\n", END_CHAR);

    while (count < MAX_SIZE) {
        if (scanf("%f", &input[count]) == 1) {
            sum += input[count];
            count++;
        } else {
            char c;
            scanf("%c", &c);
            if (c == END_CHAR) break;
        }
    }

    if (count == 0) {
        printf("Aucune valeur entrée.\n");
        return 1;
    }

    average = sum / count;
    printf("\nMoyenne : %.2f\n", average);

    printf("Valeurs strictement supérieures à la moyenne :\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (input[i] > average) {
            printf("%.2f\n", input[i]);
            found = 1;
        }
    }

    if (!found)
        printf("Aucune valeur supérieure à la moyenne.\n");

    return 0;
}
