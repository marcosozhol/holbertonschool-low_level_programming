#include <stdio.h>
/**
 *main - librreria standard
 *@argc: contiene el numero de argumentos
 *@argv: contiene los argumentos
 *Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv; /*no vamos a usar este arreglo*/
	return (0);
}
