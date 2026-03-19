#include <stdio.h>

int main(void) {
  int temp_f = 0;
  printf("Entrez une température en degrés Fahrenheit : ");
  scanf("%d", &temp_f);
  int temp_c = (temp_f - 32) * 5 / 9;
  printf("La température en degrés Celsius est : %d\n", temp_c);
}
