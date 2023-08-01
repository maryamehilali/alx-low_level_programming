#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - function that deletes a node
 *			at the index index of a linked list.
 * @head: the head of the singly linked list.
 * @index: the index of the deleted node.
 * Return: 1 on success -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	while (ptr != NULL && i < (index - 1))
	{
		ptr = ptr->next;
		i++;
	}
	if (i == (index - 1))
	{
		temp = ptr->next;
		ptr->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
