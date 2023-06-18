#include <stdio.h>

/**
 * main - Program that prints all possible combinaition of two digits;
 * digits should be different;
 * only print the smallets combinaition;
 * combinations should be saparated by a comma and a space;
 * a new line at the end;
 * Return: Always 0 success
 */

int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
	for (m = 0; m <= 9; m++)
	{
	if (m != n && m > n)
	{
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');
		if (m != 9 || n != 8)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
