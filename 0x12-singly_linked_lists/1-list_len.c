#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*list_len - Cuenta el numero de elementos
*@h: puntero hacia list_t
*Return: elementos
*/
size_t list_len(const list_t *h)
{

	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
return (n);
}
