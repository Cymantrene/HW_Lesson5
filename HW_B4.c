#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
    //setlocale(LC_ALL, "en_US.UTF-8");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    int number;
    scanf("%d", &number);

    if ( (number > 99) && (number < 1000) )
    {
        printf("YES");
    }
    else printf("NO");

    return 0;
}

