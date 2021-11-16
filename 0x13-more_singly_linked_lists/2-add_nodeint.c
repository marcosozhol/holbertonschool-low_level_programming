#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint - agrega un nodo al principio
 *@head: puntero hacia puntero de head
 *@n: valor que se va a agrga
 *Return: devuelve la direccion de head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	if (head == NULL)
		return (NULL);

	i = malloc(sizeof(listint_t));
		if (i == NULL)
			return (NULL);

	i->n = n;
	i->next = *head;

	*head = i;

return (i);
}
