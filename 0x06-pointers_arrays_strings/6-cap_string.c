#include "main.h"
/**
*cap_string - funcion para cambiar a mayuscula luego de ciertos caracteres.
*@s: variable donde se almacena la cadena
*Return: s - cadena con modificaciones
*/

char *cap_string(char *s)
{
	int i;
	/*int g; variable para recorrer caracteres*/
	int c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c[i])
		{
			i++;
			s[i] = s[i] - 32;
		}
	}
return (s);
}
