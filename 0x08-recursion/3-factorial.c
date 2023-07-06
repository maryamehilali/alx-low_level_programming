#include "main.h"

/**
 * factorial - function that prints the factorila of a given number
 * @n: the input number
 * Return: 0 or 1 or -1 depending on the number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
