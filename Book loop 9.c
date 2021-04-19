#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main()
{
    char a;
    printf("type q\n");
    do
    {
        a=getchar();

    }while (a!='q');
    printf ("found q");

}
