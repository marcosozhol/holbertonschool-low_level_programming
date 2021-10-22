#include <stdio.h>
/**
 *main - librería estandard
 *@argc: contiene el numero de argumentos
 *@argv: contiene los argumentos
 *Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n",  argv[0]);

	(void)argc; /*indica que no vamos a utilizar esta var*/
	return (0);
}
