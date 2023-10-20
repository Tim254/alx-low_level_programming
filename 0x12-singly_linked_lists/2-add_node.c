#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function that returns length of tring
 * @s: a character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node
 * @head: head of the list
 * @str: value to insert to element
 * Return: Number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return(add);
}
