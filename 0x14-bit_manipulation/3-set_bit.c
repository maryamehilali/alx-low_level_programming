#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - function that sets a bit to 1 at a given index.
 * @n: input number.
 * @index: input index of the bit.
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	unsigned long int num;

	if (index > 63)
		return (-1);

	num = 1 << index;
	*n = num | *n;
	return (1);
}
