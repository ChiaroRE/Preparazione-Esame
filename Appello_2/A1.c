#include <stdio.h>

double fun(int n)
{
  double a0 = 1.0;
  double a1 = 2.0;
  double an;

  if(n == 0) return a0;
  else if(n == 1) return a1;

  else
  {
    for(int i = 2; i <= n; i++)
    {
      if(i % 2 == 0)
      {
        an = (i + 3 * (a0 - 2))/a1;
        a0 = a1;
        a1 = an;
      }
      else
      {
        an = (i + 3 * (a1 - 2))/a0;
        a0 = a1;
        a1 = an;
      }
    }
    return an;
  }
}

void main()
{
  int n;

  printf("Inserisci un numero n: ");
  scanf("%d", &n);

  printf("%lf", fun(n));
}