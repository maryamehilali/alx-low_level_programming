#include "lists.h"

/**
 * print_dlistint - function that prints the ellements of doubly linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
