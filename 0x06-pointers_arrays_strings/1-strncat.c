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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
