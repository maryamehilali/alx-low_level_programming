#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of bytes to allocate.
 * Return: pointer to the allocated memory on success.
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
