#include "main.h"
/**
 *_atoi - convierte una string en un entero
 *@s: string
 *Return: string convertida a entero
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, len = 0, f = 0, dig = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			dig = s[a] - '0';
			if (b % 2)
				dig = -dig;
			c = c * 10 + dig;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;

			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);

	return (c);
}
