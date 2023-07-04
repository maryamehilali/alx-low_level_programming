#include "main.h"

/**
 * puts_half - function that prints the second half of a string
 * @str: the input string
 */
void puts_half(char *str)
{
	int size, i, n;

	size = 0;
	i = 0;

	while (str[i] != '\0')
	{
		size = i;
		i++;
	}

	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2;

	if (n != 0)
	{
		for (i = n; i <= size ; i++)
		_putchar(str[i]);
	}
	_putchar('\n');
}
