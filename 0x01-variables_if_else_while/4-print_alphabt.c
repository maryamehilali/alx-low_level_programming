#include <stdio.h>

/**
 * main - program to print alphabet in lower case except q and e
 *
 * Return: Always 0 that means success
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (!(ch == 'q' || ch == 'e'))
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
