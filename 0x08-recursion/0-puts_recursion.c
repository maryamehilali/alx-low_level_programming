#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * folowed by a new line
 * @s: string to be printed
 * Return: no return;
 */

void _puts_recursion(char *s)
{
	if (s[0] == 0)
	{
		_putchar('\0');
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
