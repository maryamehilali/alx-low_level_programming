#include <stdio.h>
#include "main.h"

/**
 * main - Function that gives the largest prime factor of 612852475143.
 *
 * Return: 0 success.
 */

int main(void)
{
	int i, j;
	long int prime = 612852475143;

	for (i = 2; i < 100; i++)
	{
		j = i;
		while (prime % j == 0)
		{
			prime = prime / j;
			j++;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
