#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,a;
    for (r=1;r<=3;r++)
    {

        for (a=0;a<26;a++)
        {
                for (c=1;c<=2;c++)
                {
                    printf ("%c", 'A'+a);
                }
    printf(" ");

        }
    printf("\n");
    }
    return 0;
}
