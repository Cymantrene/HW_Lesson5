#include <stdio.h>

#include <stdlib.h>

int main(void) {

  unsigned int number, count_chet = 0, count_nchet = 0;
  scanf("%d", & number);
  while (number > 0) {
    char last_temp = number % 10;
    if ((last_temp % 2) == 0) count_chet++;
    else count_nchet++;
    number /= 10;
  }
  printf("%d %d\n", count_chet, count_nchet);
  return 0;
}