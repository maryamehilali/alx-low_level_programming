#include "lists.h"

/**
 * dlistint_len - funct that counts the number of nodes in doubly linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
