#include <stdio.h>
#include "main.h"
/**
 *flip_bits - muestra nro de bits que se necesita voltear.
 *@n: numero
 *@m: otro num
 *Return: nums de bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;

	while (n != 0 || m != 0)
	{
		if ((n  & 1) != (m & 1))
		{
			x++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	return (x);
}
