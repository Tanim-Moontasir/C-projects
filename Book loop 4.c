#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416
int main()
{
   int a,x,h;
   printf ("Press 1 for circle\n Press 2 for triangle\n  Press 3 for rectangle\n");
   scanf("%d", &a);
   if (a==1)
   {
       printf("radius? ");
       scanf ("%d",&x);
       printf ("area is %f", pi*x*x);
   }
   else if (a==2)
    {
       printf("height and base? ");
       scanf ("%d %d",&x, &h);
       printf ("area is %.3f", 0.5*h*x);
    }
   else if (a==3)
    {
       printf("height and base? ");
       scanf ("%d %d",&x, &h);
       printf ("area is %.3f", 1.0*h*x );
    }
    else printf (" error");

   getch();
}
