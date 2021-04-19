#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main()
{
    char a;
    int d,v;

    printf("input distance and speed respectively, then press x to stop and any key to continue\n");
    while (a!='x')
    {
        scanf("%d %d %c", &d, &v, &a );
        printf (" %f\n", 1.0*d/v);
    }
}
