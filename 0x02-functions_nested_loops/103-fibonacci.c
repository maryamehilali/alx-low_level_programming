#include <stdio.h>

/**
 * main - sum of even fabonacci numbers <400 000.
 *
 * Return: always 0.
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int fab;
	long int sum;
	int i;

	fab = a + b;
	sum = 2;

	for (i = 0; fab < 400000; i++)
	{
		a = b;
		b = fab;
		fab = a + b;
		if (fab % 2 == 0)
			sum = sum + fab;
	}
	printf("%ld\n", sum);
	return (0);

}
