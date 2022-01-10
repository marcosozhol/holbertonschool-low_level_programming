#include "lists.h"
/**
 *delete_dnodeint_at_index - elimina un nodo determinado
 *@head: cabecera de la lista
 *@index: lugar a eliminar
 *Return: 1 en caso de exito | -1 en caso de fallo
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *head_tmp;

	if (!head || *head)
	{
		return (-1);
	}
	head_tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(head_tmp);
		return (1);
	}
	for ( ; index > 1 && head_tmp && head_tmp->next; index--)
	{
		head_tmp = head_tmp->next;
	}
	if (!head_tmp->next)
	{
		return (-1);
	}
	del = head_tmp->next;
	head_tmp->next = head_tmp->next ? del->next : NULL;
	if (del->next)
	{
		del->next->prev = head_tmp;
	}
	free(del);
	return (1);
}
