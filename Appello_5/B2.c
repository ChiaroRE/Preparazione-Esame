#include <stdio.h>

int f(int x){
    return(x+6); // A
  }

void main()
{
  
  int x = 6;
  int y = x + 1; // B
  y = f(y);
  int * z = y;
  z = f(*z - y); // C

  printf("%d\n", x);
  printf("%d\n", y);
  printf("%ls\n", z);
}