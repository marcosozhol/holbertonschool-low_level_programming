#include <stdio.h>
#include "main.h"
/**
 *print_binary - imprime un numero en binario
 *@n: numero a imprimir
 *
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
