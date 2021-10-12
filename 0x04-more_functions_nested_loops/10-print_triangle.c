#include "main.h"
/**
*print_triangle - funcion para imprimir un triangulo
*@size: variable
*/
void print_triangle(int size)
{
int x, y, z;

if (size > 0)
	{
	for (x = 1; x <= size; x++)
	{
		for (y = size; y > x; y--)
		{
			_putchar(' ');
		}
		for (z = 1; z < x; z++)
		{
			_putchar('#');
		}
	{
		_putchar('#');
		_putchar('\n');
	}
	}
	}
	else
		_putchar('\n');
}
