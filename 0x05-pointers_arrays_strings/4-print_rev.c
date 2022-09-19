#include "main.h"
/**
 * print_rev - this prints the reverse of a string
 * @s: pointer to a string starting character
 */
void print_rev(char *s)
{
	int letters = 0;

	while (*s != '\0')
	{
		s++;
		letters++;
	}
	/* the code above counts the amount of letters in the string*/
	while (letters > 0)
	{
		s--;
		_putchar(*s);
		letters--;
	}
	_putchar('\n');
}
