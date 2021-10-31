#include <stdlib.h>
#include "main.h"
/**
 *array_range - contrae dos valores
 *@min: valor minimo
 *@max: valor maximo
 *Return: puntero a nuevo lugar
 *
 */

int *array_range(int min, int max)
{
	int *z;
	int i, x, g;
	g = (max - min);

	if (min > max)
		return (NULL);

	for (x = 0; x < g; x++)
		i++;

	z = malloc(sizeof(int) * (x + 1));

	if (z == NULL)
		return (NULL);

	for (i = 0; i <= x; i++)
		z[i] = min++;

return (z);
}
