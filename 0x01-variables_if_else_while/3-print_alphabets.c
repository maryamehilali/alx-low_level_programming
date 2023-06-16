#include <stdio.h>

/**
 * main - program to print alphabet in lower case and then in upper case.
 *
 * Return: Always 0 that means success
 */

int main(void)

{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar (CH);
	}
	putchar ('\n');

	return (0);
}
