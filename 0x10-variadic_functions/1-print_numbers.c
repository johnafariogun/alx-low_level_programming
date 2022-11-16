#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - this prints numbers separated by some strings in sparator
 * @separator: the separator string
 * @n: number of numbers
 * @...: parameters placeholoder
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_of_params;
	unsigned int i;

	va_start(list_of_params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_of_params, int));

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list_of_params);
}
