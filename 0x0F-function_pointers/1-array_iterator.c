#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - funcion a otra funcion
 *@array: cadena
 *@size: tamaño de cadena
 *@action: puntero a funcion
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}
