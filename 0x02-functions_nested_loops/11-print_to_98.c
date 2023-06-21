#include "main.h"

/**
 * print_to_98 - function that print number form n to 98.
 * @n: starting number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;

	while (i < 98)
	{
		if (i < 10 && i >= 0)
		{
		_putchar (i + '0');
		}
		else if (i < 0 && i > -10)
		{
		_putchar ('-');
		_putchar ((i * -1) + '0');
		}
		else if (i <= -10)
		{
		_putchar ('-');
		_putchar ((i * -1) / 10 + '0');
		_putchar ((i * -1) % 10 + '0');
		}
		else
		{
		_putchar (i / 10 + '0');
		_putchar (i % 10 + '0');
		}
		_putchar (',');
		_putchar (' ');
		i++;
	}
	_putchar ('9');
	_putchar ('8');
	_putchar ('\n');
}
