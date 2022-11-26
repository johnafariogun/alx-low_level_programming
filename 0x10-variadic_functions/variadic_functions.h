#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct controller - struct that defines a pointer
 * @specifier: a symbol that represents the format specifier
 * @func: function pointer that prints the right data to the
 * right format specifier
 */

typedef struct controller
{
	char *specifier;
	void (*func)(va_list arg);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
#endif
