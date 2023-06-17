#include <stdio.h>

/**
 * main - program to print numbers separated by comma and a space.
 *
 * Return: Always 0 that means success
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar (',');
		putchar (' ');
	}

	putchar ('\n');

	return (0);
}
