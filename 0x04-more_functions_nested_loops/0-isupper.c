#include "main.h"
/**
*_isupper - is function of return uppercase or not.
*
* @c: is variable.
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
