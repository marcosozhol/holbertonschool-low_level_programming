#include "lists.h"
/**
 *get_dnodeint_at_index - funcion que retorna el nodo en un lugar dado
 *@head: cabecera de la list
 *@index: numero de nodo a imprimir
 *Return: nodo segun index
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		i++;
		head = head->next;
	}

	return (head);
}
