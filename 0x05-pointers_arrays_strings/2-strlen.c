#include "main.h"

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
