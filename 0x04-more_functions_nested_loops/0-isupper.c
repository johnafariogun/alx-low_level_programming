#include "main.h"
/**
 * _isupper - checks the input to see if it is upper or lower
 * @c: the input character
 * Return:  1 if uppercase 0 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
