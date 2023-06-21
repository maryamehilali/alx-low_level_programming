#include "main.h"

/**
 * print_last_digit - function to print last digit of a number.
 * @n: number to work on
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = (n % 10 * -1);
		_putchar (i + '0');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar (i + '0');
	}
	else
	{
		i = n % 10;
		_putchar (i + '0');
	}
	return (i);
}
