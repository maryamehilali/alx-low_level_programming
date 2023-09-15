#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index of a doubly linked list
 * @h: double pointer to the head of the list
 * @n: int to store at the new node
 * @idx: index of the new node
 * Return: pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *ptr, *tmp;
	unsigned int i = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	ptr = *h;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}
	else
	{
		while (ptr && i < (idx - 1))
		{
			ptr = ptr->next;
			i++;
		}
		if (i < (idx - 1))
		{
			free(new);
			return (NULL); }
		tmp = ptr->next;
		ptr->next = new;
		new->prev = ptr;
		new->next = tmp;
	}
	return (new);
}
