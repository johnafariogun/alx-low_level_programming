#include "main.h"
/**
 * _pow_recursion - this does some mathemathics indices using recursion
 * @x: number
 * @y: power
 * Return: answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *= _pow_recursion(x, (y - 1)));
	}
}
