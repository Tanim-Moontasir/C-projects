#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main()
{
    char a;
    while(a!='\r')
    {
        a= getchar();
        printf("%c", a-1);
    }
    return 0;
}
