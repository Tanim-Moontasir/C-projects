#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int a;
    printf("input letter, press q to end\n");
    for (a=1;x!='q';++a)
  {

        x=getchar();
        printf ("letter %d is %c \n", a, x);

  }
   getch();
}
