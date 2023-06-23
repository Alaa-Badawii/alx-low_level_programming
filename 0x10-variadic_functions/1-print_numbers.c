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
	unsigned int index;
	va_list nums;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		if (n == NULL)
			printf("nil");
		else
			printf("%d", va_arg(nums, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);

}
