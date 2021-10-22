#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - librria standard
 *@argc: contiene el numero de argumentos
 *@argv: contiene los argumentos
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum, a;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (!isdigit(argv[i][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
return (0);
}
