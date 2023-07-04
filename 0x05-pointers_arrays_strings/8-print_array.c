#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 * @a: the array;
 * @n: number of ellements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[i]);
}
