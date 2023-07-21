#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: string to be printed between numbers.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description:
 * If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_str;
	unsigned int i;
	char *str;

	va_start(print_str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print_str, char *);
		if (!str)
			printf("(nil)");
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s ", separator);
		}
	printf("\n");
	va_end(print_str);
}
