#include "main.h"
/**
*jack_bauer - cabezera.
*hs - horas
*min - minutos
*/
void jack_bauer(void)
{
	int hs, min;
for (hs = 0; hs <= 23; hs++)
{
	for (min = 0; min <= 59; min++)
	{
		_putchar((hs / 10) + '0');
		_putchar((hs % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar ((min % 10) + '0');
		_putchar('\n');
	}
}
}
