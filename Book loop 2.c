#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   char sign;
   printf("Enter Numbers: ");
   scanf("%d %c %d", &a,&sign,&b);
   if(sign=='+')
    printf("%d %c %d = %d", a,sign,b,a+b);
   else if(sign=='-')
    printf("%d %c %d = %d", a,sign,b,a-b);
   else if(sign=='*')
    printf("%d %c %d = %d", a,sign,b,a*b);
    else if(sign=='/'&&b!=0)
    printf("%d %c %d = %d", a,sign,b,a/b);
    else
    printf("error");

   return 0;
}
