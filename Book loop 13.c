#include <stdio.h>

int main()
{
    int a,b;
    char x;

    printf("Enter equation : ");
    scanf ("%d %c %d", &a, &x, &b);

    if (x=='+')

        printf("%d", a+b);
    else if (x=='-')

        printf("%d", a-b);

    else if (x=='*')

        printf("%d", a*b);

    else if (x=='/' && b!=0)

        printf("%f", 1.0*a/b);

    else printf("error");
    return 0;
}
