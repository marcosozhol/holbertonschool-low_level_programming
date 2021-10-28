#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatena dos string
 *@s1: cadena 1
 *@s2: cadena 2
 *Return: concatenacion y NULL
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i]) /*recorremos la cadena s1*/
		i++;

	while (s2[j]) /*recorremos la cadena s2*/
		j++;

	z = malloc(sizeof(char) * (i + j + 1));

	if (z == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		z[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		z[i] = s2[j];
		i++;
	}
return (z);
}
