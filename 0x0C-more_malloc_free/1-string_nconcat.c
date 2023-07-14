#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of chars to copy of the second string.
 * Return: pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1, size2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (size2 <= n)
		n = size2;
	str = malloc((size1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;

	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str[i + size1] = s2[i];
		i++;
	}
	str[size1 + n] = '\0';
	return (str);
}

/**
 * _strlen - function to determene the lenght of a string.
 * @s: string to determne it s length.
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;

	for (i = 0; i < 1000; i++)
	{
		if (*(s + i) != '\0')
			length++;
		else
			break;
	}
	return (length);
}
