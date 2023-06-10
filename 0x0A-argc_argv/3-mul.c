#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints sum of 2 numbers.
 * to make a change for an amount of money
 * @agrc: number of arguments.
 * @argv: array of arguments.
 * return: 0-success, non-zero-fail.
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc ==3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return(1);
	}

	return (0);
}	
		
