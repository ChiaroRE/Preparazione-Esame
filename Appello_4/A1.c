#include <stdio.h>

int primo(int n, int i)
{
  if(i == 1) return 1;
  if(n % i == 0) return 0;
  else return primo(n,i-1);
}

int my_fun(int x, int y)
{
  int count = 0;

  if(x >= y)
  {
    for(int i = y + 1; i < x; i++)
      {
        if(primo(i,i-1)) count++;
      }
  }
  else
  {
    for(int i = x + 1; i < y; i++)
      {
        if(primo(i,i-1)) count++;
      }
  }
  return count;
}

void main()
{
  int x = 10;
  int y = 2;

  int k = my_fun(x,y);
  printf("%d", k);
}