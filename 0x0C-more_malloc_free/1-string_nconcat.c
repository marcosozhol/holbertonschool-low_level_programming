#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatena dos cadenas
 *@s1: cadena 1
 *@s2: cadena 2
 *@n: n caracteres de la cadena
 *Return: NULL & Concatenar
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i]) /*recorremos*/
		i++;
	while (s2[j]) /*recorremos*/
		j++;

	if (n < j)
		j = n;

	j += i;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[j] = s2[j];
		i++;
	}
return (concat);
}
