#include "main.h"

/**
 * rev_string - function to reverse a string.
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i, j, k;
	int rev;

	j = 1000;
	for (i = 0; i < j; i++)
	{
		if (*(s + i) == '\0')
		{
			j = i;
			break;
		}
	}
	for (k = 0; k < j; k++)
	{
		rev = s[k];
		s[k] = *(s + j - 1);
		*(s + j - 1) = rev;
		j = j - 1;
	}
}
