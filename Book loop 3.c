#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;
   for (a='A';a<='Z';a++)
   {
       printf("%c in ASCII id %d\n",a,a);
   }
    for (a='a';a<='z';a++)
   {
       printf("%c in ASCII id %d\n",a,a);
   }

   return 0;
}
