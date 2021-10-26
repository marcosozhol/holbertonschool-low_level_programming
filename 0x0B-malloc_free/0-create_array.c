#include "main.h"
#include <stdlib.h>
/**
 *create_array - function to create array with chars
 *@size: variable
 *@c: variable
 *Return: NULL or cadena
 *
 */

char *create_array(unsigned int size, char c)
{
	/* retorna null si size = 0 ó si falla*/
	/* crear array de caracteres*/
	/* inicia en un caracter especifico */

	char *cadena;
	unsigned int i;

	cadena = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		cadena[i] = c;
	}
return (cadena);
}
