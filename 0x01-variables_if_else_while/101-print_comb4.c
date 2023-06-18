#include <stdio.h>

/**
 * main - Program that prints all possible combinaition of three digits;
 * digits should be different;
 * only print the smallets combinaition;
 * combinations should be saparated by a comma and a space;
 * a new line at the end;
 * Return: Always 0 success
 */

int main(void)
{
	int n, m, k;

	for (n = 0; n <= 9; n++)
	{
	for (m = 0; m <= 9; m++)
	{
	for (k = 0; k <= 9; k++)
	{
	if (m != n && n != k && m > n && k > m)
	{
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');
		putchar((k % 10) + '0');
		if (k != 9 || m != 8 || n != 7)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
