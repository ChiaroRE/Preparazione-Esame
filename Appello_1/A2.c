#include <stdio.h>
#include <stdlib.h>

void assegna(int a[], int dim)
{
  for(int i = 0; i < dim; i++)
    {
      printf("\nInserisci il %d° elemento: ", i);
      scanf("%d", &a[i]);
    }
}

int calcolo(int a[], int dim, int i)
{
  if(i == 0) return (a[0] + a[1]);
  else return (a[i] + a[i+1]) * calcolo(a,dim,i - 1);
}

void main()
{
  int dim;

  printf("\nInserire dimensioni dell'array: ");
  scanf("%d", &dim);
  
  int *a = (int *) malloc(sizeof(int) * dim);
  assegna(a,dim);
  int ris = calcolo(a,dim,(dim-2));
  printf("%d\n", ris);
  
}