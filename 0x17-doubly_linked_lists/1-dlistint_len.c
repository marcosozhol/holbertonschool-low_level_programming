#include "lists.h"
/**
 *dlistint_len - Devuelve la cantidad de elementos de una lista
 *@h: puntero hacia lista
 *Return: cantidad de nodos
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodo = 0;

	while (h != NULL)
	{
		h = h->next;
		nodo++;
	}
return (nodo);
}
