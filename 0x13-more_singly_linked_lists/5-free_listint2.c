#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - libera memoria a una lista
 *@head: punter a puntero de un nodo head
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *i; /*puntero temporal para almacenar los datos de head*/

	if (head)
	{
		while (*head)
		{
			i = *head; /*setea el valor de head en i*/
			*head = i->next; /*head toma el valor de next de i*/
			free(i); /*se libera i que es igual al head actual*/
		}
	}
}
