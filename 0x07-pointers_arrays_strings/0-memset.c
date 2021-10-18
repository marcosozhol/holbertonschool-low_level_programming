#include "main.h"
/**
*_memset - funcion para completar con variable con un byte constante
*@s: puntero hacia el bloque de memoria a llenar
*@b: valor que se pondrá
*@n: el num de byte que se establece en el valor
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /*var sin firmar, puede contener o y positivo, ver mas*/

	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
