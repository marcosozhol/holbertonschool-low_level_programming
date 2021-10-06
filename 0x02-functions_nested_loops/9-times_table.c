#include "main.h"
/**
*times_table - print table of 9
*a: variable 1 numero
*b: variable 2 numero
*c: variable 3 numero resultado de a x b
*Return:
*/
void times_table(void)
{

	int a, b, c;

	for (a = 0; a <= 9; a++)
	{

	_putchar('0');

	for (b = 1; b <= 9; b++)
		{
		_putchar(',');
		_putchar(' ');
		c = a * b;

		if (c <= 9)
		{
		_putchar(' ');
		}
		else
		_putchar((c / 10) + '0');

		_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
