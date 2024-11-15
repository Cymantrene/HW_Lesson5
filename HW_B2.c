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
  int a, b;
  // printf("Please Input two number type is int a and b on condition a<=b!\n");
  scanf ("%d%d", &a, &b);
  if (a > b || (a > 100 || b > 100))
    {
      printf ("ERROR! Please Input two number type is int a and b on condition "
              "a<=b!\n");
      scanf ("%d%d", &a, &b);
    }

  if (!(a > b))
    {
      do
        {
          printf ("%d ", my_pow (a, 2));
          a++;
        }
      while (a <= b);
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
