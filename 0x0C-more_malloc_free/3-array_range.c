#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: the small integer
 * @max: the bigger integer
 * Return: pointer to the allocated space
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	if (min == max)
		array[0] = min;
	for (i = 0; i < (max - min); i++)
		array[i] = i + min;
	return (array);
}
