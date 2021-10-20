#include "main.h"
/**
 *_pow_recursion - calcula la potencia de un numero sobre otro
 *@x: variable de numero
 *@y: variable de potencia
 *Return: devuelve el resultado y sino -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
