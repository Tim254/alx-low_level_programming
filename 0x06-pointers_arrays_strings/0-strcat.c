#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concetanates a string to another
 * @dest: our destination string
 * @src: our source string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (0);
}
