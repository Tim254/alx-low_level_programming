#include <stdio.h>

/**
 * main - entry point
 * Print different combinations of two digitd
 * Return: 0
 */
int main(void)
{
	int a, d;

	for (a = 48; a <= 57; a++)
	{
	for (d = 48; d <= 57; d++)
	{
	if (a < d && a != d)
	{
	putchar(a);
	putchar(d);
	if (a + d != 113)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
