#include "main.h"
/**
*_memcpy - copia n caracteres del área de memoria src al área de memoria dest
*@dest: puntero a matriz de destino
*@src: puntero al origen de datos
*@n: numero de bytes que se copiaran
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
return (dest);
}
