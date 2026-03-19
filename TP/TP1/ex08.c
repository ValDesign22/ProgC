#include <stdio.h>

int main(void) {
  double nums[5];
  double min, max;

  printf("Entrez 5 nombres réels : ");
  for (int i = 0; i < 5; i++) {
    scanf("%lf", &nums[i]);
  }

  min = max = nums[0];
  for (int i = 1; i < 5; i++) {
    if (nums[i] < min)
      min = nums[i];
    if (nums[i] > max)
      max = nums[i];
  }

  printf("Le minimum est : %f\n", min);
  printf("Le maximum est : %f\n", max);

	return 0;
}
