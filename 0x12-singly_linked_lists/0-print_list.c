#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to list_t list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
        size_t n = 0;

        while (h)
        {
                if (!h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%d] %s\n", h->len, h->str);
                h = h->next;
                n++;
        }

        return (n);
}
