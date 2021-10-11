#include "main.h"
/**
*more_numbers - Funcion para mostrar los numeros
*number: numeros del 0 al 14
*repeat: variable
*/

void more_numbers(void)
{
	int repeat, number;

		repeat = 0;
		while (repeat < 10)
		{
		for (number = 0; number <= 14; number++)
		{
		if (number >= 10)
		{
		_putchar((number / 10) % 10 + '0');
		}
		_putchar(number % 10 + '0');
		}
		_putchar('\n');
		repeat++;
		}
}
