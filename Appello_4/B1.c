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
      printf("\nInserisici il valore di a[%d]: ", i);
      scanf("%d", &a[i]);
    }
  x -> data = a;

  ListaDiElementi lista = x;
  return lista;
}

void print(ListaDiElementi lista)
{
  if(lista == NULL) return;
  for(int i = 0; i < lista -> size; i++)
    printf("%d\n", lista -> data[i]);
  print(lista -> next);
}

void main()
{
  ListaDiElementi list = init(5);
  print(list);
}