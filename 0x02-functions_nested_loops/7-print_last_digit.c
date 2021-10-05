#include "main.h"
/**
*print_last_digit - check the code.
*@numero: variable
*Return: Returns the value of the last digit.
*/
int print_last_digit(int numero)
{
	numero = (numero % 10);
	if (numero < 0)
	{
		numero = (-numero);
	}
	_putchar(numero + '0');
	return (numero);
}
