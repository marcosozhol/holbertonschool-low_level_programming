# include "0-putchar.h"
/**
*ejercicio 0
*funcion putchar
*/
int main (void)
{
	char *put = "_putchar";

	while (*put)
	{
		_putchar(*put);
		put++;
	}
	_putchar('\n');

	return (0);
}
