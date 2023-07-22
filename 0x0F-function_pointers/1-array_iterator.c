#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: input array.
 * @size: size of the array.
 * @action: pointer to a function.
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
