#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * to the buffer pointed to by dest includion the \0 at the end of the string
 * @src: the source string
 * @dest: the destination buffer
 * Return: returns the buffers dest
 */

char *_strcpy(char *dest, char *src)
{
	int size, i;

	i = 0;

	while (src[i] != '\0')
	{
		size = i;
		i++;
	}

	for (i = 0; i <= size; i++)
	{
		if (size != 0)
		dest[i] = src[i];
		else
			break;
	}

	dest[(size + 1)] = '\0';

	return (dest);
}
