#include "main.h"

/**
 * print_rev - function to print a string in reverse.
 * @s: string to be printed.
 */

void print_rev(char *s)
{
	int i, j, k;

	j = 1000;
	for (i = 0; i < j; i++)
	{
		if (*(s + i) == '\0')
		{
			j = i;
		}
	}
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
