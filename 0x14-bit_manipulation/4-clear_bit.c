#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - function that clears a bit to 0 at a given index.
 * @n: input number.
 * @index: input index of the bit.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = ~num & *n;
	return (1);
}
