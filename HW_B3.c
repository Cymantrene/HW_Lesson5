#include <stdio.h>
#include <stdlib.h>

#include <inttypes.h>
#include <locale.h>

int my_pow (int x, int y);

int
main ()
{
  // setlocale(LC_ALL, "en_US.UTF-8");
  // SetConsoleCP(1251);
  // SetConsoleOutputCP(1251);
  int a, b, sum = 0;
  // printf("Please Input two number type is int a and b on condition a<=b!\n");
  scanf ("%d%d", &a, &b);
  if (a > b)
    {
      printf ("ERROR! Please Input two number type is int a and b on condition "
              "a<=b!\n");
      scanf ("%d%d", &a, &b);
    }

  if (!(a > b))
    {
      do
        {
          sum += my_pow (a, 2);
          a++;
        }
      while (a <= b);
      printf ("%d", sum);
    }

  return 0;
}

int
my_pow (int x, int y)
{
  int i, rezultat = 1;

  for (i = 0; i < y; i++)
    {
      rezultat *= x;
    }

  return rezultat;
}
/*

int eq_cube(int, int);

int main() {
  int a, b, temp = 0;
  scanf("%d%d", &a, &b);
  while (a > b || (a > 100 || b > 100)) printf("ERROR!");
  do {
    temp += (eq_cube(a, 2));

    a++;
  } while (a <= b);
  printf("%d ", temp);

  return 0;
}

int eq_cube(int x, int y) {
  int rezult = 1;
  for (int i = 0; i < y; i++) {
    rezult *= x;
  }
  return rezult;
}
*/
