#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint - imprime elementos de una lista
 *@h: puntero a la lista
 *Return: cantidad de nodos
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodo = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodo++;
	}
return (nodo);
}
