#include "main.h"
/**
*_isupper - is function of return uppercase or not.
*
* @c: is variable.
*Return: 1 of uppercase and 0 or not uppercase.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
