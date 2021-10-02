#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - lenguages exercises c
*Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%d if the number is positive\n", n);
}
	else if (n == 0)
{
		printf("%d if the number is zero\n", n);
}
	else
{
		printf("%d if the number is negative\n", n);
}
	return (0);
}
