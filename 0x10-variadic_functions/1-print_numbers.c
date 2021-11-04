#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - imprime los datos de una cadena
 *@separator: cadena separadora para cada elemento impreso
 *@n: cantidad de elementos
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(lista);

	printf("\n");
}
