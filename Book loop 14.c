#include <stdio.h>

int main()
{
    char a;
    printf("type character: ");
    a=getchar();
    printf("how many times You want to print? ");
    int n,x;
    scanf("%d", &n);
    for (x=1;x<=n;x++)
    {
        printf("%c",a);
    }

}
