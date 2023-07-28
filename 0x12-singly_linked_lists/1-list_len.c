#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - function that returns number of nodes in a linked list.
 * @h: the input singly linked list.
 * Return: number of nodes on the list.
 */

size_t list_len(const list_t *h)
{
	size_t listlen = 0;
	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		listlen++;
	}
	return (listlen);
}
