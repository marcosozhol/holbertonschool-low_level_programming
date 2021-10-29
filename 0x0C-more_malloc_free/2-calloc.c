#include <stdlib.h>
#include "main.h"
/**
 *_calloc - asigna memoria para una matriz
 *@nmemb: matriz de elementos
 *@size: variable de tamaño
 *Return: nul y
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int i;

	while (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(nmemb * size);

	while (z == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		z[i] = 0;

return (z);
}
