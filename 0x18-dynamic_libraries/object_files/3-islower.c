#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: the char to be verified
 * Return: 1 if lowercase 0 if not.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
