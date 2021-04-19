#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main()
{
    char a;
    printf("input\n");

    while (a='\r')
    {
        a=getche( );
        printf (" %c ", a+1);
    }
}
