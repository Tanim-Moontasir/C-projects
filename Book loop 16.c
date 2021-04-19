#include <stdio.h>

int main()
{
    int a;
    for (a=1;a<=100;a++)
    {
        if (a==10) break;
        else printf("%d",a);
    }

  getch();
}
