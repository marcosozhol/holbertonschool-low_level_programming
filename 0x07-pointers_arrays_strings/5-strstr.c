#include "main.h"
/**
*_strstr - encuentra la primera aparicion de needle en haysack
*@haystack: primer cadena
*@needle: subcadena
*Return: retorna el puntero donde comienza la coincidencia
*
*/

char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i] == needle[x])
				return (haystack + 7);
		}
	}
return (0);
}
