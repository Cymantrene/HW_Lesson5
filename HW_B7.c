#include <stdio.h>

#include <stdlib.h>

#include <stdint.h>

int scan_two_digits(unsigned int);

int main(void) {
  unsigned int number;

  while (scanf("%u", & number) == 1)
    printf("%s\n", (scan_two_digits(number)) ? "YES" : "NO");

  return 0;
}

int scan_two_digits(unsigned int number) {
  if (number > 9) {
    unsigned int last = number % 10;
    unsigned int left = number / 10;

    while (left) {
      if (last == (left % 10))
        return 1;
      left /= 10;
    }

    return scan_two_digits(number / 10);
  } else
    return 0;
}