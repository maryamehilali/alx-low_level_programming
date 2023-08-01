#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - function that delets the head node of inked list.
 * @head: the head of the singly linked list.
 * Return: the int data of the deleted node.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n_node;

	if (*head == NULL)
		return (0);
	ptr = *head;
	n_node = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	return (n_node);
}
