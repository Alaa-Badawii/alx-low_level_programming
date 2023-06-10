#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the minimum number of coins
 * to make a change for an amount of money
 * @agrc: number of arguments
 * @argv: array of arguments
 * return: 0-success, non-zero-fail.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);	
	return(0);
}

