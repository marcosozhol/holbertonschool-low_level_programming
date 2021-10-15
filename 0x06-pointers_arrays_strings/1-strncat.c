#include "main.h"
/**
*_strncat - funcion para concatenar cadenas
*@dest: cadena uno
*@src: cadena dos
*@n: cantidades de bytes de src
*Return: devuelve cadena uno
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
