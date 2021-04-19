#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,v;
    printf("Distance (in km)? ");
    scanf("%d",&d);
    printf("Avg Speed (km/h)? ");
    scanf("%d",&v);
    printf("Driving Time is %.3f hour(s)", 1.0*d/v);

   getch();
}
