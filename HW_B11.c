#include <stdio.h>

#include <stdlib.h>

int main() {
  int number_start, number_finish = 0;

  scanf("%d", & number_start);
  number_finish = number_start % 10;
  number_start /= 10;
  while (number_start > 0) {
    number_finish = number_finish * 10 + number_start % 10;
    number_start /= 10;
  }
  printf("%d", number_finish);

  return 0;
}