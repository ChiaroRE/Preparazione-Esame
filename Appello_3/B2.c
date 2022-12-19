#include <stdio.h>

void main()
{
  int x = 6;
  int *y = &x;
  for(int i = 2; i <= 2 ; i++)
  {
    
    if(i %2 != 0)
    {
      int x = -1;
      *y = x;
    }
    else
    {
      x = x + *y;
    }
  }
printf("%d\n", x);
printf("%d\n", *y);
}