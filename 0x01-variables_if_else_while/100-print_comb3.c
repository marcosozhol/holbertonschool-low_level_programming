#include <stdio.h>
/**
 *main - ingreso de datos
 *Return: Alwais 0
 *
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 <= 57; num1++) /*de 0 a 9 en ASCII*/
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);

			if ((num1 == 56) & (num2 == 57)) /*termina si es mayor o igual a 99*/
			{
				break;
			}
		putchar(44); /*es la ',' en ascii*/
		putchar (32); /*es espacio en ascii*/
		}
	}

	putchar ('\n');

	return (0);
}
