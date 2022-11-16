#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints any number of strings
 * @separator: separates the strings
 * @n: number of strings
 * @...: parameters holding the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_of_params;
	unsigned int i;

	va_start(list_of_params, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list_of_params, char*));

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list_of_params);
}
