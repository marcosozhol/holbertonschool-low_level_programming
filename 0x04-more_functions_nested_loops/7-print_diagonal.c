#include "main.h"
/**
*print_diagonal - funcion para imprimir diagonal
*@n: variable que llama a las cantidades de caracteres a imprimir
*
*/

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
	{
		_putchar('\\');
		_putchar('\n');
	}
	}
	}
	else
		_putchar('\n');
}
