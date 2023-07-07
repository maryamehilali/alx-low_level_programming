#include "main.h"

/**
 * is_prime_number - that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: input number
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_search(n, n - 1));
}
/**
 * prime_search - that verify if the input integer is divisible by i,
 * while i different then 1.
 * @n: input number
 * @i: is n can be divided by i
 * Return: 0 or 1.
 */

int prime_search(int n, int i)
{
	if (i < 1)
		return (0);
	else if (n % i == 0 && i != 1)
		return (0);
	else if (n % i == 0 && i == 1)
		return (1);
	else
		return (prime_search(n, i - 1));
}
