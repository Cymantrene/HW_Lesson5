#include <locale.h>

#include <stdio.h>

int
main(void) {
  int number, n1, n2, n3, n4, n5;

  scanf("%d", & number);

  n5 = number % 10;
  n4 = number / 10 % 10;
  n3 = number / 100 % 10;
  n2 = number / 1000 % 10;
  n1 = number / 10000 % 10;

  if ((n5 + n4) == 10 && (number < 99)) {
    printf("YES ");
    return 0;
  }

  if ((n5 + n4 + n3) == 10 && (number < 999)) {
    printf("YES ");
    return 0;
  }

  if ((n2 + n3 + n4 + n5 == 10) && (number < 9999)) {
    printf("YES ");
    return 0;
  }

  if ((n1 + n2 + n3 + n4 + n5 == 10) && (number < 99999)) {
    printf("YES ");
    return 0;
  }

  printf("NO ");

  return 0;
}