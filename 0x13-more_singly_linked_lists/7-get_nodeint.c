#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - muestra el nodo que está en una posicion index
 *@head: puntero al nodo head
 *@index: posicion donde se encuentra el nodo n
 *Return: Nodo en posicion index | NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x; /*Contador para recorrer las lista*/

	if (head)
	{
		if (index > 0)
		{
		for (x = 0; x < index; x++)
		{
			head = head->next;
		}
		if (head == NULL)
			return (NULL);

	return (head);
	}
		else
			return (head);
	}
return (NULL);
}
