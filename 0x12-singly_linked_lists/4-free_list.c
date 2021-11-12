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
	free(head);
}
