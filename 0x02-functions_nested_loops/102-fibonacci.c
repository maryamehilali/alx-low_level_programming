#include <stdio.h>

/**
 * main -- fabonacci numbers.
 *
 * Return: always 0.
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	int i;

	sum = a + b;

	printf("1, 2,");
	for (i = 1; i < 49; i++)
	{
		printf("%ld, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	printf("%ld\n", sum);
	return (0);

}
