#include <stdio.h>

/**
 * main - program to print numbers separated by comma and a space.
 *
 * Return: Always 0 that means success
 */

int main(void)
{
	int a;

	putchar('0');

	for (a = 1; a <= 9; a++)
	{
		putchar (',');
		putchar (' ');
		putchar ((a % 10) + '0');
	}

	putchar ('\n');

	return (0);
}
