#include <stdio.h>

int is_inside(int x, int y, int z)
{
  if(y > z)
  {
    if(x >= z && x <= y)
      return 0;
    else
      return 1;
  }
  else
  {
    if(x <= z && x >= y)
      return 0;
    else
      return 1;
  }
}

int overlap_size(int i, int j, int t, int u)
{
  if(i >= j || t >= u || j < t)
  {
    printf("\nI valori non sono corretti, la funzione ritornerà 0");
    return 0;
  }

  int count = 0;
  
  for(int x = i; x <= u; x++)
    {
      if((is_inside(x,i,j) == 0) && (is_inside(x,t,u) != 0))
        count ++;
      if((is_inside(x,i,j) != 0) && (is_inside(x,t,u) == 0))
        count ++;
    }
  return count;
}

void main()
{
  int k = overlap_size(1,5,3,12);
  printf("%d\n", k);
}