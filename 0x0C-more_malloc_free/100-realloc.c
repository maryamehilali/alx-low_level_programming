#include <stdlib.h>
#include "main.h"

/**
 * _realloc - unction that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of the previously allocated memory
 * @new_size: size of the new allocated memory
 * Return: pointer to the new allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	unsigned int i;

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	mem = malloc(new_size);
	if (old_size < new_size)
	{
	for (i = 0; i < old_size; i++)
		mem[i] = *((char*)ptr + i);
	}
	for (i = 0; i < new_size; i++)
		mem[i] = *((char*)ptr + i);
	return (mem);
}
