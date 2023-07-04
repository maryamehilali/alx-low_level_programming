#include "main.h"

/**
 * _strcat - function that concatenate two strings
 * @dest: the receiver string
 * @src: the second string
 * Return: the result string
 */
char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= size2; i++)
	{
		dest[size1 + 1 + i] = src[i];
	}
	dest[size1 + size2 + 2] = '\0';
	return (dest);
}
