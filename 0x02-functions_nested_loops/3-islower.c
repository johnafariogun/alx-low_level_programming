#include "main.h"

/**
 * _islower - checks for a lowercase character
 * character: letter being tested
 * Return: Always 0
 */

int _islower(int character)
{

	if (character >= 97 && character <= 122)
		return (1);
	else
		return (0);
}
