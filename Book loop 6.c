#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Find q\n");
    for (x=getchar();x!='q';x=getchar())
        {
            printf ("not q ");

        }
    printf ("found q");
   getch();
}
