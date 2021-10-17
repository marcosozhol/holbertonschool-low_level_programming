#include "main.h"
/**
*string_toupper - funcion para cambiar minusculas de mayusculas en una cadena
*@s: variable para almacenar la cadena
*Return: s - retorna la cadena convertida
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)	/*recorremos la cadena*/
	{
		if (s[i] >= 97 && s[i] <= 122)	/*tabla ascii, representan las letras min*/
		{
			s[i] = s[i] - 32;	/*diferencia entre minusculas y mayusculas en ascii*/
		}
	}
return (s);
}
