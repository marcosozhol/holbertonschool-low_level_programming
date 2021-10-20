#include "main.h"
/**
 *auxfun - funcion auxiliar
 *@n: variable
 *@i: variable
 *Return: valor
 *
 */

int auxfun(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	else
		return (auxfun(n, (i + 1)));
}
/**
 *_sqrt_recursion - funcion
 *@n: variable
 *Return: valor
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (auxfun(n, 0));
	}
}
