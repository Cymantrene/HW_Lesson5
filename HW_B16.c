#include <stdio.h>

#include <stdlib.h>

#include<math.h>

int nod(int, int);
int main(void) {
  int a, b;

  scanf("%d%d", & a, & b);
  printf("%d", nod(a, b));
  return 0;
}
int nod(int a, int b) {
  int c;
  while (b) {
    c = a % b;
    a = b;
    b = c;
  }
  return fabs(a);
}