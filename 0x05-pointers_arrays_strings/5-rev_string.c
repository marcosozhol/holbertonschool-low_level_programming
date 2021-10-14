#include "main.h"
/**
*rev_string - funcion para intercambiar los valores de la cadena al reves
*@s: cadena
*/

void rev_string(char *s)
{
	int i, a, tmp;

	for (i = 0; s[i] != '\0'; i++) /*posiciona en ultimo caracter de cadena*/
	{
	}
	for (a = 0; a < i; a++) /*asignamos una variable y le damos valor en cadena*/
	{
	i--;
	tmp = s[a];
	s[a] = s[i];
	s[i] = tmp;
	}
}
