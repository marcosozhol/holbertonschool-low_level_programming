#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node - agrega un nuevo nodo al comienzo
*@str: string
*@head: primer lista
*Return: direccion de nuevo elemento
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = *head;
	*head = n;

return (n);
}




/**
*_strlen - Funcion para mostrar el largo de una cadena
*@s: variable con cadena
*
*Return: 0
*/

int _strlen(const char *s)
{
	int str, var = 0;

	for (str = 0; *s++ != '\0'; str++)
	{
		var++;
	}
	return (var);
return (0);
}
