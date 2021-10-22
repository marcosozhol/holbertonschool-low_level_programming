#include <stdio.h>
/**
 *main - libreria estandard
 *@argc: contiene el numero de argumentos
 *@argv: contiene los argumentos
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	(void)argc;
	return (0);
}
