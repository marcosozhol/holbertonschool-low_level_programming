#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - funcion para sumar los elementos de lista
 *@n: cantidad de elementos
 *Return: Suma ó 0.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int i, total = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(lista, int);
	}
	va_end(lista);
return (total);
}
