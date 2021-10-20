#include "main.h"
/**
 *factorial - calcula el factorial de un numero
 *@n: variable del numero
 *Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
