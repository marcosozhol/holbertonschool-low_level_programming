#include <stdio.h>
/**
 *main - ingreso de datos
 *Return: Alwais 0
 *
 */
int main(void)
{
	int num1 = 0, num2 = 0;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar (num1 / 10 + '0');
			putchar (num1 % 10 + '0');
			putchar (32); /*espacio en ASCII*/
			putchar (num2 / 10 + '0');
			putchar (num2 % 10 + '0');

			if (num1 == 98 && num2  == 99)
			{
				break; /*cerramos si llega a 98 99*/
			}
			putchar (44); /*',' en ASCII*/
			putchar (32); /*espacio en ASCII*/
		}
	}
	putchar ('\n');
	return (0);
}
