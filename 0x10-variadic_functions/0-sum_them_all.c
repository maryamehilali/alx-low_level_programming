#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters.
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	int sum;
	unsigned int i;

	va_start(para, n);
	if (!n)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(para, int);
	va_end(para);
	return (sum);
}
