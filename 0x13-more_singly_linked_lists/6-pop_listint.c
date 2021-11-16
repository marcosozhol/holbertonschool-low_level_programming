#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - elimina el nodo principal de una lista enlazada
 *@head: puntero a puntero de head
 *Return: el valor de n | 0 si head es null
 *
 */
int pop_listint(listint_t **head)
{
	int i = 0; /*va a tomar el valor de n de head*/
	listint_t *x;

	if (*head)
	{
		if (head == NULL)
		return (0);

		i = (*head)->n;
		x = *head;
		*head = (*head)->next;
		free(x);
	}
return (i);
}
