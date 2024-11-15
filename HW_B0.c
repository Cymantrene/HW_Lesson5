#include <stdio.h>
#include <stdlib.h>
// #include <windows.h>
#include <inttypes.h>
#include <locale.h>

int
main ()
{
  // setlocale(LC_ALL, "en_US.UTF-8");
  // SetConsoleCP(1251);
  // SetConsoleOutputCP(1251);
  int n1, n2, sum;
  scanf ("%d%d", &n1, &n2);
  sum = n1 + n2;

  printf ("%d", sum);
  return 0;
}
