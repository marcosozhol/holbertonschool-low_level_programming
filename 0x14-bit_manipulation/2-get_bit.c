#include <stdio.h>
#include "main.h"
/**
 *get_bit - Devuelve el valor de un bit en un indice dado
 *@n: valor del bit
 *@index: indice dado
 *Return: valor del indice | -1 si error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;/*guarda el valor de un bit*/

	m = (n >> index) & 1;

	if ((m == 1) || (m == 0))
	{
		return (m);
	}
	else
		return (-1);
}
