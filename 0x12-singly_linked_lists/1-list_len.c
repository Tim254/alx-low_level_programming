#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements
 * @h: name of the list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
