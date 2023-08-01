#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - function that return the nth node of a linked list.
 * @head: the head of the singly linked list.
 * @index: the index of the wanted node.
 * Return: a pointer to the index node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == index)
		return (ptr);
	else
		return (NULL);
}
