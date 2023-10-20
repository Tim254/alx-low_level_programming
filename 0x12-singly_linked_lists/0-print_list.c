#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print list
 * @h: name of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	 size_t s = 0;

        while (h)
        {
                if (!h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);
                h = h->next;
                s++;
        }

        return (s);
}
