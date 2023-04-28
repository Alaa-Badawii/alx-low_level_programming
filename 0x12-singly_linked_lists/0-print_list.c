// This is a function that prints all the elements of a list_t list
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0; // Variable to store the number of nodes

    while (h != NULL) // Loop through the list
    {
        if (h->str == NULL) // If str is NULL
        {
            printf("[0] (nil)\n"); // Print [0] (nil)
        }
        else // If str is not NULL
        {
            printf("[%u] %s\n", h->len, h->str); // Print the length and the string
        }
        count++; // Increment the count
        h = h->next; // Move to the next node
    }
    return (count); // Return the number of nodes
}
