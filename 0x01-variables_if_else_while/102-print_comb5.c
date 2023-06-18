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
	int a, b, n, m;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (n = 0; n <= 9; n++)
	{
	for (m = 0; m <= 9; m++)
	{
	if ((a * 10 + b) != (n * 10 + m) && (a * 10 + b) < (n * 10 + m))
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		putchar(' ');
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');
		if ((a * 10 + b) != 98 || (n * 10 + m) != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
