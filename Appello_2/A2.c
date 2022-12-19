#include <stdio.h>

int calcolo(int n)
{
  if(n < 10) 
    return n;
  else return (n % 10) + calcolo(n / 10);
}

void main()
{
  int a = 2345;
  printf("Calcolo: %d", calcolo(a));
}