#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_listint - suma los elementos de una lista
 *@head: puntero a nodo head
 *Return: suma | null
 *
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		suma = suma + head->n;
		head = head->next;
	}
return (suma);
}
