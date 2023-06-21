#include "main.h"

/**
 * times_table - function to print 9 times table.
 *
 * Return: Void returns nothing.
 */

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int m = 0;

		while (m < 10)
		{
		int k = i * m;

		if (k == 0 && m == 0)
		_putchar('0');
		else if (k >= 10 && m != 0)
		{
		_putchar (',');
		_putchar (' ');
		_putchar (k / 10 + '0');
		_putchar (k % 10 + '0');
		}
		else
		{
		_putchar (',');
		_putchar (' ');
		_putchar (' ');
		_putchar(k + '0');
		}
		m++;
		}
	_putchar('\n');
	i++;
	}
}
