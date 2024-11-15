#include <math.h>

#include <stdio.h>

int
main(void) {
  int n, i, maxval;
  scanf("%i", & n);
  if (n == 1) {
    printf("NO");
    return 0;
  }
  maxval = sqrt(n);
  for (i = 2; i <= maxval; i++) {
    if (n % i == 0) {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}