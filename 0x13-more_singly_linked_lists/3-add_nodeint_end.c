#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - function that adds a new node
 *		at the end of a singly linked list.
 * @head: the head of the singly linked list.
 * @n: the data of the new added node.
 * Return: address of the added node or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;

	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
