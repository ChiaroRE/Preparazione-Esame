#include <stdio.h>

int is_inside(int x, int y, int z)
{
  if(x >= y && x <= z)
    return 0;
  else
    return -1;
}

int overlap_size(int i, int j, int t, int u)
{
  if(i >= j || t >= u || j < t)
  {
    printf("\nI valori inseriti non sono corretti, la funzione ritornerĂ  0");
    return 0;
  }

  int count = 0;

  for(int x = t; x <= j; x++)
    {
      if(is_inside(x,i,j) == 0 || is_inside(x,t,u) == 0)
      {
        count ++;
      }
    }
  return count;
}

void main()
{
  int i = 1;
  int j = 7;
  int t = 3;
  int u = 12;

  int k = overlap_size(i,j,t,u);

  printf("%d\n", k);
}