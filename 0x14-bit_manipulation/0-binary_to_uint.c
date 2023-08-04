#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that convert a number from binary to unsigned int
 * @b: binary number in string form.
 * Return: unsigned int form of the binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num_b10 = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			num_b10 = 2 * num_b10 + (b[i] - '0');
		else
			return (0);
	}
	return (num_b10);
}
