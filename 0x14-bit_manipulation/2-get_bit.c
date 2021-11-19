#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;/*guarda el valor de un bit*/

	m = (n >> index) & 1;

	if ((m == 1) || (m == 0))
	{
		return (m);
	}

return (-1);
}
