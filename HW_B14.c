#include <stdio.h>

#include <stdlib.h>

int main(void) {

  unsigned int number, count = 0;
  do {
    scanf("%d", & number);
    if (number) count++;

  } while (number != 0);

  printf("%d", count);
  return 0;

  return 0;
}