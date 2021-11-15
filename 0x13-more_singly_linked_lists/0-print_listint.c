#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - muestra los elementos de listas
 *@h: puntero a las listas
 *Return: la cantidad de nodos
 *
 */
size_t print_listint(const listint_t *h)
{
	int nodo = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			nodo++;
		}
return (nodo);
}
