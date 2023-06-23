#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all-returns the sum of all its parameters.
 * @n:number of parameters passed to function
 * Return: If n == 0 - 0.
 * otherwise - sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	 int Sum = 0;
	 va_list ptr;
	 if (n == 0)
		 return (0);
	 va_start(ptr, n);

	for (int i = 0; i < n; i++)
 		sum += va_arg(ptr, int);
 	va_end(ptr);
 	return Sum;
}
