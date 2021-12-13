#include "main.h"
/**
 *rot13 - codifica una cadena usando rot13
 *@s: entrada de cadena
 *Return: Puntero a destino
 */
char *rot13(char *s)
{
	int p = 0, i = 0;
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + p) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + p) == abc[i])
			{
				*(s + p) = rot13[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
