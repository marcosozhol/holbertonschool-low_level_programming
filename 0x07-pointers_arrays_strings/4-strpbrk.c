#include "main.h"
/**
*_strpbrk - encuentra 1r aparición en la cadena apuntada de la cadena 2
*@s: Cadena apuntada
*@accept: Cadena 2
*Return: Devuelve un puntero al byte, y nulo si no encuentra nada
*/

char *_strpbrk(char *s, char *accept)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				return (s + i);
		}
	}
return (0);
}
