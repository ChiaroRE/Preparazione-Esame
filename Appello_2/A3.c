#include <stdio.h>

double media(double a[], int i)
{
  if(i == 0) return a[0];
  else
  {
    return media(a, i - 1) + (a[i] - media(a, i - 1))/(i + 1);
  }
}

void main()
{
  double a[6] = {1.0,2.0,3.0,4.0,5.0,6.0};
  double med = media(a,5);
  printf("%f", med);
}