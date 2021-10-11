#include "main.h"
/**
*print_line - Funcion para imprimir el caracter _ n veces
*@n: variable para definir las veces que imprime _
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	_putchar('_');
	_putchar('\n');
	}
	else
	_putchar('\n');
}
