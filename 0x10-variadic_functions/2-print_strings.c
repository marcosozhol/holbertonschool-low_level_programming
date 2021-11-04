#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - imprime cadenas
 *@separator: separadores entre cadenas
 *@n: cantidad de elementos
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list lista;

	if (separator == NULL)
		return;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(lista, char *);
		if (x == NULL)
		{
			x = "(nil)";
		}

		printf("%s", x);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(lista);
}
