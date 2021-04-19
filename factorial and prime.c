#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i, counter=1;
    scanf ("%d", &a);
    for (i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            printf ("%d factor is %d\n", counter++,i);
        }
        else continue;
    }
    if (counter>3){
        printf ("not prime");
    }
    else printf("prime");


    return 0;
}
