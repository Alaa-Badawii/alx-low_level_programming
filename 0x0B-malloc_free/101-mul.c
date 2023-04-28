#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a valid number
 * @s: the string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_number(char *s)
{
    while (*s) 
    {
        if (!isdigit(*s))
        {
            return (0);
        }
        s++;
    }
    return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2, product;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }
    if (!is_number(argv[1]) || !is_number(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    product = num1 * num2;
    printf("%d\n", product);
    return (0);
}
