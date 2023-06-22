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
	va_list ptr;
	unsigned int i, sum = 0;
	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum + = va_arg(ptr, int);
	
	va_end(ptr);

	return (sum);
}
