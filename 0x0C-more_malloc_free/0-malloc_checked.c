#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - muestra la direccion de memoria
 *@b: variable
 *Return: retorna la direccion o el fallo
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98); /*sale de programa con 98*/
	}		/*si ponemos return, saca con 98 lo anterior*/

return (ptr);
}
