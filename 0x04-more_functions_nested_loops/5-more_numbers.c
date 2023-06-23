#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 14 10 times.
 *
 * Return: 0 always success.
 */
void more_numbers(void)
{
	int n, c, i;

	for (n = 0; n < 10; n++)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c >= 10)
		{
		i = c - 9
		_putchar('1');
		_putchar(i + '0');
		}
	}
	_putchar('\n');
	}
}
