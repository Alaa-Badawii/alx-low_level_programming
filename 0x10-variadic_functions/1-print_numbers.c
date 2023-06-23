#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * otherwise- prints strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, int);
		if (s == NULL)
			printf("nil")
		else
			printf("%d", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);

}
