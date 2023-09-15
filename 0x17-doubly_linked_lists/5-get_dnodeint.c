#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index of doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the wanted node
 * Return: note at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (ptr && i != index)
	{
		i++;
		ptr = ptr->next;
	}
	if (i < index)
		return (NULL);
	return (ptr);
}
