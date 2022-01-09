#include "lists.h"
/**
 *free_dlistint - funcion para liberar una lista
 *@head: puntero hacia el head de la lista
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
