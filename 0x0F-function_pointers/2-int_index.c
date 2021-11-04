#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - funcion para buscar numeros enteros
 *@array: cadena donde buscar
 *@size: tamaño de la cadena en elementos
 *@cmp: puntero a funcion para comparar
 *Return: valor de i ó -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
