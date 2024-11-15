#include <locale.h>

#include <stdio.h>

int main(void) {
  int number, n1, n2, n3, n4, n5;

  scanf("%d", & number);
  for (int i = 9; i <= number; i++) {
    n5 = i % 10;
    n4 = i / 10 % 10;
    n3 = i / 100 % 10;
    n2 = i / 1000 % 10;
    n1 = i / 10000 % 10;

    if ((n5 + n4 == n5 * n4) && (n5 * n4 != 0) && (i < 99)) printf("%d ", i);
    if ((n5 + n4 + n3 == n5 * n4 * n3) && (n5 * n4 * n3 != 0) && (i < 999))
      printf("%d ", i);
    if ((n2 + n3 + n4 + n5 == n2 * n3 * n4 * n5) && (n5 * n2 * n4 * n3 != 0) &&
      (i < 9999))
      printf("%d ", i);
    if ((n1 + n2 + n3 + n4 + n5 == n1 * n2 * n3 * n4 * n5) && (i < 99999))
      printf("%d ", i);
  }

  return 0;
}