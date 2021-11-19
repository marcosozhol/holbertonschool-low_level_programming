#include <stdio.h>
#include "main.h"
/**
 *set_bit - Establece el valor de un bit en un indice dado
 *@n: numero
 *@index: indice dado
 *Return: 1 si funciono | 0 si fallo
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (n == NULL)
		return (-1);

	m = 1 << index;

	*n = *n | m;

	return (1);
}
