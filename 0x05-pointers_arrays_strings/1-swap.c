#include "main.h"
#include <stddef.h>

/**
 * swap_int - function that swaps values of two integers.
 * @a: first pointer to an integer.
 * @b: second pointer to an integer.
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
