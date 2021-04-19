#include <stdio.h>

int main()
{
  int i,n,z,a,counter,c=0;
  printf("prime number range: ");
  scanf("%d %d", &i, &n);
  for (a=i; a<=n; a++)
  {
      counter =0;
      for (z=1;z<=a;z++)
      {

          if (a%z==0)counter++;
      }
        if (counter==2)
        {
            printf("%d ",a);
            c++;
        }

  }
  printf("\nTotal prime number is %d", c);
  return 0;
}
