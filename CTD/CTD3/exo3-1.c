#include <stdio.h>

int main(void)
{
    #define MAX_SIZE 100
    #define END_CHAR '$'

    char input[MAX_SIZE];
    int i = 0;
    char c;

    printf("Entrez des caractères (terminer par '%c') :\n", END_CHAR);
    scanf("%c", &c);
    while (c != END_CHAR && i < MAX_SIZE) {
        input[i] = c;
        i++;
        scanf("%c", &c);
    }

    printf("Caractères a l'envers :\n");
    while (i > 0) {
        i--;
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
