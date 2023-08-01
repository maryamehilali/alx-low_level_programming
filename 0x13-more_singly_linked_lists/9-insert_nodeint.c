#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - function that adds a node
 *			at the index idx of a linked list.
 * @head: the head of the singly linked list.
 * @idx: the index of the new added node.
 * @n: data of the new added node.
 * Return: a pointer to the index node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL)
		return (NULL);
	ptr = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr != NULL && i < (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}
	if (i == (idx - 1))
	{
		temp = ptr->next;
		ptr->next = new;
		new->next = temp;
		return (new);
	}
	else
		return (NULL);
}
