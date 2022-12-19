#include <stdio.h>

double f(int n)
{
  if(n == 0) return 1;
  if(n == 1) return 12;
  else return 3 * (f(n-1) - f(n-2)) + (f(n-2) - f(n-1))*(n - f(1));
}

double F(int a[], int dim)
{
  double sum = 0;
  for(int i = 0; i < dim; i++)
    {
      sum = sum + f(a[i]);
    }
  return sum;
}

void main()
{
  int a[3] = {0,1,2};
  int dim = 3;
  printf("%lf", F(a,dim));
}

