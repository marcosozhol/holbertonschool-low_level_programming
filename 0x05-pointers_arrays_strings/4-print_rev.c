#include "main.h"
/**
*print_rev - Funcion para dar vuelta una cadena
*@s: cadena
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i--; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
