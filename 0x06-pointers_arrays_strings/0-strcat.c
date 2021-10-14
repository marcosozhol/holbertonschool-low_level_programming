#include "main.h"
/**
*_strcat - funcion para concatenar cadenas
*@dest: cadena 1
*@src: cadena 2
*Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
