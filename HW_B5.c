#include <stdio.h>

#include <stdlib.h>
// #include <windows.h>
// #include <locale.h>
// #include <inttypes.h>

int
main ()
{
  // setlocale(LC_ALL, "en_US.UTF-8");
  // SetConsoleCP(1251);
  // SetConsoleOutputCP(1251);
  int number, sum;
  scanf ("%d", &number);
  if (number == 0)
    {
      sum = 0;
      printf ("%d", sum);
      return 0;
    }
  while (number < 0)
    printf ("ERROR!");
  while (number > 0)
    {
      sum = sum + number % 10;
      number /= 10;
    }
  printf ("%d\n", sum);

  return 0;
}
/*
int main() {
  int number, sum = 0;
  scanf("%d", &number);
  if (number >= 0) {
    while (number) {
      sum += number % 10;
      number /= 10;
    }
    printf("%d", sum);
  }

  return 0;
}
*/