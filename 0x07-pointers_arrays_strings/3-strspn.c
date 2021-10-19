#include "main.h"
/**
*_strspn - Devuelve la longitud de la subcadena inicial
*@s: Cadena a escanear
*@accept: Cadena que contiene los caracteres para que conincidan
*Return: Devuelve el numero de caracteres del segmento
*
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, x, y;

	x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		y = 0;
	for (n = 0; accept[n] != '\0'; n++)
	{
		while (accept[n] == s[i])
		{
			x++;
			y = 1;
			break;
		}
	}
	while (y == 0)
		return (x);
	}
	return (x);
}
