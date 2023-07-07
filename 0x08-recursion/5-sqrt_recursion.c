#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: theinput number
 * Return: -1 or the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (square_search(n, 1));
}
/**
 * square_search - function to verify if i is the square root of n
 * @n: the input number
 * @i: the square root to verify
 * Return: i or -1.
 */

int square_search(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (square_search(n, i + 1));
}
