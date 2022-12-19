#include <stdio.h>
#include <stdlib.h>

struct elemento
{
  int size;
  int *data;
  struct elemento *next;
};

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista * ListaDiElementi;

ListaDiElementi init(int n)
{
  ElementoDiLista *x = malloc(sizeof(ElementoDiLista));
  x -> size = n;
  
  int *a = (int *) malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++)
    {
      printf("\nInserisci valore: ");
      scanf("%d", &a[i]);
    }
  
  x -> data = a;
  x -> next = NULL;
  ListaDiElementi lista = x;
  return lista;
}

void print(ListaDiElementi lista)
{
  if(lista == NULL) return;
  for(int i = 0; i < lista -> size; i++)
    printf("%d\n", lista -> data[i]);
  lista = lista -> next;
}

void main()
{
  ListaDiElementi list = init(4);
  print(list);
}
