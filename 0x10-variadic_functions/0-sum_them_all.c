#include <stdarg.h>
#include <sddio.h>
#include "variadic_functions.h"

/**
 * sum_them_all-returns the sum of all its parameters.
 * @n:first fixed argument
 * Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	int i;

	for (i = 0; i < n; i++)
	{
		sum + = va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
