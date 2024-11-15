#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, a = 0, b = 0, count = 0;

  scanf("%d", &number);
  if (number == 0) {
    printf("YES\n");
    return 0;
  }
  while (number) {
    a = number % 10;
    number /= 10;
    b = number % 10;
    if (a > b) {
      count++;           
    } else {
      printf("NO\n");
      return 0;
    }
  }
  if (count) printf("YES\n");
  return 0;
}
