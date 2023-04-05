#include "main.h"

/**
* prime - checks to see if number is prime .
* @n: int number .
* @next: int number .
* Return: 1 if prime, 0 if is not a prime number .
*/

int prime(int n, int next)
{
	int res_1 = n == next;
	int res_2 = n % next == 0;
	int res_3 = next + 1;

	return ((res_1) ? 1 : (res_2) ? 0 : prime(n, res_3));
}

/**
 * is_prime_number - check if prime .
 *
 * @n: int number .
 * Return: 1 if prime, 0 if is not a prime number .
 */

int is_prime_number(int n)
{
	/** create a ternary operator||will return the result.. happy coding*/

	return ((n == 0 || n < 0 || n == 1) ? 0 : prime(n, 2));
}
