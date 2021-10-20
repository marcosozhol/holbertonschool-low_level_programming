#include "main.h"
/**
*_puts_recursion - funcion para imprimir una cadena con recursion
*@s: puntero hacia la cadena a imprimir
*Return: 0
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_putchar (*s + 1);
return;
}
