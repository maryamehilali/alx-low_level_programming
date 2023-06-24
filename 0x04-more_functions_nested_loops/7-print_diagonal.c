#include "main.h"

/**
 * print_diagonal - function that prints a diagonal  line in the terminal
 * @n: numbers of / to be printed.
 * Return: void function.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
	if (!(n <= 0))
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar('/');
	}
	_putchar('\n');
	}
}
