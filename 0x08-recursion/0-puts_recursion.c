#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line .
 *
 * @s : string .
 *
 * Return: nothing .
 */

void _puts_recursion(char *s)
{
	/** check if char is nulled */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
	/** increament char before recall the function */
		s += 1;
		_puts_recursion(s);
	}
}
