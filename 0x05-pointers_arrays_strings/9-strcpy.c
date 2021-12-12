#include "main.h"
/**
 *_strcpy - copia una cadena apuntada a otro puntero
 *@dest: puntero destino
 *@src: puntero con cadena
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
