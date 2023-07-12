#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Pointer to a string or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
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
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;

	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		str[i + size1] = s2[i];
		i++;
	}
	str[size1 + size2] = '\0';
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
