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
  int value;
  scanf ("%d", &value);

  for (int i = 1; i <= value; i++)
    printf ("%d %d %d\n", i, my_pow (i, 2), my_pow (i, 3));

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
