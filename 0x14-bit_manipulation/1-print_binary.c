#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * recursive_binary - function to print binary by recursion
 * @n: int to print.
 * Return: void.
 */

void recursive_binary(unsigned long int n)
{
	if (n == 0)
		return;
	recursive_binary(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - function that prints the binary representation of an int
 * @n: the input unsigned long int.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar ('0');
	}
	else
		recursive_binary(n);
}
