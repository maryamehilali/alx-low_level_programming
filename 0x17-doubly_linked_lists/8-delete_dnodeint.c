#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index of a doubly linked list
 * @head: double pointer to the head of the list
 * @index: index of the deleted node
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *tmp;
	unsigned int i = 0;

	ptr = *head;
	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(ptr);
		return (1);
		}
		else
			return (-1);
	}
	while (ptr && i < (index - 1))
	{
		ptr = ptr->next;
		i++;
	}
	if (i == (index - 1) && ptr->next)
	{
		tmp = ptr->next->next;
		free(ptr->next);
		ptr->next = tmp;
		if (tmp)
			tmp->prev = ptr;
		return (1);
	}
	return (-1);
}
