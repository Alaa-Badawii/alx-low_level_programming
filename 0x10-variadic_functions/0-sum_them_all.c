#include <stdarg.h>
#include <sddio.h>
#include "variadic_functions.h"

/**
 * sum_them_all-returns the sum of all its parameters.
 * @n:number of parameters passed to function
 * Return: If n == 0 - 0.
 * otherwise - sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}