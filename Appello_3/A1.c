#include <stdio.h>

int inverti(int n)
{
  int somma = 0;
  while(n > 0)
    {
      somma = somma * 10 + n % 10;
      n = n / 10;
    }
  return somma;
}

void main()
{
  int n = 2341;
  int i = inverti(n);
  printf("%d", i);
}