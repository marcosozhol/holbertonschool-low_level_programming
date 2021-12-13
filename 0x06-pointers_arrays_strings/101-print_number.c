#include "main.h"
/**
 *print_number - muestra un entero
 *@n: numero a mostrar
 *
 */
void print_number(int n)
{
	unsigned int positive = n;

	if (n < 0)
	{
		_putchar('-');
		positive = -n;
	}

	if (positive / 10)
		print_number(positive / 10);

	_putchar(positive % 10 + '0');
}
