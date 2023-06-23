#include "main.h"

/**
 * _isupper - function that chacks for uppercase character.
 * @c: character to verify.
 * Return: 1 if c is uppercase 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
