#include "main.h"

/**
 * get_endianness - function that checks endianess of a machine.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
