#include "main.h"

/**
 * _pow_recursion - power of number .
 *
 * @x: int number .
 *
 * @y: power to raise to .
 *
 * Return: returns the int value .
 */

int _pow_recursion(int x, int y)
{
	/** create a ternary operator||will return the result.. happy coding*/
	int var_1 = -1;
	int var_2 = y - 1;
	int re = y < 0;
	int res = x == 0;
	int res2 = x == 1 || y == 0;

	return ((res) ? 0 : (re) ? var_1 : (res2) ? 1 : x * _pow_recursion(x, var_2));
}
