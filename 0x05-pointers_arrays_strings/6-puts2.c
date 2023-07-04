#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character.
 * @str: input string
 */

void puts2(char *str)
{
	int size, i;

	size = 0;
	i = 0;

	while (str[i] != '\0')
	{
		size = i;
		++i;
	}

	for (i = 0; i <= size; i++)
	{
		if (i % 2 == 0 && size != 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
