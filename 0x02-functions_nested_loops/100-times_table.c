#include "main.h"
/**
 *print_times_table - tabla
 *@n: entero
 */
void print_times_table(int n)
{
	int a = 0, b = 0, c = 0;

	if (n < 16 && n > -1)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if ((c / 10) == 0) /*si primer digito = 0*/
				{
					if (b == 0)
						_putchar ('0');
					if (b != 0) /*imprimir si b es distinto de 0*/
					{
						_putchar (32);
						_putchar (32);
						_putchar ((c % 10) + '0');
					}
				}
				if ((c / 10) <= 9 && ((c % 10) <= 9)) /*imprime hasta 99*/
				{
					_putchar (32); /*espacio en ASCII*/
					_putchar ((c / 10) + '0');
					_putchar ((c % 10) + '0');
				}
				else /*imprime desde 100*/
				{
					_putchar ((c / 100) + '0');
					_putchar (((c / 10) % 10) + '0');
					_putchar ((c % 10) + '0');
				}
				if (b < n)
				{
					_putchar (44); /*','*/
					_putchar (32); /*espacio en ascii*/
				}
			}
		}
	}
}
