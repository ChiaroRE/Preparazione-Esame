#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void assegna(int a[], int dim)
{
  for(int i = 0; i < dim; i++)
    {
      printf("\nInserire il %d° elemento: ", i+1);
      scanf("%d", &a[i]);
    }
}

double media(int a[], int dim)
{
  double somma = 0;
  for(int i = 0; i < dim; i++)
    {
      somma = somma + a[i];
    }
  double med = somma/dim;
  return med;
}

double sd(int a[], int dim)
{
  double somma = 0;
  for(int i = 0; i < dim; i++)
    {
      somma = somma + (a[i] - media(a,dim)) * (a[i] - media(a,dim));
    }
  double var = somma/dim;
  double std = sqrt(var);

  return std;
}



void main()
{
  int dim;
  printf("Inserisci la dimensione dell'array: ");
  scanf("%d", &dim);

  int *a = (int *) malloc(sizeof(int) * dim);

  assegna(a,dim);

  double std = sd(a,dim);

  printf("%lf", std);
  
}