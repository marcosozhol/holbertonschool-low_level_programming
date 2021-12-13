#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - genera contraseñas validas aleatorias
 *Return: Always 0
 */
int main(void)
{
	int con[100], i = 0, sum = 0, n = 0;

	srand(time(NULL));

	for (i = 0; 1 < 100; i++)
	{
		con[i] = rand() % 78;
		sum += (con[i] + '0');
		putchar(con[i] + '0');

		if ((2272 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
