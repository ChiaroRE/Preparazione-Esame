#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int size;
  int *data; 
  struct elemento *next;
};

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

ListaDiElementi init(int n)
{
  ElementoDiLista *x = malloc(sizeof(ElementoDiLista));
  x -> next = NULL;
  x -> size = n;

  int *a = (int *) malloc(sizeof(int) * n);

  for(int i = 0; i < n; i++)
    {
      printf("\nInserisci il %d° elemento: ", i);
      scanf("%d", &a[i]);
    }
  x -> data = a;
  ListaDiElementi list = x;

  return list;
}

int ntot(ListaDiElementi x)
{
  ListaDiElementi current = x;
  int tot = 0;
  while(current != NULL)
    {
      tot = tot + current -> size;
      current = current -> next;
    }
  return tot;
}

int largest(ListaDiElementi x)
{
  ListaDiElementi current = x;
  int max = current -> size;
  while(current != NULL)
    {
      if(current -> size > max)
        max = current -> size;
      current = current -> next;
    }
  return max;
}

void main()
{
  ListaDiElementi lista = init(4);
  lista -> next = init(12);
  lista -> next -> next = init(5);
  printf("%d", ntot(lista));
  printf("%d", largest(lista));
}