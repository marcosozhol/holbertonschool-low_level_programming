#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - cuenta la cantidad de elementos
 *@h: puntero hacia elemento
 *Return: cantidad
 */
size_t listint_len(const listint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
return (cont);
}
