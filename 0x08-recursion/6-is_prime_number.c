#include "main.h"
/**
 *ev_num - loop de recursion
 *@num: numero
 *@it: numero de iteracion
 *Return: 1 o 0
 */
int ev_num(int num, int it)
{
	if (it == num - 1)
	{
		return (1);
	}
	else if (num % it == 0)
	{
		return (0);
	}
	if (num % it != 0)
	{
		return (ev_num(num, it + 1));
	}
	return (0);
}
/**
 *is_prime_number - funcion que identifica si un numero es primo
 *@n: es el numero a averiguar
 *Return: 1 o 0
 */
int is_prime_number(int n)
{
	int iterator = 0;

	iterator = 2;
	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (ev_num(n, iterator));
}
