#include <stdio.h>

#include <stdlib.h>

int check_number(int);

int main() {
  int number;

  scanf("%d", & number);
  if (check_number(number)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}

int check_number(int number) {
  int digit;
  while (number != 0) {
    digit = number % 10;
    if (digit % 2 != 0) return 0;
    number /= 10;
  }
  return 1;
}