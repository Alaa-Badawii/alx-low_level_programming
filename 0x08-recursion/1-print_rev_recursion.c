#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse .
 *
 * @s : string .
 *
 * Return: nothing .
 */

void _print_rev_recursion(char *s)
{
	/** check if char is not nulled */
	if (*s != '\0')
	{
	/** increament char while recall the function */
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
	/** return the func while char nulled */
		return;
	}
}
