#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of parameters.
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_num;
	unsigned int i;

	va_start(print_num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_num, int));
		if (separator != NULL && i < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(print_num);
}
