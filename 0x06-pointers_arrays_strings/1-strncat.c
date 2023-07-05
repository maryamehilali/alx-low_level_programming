#include "main.h"

/**
 * _strncat - function that concatenate two strings
 * @dest: the receiver string
 * @src: the second string
 * @n: number of byte to concatenate from src
 * Return: the result string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size1, size2, i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		size1 = i;
		i++;
	}

	while (src[j] != '\0')
	{
		size2 = j;
		j++;
	}

	if (size1 == 0)
		size1 = -1;

	if (n > size2)
		n = size2;

	for (i = 0; i < n; i++)
	{
		dest[size1 + 1 + i] = src[i];
	}
	dest[size1 + n + 1] = '\0';

	return (dest);
}
