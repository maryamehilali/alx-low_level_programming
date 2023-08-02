#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list.
 * @head: the first node of the linked list to reverse
 * Return: pointer to the modified head node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *temp;

	temp = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	ptr = (*head)->next;

	while (ptr != NULL)
	{
		(*head)->next = temp;
		temp = *head;
		*head = ptr;
		ptr = (*head)->next;
	}
	(*head)->next = temp;
	return (*head);
}
