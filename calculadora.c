
#include <stdio.h>

int main() {
  
  int sum1;
  int sum2;
  printf("Haz una suma: ");
  scanf("%d", &sum1);
  printf("%d + ", sum1);
  scanf("%d", &sum2);
  printf("La suma es %d", (sum1 + sum2));
}
