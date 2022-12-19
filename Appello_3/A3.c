#include <stdio.h>

int fibonacci(int n)
{
  if(n == 1) return 1;
  if(n == 0) return 0;

  int f0 = 0;
  int f1 = 1;
  int fn;

  for(int i = 2; i <= n; i++)
    {
      fn = f0 + f1;
      f0 = f1;
      f1 = fn;
    }
  return fn;
}

int somma(int a[], int i)
{
  if(i == 0) return fibonacci(a[0]);
  else return fibonacci(a[i]) + somma(a,i-1);
}

void main()
{
  int a[3] = {1,2,0};
  int i = 2;
  int sum = somma(a,i);

  printf("%d\n", sum);
}