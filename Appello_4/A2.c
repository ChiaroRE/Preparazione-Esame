#include <stdio.h>

int succ(int n)
{
  if(n == 1) return -1;
  if(n == 2) return 0;

  int a0 = -1;
  int a1 = 0;
  int an;

  for(int i = 3; i <= n; i++)
    {
      if(a1 > a0) 
      {
        an = (2 * a0 - a1 + 1) * i;
      }
      else
      {
        an = (2 * i + a1 + 1) * a0;
      }

      a0 = a1;
      a1 = an;
    }
  return an;
}

void main()
{
  int n = 3;
  int k = succ(n);
  printf("%d\n", k);
}



