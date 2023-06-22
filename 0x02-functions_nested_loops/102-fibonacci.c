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

	printf("1, 2,");
	for (i = 0; i < 49; i++)
	{
		sum = a + b;
		printf("%ld, ", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);

}
