#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - agrega un nodo al final de la lista
 *@head: cabecera de la lista
 *@n: dato que se incerta en el nuevo nodo
 *Return: nuevo nodo
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuevo_nodo;
	dlistint_t *temporal = *head;

	nuevo_nodo = malloc(sizeof(dlistint_t));

	if (nuevo_nodo == NULL)
	{
		return (NULL);
	}

	nuevo_nodo->n = n;
	nuevo_nodo->next = NULL;

	if (*head == NULL)
	{
		nuevo_nodo->prev = NULL;
		*head = nuevo_nodo;
		return (nuevo_nodo);
	}

	while (temporal->next)
	{
		temporal = temporal->next;
	}

	temporal->next = nuevo_nodo;
	nuevo_nodo->prev = temporal;

	return (nuevo_nodo);
}
