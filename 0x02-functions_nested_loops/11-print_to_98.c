#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Imprime numeros hasta llegar al 98
*@n: numero de comienzo
*Return: 0
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
