#include "variadic_functions.h"
/**
 * print_char - prints a char
 * @arg: a list of the variadic aarguments
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - prints an int
 * @arg: a list of variadic arguments
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a floating point number
 * @arg: variadic arguments
 */
void print_float(va_list arg)
{
	double num;
	
	num = va_arg(arg, double);
	printf("%lf", num);
}

/**
 * print_str - prints a string
 * @arg: variadic arguments
 */
void print_Str(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything in certain formats, followed by a new line
 * @format - a string of characters repping arhument types and
 * function to be used
 * @...: variable number of arguments(total variadic arguments)
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i 

}
