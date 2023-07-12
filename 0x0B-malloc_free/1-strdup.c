#include <stdlib.h>
#include "main.h"

/**
 * char *_strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: given string
 * Return: Pointer to a string.
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	if (!size)
		return (NULL);
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;

	while (i <= size)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
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
