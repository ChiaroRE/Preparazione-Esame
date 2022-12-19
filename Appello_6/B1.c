#include <stdio.h> 
#include <stdlib.h>

struct elemento{
  int *data;
  int size;
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
      printf("\nInserisci il %d° elemento: ",i);
      scanf("%d", &a[i]);
    }
  x -> data = a;
  ListaDiElementi list = x;
  return list;
}

int ntot(ListaDiElementi lista)
{
  ListaDiElementi current = lista;
  int count = 0;
  while(current != NULL)
    {
      count = count + (current -> size);
      current = current -> next;
    }
  return count;
}

int largest(ListaDiElementi lista)
{
  ListaDiElementi current = lista;
  int max = current -> size;
  while(current != NULL)
    {
      if(max < current -> size)
        max = current -> size;
      current = current -> next;
    }
  return max;
}

void main()
{
  ListaDiElementi list = init(4);
  list -> next = init(7);
  list -> next -> next = init(2);

  printf("%d\n", ntot(list));
  printf("%d\n", largest(list));
}


