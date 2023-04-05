#include "main.h"

/**
 * _strlen_recursion - returns the length of a string .
 *
 * @s : string .
 *
 * Return: the length of a string .
 */

int _strlen_recursion(char *s)
{
	/** declare and assignment new int as counter */
	int counter = 0;
	/** check if char is not nulled */
	if (*s != '\0')
	{
	/** increament counter before return result of the function */
	/** - increment the counter */
	/** - add value 1 plus the function caller */
		counter++;
		s++;
		counter += _strlen_recursion(s);
	}
	else
	{
	/** function will return without any error */
		return (0);
	}
	/** - return result to puchar to print out */
	return (counter);
}
