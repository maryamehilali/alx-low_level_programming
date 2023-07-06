#include "main.h"

/**
 * _strlen_recursion - function that prints the lenght of a string
 * @s: the input string
 * Return: the lengh of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
