#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments 
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
	
		printf("%s\n", argv[i]);
		i++;
	}
	
	return (0);	
}
