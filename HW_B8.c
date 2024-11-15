#include <stdio.h>

#include <stdlib.h>

int main(void) {
  int number, count;
  scanf("%d", & number);
  while (number) {
    count += abs(number % 10) == 9;
    number /= 10;
  }
  if (count == 1)
    printf("YES");
  else
    printf("NO");

  return 0;
}