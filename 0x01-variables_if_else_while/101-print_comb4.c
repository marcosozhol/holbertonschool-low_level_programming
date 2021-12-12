#include <stdio.h>
/**
 *main - entrada de datos
 *Return: Alwais 0
 *
 */
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;

	for (num1 = 48; num1 <= 57; num1++)/*del 0 al 9 en ASCII*/
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			for (num3 = num2 + 1; num3 <= 57; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				if ((num1 == 55) & (num2 == num1 + 1) & (num3 == num2 + 1))
				{
					break;/*cerramos si es >= 789*/
				}
				putchar (44);/*',' en ASCII*/
				putchar (32);/*espacio en ASCII*/
			}
		}
	}
	putchar ('\n');
	return (0);
}
