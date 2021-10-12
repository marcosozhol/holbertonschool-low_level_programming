#include "main.h"
/**
*swap_int - funcion que intercambia los valores de dos variables
*@a: variable 1
*@b: variable 2
*@numtemp - es una variable temporal
*/

void swap_int(int *a, int *b)
{
	int numtemp;

	numtemp = *a;
	*a = *b;
	*b = numtemp;

/* swap_int(&*a, &*b); */
}
