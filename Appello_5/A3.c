#include <stdio.h>

double f(int n)
{
  if(n == 0) return 1.0;
  if(n == 1) return 100.0;
  else return n * f(n-1) - (n * f(n-2))/2.0;
}

int F(int a[], int dim)
{
  int somma = 0;

  for(int i = 0; i < dim; i++)
  {
    somma = somma + f(a[i]);
  }
  return somma;
}

void main()
{
  int a[3] = {1,2,0};
  
  int x = F(a,3);
  printf("%d", x);
}