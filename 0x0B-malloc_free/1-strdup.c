#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copia una cadena * en mem recien asignada
 *@str: cadena y puntero
 *Return: NULL y puntero
 *
 */

char *_strdup(char *str)
{
/*retorna NULL si str = null*/

	int i, a;
	char *z;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	if (a == 0) /*condicion null de memoria*/
	return (NULL);

	z = malloc(sizeof(char) * a);
	if (z == 0)
	return (NULL);
	for (i = 0; i <= a; i++)
	{
	z[i] = str[i];
/*	free(str);*/
	}
	return (z);
}
