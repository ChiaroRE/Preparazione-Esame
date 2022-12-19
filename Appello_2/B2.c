#include <stdio.h>
#include <stdlib.h>

int main(void) {
// carica vettore di N elementi (come con la nostra libreria)
  int N = 4;
  double x[4] = {0,5,7,2};
  int *y = (int *) malloc(sizeof(int) * N); // N elementi

  for(int i = 0; i < N-1; i++)
  {
    int somma = 0;
    for(int j = 0; j <= i; j++)
      {
        somma = somma + x[j];
      }
    y[i] = somma;
  }
  return 0;
}

