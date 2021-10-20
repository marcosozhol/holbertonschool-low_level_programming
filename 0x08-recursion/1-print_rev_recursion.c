#include "main.h"
/**
*_print_rev_recursion - funcion para imprimir una cadena con recursion al reves
*@s: puntero hacia la cadena a imprimir
*Return: 0
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
return;
}
