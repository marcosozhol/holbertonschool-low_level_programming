#include "main.h"
/**
*reverse_array - funcion para mostrar al reves una cadena de numeros
*@a: cadena
*@n: variable que ocupa un lugar en la cadena
*
*/

void reverse_array(int *a, int n)
{
	int temporal, i;

		/*for (n = 0; a[n] != '\0'; n++)*/
		for (i = 0; i < n; i++)
		{
		n--;
		temporal = a[i];
		a[i] = a[n];
		a[n] = temporal;
		}
}
