#include "main.h"
#include <string.h>

/**
 * *_strncat - function that will concatenate two strings using n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
