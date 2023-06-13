#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name, followed by new line
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 if successful
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
