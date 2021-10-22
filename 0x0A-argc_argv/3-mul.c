#include <stdio.h>
#include <stdlib.h>
/**
 *main - librria standard
 *@argc: contiene el numero de argumentos
 *@argv: contiene los argumentos
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	}
return (0);
}
