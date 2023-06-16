#include <stdio.h>

/**
 * main - program that print numbers base 10 from 0 to 9.
 *
 * Return: always 0.
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}

