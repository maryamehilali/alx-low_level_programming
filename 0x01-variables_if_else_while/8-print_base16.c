#include <stdio.h>

/**
 * main - program to print hexadecimal numbers
 *
 * Return: Always 0 that means success
 */

int main(void)
{
	int a;
	char ch;

	for (a = 48; a <= 57; a++)
		putchar (a);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar (ch);

	putchar ('\n');

	return (0);
}
