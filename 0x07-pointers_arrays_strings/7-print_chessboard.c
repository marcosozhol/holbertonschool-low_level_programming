#include "main.h"
/**
*print_chessboard - imprime el ajedrez
*@a: lo que va a imprimir
*
*/

void print_chessboard(char (*a)[8])
{
	int c = 0, b = 0;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
