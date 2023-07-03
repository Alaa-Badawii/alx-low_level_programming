#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of the string
 * @n: string whose length to cheked
 *
 * Return: interger length of string
 */
int _strlen(char *n)
{
	int i = 0;

	if (!n)
		return (0);
	while (*n++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t i  = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
