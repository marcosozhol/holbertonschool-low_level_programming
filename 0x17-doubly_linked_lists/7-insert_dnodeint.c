#include "lists.h"
/**
 *insert_dnodeint_at_index - inserta un nodo en un lugar dado
 *@h: head de la lista
 *@idx: index donde insertar
 *@n: valor del nuevo nodo
 *Return: nuevo nodo | 0 si falla
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodo, *nodo_1;
	unsigned int i = 0;

	nodo_1 = malloc(sizeof(dlistint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		nodo = add_dnodeint(h, n);
		return (nodo);
	}
	nodo = *h;
	while (nodo != NULL && i < idx)
	{
		nodo = nodo->next;
		i++;
	}
	if (nodo != NULL)
	{
		if (nodo_1 == NULL)
		{
			return (NULL);
		}
		nodo_1->n = n;
		nodo->prev->next = nodo_1;
		nodo_1->prev = nodo->prev;
		nodo_1->next = nodo;
		nodo->prev = nodo_1;
		return (nodo_1);
	}
	else if (i == idx)
	{
		nodo = add_dnodeint_end(h, n);
		return (nodo);
	}
	return (NULL);
}
