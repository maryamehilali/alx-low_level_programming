#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: input number.
 * @index: input index of the bit.
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned long int num;

	num = n >> index;
	bit = num & 1;
	return (bit);
}
