#include "main.h"
/**
 * _isdigit - checks if the input is a digit (0 through 9)
 * @c: a input integer
 *
 * Return: 1 (Success) else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
