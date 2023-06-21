#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that print number form n to 98.
 * @n: starting number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;

	if (i < 98)
	{
		while (i < 98)
		{
		printf("%d, ", i);
		i++;
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
		printf("%d, ", i);
		i--;
		}
	}
	printf("98\n");
}
