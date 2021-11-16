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
	if (head != NULL)
		free(head);
}
