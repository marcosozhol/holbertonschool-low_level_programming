#include <stdio.h>
/**
 *print_name - imprime el nombre
 *@name: - variable con el nombre
 *@f: puntero a la funcion
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
