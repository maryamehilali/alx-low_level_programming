#include "main.h"

/**
 * _abs - function that computes the absolute value of a integer.
 * @n: the integer to verify.
 * Return: the absolute value.
 */

int _abs(int n)
{
	int i;

	if (n >= 0)
	{
		i = n;
		return (i);
	}
	else
	{
		i = n * (-1);
		return (i);
	}
}
