#include "main.h"

/**
 * jack_bauer - function to print every minute of the day.
 *
 * Return: Void returns nothing.
 */

void jack_bauer(void)
{
	int i = 0;

	do {
	int m = 0;

		while (m < 60)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar (':');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar('\n');
		m++;
		}
	i++;
	} while (i < 24);
}
