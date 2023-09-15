#include "lists.h"

/**
 * free_dlistint - funct that frees a doubly linked list
 * @head: pointer to the head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
