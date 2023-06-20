#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * 10 line
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		char j = 'a';

		while (j <= 'z')
		{
		_putchar(j);
		j++;
		}
	_putchar('\n');
	i++;
	}
}
