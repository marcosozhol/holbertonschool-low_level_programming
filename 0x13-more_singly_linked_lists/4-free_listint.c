#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - libera memoria de las listas
 *@head: puntero a nodo o lista
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *i; /*puntero para nuevo nodo que vamos a ir liberando*/

	if (head == NULL)
		return;

	while (head)
	{
		i = head;
		head = head->next;
		free(i);/*liberamos este nodo a medida que va pasando*/
	}
}
