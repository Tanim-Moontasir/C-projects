#include <stdio.h>

int main()
{
    int a,b,x;
    printf(" odd number range: ");
    scanf("%d %d", &a, &b);
    for (x=a;a<=b;a++)
    {
       if (a%2==1) printf("%d ", a);
    }

  getch();
}
