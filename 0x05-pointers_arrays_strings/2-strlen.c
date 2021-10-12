#include "main.h"
/**
*_strlen - Funcion para mostrar el largo de una cadena
*@s: variable con cadena
*
*Return: 0
*/

int _strlen(char *s)
{
	int str, var = 0;

	for (str = 0; *s++ != '\0'; str++)
	{
		var++;
	}
	return (var);
return (0);
}
