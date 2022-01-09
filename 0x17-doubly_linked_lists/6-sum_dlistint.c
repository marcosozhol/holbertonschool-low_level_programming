#include "lists.h"
/**
 *sum_dlistint - suma los valores de los elementos de una lista
 *@head: head de la lista
 *Return: suma | 0 en caso de lista vacia
 */
int sum_dlistint(dlistint_t *head)
{
	int res_tmp = 0; /*almacena resultados de sumas*/

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		res_tmp = res_tmp + head->n;
		head = head->next;
	}
	return (res_tmp);

}
