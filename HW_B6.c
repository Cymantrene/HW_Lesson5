#include <stdio.h>
#include <stdlib.h>

int
main ()
{

  int a, k = 0;

  scanf ("%d", &a);

  while (a)
    {
      if ((a / 10) % 10 == a % 10)
        k = 1;
      a /= 10;
    }
  if (k == 1)
    printf ("YES\n");
  else
    printf ("NO\n");
  return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, temp1, temp2;
  scanf("%d", &number);
  while (number) {
    temp1 = number % 10;
    number /= 10;
    temp2 = number % 10;
    if (temp1 == temp2) {
      printf("YES");
      return 0;
    }
  }
  printf("NO");

  return 0;
}
*/
