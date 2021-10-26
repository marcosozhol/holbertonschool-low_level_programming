#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copia una cadena * en mem recien asignada
 *@str: cadena y puntero
 *Return: NULL y puntero
 *
 */

void free(void *str);

char *_strdup(char *str)
{
/*retorna NULL si str = null*/

	int i, a;
	char *z;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)

	z = malloc(sizeof(char) * a);

	if (z == NULL)	/*condicion nullo de memoria*/
		return (NULL);

	for (i = 0; i < a; i++)
	{
	z[i] = str[i];
/*	free(str);*/
	}
	return (z);
}
