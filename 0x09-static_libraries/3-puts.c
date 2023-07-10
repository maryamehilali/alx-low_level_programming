#include "main.h"

/**
 * _puts - function to print a string in stdout.
 * @str: String to be printed.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (*(str + i) != '\0')
			_putchar(*(str + i));
		else
			break;
	}
	_putchar('\n');
}
