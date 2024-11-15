#include <stdio.h>

#include <stdlib.h>

int main(void) {
  char min = 9, max = 0;
  int number;
  scanf("%d", & number);
  while (number) {
    char last_temp = number % 10;
    if (last_temp < min) min = last_temp;
    if (last_temp > max) max = last_temp;
    number /= 10;
  }
  printf("%d %d\n", min, max);
  return 0;
}