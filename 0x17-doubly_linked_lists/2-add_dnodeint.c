#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint - agrega un nodo al principio de la lista
 *@head: cabecera de la lista
 *@n: dato que se incerta en el nuevo nodo
 *Return: nuevo nodo
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevo_nodo;

	nuevo_nodo = malloc(sizeof(dlistint_t));

	if (nuevo_nodo == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		nuevo_nodo->n = n;
		nuevo_nodo->next = *head;
		nuevo_nodo->prev = NULL;
		*head = nuevo_nodo;
	}
	else
	{
		nuevo_nodo->n = n;
		nuevo_nodo->next = *head;
		nuevo_nodo->prev = (*head)->prev;
		(*head)->prev = nuevo_nodo;
		*head = nuevo_nodo;
	}
return (*head);
}
