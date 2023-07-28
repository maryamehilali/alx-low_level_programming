#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - function that delete and free a linked list.
 * @head: the head of the input singly linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
