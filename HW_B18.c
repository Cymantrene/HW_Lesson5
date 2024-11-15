#include <stdio.h>

int main(void) {
  int number, a = 1, b = 1;

  int nextsum = a + b;

  scanf("%d", & number);
  if (number == 1) {
    printf("%d", number);
    return 0;
  }
  printf("%d %d ", a, b);

  for (int i = 3; i <= number; ++i) {
    printf("%d ", nextsum);
    a = b;
    b = nextsum;
    nextsum = a + b;
  }

  return 0;
}