#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array
 * @size: the size of the array.
 * @c: character to put on the array.
 * Return: a pointer to an array or Null.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;

	if (!size)
		return (0);
	s = malloc(sizeof(char) * size);
	if (!s)
		return (0);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
