#include "main.h"

/**
* filter - find square root of n .
* @n: n .
* @sqrt: try with that sqrt .
* Return: natural square root with ternary operator .
*/

int filter(int n, int sqrt)
{
	int var_1 = -1;
	int res_1 = sqrt * sqrt > n;
	int res_2 = sqrt * sqrt == n;
	int res_3 = sqrt + 1;

	return ((res_1) ? var_1 : (res_2) ? sqrt : filter(n, res_3));
}

/**
 * _sqrt_recursion - returns natural square root of @n .
 *
 * @n: int number .
 * Return: natural square root .
 */

int _sqrt_recursion(int n)
{
	/** create a ternary operator||will return the result.. happy coding*/
	int var_1 = -1;

	return ((n < 0) ? var_1 : filter(n, 0));
}
