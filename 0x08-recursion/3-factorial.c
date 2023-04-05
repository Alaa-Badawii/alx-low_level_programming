#include "main.h"

/**
 * factorial - returns the factorial of a given number .
 *
 * @n: integer number .
 *
 * Return: the factorial of a given number [int] .
 */

int factorial(int n)
{
	/** create a ternary operator||will return the result.. happy coding*/
	int var_1 = -1;
	int var_2 = n - 1;

	return ((n == 0) ? 1 : (n < 0) ? var_1 : n * factorial(var_2));
}
