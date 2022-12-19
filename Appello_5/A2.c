#include <stdio.h>

int succ(int n)
{
  if(n == 1) return 0;
  if(n == 2) return 0;
  int a1 = 0;
  int a2 = 0;
  int an;

  for(int i = 3; i <= n; i++)
    {
      if(a2 > a1)
        an = (a1 + a2 - 1) * (i + 1);
      else
        an = (a1 - a2 + 1) * (a1 + 1) * (a1 + 1);
      a1 = a2;
      a2 = an;
    }
  return an;
}

void main()
{
  int n; 
  printf("Inserisci n: ");
  scanf("%d",&n);

  printf("%d", succ(n));
}