#include <stdio.h>

int prod(int n)
{
  if(n == 0) return 1;
  else return (n % 10) * prod(n/10);
}

void main()
{
  int n = 2345;
  printf("%d", prod(n));
}