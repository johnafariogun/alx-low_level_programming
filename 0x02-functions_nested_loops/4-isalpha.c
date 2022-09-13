#include "main.h"

/**
 * _isalpha - checks the code
 *@c: is an integer argument passed into the function
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
