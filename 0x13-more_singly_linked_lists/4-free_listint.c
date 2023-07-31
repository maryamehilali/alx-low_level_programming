#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - function that frees a singly linked list.
 * @head: the head of the singly linked list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
