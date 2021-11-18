#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint - convierte una cadena en binario a int
 *@b: puntero a la cadena
 *Return: resultado en int | 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int resultado = 0;
	unsigned int i = 0; /*almacena el elemento de la cadena*/
	unsigned int base2 = 1; /*valor en base 2, se va a mult por dos cada vez*/

	if (b == NULL)
		return (0);

	while (b[i]) /*recorremos la cadena y nos posicionamos al final*/
		i++;

	while (i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
		{
			resultado = resultado + base2;
		}
		base2 = base2 * 2;
	}
return (resultado);
}
