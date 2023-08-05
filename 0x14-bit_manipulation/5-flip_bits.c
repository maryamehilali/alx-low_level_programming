#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - function that count the number of bits we need to flip
 *		to get from one number to another.
 * @n: input number 1.
 * @m: input number 2.
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int flip;

	flip = n ^ m;

	for (i = 64; i > 0; i--)
	{
		if ((1 & flip) == 1)
			count++;
		flip >>= 1;
	}
	return (count);
}
