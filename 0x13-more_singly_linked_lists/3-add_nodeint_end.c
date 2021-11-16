#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - Agrega un nodo al final
 *@head: puntero a puntero de nodo head
 *@n: valor que asignamos
 *Return: la direccion de memoria del nuevo nodo | NULL si falla
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;/*nodo a insertar*/
	listint_t *x; /*segundo puntero para ir insertando lo que nos pasan*/

	i = malloc(sizeof(listint_t));

		if (i == NULL)
			return (NULL);

	i->n = n; /*n es el valor que llamamos en el nombre de la funcion*/
	i->next = NULL; /*indicamos que no hay otro nodo siguiente*/

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	x = *head;

	while (x->next != NULL)
	{
		x = x->next;
	}
	x->next = i;

return (i);
}
