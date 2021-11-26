#include "main.h"
#include <stdlib.h>
/**
 *puts_half - Imprime la mitad de una cadena
 *@str: cadena
 *
 *
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i + 1;
	}
	if ((i % 2) == 0)
	{
		i = (i / 2);
	}
	else
	{
		i = (i - 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
