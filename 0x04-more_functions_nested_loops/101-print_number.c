#include "main.h"

/**
 * print_number - function that prints numbers.
 * @n: number to print.
 * Return: void.
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
		i = n;
	if (i >= 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
