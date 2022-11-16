#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of any number of arguments
 * @n: number of parameters to be passed
 * @...: parameters to be calculated
 * Return: if n == 0, 0 else
 * the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_of_params;
	unsigned int i, sum = 0;

	va_start(list_of_params, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list_of_params, int);
	}

	va_end(list_of_params);

	return (sum);
}
