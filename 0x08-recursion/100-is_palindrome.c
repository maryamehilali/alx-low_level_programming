#include "main.h"

/**
 * is_palindrome - function that checks string is palindrome or not.
 * @s: the input string.
 * Return: 1 if palindrome 0 if not.
 */

int is_palindrome(char *s)
{
	return (verify_polindrome(s, 0, _strlen_recursion(s) - 1));
}
/**
 * verify_polindrome - function that checks if two char of a string
 * are identical or not
 * @s: the input string
 * @i: the first char
 * @j: the second char
 * Return: 1 if identical 0 if not.
 */

int verify_polindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (s[i] == s[j] && i == j)
		return (1);
	else if (s[i] == s[j] && i == j - 1)
		return (1);
	else
		return (verify_polindrome(s, i + 1, j - 1));
}
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

