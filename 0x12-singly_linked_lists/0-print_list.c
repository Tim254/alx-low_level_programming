#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements ina linked list
 * @h: pointer to the list_t list
 * Return: Number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
