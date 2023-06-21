#include "main.h"

/**
 * print_times_table - function to print n times table.
 * @n: number of times
 * Return: Void returns nothing.
 */

void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
	int i = 0;

	while (i <= n)
	{
		int m = 0;

		while (m <= n)
		{
		int k = i * m;

		if (k == 0 && m == 0)
		_putchar('0');
		else if (k >= 100)
		{
		_putchar (',');
		_putchar (' ');
		_putchar (k / 100 + '0');
		_putchar ((k / 10) % 10 + '0');
		_putchar (k % 10 + '0');
		}
		else if (k >= 10)
		{
		_putchar (',');
		_putchar (' ');
		_putchar (' ');
		_putchar (k / 10 + '0');
		_putchar (k % 10 + '0');
		}
		else
		{
		_putchar (',');
		_putchar (' ');
		_putchar (' ');
		_putchar (' ');
		_putchar(k + '0');
		}
		m++;
		}
	i++;
	_putchar('\n');
	}
	}
}
