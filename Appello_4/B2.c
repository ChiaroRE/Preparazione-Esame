#include <stdio.h>
#include <stdlib.h>


void main()
{
  int x = 6;
  int * y = (int *) malloc(sizeof(int));
  *y = x;
  for(int i = 0; i < *y; i++)
  {
    // A
    if(i %2 != 0)
    {
      int x = *y;
      i = x + 1;
      // B
    }
    else
    {
      x = x * *y;
    }
  }

  printf("%d\n", x);
  printf("%d\n", *y);

  free(y);
  
}