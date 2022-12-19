#include <stdio.h>

int pow2(int n)
{
  if(n == 0) return 1;
  else return 2 * pow2(n - 1);
}

int sum(int n)
{
  if(n == 1) return 1;
  else return n + sum(n-1);
}

int risultato(int n)
{
  int x = pow2(n) * sum(n);
  return x;
}

void main()
{
  int x = risultato(6);
  printf("%d\n", x);
}