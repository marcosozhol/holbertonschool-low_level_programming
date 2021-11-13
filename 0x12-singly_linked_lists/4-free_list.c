#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - libera memoria de list_t
 *@head: puntero hacia lista
 *
 *
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->str != NULL)

		free_list(head->next);

	free(head->str);
	free(head);
}
