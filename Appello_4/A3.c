#include <stdio.h>

double succ_f(int n)
{
  if(n == 0) return 1;
  if(n == 1) return 1;
  else return (n + 1)/succ_f(n - 1);
}

double prod(int a[], int dim)
{
  double prod = 1;

  for(int i = 0; i < dim; i++)
    {
      prod = prod * succ_f(a[i]);
    }
  return prod;
}

void main()
{
  int a[3] = {1,2,0};
  double f = prod(a,3);
  printf("%lf", f);
}