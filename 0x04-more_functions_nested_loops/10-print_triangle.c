#include "main.h"

/**
 * print_triangle - function that prints a triangle in the terminal
 * @size: numbers of # to be printed.
 * Return: void function.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < (i + 1); k++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}}
	else
		_putchar('\n');
}
