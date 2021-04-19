
#include <stdio.h>

int main()
{
   int a,b,d,n,sum=0;
    printf("First Number : \n");
    printf("Second Number: \n");
    printf("till: \n"
    scanf("%d %d %d",&a,&b,&n);
    d=b-a;
    for(a=a;a<=n;a=a+d)
    {
       printf("%d    ",a);
       sum=sum+a;
    }
{
   printf("\n sum is %d", sum);
}
    return 0;
}//
