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

	while (i <= s1[i]) /*recorremos la cadena s1*/
		i++;

	while (j <= s2[j]) /*recorremos la cadena s2*/
		j++;

	z = malloc(sizeof(char) * (i + j));

	if (z == NULL)
		return (NULL);

	while (*s1)
	{
		z[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		z[i] = *s2;
		i++;
		s2++;
	}
	return (z);
}
