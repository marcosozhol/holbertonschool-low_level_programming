#include "main.h"
/**
*_isdigit - is a function for check a digit.
*@c: is a variable.
*Return: 1 if digit and 0 is not a digit.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
