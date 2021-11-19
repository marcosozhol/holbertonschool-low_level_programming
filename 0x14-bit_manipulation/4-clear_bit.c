#include <stdio.h>
#include "main.h"
/**
 *clear_bit - Establece el valor de un bit en 0 en un indice dado
 *@n: numero
 *@index: indice dado
 *Return: 1 si funciona | 0 si falla
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == NULL)
		return (-1);

	bit = 1 << index;

	if ((bit | *n) == *n)
	{
		*n = *n ^ bit;
	}

return (1);
}
