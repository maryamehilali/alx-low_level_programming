#include <stdio.h>

/**
 * main -- function that sums the mulptiplies of 3 and 5 bellow 1024
 *
 * Return: always 0.
 */

int main(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);

}
