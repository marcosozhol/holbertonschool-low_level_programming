#include "main.h"
/**
*print_most_numbers - imprime del 0 al 9 evitando el 2 y el 4
*
*/
void print_most_numbers(void)
{
	int num;
		for (num = 0; num <= 9; num++)
		{
			if (num != 2 && num != 4)
			_putchar(num + '0');
		}
	_putchar('\n');
}
