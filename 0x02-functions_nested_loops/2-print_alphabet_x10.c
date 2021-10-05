#include "main.h"
/**
*print_alphabet_x10 - cabezera
*
*Return: Always 0.
*/

void print_alphabet_x10(void)
{
int abc, cont;
cont = 0;
	while (cont < 10)
{
	for (abc = 'a'; abc <= 'z'; abc++)
{
		_putchar(abc);
}
		cont++;
		_putchar('\n');
}
}
