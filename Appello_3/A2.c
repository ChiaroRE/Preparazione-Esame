#include <stdio.h>

int succ(int n)
{
  if(n == 1) return 2;
  if(n == 2) return 1;
  
  int a1 = 2;
  int a2 = 1;
  int an;

  for(int i = 3; i <= n; i++)
    {
      if(a2 % 2 == 0)
      {
        an = (i - a2) * a1;
        a1 = a2;
        a2 = an;
      }
      else
      {
        an = (i + a1) * a2;
        a1 = a2;
        a2 = an;
      }
    }
  return an;
}

void main()
{
  int n = 6;
  int r = succ(5);

  printf("%d\n", r);
}