#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of elements in the array.
 * @size: size of an ellement of the array
 * Return: pointer to the allocated memory on success.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	i = 0;

	while (i < nmemb * size)
	{
		m[i] = '\0';
		i++;
	}
	return (m);
}
